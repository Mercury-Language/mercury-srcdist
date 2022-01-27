/*
** Automatically generated from `inst_util.m'
** by the Mercury compiler,
** version rotd-2013-02-19, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__check_hlds__inst_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "check_hlds.inst_util.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "check_hlds.inst_util.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "check_hlds.inst_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "check_hlds.inst_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "check_hlds.inst_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "check_hlds.inst_util.c"
#line 49 "check_hlds.inst_util.c"
#include "check_hlds.inst_util.mh"

#line 52 "check_hlds.inst_util.c"
#line 53 "check_hlds.inst_util.c"
#ifndef CHECK_HLDS__INST_UTIL_DECL_GUARD
#define CHECK_HLDS__INST_UTIL_DECL_GUARD

#line 57 "check_hlds.inst_util.c"
#line 58 "check_hlds.inst_util.c"

#endif
#line 61 "check_hlds.inst_util.c"

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
	MR_Integer f1;
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
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label10(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0, 5,4,3,8,16,10,11,18,19,1)
MR_decl_label10(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0, 3,33,93,10,12,14,17,16,8,23)
MR_decl_label5(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0, 24,22,26,29,1)
MR_decl_label6(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0, 35,3,6,8,4,1)
MR_decl_label6(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0, 2,8,4,12,10,1)
MR_decl_label10(check_hlds__inst_util__abstractly_unify_inst_8_0, 3,4,6,8,5,12,13,14,15,16)
MR_decl_label10(check_hlds__inst_util__abstractly_unify_inst_8_0, 17,20,19,21,22,23,25,26,27,28)
MR_decl_label3(check_hlds__inst_util__abstractly_unify_inst_8_0, 31,29,1)
MR_decl_label10(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 5,7,9,8,13,15,19,21,17,12)
MR_decl_label10(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 623,29,3,32,35,627,42,39,45,48)
MR_decl_label10(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 50,46,54,56,53,632,65,33,73,72)
MR_decl_label10(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 76,78,80,70,82,84,85,87,83,92)
MR_decl_label10(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 94,91,638,101,105,104,108,110,111,68)
MR_decl_label10(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 115,120,643,127,124,130,134,133,136,131)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 140,142,145,139,648,151,641,1)
MR_decl_label1(check_hlds__inst_util__abstractly_unify_inst_functor_11_0, 2)
MR_decl_label10(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0, 254,9,11,3,256,19,23,22,28,16)
MR_decl_label10(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0, 38,41,49,43,44,52,53,35,57,33)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0, 61,65,63,60,72,71,77,1)
MR_decl_label6(check_hlds__inst_util__abstractly_unify_inst_list_8_0, 47,6,8,11,48,1)
MR_decl_label6(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0, 61,8,10,13,62,1)
MR_decl_label10(check_hlds__inst_util__bound_inst_list_merge_6_0, 3,61,8,10,11,12,15,6,19,20)
MR_decl_label3(check_hlds__inst_util__bound_inst_list_merge_6_0, 18,23,1)
MR_decl_label4(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0, 4,6,7,1)
MR_decl_label2(check_hlds__inst_util__inst_contains_any_2_0, 2,3)
MR_decl_label2(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0, 2,3)
MR_decl_label5(check_hlds__inst_util__inst_list_merge_6_0, 53,7,9,54,1)
MR_decl_label10(check_hlds__inst_util__inst_merge_6_0, 2,3,6,8,5,13,14,15,16,18)
MR_decl_label8(check_hlds__inst_util__inst_merge_6_0, 19,21,22,23,24,27,25,1)
MR_decl_label3(check_hlds__inst_util__inst_merge_2_6_0, 2,3,4)
MR_decl_label7(check_hlds__inst_util__inst_merge_3_6_0, 6,8,11,10,4,53,1)
MR_decl_label10(check_hlds__inst_util__inst_merge_4_6_0, 5,8,3,10,15,382,18,17,23,25)
MR_decl_label10(check_hlds__inst_util__inst_merge_4_6_0, 22,30,33,32,31,36,29,41,11,48)
MR_decl_label10(check_hlds__inst_util__inst_merge_4_6_0, 50,47,55,57,58,59,45,65,68,67)
MR_decl_label10(check_hlds__inst_util__inst_merge_4_6_0, 66,71,64,76,77,75,62,86,88,85)
MR_decl_label5(check_hlds__inst_util__inst_merge_4_6_0, 390,94,96,378,1)
MR_decl_label10(check_hlds__inst_util__inst_merge_bound_ground_8_0, 4,8,7,11,12,2,14,20,19,23)
MR_decl_label9(check_hlds__inst_util__inst_merge_bound_ground_8_0, 24,17,26,28,29,30,31,33,1)
MR_decl_label5(check_hlds__inst_util__make_any_bound_inst_list_8_0, 34,4,7,10,1)
MR_decl_label10(check_hlds__inst_util__make_any_inst_8_0, 3,6,5,10,12,15,9,73,16,21)
MR_decl_label10(check_hlds__inst_util__make_any_inst_8_0, 22,25,27,24,31,32,33,34,35,36)
MR_decl_label10(check_hlds__inst_util__make_any_inst_8_0, 38,39,41,42,43,44,47,45,20,52)
MR_decl_label6(check_hlds__inst_util__make_any_inst_8_0, 51,55,61,60,197,1)
MR_decl_label5(check_hlds__inst_util__make_any_inst_list_8_0, 33,4,6,9,1)
MR_decl_label7(check_hlds__inst_util__make_any_inst_list_lives_9_0, 56,5,8,9,11,14,1)
MR_decl_label5(check_hlds__inst_util__make_ground_bound_inst_list_8_0, 34,4,7,10,1)
MR_decl_label10(check_hlds__inst_util__make_ground_inst_8_0, 3,6,5,10,12,15,9,73,16,21)
MR_decl_label10(check_hlds__inst_util__make_ground_inst_8_0, 22,25,27,24,31,32,33,34,35,36)
MR_decl_label10(check_hlds__inst_util__make_ground_inst_8_0, 38,39,41,42,43,44,47,45,20,52)
MR_decl_label7(check_hlds__inst_util__make_ground_inst_8_0, 51,56,55,61,60,203,1)
MR_decl_label5(check_hlds__inst_util__make_ground_inst_list_8_0, 33,4,6,9,1)
MR_decl_label7(check_hlds__inst_util__make_ground_inst_list_lives_9_0, 56,5,8,9,11,14,1)
MR_decl_label3(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0, 18,4,6)
MR_decl_label10(check_hlds__inst_util__make_mostly_uniq_inst_4_0, 5,7,100,9,3,16,17,82,18,20)
MR_decl_label10(check_hlds__inst_util__make_mostly_uniq_inst_4_0, 14,23,28,24,22,33,34,36,38,35)
MR_decl_label10(check_hlds__inst_util__make_mostly_uniq_inst_4_0, 41,42,43,44,45,46,47,48,50,51)
MR_decl_label10(check_hlds__inst_util__make_mostly_uniq_inst_4_0, 52,53,56,54,32,62,64,66,68,60)
MR_decl_label2(check_hlds__inst_util__make_mostly_uniq_inst_4_0, 71,229)
MR_decl_label3(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0, 17,4,5)
MR_decl_label3(check_hlds__inst_util__make_shared_bound_inst_list_4_0, 18,4,6)
MR_decl_label10(check_hlds__inst_util__make_shared_inst_4_0, 5,7,3,16,17,20,14,23,28,24)
MR_decl_label10(check_hlds__inst_util__make_shared_inst_4_0, 22,33,34,36,38,35,41,42,43,44)
MR_decl_label10(check_hlds__inst_util__make_shared_inst_4_0, 45,46,47,48,50,51,52,53,56,54)
MR_decl_label10(check_hlds__inst_util__make_shared_inst_4_0, 32,61,63,65,67,59,71,73,75,243)
MR_decl_label3(check_hlds__inst_util__make_shared_inst_list_4_0, 17,4,5)
MR_decl_label5(check_hlds__inst_util__maybe_make_shared_inst_list_5_0, 3,10,11,12,8)
MR_decl_label3(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0, 10,3,4)
MR_decl_label10(check_hlds__inst_util__merge_ho_inst_info_5_0, 7,5,11,9,16,18,19,14,24,26)
MR_decl_label6(check_hlds__inst_util__merge_ho_inst_info_5_0, 27,22,2,33,37,1)
MR_decl_label3(check_hlds__inst_util__merge_inst_list_uniq_6_0, 10,3,4)
MR_decl_label10(check_hlds__inst_util__merge_inst_uniq_6_0, 88,5,4,3,11,9,8,17,15,14)
MR_decl_label10(check_hlds__inst_util__merge_inst_uniq_6_0, 21,25,24,27,28,23,31,35,33,32)
MR_decl_label2(check_hlds__inst_util__merge_uniq_3_0, 4,2)
MR_decl_label4(check_hlds__inst_util__merge_uniq_bound_5_0, 4,2,7,8)
MR_decl_label4(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0, 3,5,6,1)
MR_decl_label10(check_hlds__inst_util__unify_uniq_6_0, 6,3,15,279,12,11,27,24,35,32)
MR_decl_label10(check_hlds__inst_util__unify_uniq_6_0, 40,104,43,22,51,48,59,46,68,65)
MR_decl_label9(check_hlds__inst_util__unify_uniq_6_0, 290,76,277,73,81,121,84,2,1)
MR_decl_label3(check_hlds__inst_util__var_inst_contains_any_3_0, 2,3,4)
MR_decl_label4(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0, 15,3,4,6)
MR_decl_label4(fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0, 15,3,4,6)
MR_decl_label10(fn__check_hlds__inst_util__inst_contains_any_2_3_0, 63,25,3,4,7,9,11,5,14,18)
MR_decl_label4(fn__check_hlds__inst_util__inst_contains_any_2_3_0, 17,20,21,16)
MR_decl_label10(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0, 59,3,26,4,7,5,9,13,12,15)
MR_decl_label4(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0, 16,11,21,19)
MR_decl_label4(fn__check_hlds__inst_util__inst_list_contains_any_3_0, 15,3,4,6)
MR_decl_label4(fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0, 15,3,4,6)
MR_decl_label4(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0, 16,4,3,6)
MR_decl_label4(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0, 2,3,4,6)
MR_decl_static(check_hlds__inst_util__unify_uniq_6_0)
MR_def_extern_entry(check_hlds__inst_util__make_shared_inst_list_4_0)
MR_decl_static(check_hlds__inst_util__make_shared_inst_4_0)
MR_decl_static(check_hlds__inst_util__make_shared_bound_inst_list_4_0)
MR_def_extern_entry(check_hlds__inst_util__abstractly_unify_inst_8_0)
MR_decl_static(check_hlds__inst_util__abstractly_unify_inst_2_8_0)
MR_decl_static(check_hlds__inst_util__abstractly_unify_inst_3_8_0)
MR_decl_static(check_hlds__inst_util__abstractly_unify_inst_list_8_0)
MR_decl_static(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0)
MR_decl_static(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0)
MR_decl_static(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0)
MR_decl_static(check_hlds__inst_util__make_ground_inst_list_8_0)
MR_decl_static(check_hlds__inst_util__make_ground_inst_8_0)
MR_decl_static(check_hlds__inst_util__make_ground_bound_inst_list_8_0)
MR_decl_static(check_hlds__inst_util__make_any_inst_8_0)
MR_decl_static(check_hlds__inst_util__make_any_bound_inst_list_8_0)
MR_decl_static(check_hlds__inst_util__make_any_inst_list_8_0)
MR_decl_static(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0)
MR_decl_static(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0)
MR_decl_static(check_hlds__inst_util__make_ground_inst_list_lives_9_0)
MR_decl_static(check_hlds__inst_util__make_any_inst_list_lives_9_0)
MR_decl_static(check_hlds__inst_util__maybe_make_shared_inst_list_5_0)
MR_def_extern_entry(check_hlds__inst_util__abstractly_unify_inst_functor_11_0)
MR_decl_static(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0)
MR_def_extern_entry(check_hlds__inst_util__make_mostly_uniq_inst_4_0)
MR_decl_static(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0)
MR_decl_static(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0)
MR_decl_static(check_hlds__inst_util__merge_uniq_3_0)
MR_def_extern_entry(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0)
MR_def_extern_entry(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0)
MR_def_extern_entry(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0)
MR_decl_static(check_hlds__inst_util__merge_ho_inst_info_5_0)
MR_decl_static(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0)
MR_decl_static(check_hlds__inst_util__merge_inst_list_uniq_6_0)
MR_decl_static(check_hlds__inst_util__merge_inst_uniq_6_0)
MR_decl_static(check_hlds__inst_util__merge_uniq_bound_5_0)
MR_def_extern_entry(check_hlds__inst_util__inst_merge_6_0)
MR_decl_static(check_hlds__inst_util__inst_merge_2_6_0)
MR_decl_static(check_hlds__inst_util__inst_merge_3_6_0)
MR_decl_static(check_hlds__inst_util__inst_merge_4_6_0)
MR_decl_static(check_hlds__inst_util__inst_merge_bound_ground_8_0)
MR_decl_static(check_hlds__inst_util__inst_list_merge_6_0)
MR_decl_static(check_hlds__inst_util__bound_inst_list_merge_6_0)
MR_decl_static(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0)
MR_decl_static(fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0)
MR_decl_static(fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0)
MR_def_extern_entry(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0)
MR_decl_static(fn__check_hlds__inst_util__inst_contains_any_2_3_0)
MR_decl_static(fn__check_hlds__inst_util__inst_list_contains_any_3_0)
MR_decl_static(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0)
MR_def_extern_entry(check_hlds__inst_util__inst_contains_any_2_0)
MR_def_extern_entry(check_hlds__inst_util__var_inst_contains_any_3_0)
MR_def_extern_entry(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
0,
MR_tbmkword(0, 0)
},
};



MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module0)
	MR_init_entry1(check_hlds__inst_util__unify_uniq_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__unify_uniq_6_0);
	MR_init_label10(check_hlds__inst_util__unify_uniq_6_0,6,3,15,279,12,11,27,24,35,32)
	MR_init_label10(check_hlds__inst_util__unify_uniq_6_0,40,104,43,22,51,48,59,46,68,65)
	MR_init_label9(check_hlds__inst_util__unify_uniq_6_0,290,76,277,73,81,121,84,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_uniq'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__unify_uniq_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i3);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i277);
	}
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i6);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i1);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i11);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i279);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i15);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r5;
	MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i12);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r5;
	MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i12);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", 61);
	MR_r3 = (MR_Word) MR_string_const("clobbered value is is_live\?", 27);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__inst_util__unify_uniq_6_0_i12);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i76);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i22);
	}
	if (MR_INT_NE(MR_r5,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i24);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i277);
	}
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i27);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i1);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i32);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i277);
	}
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i35);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i1);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i40);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i104);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i43);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i121);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i46);
	}
	if (MR_INT_NE(MR_r5,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i48);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i277);
	}
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i51);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i1);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i121);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i277);
	}
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i59);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i1);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i65);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i277);
	}
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i68);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i1);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i73);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i277);
	}
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i290);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i1);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", 61);
	MR_r3 = (MR_Word) MR_string_const("clobbered value is is_live\?", 27);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__inst_util__unify_uniq_6_0_i2);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i81);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i121);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i84);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i104);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module1)
	MR_init_entry1(check_hlds__inst_util__make_shared_inst_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_shared_inst_list_4_0);
	MR_init_label3(check_hlds__inst_util__make_shared_inst_list_4_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_shared_inst_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__make_shared_inst_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_list_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_shared_inst_list_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_inst_4_0,
		check_hlds__inst_util__make_shared_inst_list_4_0_i4);
MR_def_label(check_hlds__inst_util__make_shared_inst_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_shared_inst_list_4_0,
		check_hlds__inst_util__make_shared_inst_list_4_0_i5);
MR_def_label(check_hlds__inst_util__make_shared_inst_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_matches_final_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_inst_table_2_0);
MR_decl_entry(hlds__hlds_data__inst_table_get_shared_insts_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_maybe_inst_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(hlds__hlds_data__inst_table_set_shared_insts_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_inst_table_3_0);
MR_decl_entry(check_hlds__mode_util__inst_lookup_3_0);
MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(check_hlds__inst_match__inst_contains_instname_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module2)
	MR_init_entry1(check_hlds__inst_util__make_shared_inst_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_shared_inst_4_0);
	MR_init_label10(check_hlds__inst_util__make_shared_inst_4_0,5,7,3,16,17,20,14,23,28,24)
	MR_init_label10(check_hlds__inst_util__make_shared_inst_4_0,22,33,34,36,38,35,41,42,43,44)
	MR_init_label10(check_hlds__inst_util__make_shared_inst_4_0,45,46,47,48,50,51,52,53,56,54)
	MR_init_label10(check_hlds__inst_util__make_shared_inst_4_0,32,61,63,65,67,59,71,73,75,243)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_shared_inst'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_shared_inst_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i3);
	}
	MR_r4 = MR_tfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_r4,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i14);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i16);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_sv(5) = (MR_Integer) 3;
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_bound_inst_list_4_0,
		check_hlds__inst_util__make_shared_inst_4_0_i20);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i17);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_sv(5) = (MR_Integer) 4;
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_bound_inst_list_4_0,
		check_hlds__inst_util__make_shared_inst_4_0_i20);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_sv(5) = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_bound_inst_list_4_0,
		check_hlds__inst_util__make_shared_inst_4_0_i20);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i22);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_sv(5);
	MR_np_localcall_lab(check_hlds__inst_util__make_shared_inst_4_0,
		check_hlds__inst_util__make_shared_inst_4_0_i23);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_final_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i28);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i24);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i32);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_shared_inst_4_0_i33);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_shared_insts_2_0,
		check_hlds__inst_util__make_shared_inst_4_0_i34);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i36);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i35);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i38);
	}
	MR_r3 = MR_sv(5);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i53);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i53);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__inst_util__make_shared_inst_4_0_i41);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_shared_insts_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i42);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i43);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i44);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i45);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(check_hlds__inst_util__make_shared_inst_4_0,
		check_hlds__inst_util__make_shared_inst_4_0_i46);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_shared_inst_4_0_i47);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_shared_insts_2_0,
		check_hlds__inst_util__make_shared_inst_4_0_i48);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__inst_util__make_shared_inst_4_0_i50);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_shared_insts_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i51);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i52);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_contains_instname_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i56);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i54);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i59);
	}
	MR_r4 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r4,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i61);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i63);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i65);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i67);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i243);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i71);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.inst_util.make_shared_inst\'/4", 51);
	MR_r3 = (MR_Word) MR_string_const("abstract_inst", 13);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i73);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.inst_util.make_shared_inst\'/4", 51);
	MR_r3 = (MR_Word) MR_string_const("cannot make shared version of \140free\'", 36);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i75);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.inst_util.make_shared_inst\'/4", 51);
	MR_r3 = (MR_Word) MR_string_const("cannot make shared version of \140free(T)\'", 39);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.inst_util.make_shared_inst\'/4", 51);
	MR_r3 = (MR_Word) MR_string_const("free inst var", 13);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module3)
	MR_init_entry1(check_hlds__inst_util__make_shared_bound_inst_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_shared_bound_inst_list_4_0);
	MR_init_label3(check_hlds__inst_util__make_shared_bound_inst_list_4_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_shared_bound_inst_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_shared_bound_inst_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_bound_inst_list_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_shared_bound_inst_list_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_inst_list_4_0,
		check_hlds__inst_util__make_shared_bound_inst_list_4_0_i4);
MR_def_label(check_hlds__inst_util__make_shared_bound_inst_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_shared_bound_inst_list_4_0,
		check_hlds__inst_util__make_shared_bound_inst_list_4_0_i6);
MR_def_label(check_hlds__inst_util__make_shared_bound_inst_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__inst_table_get_unify_insts_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_maybe_inst_det_0;
MR_decl_entry(hlds__hlds_data__inst_table_set_unify_insts_3_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module4)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__abstractly_unify_inst_8_0);
	MR_init_label10(check_hlds__inst_util__abstractly_unify_inst_8_0,3,4,6,8,5,12,13,14,15,16)
	MR_init_label10(check_hlds__inst_util__abstractly_unify_inst_8_0,17,20,19,21,22,23,25,26,27,28)
	MR_init_label3(check_hlds__inst_util__abstractly_unify_inst_8_0,31,29,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstractly_unify_inst'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__abstractly_unify_inst_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_tfield(2, MR_tempr1, 2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_tfield(2, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(4) = MR_tempr2;
	MR_sv(6) = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_sv(3) = MR_tempr4;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i3);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_unify_insts_2_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i4);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i6);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i5);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i8);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i28);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_sv(1) = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i28);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i12);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_unify_insts_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i13);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i14);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i15);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i16);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_2_8_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i17);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i20);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i19);
	}
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i21);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i22);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_unify_insts_2_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i23);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i25);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_unify_insts_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i26);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i27);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(7) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_contains_instname_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i31);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i29);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module5)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__abstractly_unify_inst_2_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstractly_unify_inst_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_inst_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_inst_3_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_0);
MR_decl_entry(parse_tree__prog_data__det_par_conjunction_detism_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module6)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_3_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__abstractly_unify_inst_3_8_0);
	MR_init_label10(check_hlds__inst_util__abstractly_unify_inst_3_8_0,5,7,9,8,13,15,19,21,17,12)
	MR_init_label10(check_hlds__inst_util__abstractly_unify_inst_3_8_0,623,29,3,32,35,627,42,39,45,48)
	MR_init_label10(check_hlds__inst_util__abstractly_unify_inst_3_8_0,50,46,54,56,53,632,65,33,73,72)
	MR_init_label10(check_hlds__inst_util__abstractly_unify_inst_3_8_0,76,78,80,70,82,84,85,87,83,92)
	MR_init_label10(check_hlds__inst_util__abstractly_unify_inst_3_8_0,94,91,638,101,105,104,108,110,111,68)
	MR_init_label10(check_hlds__inst_util__abstractly_unify_inst_3_8_0,115,120,643,127,124,130,134,133,136,131)
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0,140,142,145,139,648,151,641,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstractly_unify_inst_3'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_inst_3_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i3);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i5);
	}
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i7);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i8);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i9);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i12);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i13);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i15);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_bound_inst_list_4_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i21);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_bound_inst_list_4_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i21);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(6);
	MR_tfield(3, MR_r2, 3) = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i623);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,623)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i29);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i33);
	}
	MR_r6 = MR_tfield(2, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i35);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(2, MR_sv(6), 0);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__inst_util__make_any_inst_8_0);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i39);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i627);
	}
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,627)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tfield(2, MR_sv(6), 0);
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i42);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i45);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i46);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i48);
	}
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r5 = MR_tfield(2, MR_tempr1, 0);
	MR_r4 = MR_tfield(2, MR_sv(6), 0);
	MR_sv(2) = MR_r6;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i50);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r5 = MR_tfield(2, MR_tempr1, 0);
	MR_r4 = MR_tfield(2, MR_sv(6), 0);
	MR_sv(2) = MR_r6;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i50);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i53);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_tempr3 = MR_r3;
	MR_sv(6) = MR_tfield(3, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_tempr2;
	MR_tempr1 = MR_tempr3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i54);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i56);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i145);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i632);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,632)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(5) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tfield(2, MR_sv(6), 0);
	MR_r5 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i65);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i68);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i70);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i72);
	}
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 3);
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tfield(3, MR_sv(6), 1);
	MR_r5 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i73);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 3);
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tfield(3, MR_sv(6), 1);
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i76);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i78);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_bound_inst_list_4_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i80);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i82);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i83);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(6) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_tfield(3, MR_r2, 3);
	MR_sv(5) = MR_r5;
	MR_sv(3) = MR_tfield(2, MR_r3, 0);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i84);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i85);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i87);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i145);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i91);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(6) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r3, 1);
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_r3 = MR_tfield(3, MR_r3, 3);
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i92);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r4;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i94);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 3) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i638);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,638)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 3);
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_tfield(3, MR_r3, 1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tfield(3, MR_sv(6), 1);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i101);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i104);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i105);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i145);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i108);
	}
	MR_sv(2) = MR_sv(6);
	MR_r1 = (MR_Integer) 1;
	MR_sv(6) = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i145);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(3), 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i110);
	}
	MR_sv(2) = MR_sv(6);
	MR_r1 = (MR_Integer) 1;
	MR_sv(6) = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i145);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i111);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i145);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i115);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(3, MR_sv(6), 2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i641);
	}
	MR_r6 = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i120);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(3, MR_sv(6), 1);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__inst_util__make_ground_inst_8_0);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i124);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i643);
	}
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,643)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r6;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i127);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i130);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i131);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i133);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_sv(5) = MR_r5;
	MR_sv(3) = MR_tfield(2, MR_r3, 0);
	MR_sv(4) = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i134);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r5 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i136);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r6;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r5 = MR_tfield(2, MR_tempr2, 0);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i136);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i139);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_tempr3 = MR_r3;
	MR_sv(6) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tempr2;
	MR_tempr1 = MR_tempr3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i140);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i142);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i145);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i648);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,648)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(6) = MR_r6;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i151);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,641)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module7)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__abstractly_unify_inst_list_8_0);
	MR_init_label6(check_hlds__inst_util__abstractly_unify_inst_list_8_0,47,6,8,11,48,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstractly_unify_inst_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_inst_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_8_0_i47);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_8_0_i48);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_8_0,
		check_hlds__inst_util__abstractly_unify_inst_list_8_0_i6);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_localcall_lab(check_hlds__inst_util__abstractly_unify_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_list_8_0_i8);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_list_8_0_i11);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__equivalent_cons_ids_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_1);

MR_BEGIN_MODULE(check_hlds__inst_util_module8)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0);
	MR_init_label10(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,5,4,3,8,16,10,11,18,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstractly_unify_bound_inst_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i5);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i4);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_r4 = MR_r5;
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 6;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i8);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i11);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i11);
	}
	MR_tempr4 = MR_sv(5);
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i11);
	}
	MR_sv(2) = MR_r2;
	MR_tempr1 = MR_tempr3;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_tempr4;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__equivalent_cons_ids_2_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i16);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i10);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i18);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i19);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,1)
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

MR_decl_entry(parse_tree__prog_data__det_switch_detism_3_0);
MR_decl_entry(__Compare___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module9)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0);
	MR_init_label10(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,3,33,93,10,12,14,17,16,8,23)
	MR_init_label5(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,24,22,26,29,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstractly_unify_bound_inst_list_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i33);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 6;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i93);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 7;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(11) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(1, MR_r2, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_tempr5;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__equivalent_cons_ids_2_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i10);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i12);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i14);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i1);
	}
	MR_sv(1) = MR_r4;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i17);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i16);
	}
	MR_sv(7) = MR_sv(9);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_detism_3_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i29);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(9);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_detism_3_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i29);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(8);
	MR_tempr2 = MR_sv(9);
	MR_tempr3 = MR_sv(10);
	MR_tempr4 = MR_sv(3);
	MR_tempr5 = MR_sv(5);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr5;
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i23);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i22);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_np_localcall_lab(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i24);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i1);
	}
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_detism_3_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i29);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_np_localcall_lab(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i26);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i1);
	}
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_detism_3_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i29);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__union_2_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module10)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
	MR_init_label6(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0,2,8,4,12,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstractly_unify_constrained_inst_vars'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_8_0,
		check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0_i2);
MR_def_label(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_final_3_0,
		check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0_i8);
MR_def_label(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0_i4);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0_i12);
MR_def_label(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tfield(3, MR_r2, 2) = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module11)
	MR_init_entry1(check_hlds__inst_util__make_ground_inst_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_ground_inst_list_8_0);
	MR_init_label5(check_hlds__inst_util__make_ground_inst_list_8_0,33,4,6,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_ground_inst_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_ground_inst_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_8_0_i33);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_ground_inst_list_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_inst_8_0,
		check_hlds__inst_util__make_ground_inst_list_8_0_i4);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr3;
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_ground_inst_list_8_0,
		check_hlds__inst_util__make_ground_inst_list_8_0_i6);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_ground_inst_list_8_0_i9);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__inst_table_get_ground_insts_2_0);
MR_decl_entry(hlds__hlds_data__inst_table_set_ground_insts_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module12)
	MR_init_entry1(check_hlds__inst_util__make_ground_inst_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_ground_inst_8_0);
	MR_init_label10(check_hlds__inst_util__make_ground_inst_8_0,3,6,5,10,12,15,9,73,16,21)
	MR_init_label10(check_hlds__inst_util__make_ground_inst_8_0,22,25,27,24,31,32,33,34,35,36)
	MR_init_label10(check_hlds__inst_util__make_ground_inst_8_0,38,39,41,42,43,44,47,45,20,52)
	MR_init_label7(check_hlds__inst_util__make_ground_inst_8_0,51,56,55,61,60,203,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_ground_inst'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_ground_inst_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i3);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i5);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 1);
	MR_sv(6) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_ground_inst_8_0_i6);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i9);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(6) = MR_r5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_ground_inst_8_0_i10);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_bound_inst_list_8_0,
		check_hlds__inst_util__make_ground_inst_8_0_i12);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i15);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i20);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_ground_inst_8_0_i21);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_ground_insts_2_0,
		check_hlds__inst_util__make_ground_inst_8_0_i22);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = ((MR_Integer) MR_sv(1) | (((MR_Integer) MR_sv(5) << (MR_Integer) 1) | ((MR_Integer) MR_sv(7) << (MR_Integer) 4)));
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i25);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i24);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i27);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i44);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_sv(1) = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i44);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__inst_util__make_ground_inst_8_0_i31);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_ground_insts_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i32);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i33);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i34);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i35);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(check_hlds__inst_util__make_ground_inst_8_0,
		check_hlds__inst_util__make_ground_inst_8_0_i36);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_ground_inst_8_0_i38);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_ground_insts_2_0,
		check_hlds__inst_util__make_ground_inst_8_0_i39);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__inst_util__make_ground_inst_8_0_i41);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_ground_insts_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i42);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i43);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_contains_instname_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i47);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i45);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i51);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_ground_inst_8_0_i52);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i55);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_ground_inst_8_0_i56);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i60);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_ground_inst_8_0_i61);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i203);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Integer) 6;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.inst_util.make_ground_inst\'/8", 51);
	MR_r3 = (MR_Word) MR_string_const("free inst var", 13);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i73);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module13)
	MR_init_entry1(check_hlds__inst_util__make_ground_bound_inst_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_ground_bound_inst_list_8_0);
	MR_init_label5(check_hlds__inst_util__make_ground_bound_inst_list_8_0,34,4,7,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_ground_bound_inst_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_ground_bound_inst_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_bound_inst_list_8_0_i34);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_ground_bound_inst_list_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_inst_list_8_0,
		check_hlds__inst_util__make_ground_bound_inst_list_8_0_i4);
MR_def_label(check_hlds__inst_util__make_ground_bound_inst_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_bound_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_tempr3 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr4;
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_ground_bound_inst_list_8_0,
		check_hlds__inst_util__make_ground_bound_inst_list_8_0_i7);
MR_def_label(check_hlds__inst_util__make_ground_bound_inst_list_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_bound_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_ground_bound_inst_list_8_0_i10);
MR_def_label(check_hlds__inst_util__make_ground_bound_inst_list_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__make_ground_bound_inst_list_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__inst_table_get_any_insts_2_0);
MR_decl_entry(hlds__hlds_data__inst_table_set_any_insts_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module14)
	MR_init_entry1(check_hlds__inst_util__make_any_inst_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_any_inst_8_0);
	MR_init_label10(check_hlds__inst_util__make_any_inst_8_0,3,6,5,10,12,15,9,73,16,21)
	MR_init_label10(check_hlds__inst_util__make_any_inst_8_0,22,25,27,24,31,32,33,34,35,36)
	MR_init_label10(check_hlds__inst_util__make_any_inst_8_0,38,39,41,42,43,44,47,45,20,52)
	MR_init_label6(check_hlds__inst_util__make_any_inst_8_0,51,55,61,60,197,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_any_inst'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_any_inst_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i3);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,3,0);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i5);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 1);
	MR_sv(6) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_any_inst_8_0_i6);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i9);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_tfield(3, MR_r1, 3);
	MR_sv(6) = MR_r5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_any_inst_8_0_i10);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_bound_inst_list_8_0,
		check_hlds__inst_util__make_any_inst_8_0_i12);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i15);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i20);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_any_inst_8_0_i21);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_any_insts_2_0,
		check_hlds__inst_util__make_any_inst_8_0_i22);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = ((MR_Integer) MR_sv(1) | (((MR_Integer) MR_sv(5) << (MR_Integer) 1) | ((MR_Integer) MR_sv(7) << (MR_Integer) 4)));
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i25);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i24);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i27);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i44);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_sv(1) = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i44);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__inst_util__make_any_inst_8_0_i31);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_any_insts_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i32);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i33);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i34);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i35);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(check_hlds__inst_util__make_any_inst_8_0,
		check_hlds__inst_util__make_any_inst_8_0_i36);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_any_inst_8_0_i38);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_any_insts_2_0,
		check_hlds__inst_util__make_any_inst_8_0_i39);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__inst_util__make_any_inst_8_0_i41);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_any_insts_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i42);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i43);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_contains_instname_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i47);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i45);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i51);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_any_inst_8_0_i52);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i55);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr2, 0) = MR_r2;
	MR_tfield(2, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 3) = MR_r4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i60);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(6) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_any_inst_8_0_i61);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i197);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Integer) 6;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.inst_util.make_any_inst\'/8", 48);
	MR_r3 = (MR_Word) MR_string_const("free inst var", 13);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i73);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module15)
	MR_init_entry1(check_hlds__inst_util__make_any_bound_inst_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_any_bound_inst_list_8_0);
	MR_init_label5(check_hlds__inst_util__make_any_bound_inst_list_8_0,34,4,7,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_any_bound_inst_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_any_bound_inst_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_bound_inst_list_8_0_i34);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_any_bound_inst_list_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_inst_list_8_0,
		check_hlds__inst_util__make_any_bound_inst_list_8_0_i4);
MR_def_label(check_hlds__inst_util__make_any_bound_inst_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_bound_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_tempr3 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr4;
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_any_bound_inst_list_8_0,
		check_hlds__inst_util__make_any_bound_inst_list_8_0_i7);
MR_def_label(check_hlds__inst_util__make_any_bound_inst_list_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_bound_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_any_bound_inst_list_8_0_i10);
MR_def_label(check_hlds__inst_util__make_any_bound_inst_list_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__make_any_bound_inst_list_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module16)
	MR_init_entry1(check_hlds__inst_util__make_any_inst_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_any_inst_list_8_0);
	MR_init_label5(check_hlds__inst_util__make_any_inst_list_8_0,33,4,6,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_any_inst_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_any_inst_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_8_0_i33);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_any_inst_list_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_inst_8_0,
		check_hlds__inst_util__make_any_inst_list_8_0_i4);
MR_def_label(check_hlds__inst_util__make_any_inst_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr3;
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_any_inst_list_8_0,
		check_hlds__inst_util__make_any_inst_list_8_0_i6);
MR_def_label(check_hlds__inst_util__make_any_inst_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_any_inst_list_8_0_i9);
MR_def_label(check_hlds__inst_util__make_any_inst_list_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__make_any_inst_list_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module17)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0);
	MR_init_label6(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,61,8,10,13,62,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstractly_unify_inst_list_lives'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i61);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i62);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i62);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i1);
	}
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_8_0,
		check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i8);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	}
	MR_np_localcall_lab(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,
		check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i10);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i13);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module18)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0);
	MR_init_label6(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,35,3,6,8,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstractly_unify_bound_inst_list_lives'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i3);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 7;
	MR_r4 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__equivalent_cons_ids_2_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i6);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i4);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i8);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i35);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module19)
	MR_init_entry1(check_hlds__inst_util__make_ground_inst_list_lives_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_ground_inst_list_lives_9_0);
	MR_init_label7(check_hlds__inst_util__make_ground_inst_list_lives_9_0,56,5,8,9,11,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_ground_inst_list_lives'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_ground_inst_list_lives_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i56);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_ground_inst_list_lives_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r7 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i5);
	}
	MR_r8 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i5);
	}
	MR_sv(4) = MR_r2;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r1 = MR_r7;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i8);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_list_lives_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r1 = MR_r7;
	MR_r2 = (MR_Integer) 1;
MR_def_label(check_hlds__inst_util__make_ground_inst_list_lives_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_inst_8_0,
		check_hlds__inst_util__make_ground_inst_list_lives_9_0_i9);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_lives_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr3;
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_ground_inst_list_lives_9_0,
		check_hlds__inst_util__make_ground_inst_list_lives_9_0_i11);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_lives_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_ground_inst_list_lives_9_0_i14);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_lives_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_lives_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module20)
	MR_init_entry1(check_hlds__inst_util__make_any_inst_list_lives_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_any_inst_list_lives_9_0);
	MR_init_label7(check_hlds__inst_util__make_any_inst_list_lives_9_0,56,5,8,9,11,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_any_inst_list_lives'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_any_inst_list_lives_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i56);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_any_inst_list_lives_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r7 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i5);
	}
	MR_r8 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i5);
	}
	MR_sv(4) = MR_r2;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r1 = MR_r7;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i8);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_list_lives_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r1 = MR_r7;
	MR_r2 = (MR_Integer) 1;
MR_def_label(check_hlds__inst_util__make_any_inst_list_lives_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_inst_8_0,
		check_hlds__inst_util__make_any_inst_list_lives_9_0_i9);
MR_def_label(check_hlds__inst_util__make_any_inst_list_lives_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr3;
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_any_inst_list_lives_9_0,
		check_hlds__inst_util__make_any_inst_list_lives_9_0_i11);
MR_def_label(check_hlds__inst_util__make_any_inst_list_lives_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_any_inst_list_lives_9_0_i14);
MR_def_label(check_hlds__inst_util__make_any_inst_list_lives_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__make_any_inst_list_lives_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module21)
	MR_init_entry1(check_hlds__inst_util__maybe_make_shared_inst_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__maybe_make_shared_inst_list_5_0);
	MR_init_label5(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,3,10,11,12,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_make_shared_inst_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__maybe_make_shared_inst_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__maybe_make_shared_inst_list_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__maybe_make_shared_inst_list_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__maybe_make_shared_inst_list_5_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__maybe_make_shared_inst_list_5_0_i10);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,
		check_hlds__inst_util__maybe_make_shared_inst_list_5_0_i12);
MR_def_label(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_inst_4_0,
		check_hlds__inst_util__maybe_make_shared_inst_list_5_0_i11);
MR_def_label(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,
		check_hlds__inst_util__maybe_make_shared_inst_list_5_0_i12);
MR_def_label(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", 62);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module22)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_functor_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__abstractly_unify_inst_functor_11_0);
	MR_init_label1(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstractly_unify_inst_functor'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__abstractly_unify_inst_functor_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_11_0_i2);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_list_is_ground_or_any_or_dead_3_0);
MR_decl_entry(check_hlds__type_util__type_is_solver_type_2_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module23)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0);
	MR_init_label10(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,254,9,11,3,256,19,23,22,28,16)
	MR_init_label10(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,38,41,49,43,44,52,53,35,57,33)
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,61,65,63,60,72,71,77,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstractly_unify_inst_functor_2'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i3);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i254);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 3) = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(7) = MR_tempr2;
	MR_tempr3 = MR_r8;
	MR_sv(6) = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_list_is_ground_or_any_or_dead_3_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i9);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i11);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i256);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Integer) 6;
	MR_r4 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i16);
	}
	MR_sv(2) = MR_tfield(2, MR_r2, 0);
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r7;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_2_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i19);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(1);
	MR_r8 = MR_sv(6);
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r6;
	MR_r5 = MR_r8;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i23);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 3) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r6;
	MR_r6 = MR_r8;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_inst_list_lives_9_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i28);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 3) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i33);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_sv(4) = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i38);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 6;
	MR_r4 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_r6;
	MR_r5 = MR_r8;
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i41);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i44);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i44);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i44);
	}
	MR_tempr4 = MR_sv(5);
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i44);
	}
	MR_sv(7) = MR_r4;
	MR_tempr1 = MR_tempr3;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_tempr4;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__equivalent_cons_ids_2_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i49);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i43);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 3) = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(5);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r4;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i52);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i53);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 3) = MR_sv(5);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(3, MR_r2, 1);
	MR_r1 = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r8;
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i57);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i60);
	}
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i61);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_r4;
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_final_3_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i65);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i63);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i71);
	}
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r6;
	MR_r5 = MR_r8;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i72);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 3) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r6;
	MR_r6 = MR_r8;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_inst_list_lives_9_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i77);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 3) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_0);
MR_decl_entry(hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module24)
	MR_init_entry1(check_hlds__inst_util__make_mostly_uniq_inst_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_mostly_uniq_inst_4_0);
	MR_init_label10(check_hlds__inst_util__make_mostly_uniq_inst_4_0,5,7,100,9,3,16,17,82,18,20)
	MR_init_label10(check_hlds__inst_util__make_mostly_uniq_inst_4_0,14,23,28,24,22,33,34,36,38,35)
	MR_init_label10(check_hlds__inst_util__make_mostly_uniq_inst_4_0,41,42,43,44,45,46,47,48,50,51)
	MR_init_label10(check_hlds__inst_util__make_mostly_uniq_inst_4_0,52,53,56,54,32,62,64,66,68,60)
	MR_init_label2(check_hlds__inst_util__make_mostly_uniq_inst_4_0,71,229)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_mostly_uniq_inst'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__make_mostly_uniq_inst_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i3);
	}
	MR_r4 = MR_tfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_r4,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i9);
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i100);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i14);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i16);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_sv(5) = (MR_Integer) 3;
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i20);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i17);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_sv(5) = (MR_Integer) 4;
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i20);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i18);
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_sv(5) = (MR_Integer) 2;
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i20);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i82);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_sv(5) = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i20);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i22);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(check_hlds__inst_util__make_mostly_uniq_inst_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i23);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_final_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i28);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i32);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i33);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i34);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i36);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i35);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i38);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i53);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i53);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i41);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i42);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i43);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i44);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i45);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(check_hlds__inst_util__make_mostly_uniq_inst_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i46);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i47);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i48);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i50);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i51);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i52);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_contains_instname_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i56);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i54);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 0)) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 1)))) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i229);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i60);
	}
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i62);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i64);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i66);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i68);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i71);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", 56);
	MR_r3 = (MR_Word) MR_string_const("abstract_inst", 13);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", 56);
	MR_r3 = (MR_Word) MR_string_const("free inst var", 13);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module25)
	MR_init_entry1(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0);
	MR_init_label3(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_mostly_uniq_bound_inst_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0,
		check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0_i4);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,
		check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0_i6);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module26)
	MR_init_entry1(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__make_mostly_uniq_inst_list_4_0);
	MR_init_label3(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_mostly_uniq_inst_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_inst_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_list_4_0_i4);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_list_4_0_i5);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__unique_matches_initial_2_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module27)
	MR_init_entry1(check_hlds__inst_util__merge_uniq_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__merge_uniq_3_0);
	MR_init_label2(check_hlds__inst_util__merge_uniq_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_uniq'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__merge_uniq_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(check_hlds__inst_match__unique_matches_initial_2_0,
		check_hlds__inst_util__merge_uniq_3_0_i4);
MR_def_label(check_hlds__inst_util__merge_uniq_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_uniq_3_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__inst_util__merge_uniq_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_mode__in_mode_1_0);
MR_decl_entry(parse_tree__prog_mode__out_mode_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(fn__list__duplicate_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module28)
	MR_init_entry1(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0);
	MR_init_label4(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,2,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_inst_info_standard_func_mode'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_mode__in_mode_1_0,
		fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0_i2);
MR_def_label(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_mode__out_mode_1_0,
		fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0_i3);
MR_def_label(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0_i4);
MR_def_label(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0_i6);
MR_def_label(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 3) = (MR_Integer) 0;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(check_hlds__inst_match__pred_inst_matches_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module29)
	MR_init_entry1(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0);
	MR_init_label4(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0,3,5,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_inst_info_is_nonstandard_func_mode'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0_i3);
MR_def_label(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,
		check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0_i5);
MR_def_label(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__pred_inst_matches_3_0,
		check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0_i6);
MR_def_label(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0,1)
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


MR_BEGIN_MODULE(check_hlds__inst_util_module30)
	MR_init_entry1(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0);
	MR_init_label4(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0,4,6,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ho_inst_info_is_nonstandard_func_mode'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0_i4);
MR_def_label(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,
		check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0_i6);
MR_def_label(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__pred_inst_matches_3_0,
		check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0_i7);
MR_def_label(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0,1)
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


MR_BEGIN_MODULE(check_hlds__inst_util_module31)
	MR_init_entry1(check_hlds__inst_util__merge_ho_inst_info_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__merge_ho_inst_info_5_0);
	MR_init_label10(check_hlds__inst_util__merge_ho_inst_info_5_0,7,5,11,9,16,18,19,14,24,26)
	MR_init_label6(check_hlds__inst_util__merge_ho_inst_info_5_0,27,22,2,33,37,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_ho_inst_info'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__merge_ho_inst_info_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_ho_inst_info_5_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_ho_inst_info_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 1);
	MR_tempr2 = MR_body((MR_Integer) MR_r1, (MR_Integer) 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__pred_inst_matches_3_0,
		check_hlds__inst_util__merge_ho_inst_info_5_0_i7);
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_ho_inst_info_5_0_i5);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__pred_inst_matches_3_0,
		check_hlds__inst_util__merge_ho_inst_info_5_0_i11);
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_ho_inst_info_5_0_i9);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_ho_inst_info_5_0_i14);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__inst_util__merge_ho_inst_info_5_0_i16);
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,
		check_hlds__inst_util__merge_ho_inst_info_5_0_i18);
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__pred_inst_matches_3_0,
		check_hlds__inst_util__merge_ho_inst_info_5_0_i19);
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_ho_inst_info_5_0_i1);
	}
	MR_r4 = MR_sv(4);
	MR_r3 = MR_sv(5);
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_ho_inst_info_5_0_i22);
	}
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__inst_util__merge_ho_inst_info_5_0_i24);
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,
		check_hlds__inst_util__merge_ho_inst_info_5_0_i26);
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__pred_inst_matches_3_0,
		check_hlds__inst_util__merge_ho_inst_info_5_0_i27);
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_ho_inst_info_5_0_i1);
	}
	MR_r3 = MR_sv(5);
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0,
		check_hlds__inst_util__merge_ho_inst_info_5_0_i33);
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_ho_inst_info_5_0_i1);
	}
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0,
		check_hlds__inst_util__merge_ho_inst_info_5_0_i37);
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_ho_inst_info_5_0_i1);
	}
	MR_r3 = MR_sv(5);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__merge_ho_inst_info_5_0,1)
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


MR_BEGIN_MODULE(check_hlds__inst_util_module32)
	MR_init_entry1(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__merge_bound_inst_list_uniq_6_0);
	MR_init_label3(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_bound_inst_list_uniq'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_inst_list_uniq_6_0,
		check_hlds__inst_util__merge_bound_inst_list_uniq_6_0_i4);
MR_def_label(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module33)
	MR_init_entry1(check_hlds__inst_util__merge_inst_list_uniq_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__merge_inst_list_uniq_6_0);
	MR_init_label3(check_hlds__inst_util__merge_inst_list_uniq_6_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_inst_list_uniq'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__merge_inst_list_uniq_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__merge_inst_list_uniq_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_list_uniq_6_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__inst_util__merge_inst_list_uniq_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_inst_uniq_6_0,
		check_hlds__inst_util__merge_inst_list_uniq_6_0_i4);
MR_def_label(check_hlds__inst_util__merge_inst_list_uniq_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__inst_util__merge_inst_list_uniq_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module34)
	MR_init_entry1(check_hlds__inst_util__merge_inst_uniq_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__merge_inst_uniq_6_0);
	MR_init_label10(check_hlds__inst_util__merge_inst_uniq_6_0,88,5,4,3,11,9,8,17,15,14)
	MR_init_label10(check_hlds__inst_util__merge_inst_uniq_6_0,21,25,24,27,28,23,31,35,33,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_inst_uniq'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__merge_inst_uniq_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__inst_match__unique_matches_initial_2_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i5);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__unique_matches_initial_2_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i11);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i9);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_sv(3) = MR_tfield(3, MR_r1, 3);
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__unique_matches_initial_2_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i17);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i15);
	}
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0);
	}
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i21);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i88);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__member_2_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i25);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i24);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__insert_3_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i27);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i28);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i88);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 0)) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 1))))) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i31);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__unique_matches_initial_2_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i35);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i33);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.inst_util.merge_inst_uniq\'/6", 50);
	MR_r3 = (MR_Word) MR_string_const("inst_var", 8);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module35)
	MR_init_entry1(check_hlds__inst_util__merge_uniq_bound_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__merge_uniq_bound_5_0);
	MR_init_label4(check_hlds__inst_util__merge_uniq_bound_5_0,4,2,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_uniq_bound'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__merge_uniq_bound_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_match__unique_matches_initial_2_0,
		check_hlds__inst_util__merge_uniq_bound_5_0_i4);
MR_def_label(check_hlds__inst_util__merge_uniq_bound_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_uniq_bound_5_0_i2);
	}
	MR_sv(4) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__merge_uniq_bound_5_0_i7);
MR_def_label(check_hlds__inst_util__merge_uniq_bound_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	}
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__merge_uniq_bound_5_0_i7);
MR_def_label(check_hlds__inst_util__merge_uniq_bound_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0,
		check_hlds__inst_util__merge_uniq_bound_5_0_i8);
MR_def_label(check_hlds__inst_util__merge_uniq_bound_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__inst_table_get_merge_insts_2_0);
MR_decl_entry(hlds__hlds_data__inst_table_set_merge_insts_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module36)
	MR_init_entry1(check_hlds__inst_util__inst_merge_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__inst_merge_6_0);
	MR_init_label10(check_hlds__inst_util__inst_merge_6_0,2,3,6,8,5,13,14,15,16,18)
	MR_init_label8(check_hlds__inst_util__inst_merge_6_0,19,21,22,23,24,27,25,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_merge'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__inst_merge_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__inst_merge_6_0_i2);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_merge_insts_2_0,
		check_hlds__inst_util__inst_merge_6_0_i3);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__inst_util__inst_merge_6_0_i6);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_6_0_i5);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_6_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__inst_util__inst_merge_6_0_i24);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__inst_util__inst_merge_6_0_i24);
	}
MR_def_label(check_hlds__inst_util__inst_merge_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__inst_util__inst_merge_6_0_i13);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_merge_insts_3_0,
		check_hlds__inst_util__inst_merge_6_0_i14);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__inst_merge_6_0_i15);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__inst_merge_2_6_0,
		check_hlds__inst_util__inst_merge_6_0_i16);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_6_0_i1);
	}
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__inst_merge_6_0_i18);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_merge_insts_2_0,
		check_hlds__inst_util__inst_merge_6_0_i19);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__inst_util__inst_merge_6_0_i21);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_merge_insts_3_0,
		check_hlds__inst_util__inst_merge_6_0_i22);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__inst_merge_6_0_i23);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(check_hlds__inst_util__inst_merge_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_contains_instname_3_0,
		check_hlds__inst_util__inst_merge_6_0_i27);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_6_0_i25);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module37)
	MR_init_entry1(check_hlds__inst_util__inst_merge_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__inst_merge_2_6_0);
	MR_init_label3(check_hlds__inst_util__inst_merge_2_6_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_merge_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__inst_merge_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__inst_merge_2_6_0_i2);
MR_def_label(check_hlds__inst_util__inst_merge_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__inst_merge_2_6_0_i3);
MR_def_label(check_hlds__inst_util__inst_merge_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_2_6_0_i4);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__inst_util__inst_merge_3_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__intersect_3_0);
MR_decl_entry(set__non_empty_1_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module38)
	MR_init_entry1(check_hlds__inst_util__inst_merge_3_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__inst_merge_3_6_0);
	MR_init_label7(check_hlds__inst_util__inst_merge_3_6_0,6,8,11,10,4,53,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_merge_3'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__inst_merge_3_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_3_6_0_i53);
	}
	MR_r5 = MR_tfield(3, MR_r1, 2);
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_3_6_0_i4);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r1 = MR_r5;
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_merge_6_0,
		check_hlds__inst_util__inst_merge_3_6_0_i6);
MR_def_label(check_hlds__inst_util__inst_merge_3_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_3_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		check_hlds__inst_util__inst_merge_3_6_0_i8);
MR_def_label(check_hlds__inst_util__inst_merge_3_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(set__non_empty_1_0,
		check_hlds__inst_util__inst_merge_3_6_0_i11);
MR_def_label(check_hlds__inst_util__inst_merge_3_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_3_6_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__inst_util__inst_merge_3_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__inst_util__inst_merge_3_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_np_tailcall_ent(check_hlds__inst_util__inst_merge_6_0);
MR_def_label(check_hlds__inst_util__inst_merge_3_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(check_hlds__inst_util__inst_merge_4_6_0);
MR_def_label(check_hlds__inst_util__inst_merge_3_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module39)
	MR_init_entry1(check_hlds__inst_util__inst_merge_4_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__inst_merge_4_6_0);
	MR_init_label10(check_hlds__inst_util__inst_merge_4_6_0,5,8,3,10,15,382,18,17,23,25)
	MR_init_label10(check_hlds__inst_util__inst_merge_4_6_0,22,30,33,32,31,36,29,41,11,48)
	MR_init_label10(check_hlds__inst_util__inst_merge_4_6_0,50,47,55,57,58,59,45,65,68,67)
	MR_init_label10(check_hlds__inst_util__inst_merge_4_6_0,66,71,64,76,77,75,62,86,88,85)
	MR_init_label5(check_hlds__inst_util__inst_merge_4_6_0,390,94,96,378,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_merge_4'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__inst_merge_4_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i5);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i378);
	}
	MR_r5 = MR_tfield(2, MR_r2, 0);
	if (MR_INT_NE(MR_r5,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i8);
	}
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i378);
	}
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i10);
	}
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i382);
	}
	MR_r5 = MR_tfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_r5,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i15);
	}
	MR_r2 = MR_r1;
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i378);
	}
	MR_r2 = MR_r1;
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,382)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i17);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_r2 = MR_tfield(2, MR_r2, 1);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_util__merge_ho_inst_info_5_0,
		check_hlds__inst_util__inst_merge_4_6_0_i18);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i88);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i22);
	}
	MR_sv(2) = MR_r4;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i23);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i25);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i29);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 3);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_bound_5_0,
		check_hlds__inst_util__inst_merge_4_6_0_i30);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i33);
	}
	MR_r3 = MR_sv(2);
	MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i32);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i31);
	}
	MR_r3 = MR_sv(2);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_0,
		check_hlds__inst_util__inst_merge_4_6_0_i36);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_util__merge_ho_inst_info_5_0,
		check_hlds__inst_util__inst_merge_4_6_0_i41);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i88);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i45);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i47);
	}
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i48);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i50);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_sv(4) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__inst_util__inst_merge_4_6_0_i55);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__inst_util__inst_merge_4_6_0_i57);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		check_hlds__inst_util__inst_merge_4_6_0_i58);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__inst_list_merge_6_0,
		check_hlds__inst_util__inst_merge_4_6_0_i59);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i62);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i64);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_bound_5_0,
		check_hlds__inst_util__inst_merge_4_6_0_i65);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i68);
	}
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i67);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i66);
	}
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_r1;
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_0,
		check_hlds__inst_util__inst_merge_4_6_0_i71);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i75);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_sv(4) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i76);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__bound_inst_list_merge_6_0,
		check_hlds__inst_util__inst_merge_4_6_0_i77);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i378);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tfield(3, MR_tempr2, 1);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr1;
	MR_np_tailcall_ent(check_hlds__inst_util__inst_merge_bound_ground_8_0);
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i378);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i85);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_tfield(2, MR_r2, 1);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_util__merge_ho_inst_info_5_0,
		check_hlds__inst_util__inst_merge_4_6_0_i86);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i88);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i390);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr2, 3);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(check_hlds__inst_util__inst_merge_bound_ground_8_0);
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,390)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_util__merge_ho_inst_info_5_0,
		check_hlds__inst_util__inst_merge_4_6_0_i94);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i96);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,378)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__bound_inst_list_is_ground_2_0);
MR_decl_entry(check_hlds__type_util__type_constructors_3_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);
MR_decl_entry(check_hlds__mode_util__constructors_to_bound_insts_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
MR_decl_entry(list__sort_and_remove_dups_2_0);
MR_decl_entry(fn__set__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;

MR_BEGIN_MODULE(check_hlds__inst_util_module40)
	MR_init_entry1(check_hlds__inst_util__inst_merge_bound_ground_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__inst_merge_bound_ground_8_0);
	MR_init_label10(check_hlds__inst_util__inst_merge_bound_ground_8_0,4,8,7,11,12,2,14,20,19,23)
	MR_init_label9(check_hlds__inst_util__inst_merge_bound_ground_8_0,24,17,26,28,29,30,31,33,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_merge_bound_ground'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__inst_merge_bound_ground_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__bound_inst_list_is_ground_2_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i4);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_bound_ground_8_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__inst_match__unique_matches_initial_2_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i8);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_bound_ground_8_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i11);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i11);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i12);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i14);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_bound_ground_8_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_bound_ground_8_0_i17);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__inst_match__unique_matches_initial_2_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i20);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_bound_ground_8_0_i19);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i23);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i23);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i24);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_sv(4), 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__type_util__type_constructors_3_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i26);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_bound_ground_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i28);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__constructors_to_bound_insts_5_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i29);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i30);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(fn__set__init_0_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i31);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_np_call_localret_ent(fn__set__init_0_0,
		check_hlds__inst_util__inst_merge_bound_ground_8_0_i33);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_sv(8);
	MR_tfield(3, MR_r1, 2) = MR_sv(1);
	MR_tfield(3, MR_r1, 3) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_tempr2;
	MR_tfield(3, MR_r2, 3) = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__inst_util__inst_merge_4_6_0);
	}
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_8_0,1)
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


MR_BEGIN_MODULE(check_hlds__inst_util_module41)
	MR_init_entry1(check_hlds__inst_util__inst_list_merge_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__inst_list_merge_6_0);
	MR_init_label5(check_hlds__inst_util__inst_list_merge_6_0,53,7,9,54,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_list_merge'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__inst_list_merge_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_list_merge_6_0_i53);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_list_merge_6_0_i54);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_list_merge_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_list_merge_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_list_merge_6_0_i1);
	}
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_merge_6_0,
		check_hlds__inst_util__inst_list_merge_6_0_i7);
MR_def_label(check_hlds__inst_util__inst_list_merge_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_list_merge_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__inst_util__inst_list_merge_6_0,
		check_hlds__inst_util__inst_list_merge_6_0_i9);
MR_def_label(check_hlds__inst_util__inst_list_merge_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_list_merge_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__inst_util__inst_list_merge_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__inst_list_merge_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module42)
	MR_init_entry1(check_hlds__inst_util__bound_inst_list_merge_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__bound_inst_list_merge_6_0);
	MR_init_label10(check_hlds__inst_util__bound_inst_list_merge_6_0,3,61,8,10,11,12,15,6,19,20)
	MR_init_label3(check_hlds__inst_util__bound_inst_list_merge_6_0,18,23,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bound_inst_list_merge'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__bound_inst_list_merge_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i3);
	}
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i61);
	}
	MR_r2 = MR_r1;
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(12) = MR_tempr1;
	MR_sv(11) = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(5) = MR_tempr4;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__equivalent_cons_ids_2_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i8);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i10);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i11);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__inst_list_merge_6_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i12);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__inst_util__bound_inst_list_merge_6_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i15);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(5);
	MR_tempr4 = MR_sv(7);
	MR_tempr5 = MR_sv(10);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i19);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i18);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(10);
	MR_np_localcall_lab(check_hlds__inst_util__bound_inst_list_merge_6_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i20);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(10);
	MR_np_localcall_lab(check_hlds__inst_util__bound_inst_list_merge_6_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i23);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module43)
	MR_init_entry1(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0);
	MR_init_label10(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,59,3,26,4,7,5,9,13,12,15)
	MR_init_label4(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,16,11,21,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_contains_nonstandard_func_mode_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 5)) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 1))) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 1))))) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i4);
	}
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0);
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i9);
	}
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i59);
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i13);
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__insert_3_0,
		fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i15);
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i16);
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i59);
	}
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i19);
	}
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_0,
		fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i21);
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.inst_util.inst_contains_nonstandard_func_mode_2\'/3", 71);
	MR_r3 = (MR_Word) MR_string_const("uninstantiated inst parameter", 29);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module44)
	MR_init_entry1(fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0);
	MR_init_label4(fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0,15,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_list_contains_nonstandard_func_mode'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,
		fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0_i4);
MR_def_label(fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module45)
	MR_init_entry1(fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0);
	MR_init_label4(fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0,15,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bound_inst_list_contains_nonstandard_func_mode'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 1);
	MR_np_call_localret_ent(fn__check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_0,
		fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0_i4);
MR_def_label(fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module46)
	MR_init_entry1(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0);
	MR_init_label2(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_contains_nonstandard_func_mode'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0_i2);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,
		check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0_i3);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module47)
	MR_init_entry1(fn__check_hlds__inst_util__inst_contains_any_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__inst_util__inst_contains_any_2_3_0);
	MR_init_label10(fn__check_hlds__inst_util__inst_contains_any_2_3_0,63,25,3,4,7,9,11,5,14,18)
	MR_init_label4(fn__check_hlds__inst_util__inst_contains_any_2_3_0,17,20,21,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_contains_any_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__inst_util__inst_contains_any_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 5)) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 1))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 1))) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 1))))) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_any_2_3_0_i3);
	}
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_any_2_3_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_any_2_3_0_i5);
	}
	MR_r4 = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_any_2_3_0_i7);
	}
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0);
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,1)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_any_2_3_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r4, 1);
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_any_2_3_0_i11);
	}
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0);
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_any_2_3_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_any_2_3_0_i14);
	}
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_any_2_3_0_i63);
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_any_2_3_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		fn__check_hlds__inst_util__inst_contains_any_2_3_0_i18);
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_any_2_3_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__insert_3_0,
		fn__check_hlds__inst_util__inst_contains_any_2_3_0_i20);
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		fn__check_hlds__inst_util__inst_contains_any_2_3_0_i21);
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__check_hlds__inst_util__inst_contains_any_2_3_0_i63);
	}
MR_def_label(fn__check_hlds__inst_util__inst_contains_any_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.inst_util", 20);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.inst_util.inst_contains_any_2\'/3", 53);
	MR_r3 = (MR_Word) MR_string_const("uninstantiated inst parameter", 29);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module48)
	MR_init_entry1(fn__check_hlds__inst_util__inst_list_contains_any_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__inst_util__inst_list_contains_any_3_0);
	MR_init_label4(fn__check_hlds__inst_util__inst_list_contains_any_3_0,15,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_list_contains_any'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__inst_util__inst_list_contains_any_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__check_hlds__inst_util__inst_list_contains_any_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_list_contains_any_3_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__inst_list_contains_any_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__check_hlds__inst_util__inst_contains_any_2_3_0,
		fn__check_hlds__inst_util__inst_list_contains_any_3_0_i4);
MR_def_label(fn__check_hlds__inst_util__inst_list_contains_any_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_list_contains_any_3_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__inst_list_contains_any_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__check_hlds__inst_util__inst_list_contains_any_3_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module49)
	MR_init_entry1(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0);
	MR_init_label4(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0,15,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bound_inst_list_contains_any'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 1);
	MR_np_call_localret_ent(fn__check_hlds__inst_util__inst_list_contains_any_3_0,
		fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0_i4);
MR_def_label(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__check_hlds__inst_util__bound_inst_list_contains_any_3_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module50)
	MR_init_entry1(check_hlds__inst_util__inst_contains_any_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__inst_contains_any_2_0);
	MR_init_label2(check_hlds__inst_util__inst_contains_any_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_contains_any'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__inst_contains_any_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__inst_contains_any_2_0_i2);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__inst_util__inst_contains_any_2_3_0,
		check_hlds__inst_util__inst_contains_any_2_0_i3);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module51)
	MR_init_entry1(check_hlds__inst_util__var_inst_contains_any_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_util__var_inst_contains_any_3_0);
	MR_init_label3(check_hlds__inst_util__var_inst_contains_any_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_inst_contains_any'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__var_inst_contains_any_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__inst_util__var_inst_contains_any_3_0_i2);
MR_def_label(check_hlds__inst_util__var_inst_contains_any_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__var_inst_contains_any_3_0_i3);
MR_def_label(check_hlds__inst_util__var_inst_contains_any_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__inst_util__inst_contains_any_2_3_0,
		check_hlds__inst_util__var_inst_contains_any_3_0_i4);
MR_def_label(check_hlds__inst_util__var_inst_contains_any_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module52)
	MR_init_entry1(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0);
	MR_init_label4(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0,16,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_may_restrict_cons_ids'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i4);
MR_def_label(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i16);
	}
MR_def_label(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0)) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 1))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 1))) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 1))))) {
		MR_GOTO_LAB(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module53)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__allow_unify_bound_any__[1]_0'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__inst_util_maybe_bunch_0(void)
{
	check_hlds__inst_util_module0();
	check_hlds__inst_util_module1();
	check_hlds__inst_util_module2();
	check_hlds__inst_util_module3();
	check_hlds__inst_util_module4();
	check_hlds__inst_util_module5();
	check_hlds__inst_util_module6();
	check_hlds__inst_util_module7();
	check_hlds__inst_util_module8();
	check_hlds__inst_util_module9();
	check_hlds__inst_util_module10();
	check_hlds__inst_util_module11();
	check_hlds__inst_util_module12();
	check_hlds__inst_util_module13();
	check_hlds__inst_util_module14();
	check_hlds__inst_util_module15();
	check_hlds__inst_util_module16();
	check_hlds__inst_util_module17();
	check_hlds__inst_util_module18();
	check_hlds__inst_util_module19();
	check_hlds__inst_util_module20();
	check_hlds__inst_util_module21();
	check_hlds__inst_util_module22();
	check_hlds__inst_util_module23();
	check_hlds__inst_util_module24();
	check_hlds__inst_util_module25();
	check_hlds__inst_util_module26();
	check_hlds__inst_util_module27();
	check_hlds__inst_util_module28();
	check_hlds__inst_util_module29();
	check_hlds__inst_util_module30();
	check_hlds__inst_util_module31();
	check_hlds__inst_util_module32();
	check_hlds__inst_util_module33();
	check_hlds__inst_util_module34();
	check_hlds__inst_util_module35();
	check_hlds__inst_util_module36();
	check_hlds__inst_util_module37();
	check_hlds__inst_util_module38();
	check_hlds__inst_util_module39();
}

static void mercury__check_hlds__inst_util_maybe_bunch_1(void)
{
	check_hlds__inst_util_module40();
	check_hlds__inst_util_module41();
	check_hlds__inst_util_module42();
	check_hlds__inst_util_module43();
	check_hlds__inst_util_module44();
	check_hlds__inst_util_module45();
	check_hlds__inst_util_module46();
	check_hlds__inst_util_module47();
	check_hlds__inst_util_module48();
	check_hlds__inst_util_module49();
	check_hlds__inst_util_module50();
	check_hlds__inst_util_module51();
	check_hlds__inst_util_module52();
	check_hlds__inst_util_module53();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__inst_util__init(void);
void mercury__check_hlds__inst_util__init_type_tables(void);
void mercury__check_hlds__inst_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__inst_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__inst_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__inst_util__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__inst_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__inst_util_maybe_bunch_0();
	mercury__check_hlds__inst_util_maybe_bunch_1();
	mercury__check_hlds__inst_util__init_debugger();
}

void mercury__check_hlds__inst_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__check_hlds__inst_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__inst_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__check_hlds__inst_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__inst_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__inst_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
