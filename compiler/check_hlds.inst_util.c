/*
** Automatically generated from `inst_util.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__inst_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "check_hlds.inst_util.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "check_hlds.inst_util.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "check_hlds.inst_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "check_hlds.inst_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "check_hlds.inst_util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "check_hlds.inst_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "check_hlds.inst_util.c"
#line 52 "check_hlds.inst_util.c"
#include "check_hlds.inst_util.mh"

#line 55 "check_hlds.inst_util.c"
#line 56 "check_hlds.inst_util.c"
#ifndef CHECK_HLDS__INST_UTIL_DECL_GUARD
#define CHECK_HLDS__INST_UTIL_DECL_GUARD

#line 60 "check_hlds.inst_util.c"
#line 61 "check_hlds.inst_util.c"

#endif
#line 64 "check_hlds.inst_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_1[];
MR_decl_label8(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0, 5,4,3,8,22,20,24,25)
MR_decl_label7(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0, 16,27,10,11,30,31,1)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0, 3,43,149,16,14,18,19,10)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0, 21,23,24,26,29,28,8,9)
MR_decl_label6(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0, 33,34,32,36,39,1)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0, 83,3,12,10,14,15,6,17)
MR_decl_label4(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0, 20,4,5,1)
MR_decl_label6(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0, 2,8,4,12,10,1)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_8_0, 2,3,5,7,4,10,11,12)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_8_0, 13,14,15,18,17,19,20,21)
MR_decl_label7(check_hlds__inst_util__abstractly_unify_inst_8_0, 22,23,24,25,28,26,1)
MR_decl_label3(check_hlds__inst_util__abstractly_unify_inst_2_8_0, 2,4,43)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 62,67,68,70,74,76,72,78)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 79,66,82,6,489,30,31,33)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 22,24,26,28,10,11,12,14)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 16,17,19,36,490,60,54,56)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 43,44,45,47,50,52,3,140)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 141,89,495,110,111,113,105,107)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 93,94,95,97,99,100,102,116)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 118,137,138,134,497,124,125,127)
MR_decl_label5(check_hlds__inst_util__abstractly_unify_inst_3_8_0, 129,130,132,486,1)
MR_decl_label6(check_hlds__inst_util__abstractly_unify_inst_functor_11_0, 2,5,9,7,3,1)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0, 21,23,13,15,17,145,7,8)
MR_decl_label8(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0, 10,11,3,39,41,34,35,148)
MR_decl_label5(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0, 28,29,31,32,1)
MR_decl_label6(check_hlds__inst_util__abstractly_unify_inst_list_8_0, 31,6,8,10,32,1)
MR_decl_label6(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0, 39,8,10,12,40,1)
MR_decl_label3(check_hlds__inst_util__allow_unify_with_clobbered_3_0, 23,11,22)
MR_decl_label8(check_hlds__inst_util__bound_inst_list_merge_6_0, 2,112,16,14,18,19,10,21)
MR_decl_label8(check_hlds__inst_util__bound_inst_list_merge_6_0, 23,24,25,26,28,8,9,31)
MR_decl_label4(check_hlds__inst_util__bound_inst_list_merge_6_0, 32,30,34,1)
MR_decl_label4(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0, 4,6,7,1)
MR_decl_label1(check_hlds__inst_util__inst_contains_any_2_0, 2)
MR_decl_label8(check_hlds__inst_util__inst_contains_any_2_3_0, 38,5,7,8,9,6,12,14)
MR_decl_label6(check_hlds__inst_util__inst_contains_any_2_3_0, 16,18,19,26,4,27)
MR_decl_label1(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0, 2)
MR_decl_label8(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0, 40,5,7,8,9,6,12,15)
MR_decl_label6(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0, 17,19,21,22,29,1)
MR_decl_label5(check_hlds__inst_util__inst_list_merge_6_0, 34,7,9,35,1)
MR_decl_label8(check_hlds__inst_util__inst_merge_6_0, 2,3,5,7,4,10,11,12)
MR_decl_label8(check_hlds__inst_util__inst_merge_6_0, 13,15,16,17,18,19,20,22)
MR_decl_label2(check_hlds__inst_util__inst_merge_6_0, 21,1)
MR_decl_label3(check_hlds__inst_util__inst_merge_2_6_0, 2,3,4)
MR_decl_label7(check_hlds__inst_util__inst_merge_3_6_0, 6,8,11,10,4,44,1)
MR_decl_label8(check_hlds__inst_util__inst_merge_4_6_0, 108,111,341,92,93,96,94,98)
MR_decl_label8(check_hlds__inst_util__inst_merge_4_6_0, 101,103,104,106,80,83,86,176)
MR_decl_label8(check_hlds__inst_util__inst_merge_4_6_0, 4,5,350,10,11,13,349,17)
MR_decl_label8(check_hlds__inst_util__inst_merge_4_6_0, 20,18,22,25,29,353,38,36)
MR_decl_label8(check_hlds__inst_util__inst_merge_4_6_0, 42,40,46,50,33,56,60,63)
MR_decl_label8(check_hlds__inst_util__inst_merge_4_6_0, 352,348,69,71,154,68,74,76)
MR_decl_label4(check_hlds__inst_util__inst_merge_4_6_0, 77,78,340,1)
MR_decl_label8(check_hlds__inst_util__inst_merge_bound_ground_7_0, 4,8,7,11,12,2,13,19)
MR_decl_label8(check_hlds__inst_util__inst_merge_bound_ground_7_0, 18,22,23,16,24,26,27,1)
MR_decl_label5(check_hlds__inst_util__make_any_bound_inst_list_8_0, 23,4,6,8,1)
MR_decl_label8(check_hlds__inst_util__make_any_inst_8_0, 4,6,5,114,9,10,12,13)
MR_decl_label8(check_hlds__inst_util__make_any_inst_8_0, 118,15,16,18,20,119,22,23)
MR_decl_label8(check_hlds__inst_util__make_any_inst_8_0, 120,26,28,65,121,32,33,35)
MR_decl_label8(check_hlds__inst_util__make_any_inst_8_0, 37,34,40,41,42,43,44,45)
MR_decl_label8(check_hlds__inst_util__make_any_inst_8_0, 47,48,49,50,51,52,55,53)
MR_decl_label2(check_hlds__inst_util__make_any_inst_8_0, 58,1)
MR_decl_label5(check_hlds__inst_util__make_any_inst_list_8_0, 23,4,6,8,1)
MR_decl_label7(check_hlds__inst_util__make_any_inst_list_lives_9_0, 37,5,8,9,11,13,1)
MR_decl_label5(check_hlds__inst_util__make_ground_bound_inst_list_8_0, 23,4,6,8,1)
MR_decl_label8(check_hlds__inst_util__make_ground_inst_8_0, 4,6,5,117,9,118,12,14)
MR_decl_label8(check_hlds__inst_util__make_ground_inst_8_0, 121,16,18,20,122,22,123,25)
MR_decl_label8(check_hlds__inst_util__make_ground_inst_8_0, 27,65,124,31,32,34,36,33)
MR_decl_label8(check_hlds__inst_util__make_ground_inst_8_0, 39,40,41,42,43,44,46,47)
MR_decl_label8(check_hlds__inst_util__make_ground_inst_8_0, 48,49,50,51,54,52,57,1)
MR_decl_label5(check_hlds__inst_util__make_ground_inst_list_8_0, 23,4,6,8,1)
MR_decl_label7(check_hlds__inst_util__make_ground_inst_list_lives_9_0, 37,5,8,9,11,13,1)
MR_decl_label3(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0, 13,4,5)
MR_decl_label8(check_hlds__inst_util__make_mostly_uniq_inst_4_0, 4,5,6,8,10,11,12,14)
MR_decl_label8(check_hlds__inst_util__make_mostly_uniq_inst_4_0, 111,17,18,20,22,23,24,25)
MR_decl_label8(check_hlds__inst_util__make_mostly_uniq_inst_4_0, 112,28,33,29,113,37,38,40)
MR_decl_label8(check_hlds__inst_util__make_mostly_uniq_inst_4_0, 42,39,45,46,47,48,49,50)
MR_decl_label8(check_hlds__inst_util__make_mostly_uniq_inst_4_0, 51,52,53,54,55,56,59,57)
MR_decl_label2(check_hlds__inst_util__make_mostly_uniq_inst_4_0, 62,104)
MR_decl_label3(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0, 13,4,5)
MR_decl_label3(check_hlds__inst_util__make_shared_bound_inst_list_4_0, 13,4,5)
MR_decl_label8(check_hlds__inst_util__make_shared_inst_4_0, 4,5,7,11,12,13,14,16)
MR_decl_label8(check_hlds__inst_util__make_shared_inst_4_0, 110,19,20,24,25,26,27,111)
MR_decl_label8(check_hlds__inst_util__make_shared_inst_4_0, 30,35,31,112,39,40,42,44)
MR_decl_label8(check_hlds__inst_util__make_shared_inst_4_0, 41,47,48,49,50,51,52,53)
MR_decl_label8(check_hlds__inst_util__make_shared_inst_4_0, 54,55,56,57,58,61,59,64)
MR_decl_label3(check_hlds__inst_util__make_shared_inst_list_4_0, 13,4,5)
MR_decl_label5(check_hlds__inst_util__maybe_make_shared_inst_list_5_0, 3,11,10,12,8)
MR_decl_label3(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0, 10,3,4)
MR_decl_label3(check_hlds__inst_util__merge_inst_list_uniq_6_0, 10,3,4)
MR_decl_label8(check_hlds__inst_util__merge_inst_uniq_6_0, 29,6,9,10,11,13,15,17)
MR_decl_label7(check_hlds__inst_util__merge_inst_uniq_6_0, 19,21,20,23,24,27,28)
MR_decl_label2(check_hlds__inst_util__merge_uniq_3_0, 4,2)
MR_decl_label4(check_hlds__inst_util__merge_uniq_bound_5_0, 4,2,7,8)
MR_decl_label4(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0, 3,5,6,1)
MR_decl_label8(check_hlds__inst_util__unify_uniq_6_0, 3,8,11,184,17,19,22,24)
MR_decl_label8(check_hlds__inst_util__unify_uniq_6_0, 25,188,29,189,32,34,37,40)
MR_decl_label8(check_hlds__inst_util__unify_uniq_6_0, 86,42,43,46,51,54,59,62)
MR_decl_label8(check_hlds__inst_util__unify_uniq_6_0, 185,183,68,70,114,72,186,1)
MR_decl_label2(check_hlds__inst_util__var_inst_contains_any_3_0, 2,3)
MR_decl_label5(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0, 17,8,13,14,16)
MR_decl_label4(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0, 2,3,4,5)
MR_decl_static(fn__check_hlds__inst_util__this_file_0_0)
MR_decl_static(check_hlds__inst_util__allow_unify_with_clobbered_3_0)
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
MR_decl_static(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0)
MR_def_extern_entry(check_hlds__inst_util__abstractly_unify_inst_functor_11_0)
MR_def_extern_entry(check_hlds__inst_util__make_mostly_uniq_inst_4_0)
MR_decl_static(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0)
MR_decl_static(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0)
MR_def_extern_entry(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0)
MR_def_extern_entry(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0)
MR_def_extern_entry(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0)
MR_decl_static(check_hlds__inst_util__merge_uniq_3_0)
MR_decl_static(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0)
MR_decl_static(check_hlds__inst_util__merge_inst_list_uniq_6_0)
MR_decl_static(check_hlds__inst_util__merge_inst_uniq_6_0)
MR_decl_static(check_hlds__inst_util__merge_uniq_bound_5_0)
MR_def_extern_entry(check_hlds__inst_util__inst_merge_6_0)
MR_decl_static(check_hlds__inst_util__inst_merge_2_6_0)
MR_decl_static(check_hlds__inst_util__inst_merge_3_6_0)
MR_decl_static(check_hlds__inst_util__inst_merge_4_6_0)
MR_decl_static(check_hlds__inst_util__inst_merge_bound_ground_7_0)
MR_decl_static(check_hlds__inst_util__inst_list_merge_6_0)
MR_decl_static(check_hlds__inst_util__bound_inst_list_merge_6_0)
MR_decl_static(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0)
MR_def_extern_entry(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0)
MR_decl_static(check_hlds__inst_util__inst_contains_any_2_3_0)
MR_def_extern_entry(check_hlds__inst_util__inst_contains_any_2_0)
MR_def_extern_entry(check_hlds__inst_util__var_inst_contains_any_3_0)
MR_def_extern_entry(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
0
},
{
3
},
{
4
},
{
2
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

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[5] =
{
{
0
},
{
0
},
{
0
},
{
3
},
{
4
},
};

static const struct mercury_type_0 mercury_vector_common_0_1[5] =
{
{
0
},
{
2
},
{
2
},
{
3
},
{
4
},
};


MR_BEGIN_MODULE(check_hlds__inst_util_module0)
	MR_init_entry1(fn__check_hlds__inst_util__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__inst_util__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module1)
	MR_init_entry1(check_hlds__inst_util__allow_unify_with_clobbered_3_0);
	MR_init_label3(check_hlds__inst_util__allow_unify_with_clobbered_3_0,23,11,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__allow_unify_with_clobbered_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__allow_unify_with_clobbered_3_0_i22);
	}
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__allow_unify_with_clobbered_3_0_i23);
	}
	MR_r1 = ((MR_Integer) MR_r3 == (MR_Integer) 0);
	MR_proceed();
MR_def_label(check_hlds__inst_util__allow_unify_with_clobbered_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__allow_unify_with_clobbered_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__inst_util__allow_unify_with_clobbered_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	MR_r2 = (MR_Word) MR_string_const("allow_unify_with_clobbered: clobbered value is is_live?", 55);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__inst_util__allow_unify_with_clobbered_3_0_i11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module2)
	MR_init_entry1(check_hlds__inst_util__unify_uniq_6_0);
	MR_init_label8(check_hlds__inst_util__unify_uniq_6_0,3,8,11,184,17,19,22,24)
	MR_init_label8(check_hlds__inst_util__unify_uniq_6_0,25,188,29,189,32,34,37,40)
	MR_init_label8(check_hlds__inst_util__unify_uniq_6_0,86,42,43,46,51,54,59,62)
	MR_init_label8(check_hlds__inst_util__unify_uniq_6_0,185,183,68,70,114,72,186,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__unify_uniq_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r4,
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i19) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i34) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i59) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i183));
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r5,
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i86) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i86) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i86) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i8) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i184));
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i185);
	}
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i11);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i186);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(check_hlds__inst_util__allow_unify_with_clobbered_3_0,
		check_hlds__inst_util__unify_uniq_6_0_i17);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i1);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r5,
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i86) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i22) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i25) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i188) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i189));
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i24);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i42);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(check_hlds__inst_util__allow_unify_with_clobbered_3_0,
		check_hlds__inst_util__unify_uniq_6_0_i29);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i1);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(check_hlds__inst_util__allow_unify_with_clobbered_3_0,
		check_hlds__inst_util__unify_uniq_6_0_i32);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i1);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r5,
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i86) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i37) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i40) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i43) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__unify_uniq_6_0_i51));
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i42);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i42);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i185);
	}
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i46);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i186);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i185);
	}
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i54);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i186);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i185);
	}
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i62);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i186);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	MR_r2 = (MR_Word) MR_string_const("allow_unify_with_clobbered: clobbered value is is_live?", 55);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__inst_util__unify_uniq_6_0_i114);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r5,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i68);
	}
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 3;
	MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i70);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 4;
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i72);
	}
	if (MR_INT_EQ(MR_r3,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i114);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__unify_uniq_6_0_i1);
	}
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("allow_unify_with_clobbered: clobbered value is is_live?", 55);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__inst_util__unify_uniq_6_0_i114);
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__unify_uniq_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module3)
	MR_init_entry1(check_hlds__inst_util__make_shared_inst_list_4_0);
	MR_init_label3(check_hlds__inst_util__make_shared_inst_list_4_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__make_shared_inst_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_list_4_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_shared_inst_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_inst_4_0,
		check_hlds__inst_util__make_shared_inst_list_4_0_i4);
MR_def_label(check_hlds__inst_util__make_shared_inst_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
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
MR_decl_entry(svmap__det_insert_4_0);
MR_decl_entry(hlds__hlds_data__inst_table_set_shared_insts_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_inst_table_3_0);
MR_decl_entry(check_hlds__mode_util__inst_lookup_3_0);
MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(svmap__det_update_4_0);
MR_decl_entry(check_hlds__inst_match__inst_contains_instname_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module4)
	MR_init_entry1(check_hlds__inst_util__make_shared_inst_4_0);
	MR_init_label8(check_hlds__inst_util__make_shared_inst_4_0,4,5,7,11,12,13,14,16)
	MR_init_label8(check_hlds__inst_util__make_shared_inst_4_0,110,19,20,24,25,26,27,111)
	MR_init_label8(check_hlds__inst_util__make_shared_inst_4_0,30,35,31,112,39,40,42,44)
	MR_init_label8(check_hlds__inst_util__make_shared_inst_4_0,41,47,48,49,50,51,52,53)
	MR_init_label8(check_hlds__inst_util__make_shared_inst_4_0,54,55,56,57,58,61,59,64)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_shared_inst_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i7) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i14) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i16));
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	MR_r2 = (MR_Word) MR_string_const("make_shared_inst: cannot make shared version of \140free\'", 54);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i11) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i11) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i11) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i13));
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	MR_r2 = (MR_Word) MR_string_const("make_shared_inst: cannot make shared version of \140free(T)\'", 57);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i110) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i20) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i111) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i112) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i64));
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, (MR_Integer) MR_tempr1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_bound_inst_list_4_0,
		check_hlds__inst_util__make_shared_inst_4_0_i19);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i24) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i24) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i24) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i25) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_shared_inst_4_0_i26));
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	MR_r2 = (MR_Word) MR_string_const("make_shared_inst: free inst var", 31);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_shared_inst_4_0,
		check_hlds__inst_util__make_shared_inst_4_0_i30);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_final_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i35);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i31);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_shared_inst_4_0_i39);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_shared_insts_2_0,
		check_hlds__inst_util__make_shared_inst_4_0_i40);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i42);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i41);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i44);
	}
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_ctfield(1, MR_r4, 0);
	MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i58);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i58);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__inst_util__make_shared_inst_4_0_i47);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_shared_insts_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i48);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i49);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i50);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i51);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__inst_util__make_shared_inst_4_0,
		check_hlds__inst_util__make_shared_inst_4_0_i52);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_shared_inst_4_0_i53);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_shared_insts_2_0,
		check_hlds__inst_util__make_shared_inst_4_0_i54);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		check_hlds__inst_util__make_shared_inst_4_0_i55);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_shared_insts_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i56);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i57);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_contains_instname_3_0,
		check_hlds__inst_util__make_shared_inst_4_0_i61);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_inst_4_0_i59);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__make_shared_inst_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	MR_r2 = (MR_Word) MR_string_const("make_shared_inst(abstract_inst)", 31);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module5)
	MR_init_entry1(check_hlds__inst_util__make_shared_bound_inst_list_4_0);
	MR_init_label3(check_hlds__inst_util__make_shared_bound_inst_list_4_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_shared_bound_inst_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_shared_bound_inst_list_4_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_shared_bound_inst_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_inst_list_4_0,
		check_hlds__inst_util__make_shared_bound_inst_list_4_0_i4);
MR_def_label(check_hlds__inst_util__make_shared_bound_inst_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_shared_bound_inst_list_4_0,
		check_hlds__inst_util__make_shared_bound_inst_list_4_0_i5);
MR_def_label(check_hlds__inst_util__make_shared_bound_inst_list_4_0,5)
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
MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module6)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_8_0);
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_8_0,2,3,5,7,4,10,11,12)
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_8_0,13,14,15,18,17,19,20,21)
	MR_init_label7(check_hlds__inst_util__abstractly_unify_inst_8_0,22,23,24,25,28,26,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__abstractly_unify_inst_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_tfield(2, MR_tempr1, 2) = MR_tempr4;
	MR_tempr5 = MR_r4;
	MR_tfield(2, MR_tempr1, 3) = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_tempr5;
	MR_tempr6 = MR_r5;
	MR_sv(8) = MR_tempr6;
	MR_r1 = MR_tempr6;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i2);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_unify_insts_2_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i3);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i5);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i25);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr2 = MR_sv(5);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = (MR_Integer) 0;
	MR_r3 = MR_tempr2;
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i25);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i10);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_unify_insts_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i11);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i12);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i13);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i14);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_2_8_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i15);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i18);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i17);
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i19);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i20);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_unify_insts_2_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i21);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i22);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_unify_insts_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i23);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i24);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_contains_instname_3_0,
		check_hlds__inst_util__abstractly_unify_inst_8_0_i28);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_8_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_8_0,1)
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


MR_BEGIN_MODULE(check_hlds__inst_util_module7)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_2_8_0);
	MR_init_label3(check_hlds__inst_util__abstractly_unify_inst_2_8_0,2,4,43)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_inst_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_2_8_0_i2);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_2_8_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_2_8_0_i43);
	}
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_2_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_inst_3_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_0);
MR_decl_entry(parse_tree__prog_data__det_par_conjunction_detism_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module8)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_3_8_0);
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0,62,67,68,70,74,76,72,78)
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0,79,66,82,6,489,30,31,33)
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0,22,24,26,28,10,11,12,14)
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0,16,17,19,36,490,60,54,56)
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0,43,44,45,47,50,52,3,140)
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0,141,89,495,110,111,113,105,107)
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0,93,94,95,97,99,100,102,116)
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_3_8_0,118,137,138,134,497,124,125,127)
	MR_init_label5(check_hlds__inst_util__abstractly_unify_inst_3_8_0,129,130,132,486,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_inst_3_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i6);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i62);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i486);
	}
	MR_r1 = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(check_hlds__inst_util__make_any_inst_8_0);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i141);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r6 = MR_tag(MR_tempr1);
	if ((MR_r6 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i66);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i67) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i78) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1));
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i68);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i70);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i74);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_bound_inst_list_4_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i76);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i72);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_bound_inst_list_4_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i76);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i79);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r6 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i82);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i489) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i36) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i486) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i486) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i486) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i486));
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,489)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i10);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i22);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i30);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i31);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i33);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i129);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Integer) 0;
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i24);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i26);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_bound_inst_list_4_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i28);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i11) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i16) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1));
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_r3, 1);
	MR_sv(5) = MR_ctfield(3, MR_r2, 1);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i12);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r5 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i14);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_ctfield(3, MR_r3, 1);
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 2);
	MR_r1 = (MR_Integer) 0;
	MR_tempr1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i17);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i19);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i129);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r6 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i490);
	}
	MR_r1 = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(check_hlds__inst_util__make_ground_inst_8_0);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,490)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i43);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i54);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(2) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_r1 = (MR_Integer) 0;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_tempr3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i60);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(2) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_r1 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i56);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i44) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i50) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1));
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(3, MR_r2, 1);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr2;
	MR_tempr1 = MR_tempr3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i45);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i47);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i129);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(2) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_r1 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i52);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i89);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i140);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i486);
	}
	MR_r1 = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(check_hlds__inst_util__make_any_inst_8_0);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i141);
	}
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i495) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i116) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i486) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i486) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i486) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i486));
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,495)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i93);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i105);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i110);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i111);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i113);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i129);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Integer) 1;
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i107);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i94) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i99) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1));
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_r3, 1);
	MR_sv(5) = MR_ctfield(3, MR_r2, 1);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i95);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r5 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i97);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_ctfield(3, MR_r3, 1);
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 2);
	MR_r1 = (MR_Integer) 1;
	MR_tempr1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i100);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i102);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i129);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r1 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i118);
	}
	MR_r1 = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(check_hlds__inst_util__make_ground_inst_8_0);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i497);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i134);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_r3, 0);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i137);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i138);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i486);
	}
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,497)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i124) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i130) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1));
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(5) = MR_ctfield(3, MR_r2, 1);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr2;
	MR_tempr1 = MR_tempr3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i125);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i127);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i129);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	MR_sv(2) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__abstractly_unify_inst_3_8_0_i132);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_3_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,486)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_3_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module9)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_list_8_0);
	MR_init_label6(check_hlds__inst_util__abstractly_unify_inst_list_8_0,31,6,8,10,32,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_inst_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_8_0_i31);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_8_0_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r4;
	MR_tempr4 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr1 = MR_tempr4;
	MR_r1 = MR_tempr3;
	MR_tempr2 = MR_tempr5;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_8_0,
		check_hlds__inst_util__abstractly_unify_inst_list_8_0_i6);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	}
	MR_np_localcall_lab(check_hlds__inst_util__abstractly_unify_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_list_8_0_i8);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_list_8_0_i10);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_8_0,32)
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

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_1);

MR_BEGIN_MODULE(check_hlds__inst_util_module10)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0);
	MR_init_label8(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,5,4,3,8,22,20,24,25)
	MR_init_label7(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,16,27,10,11,30,31,1)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i4);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
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
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i8);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr8 = MR_sv(2);
	MR_r5 = MR_ctfield(1, MR_tempr8, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i11);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i11);
	}
	MR_tempr9 = MR_sv(3);
	MR_r5 = MR_ctfield(1, MR_tempr9, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i11);
	}
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr9, 0), 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_ctfield(1, MR_tempr8, 0), 0);
	MR_r6 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i16);
	}
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i16);
	}
	MR_r7 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	if ((MR_r7 != MR_tempr3)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i11);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr2, 0);
	MR_r7 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i20);
	}
	MR_tempr5 = MR_ctfield(1, MR_tempr1, 0);
	MR_r6 = MR_tempr5;
	if (MR_PTAG_TESTR(MR_tempr5,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i22);
	}
	MR_tempr6 = MR_ctfield(0, MR_tempr4, 0);
	MR_tempr7 = MR_ctfield(0, MR_tempr5, 0);
	if ((strcmp((char *)MR_tempr6, (char *)MR_tempr7) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i11);
	}
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r7, 0);
	MR_tempr2 = MR_ctfield(1, MR_r6, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i11);
	}
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r5, 0);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i24);
	}
	MR_tempr2 = MR_ctfield(1, MR_r7, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)MR_tempr3) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i11);
	}
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i25);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i10);
	}
	if ((strcmp((char *)MR_sv(5), (char *)MR_sv(4)) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i10);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r6;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i27);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i10);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i30);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0_i31);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(3);
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

MR_BEGIN_MODULE(check_hlds__inst_util_module11)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0);
	MR_init_label8(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,3,43,149,16,14,18,19,10)
	MR_init_label8(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,21,23,24,26,29,28,8,9)
	MR_init_label6(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,33,34,32,36,39,1)
MR_BEGIN_CODE

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
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i43);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 6;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i149);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 7;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr7 = MR_r2;
	MR_sv(11) = MR_ctfield(1, MR_tempr7, 1);
	MR_tempr8 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr8, 0);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tempr2;
	MR_tempr3 = MR_ctfield(1, MR_tempr7, 0);
	MR_r7 = MR_tempr3;
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(7) = MR_tempr4;
	MR_sv(6) = MR_ctfield(1, MR_tempr8, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr3, 1);
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i10);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i10);
	}
	MR_r6 = MR_ctfield(1, MR_tempr4, 1);
	MR_r7 = MR_ctfield(1, MR_tempr2, 1);
	if ((MR_r6 != MR_r7)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i9);
	}
	MR_tempr5 = MR_ctfield(1, MR_tempr4, 0);
	MR_r6 = MR_tempr5;
	if (MR_PTAG_TESTR(MR_tempr5,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i14);
	}
	MR_tempr6 = MR_ctfield(1, MR_tempr2, 0);
	MR_r7 = MR_tempr6;
	if (MR_PTAG_TESTR(MR_tempr6,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i16);
	}
	MR_r8 = MR_ctfield(0, MR_tempr5, 0);
	MR_r6 = MR_ctfield(0, MR_tempr6, 0);
	if ((strcmp((char *)MR_r8, (char *)MR_r6) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i9);
	}
	MR_sv(3) = MR_tempr8;
	MR_r3 = MR_r1;
	MR_sv(2) = MR_tempr7;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i23);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_ctfield(0, MR_r6, 0);
	MR_r6 = MR_ctfield(1, MR_r7, 1);
	if ((strcmp((char *)MR_r8, (char *)MR_r6) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i9);
	}
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i23);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(9), 0);
	MR_r7 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i18);
	}
	MR_r8 = MR_ctfield(1, MR_r6, 1);
	MR_r6 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_r8, (char *)MR_r6) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i9);
	}
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i23);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(12) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r6;
	MR_sv(13) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i19);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i8);
	}
	if ((strcmp((char *)MR_sv(13), (char *)MR_sv(12)) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i8);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i23);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i21);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i8);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i24);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i26);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i1);
	}
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i29);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i28);
	}
	MR_sv(1) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_detism_3_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i39);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_detism_3_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i39);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i33);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i32);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_localcall_lab(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i34);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_detism_3_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i39);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_localcall_lab(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i36);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_detism_3_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0_i39);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module12)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
	MR_init_label6(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0,2,8,4,12,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
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
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_final_3_0,
		check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0_i8);
MR_def_label(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0_i4);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(4);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0_i10);
	}
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_ctfield(3, MR_sv(3), 1);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0_i12);
MR_def_label(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
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


MR_BEGIN_MODULE(check_hlds__inst_util_module13)
	MR_init_entry1(check_hlds__inst_util__make_ground_inst_list_8_0);
	MR_init_label5(check_hlds__inst_util__make_ground_inst_list_8_0,23,4,6,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_ground_inst_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_8_0_i23);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_ground_inst_list_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_inst_8_0,
		check_hlds__inst_util__make_ground_inst_list_8_0_i4);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(4);
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_ground_inst_list_8_0,
		check_hlds__inst_util__make_ground_inst_list_8_0_i6);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_ground_inst_list_8_0_i8);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
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

MR_BEGIN_MODULE(check_hlds__inst_util_module14)
	MR_init_entry1(check_hlds__inst_util__make_ground_inst_8_0);
	MR_init_label8(check_hlds__inst_util__make_ground_inst_8_0,4,6,5,117,9,118,12,14)
	MR_init_label8(check_hlds__inst_util__make_ground_inst_8_0,121,16,18,20,122,22,123,25)
	MR_init_label8(check_hlds__inst_util__make_ground_inst_8_0,27,65,124,31,32,34,36,33)
	MR_init_label8(check_hlds__inst_util__make_ground_inst_8_0,39,40,41,42,43,44,46,47)
	MR_init_label8(check_hlds__inst_util__make_ground_inst_8_0,48,49,50,51,54,52,57,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_ground_inst_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__inst_util__make_ground_inst_8_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_ground_inst_8_0_i117) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_ground_inst_8_0_i118) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_ground_inst_8_0_i14));
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i5);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
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
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Integer) 6;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_ground_inst_8_0_i9);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_ground_inst_8_0_i12);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__inst_util__make_ground_inst_8_0_i121) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_ground_inst_8_0_i122) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_ground_inst_8_0_i123) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_ground_inst_8_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_ground_inst_8_0_i124) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_ground_inst_8_0_i57));
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r5;
	MR_tempr4 = MR_r1;
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr1 = MR_tempr4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_ground_inst_8_0_i16);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_bound_inst_list_8_0,
		check_hlds__inst_util__make_ground_inst_8_0_i18);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i20);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_ground_inst_8_0_i22);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,22)
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
	MR_r4 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__check_hlds__inst_util__this_file_0_0,
		check_hlds__inst_util__make_ground_inst_8_0_i25);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("make_ground_inst: free inst var", 31);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__inst_util__make_ground_inst_8_0_i65);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 2);
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_ground_inst_8_0_i31);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_ground_insts_2_0,
		check_hlds__inst_util__make_ground_inst_8_0_i32);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i34);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i33);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r1 = MR_ctfield(1, MR_r4, 0);
	MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i51);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr2 = MR_sv(8);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr2;
	MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i51);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__inst_util__make_ground_inst_8_0_i39);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_ground_insts_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i40);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i41);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i42);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i43);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(check_hlds__inst_util__make_ground_inst_8_0,
		check_hlds__inst_util__make_ground_inst_8_0_i44);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_ground_inst_8_0_i46);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_ground_insts_2_0,
		check_hlds__inst_util__make_ground_inst_8_0_i47);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		check_hlds__inst_util__make_ground_inst_8_0_i48);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_ground_insts_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i49);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i50);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(8);
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_contains_instname_3_0,
		check_hlds__inst_util__make_ground_inst_8_0_i54);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_8_0_i52);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_ground_inst_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module15)
	MR_init_entry1(check_hlds__inst_util__make_ground_bound_inst_list_8_0);
	MR_init_label5(check_hlds__inst_util__make_ground_bound_inst_list_8_0,23,4,6,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_ground_bound_inst_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_bound_inst_list_8_0_i23);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_ground_bound_inst_list_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_inst_list_8_0,
		check_hlds__inst_util__make_ground_bound_inst_list_8_0_i4);
MR_def_label(check_hlds__inst_util__make_ground_bound_inst_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_bound_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(4);
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_ground_bound_inst_list_8_0,
		check_hlds__inst_util__make_ground_bound_inst_list_8_0_i6);
MR_def_label(check_hlds__inst_util__make_ground_bound_inst_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_bound_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_ground_bound_inst_list_8_0_i8);
MR_def_label(check_hlds__inst_util__make_ground_bound_inst_list_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
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

MR_BEGIN_MODULE(check_hlds__inst_util_module16)
	MR_init_entry1(check_hlds__inst_util__make_any_inst_8_0);
	MR_init_label8(check_hlds__inst_util__make_any_inst_8_0,4,6,5,114,9,10,12,13)
	MR_init_label8(check_hlds__inst_util__make_any_inst_8_0,118,15,16,18,20,119,22,23)
	MR_init_label8(check_hlds__inst_util__make_any_inst_8_0,120,26,28,65,121,32,33,35)
	MR_init_label8(check_hlds__inst_util__make_any_inst_8_0,37,34,40,41,42,43,44,45)
	MR_init_label8(check_hlds__inst_util__make_any_inst_8_0,47,48,49,50,51,52,55,53)
	MR_init_label2(check_hlds__inst_util__make_any_inst_8_0,58,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_any_inst_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__inst_util__make_any_inst_8_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_any_inst_8_0_i114) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_any_inst_8_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_any_inst_8_0_i13));
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i5);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_any_inst_8_0_i6);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Integer) 6;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0,
		check_hlds__inst_util__make_any_inst_8_0_i9);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_any_inst_8_0_i10);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr2, 0) = MR_r2;
	MR_tfield(2, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 3) = MR_r4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__inst_util__make_any_inst_8_0_i118) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_any_inst_8_0_i119) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_any_inst_8_0_i120) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_any_inst_8_0_i28) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_any_inst_8_0_i121) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_any_inst_8_0_i58));
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0,
		check_hlds__inst_util__make_any_inst_8_0_i15);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_any_inst_8_0_i16);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_bound_inst_list_8_0,
		check_hlds__inst_util__make_any_inst_8_0_i18);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i20);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0,
		check_hlds__inst_util__make_any_inst_8_0_i22);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_util__unify_uniq_6_0,
		check_hlds__inst_util__make_any_inst_8_0_i23);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__check_hlds__inst_util__this_file_0_0,
		check_hlds__inst_util__make_any_inst_8_0_i26);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("make_any_inst: free inst var", 28);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__inst_util__make_any_inst_8_0_i65);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 2);
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_0);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_any_inst_8_0_i32);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_any_insts_2_0,
		check_hlds__inst_util__make_any_inst_8_0_i33);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i35);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i34);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r1 = MR_ctfield(1, MR_r4, 0);
	MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i52);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr2 = MR_sv(8);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr2;
	MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i52);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__inst_util__make_any_inst_8_0_i40);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_any_insts_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i41);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i42);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i43);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i44);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(check_hlds__inst_util__make_any_inst_8_0,
		check_hlds__inst_util__make_any_inst_8_0_i45);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_any_inst_8_0_i47);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_any_insts_2_0,
		check_hlds__inst_util__make_any_inst_8_0_i48);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		check_hlds__inst_util__make_any_inst_8_0_i49);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_any_insts_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i50);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i51);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(8);
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_contains_instname_3_0,
		check_hlds__inst_util__make_any_inst_8_0_i55);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_8_0_i53);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_any_inst_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module17)
	MR_init_entry1(check_hlds__inst_util__make_any_bound_inst_list_8_0);
	MR_init_label5(check_hlds__inst_util__make_any_bound_inst_list_8_0,23,4,6,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_any_bound_inst_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_bound_inst_list_8_0_i23);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_any_bound_inst_list_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_inst_list_8_0,
		check_hlds__inst_util__make_any_bound_inst_list_8_0_i4);
MR_def_label(check_hlds__inst_util__make_any_bound_inst_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_bound_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(4);
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_any_bound_inst_list_8_0,
		check_hlds__inst_util__make_any_bound_inst_list_8_0_i6);
MR_def_label(check_hlds__inst_util__make_any_bound_inst_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_bound_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_any_bound_inst_list_8_0_i8);
MR_def_label(check_hlds__inst_util__make_any_bound_inst_list_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
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


MR_BEGIN_MODULE(check_hlds__inst_util_module18)
	MR_init_entry1(check_hlds__inst_util__make_any_inst_list_8_0);
	MR_init_label5(check_hlds__inst_util__make_any_inst_list_8_0,23,4,6,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_any_inst_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_8_0_i23);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_any_inst_list_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_inst_8_0,
		check_hlds__inst_util__make_any_inst_list_8_0_i4);
MR_def_label(check_hlds__inst_util__make_any_inst_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(4);
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_any_inst_list_8_0,
		check_hlds__inst_util__make_any_inst_list_8_0_i6);
MR_def_label(check_hlds__inst_util__make_any_inst_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_any_inst_list_8_0_i8);
MR_def_label(check_hlds__inst_util__make_any_inst_list_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
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


MR_BEGIN_MODULE(check_hlds__inst_util_module19)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0);
	MR_init_label6(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,39,8,10,12,40,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i39);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i40);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i40);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i1);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr1 = MR_tempr3;
	MR_r1 = MR_ctfield(1, MR_tempr5, 0);
	MR_tempr2 = MR_tempr4;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_8_0,
		check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i8);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i1);
	}
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,
		check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i10);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0_i12);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,40)
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


MR_BEGIN_MODULE(check_hlds__inst_util_module20)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0);
	MR_init_label8(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,83,3,12,10,14,15,6,17)
	MR_init_label4(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,20,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i3);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 7;
	MR_r4 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr7 = MR_r1;
	MR_sv(6) = MR_ctfield(1, MR_tempr7, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr7, 0);
	MR_r7 = MR_tempr1;
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i6);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i6);
	}
	MR_r7 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr8 = MR_r2;
	MR_r8 = MR_ctfield(1, MR_tempr8, 1);
	if ((MR_r7 != MR_r8)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i5);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	MR_r7 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i10);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr8, 0);
	MR_r8 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i12);
	}
	MR_tempr5 = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr6 = MR_ctfield(0, MR_tempr4, 0);
	if ((strcmp((char *)MR_tempr5, (char *)MR_tempr6) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i5);
	}
	MR_sv(1) = MR_tempr8;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i20);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r7, 0);
	MR_tempr2 = MR_ctfield(1, MR_r8, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i20);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i14);
	}
	MR_tempr2 = MR_ctfield(1, MR_r7, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)MR_tempr3) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i5);
	}
	MR_sv(1) = MR_tempr4;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i20);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r7;
	MR_sv(10) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i15);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i4);
	}
	if ((strcmp((char *)MR_sv(10), (char *)MR_sv(9)) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i4);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i20);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i17);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i4);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_list_lives_8_0,
		check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i20);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0_i83);
MR_def_label(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module21)
	MR_init_entry1(check_hlds__inst_util__make_ground_inst_list_lives_9_0);
	MR_init_label7(check_hlds__inst_util__make_ground_inst_list_lives_9_0,37,5,8,9,11,13,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_ground_inst_list_lives_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i37);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_ground_inst_list_lives_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_r7 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i5);
	}
	MR_r8 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r1 = MR_r7;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i8);
	}
MR_def_label(check_hlds__inst_util__make_ground_inst_list_lives_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r1 = MR_r7;
	MR_r2 = (MR_Integer) 1;
MR_def_label(check_hlds__inst_util__make_ground_inst_list_lives_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_inst_8_0,
		check_hlds__inst_util__make_ground_inst_list_lives_9_0_i9);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_lives_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r6 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_ground_inst_list_lives_9_0,
		check_hlds__inst_util__make_ground_inst_list_lives_9_0_i11);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_lives_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_ground_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_ground_inst_list_lives_9_0_i13);
MR_def_label(check_hlds__inst_util__make_ground_inst_list_lives_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
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


MR_BEGIN_MODULE(check_hlds__inst_util_module22)
	MR_init_entry1(check_hlds__inst_util__make_any_inst_list_lives_9_0);
	MR_init_label7(check_hlds__inst_util__make_any_inst_list_lives_9_0,37,5,8,9,11,13,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_any_inst_list_lives_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i37);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_any_inst_list_lives_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_r7 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i5);
	}
	MR_r8 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r1 = MR_r7;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i8);
	}
MR_def_label(check_hlds__inst_util__make_any_inst_list_lives_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r1 = MR_r7;
	MR_r2 = (MR_Integer) 1;
MR_def_label(check_hlds__inst_util__make_any_inst_list_lives_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_inst_8_0,
		check_hlds__inst_util__make_any_inst_list_lives_9_0_i9);
MR_def_label(check_hlds__inst_util__make_any_inst_list_lives_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r6 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_any_inst_list_lives_9_0,
		check_hlds__inst_util__make_any_inst_list_lives_9_0_i11);
MR_def_label(check_hlds__inst_util__make_any_inst_list_lives_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_any_inst_list_lives_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_par_conjunction_detism_3_0,
		check_hlds__inst_util__make_any_inst_list_lives_9_0_i13);
MR_def_label(check_hlds__inst_util__make_any_inst_list_lives_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
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


MR_BEGIN_MODULE(check_hlds__inst_util_module23)
	MR_init_entry1(check_hlds__inst_util__maybe_make_shared_inst_list_5_0);
	MR_init_label5(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,3,11,10,12,8)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__maybe_make_shared_inst_list_5_0_i10);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_shared_inst_4_0,
		check_hlds__inst_util__maybe_make_shared_inst_list_5_0_i11);
MR_def_label(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,
		check_hlds__inst_util__maybe_make_shared_inst_list_5_0_i12);
MR_def_label(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
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
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	MR_r2 = (MR_Word) MR_string_const("maybe_make_shared_inst_list: length mismatch", 44);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__is_solver_type_2_0);
MR_decl_entry(check_hlds__inst_match__inst_list_is_ground_or_any_or_dead_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module24)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0);
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,21,23,13,15,17,145,7,8)
	MR_init_label8(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,10,11,3,39,41,34,35,148)
	MR_init_label5(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,28,29,31,32,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i145);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i13);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	MR_sv(6) = MR_ctfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_tempr2 = MR_r8;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r7;
	}
	MR_np_call_localret_ent(check_hlds__type_util__is_solver_type_2_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i21);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r5;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_r6;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_inst_list_lives_9_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i23);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i35);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r8;
	MR_sv(5) = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_list_is_ground_or_any_or_dead_3_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i15);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_util__maybe_make_shared_inst_list_5_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i17);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i7) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1));
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r8;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i8);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_r2, 1);
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r5;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r6;
	MR_r6 = MR_r8;
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_inst_list_lives_9_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i11);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i148);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i34);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	MR_sv(3) = MR_ctfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_tempr2 = MR_r8;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r7;
	}
	MR_np_call_localret_ent(check_hlds__type_util__is_solver_type_2_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i39);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_any_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i41);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Integer) 6;
	MR_r4 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i28) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i31) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1));
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_ctfield(3, MR_r2, 1);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_r4 = MR_r6;
	MR_r5 = MR_r8;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_bound_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i29);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_r2, 1);
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r6;
	MR_r5 = MR_r8;
	MR_np_call_localret_ent(check_hlds__inst_util__make_ground_inst_list_8_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i32);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module25)
	MR_init_entry1(check_hlds__inst_util__abstractly_unify_inst_functor_11_0);
	MR_init_label6(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,2,5,9,7,3,1)
MR_BEGIN_CODE

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
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_11_0_i3);
	}
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	}
	MR_np_localcall_lab(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_11_0_i5);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_11_0_i1);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_final_3_0,
		check_hlds__inst_util__abstractly_unify_inst_functor_11_0_i9);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__abstractly_unify_inst_functor_11_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__inst_util__abstractly_unify_inst_functor_2_11_0);
MR_def_label(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_0);
MR_decl_entry(hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module26)
	MR_init_entry1(check_hlds__inst_util__make_mostly_uniq_inst_4_0);
	MR_init_label8(check_hlds__inst_util__make_mostly_uniq_inst_4_0,4,5,6,8,10,11,12,14)
	MR_init_label8(check_hlds__inst_util__make_mostly_uniq_inst_4_0,111,17,18,20,22,23,24,25)
	MR_init_label8(check_hlds__inst_util__make_mostly_uniq_inst_4_0,112,28,33,29,113,37,38,40)
	MR_init_label8(check_hlds__inst_util__make_mostly_uniq_inst_4_0,42,39,45,46,47,48,49,50)
	MR_init_label8(check_hlds__inst_util__make_mostly_uniq_inst_4_0,51,52,53,54,55,56,59,57)
	MR_init_label2(check_hlds__inst_util__make_mostly_uniq_inst_4_0,62,104)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__make_mostly_uniq_inst_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i6) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i104) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i14));
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i8) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i11) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i12));
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i111) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i18) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i25) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i112) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i113) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i62));
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, (MR_Integer) MR_tempr1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i17);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i20) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i22) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i22) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i23) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i24));
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	MR_r2 = (MR_Word) MR_string_const("make_mostly_uniq_inst: free inst var", 36);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_mostly_uniq_inst_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i28);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_final_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i33);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i29);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i37);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i38);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i40);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i39);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i42);
	}
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_ctfield(1, MR_r4, 0);
	MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i56);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i56);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i45);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i46);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i47);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i48);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i49);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__inst_util__make_mostly_uniq_inst_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i50);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i51);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i52);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i53);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i54);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i55);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_contains_instname_3_0,
		check_hlds__inst_util__make_mostly_uniq_inst_4_0_i59);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_4_0_i57);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	MR_r2 = (MR_Word) MR_string_const("make_mostly_uniq_inst(abstract_inst)", 36);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_4_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module27)
	MR_init_entry1(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0);
	MR_init_label3(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0,
		check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0_i4);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,
		check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0_i5);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_0,5)
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


MR_BEGIN_MODULE(check_hlds__inst_util_module28)
	MR_init_entry1(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0);
	MR_init_label3(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_inst_4_0,
		check_hlds__inst_util__make_mostly_uniq_inst_list_4_0_i4);
MR_def_label(check_hlds__inst_util__make_mostly_uniq_inst_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
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

MR_decl_entry(parse_tree__prog_mode__in_mode_1_0);
MR_decl_entry(parse_tree__prog_mode__out_mode_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(fn__list__duplicate_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module29)
	MR_init_entry1(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0);
	MR_init_label4(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_mode__in_mode_1_0,
		fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0_i2);
MR_def_label(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_mode__out_mode_1_0,
		fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0_i3);
MR_def_label(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0_i4);
MR_def_label(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0_i5);
MR_def_label(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(check_hlds__inst_match__pred_inst_matches_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module30)
	MR_init_entry1(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0);
	MR_init_label4(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0,3,5,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0_i3);
MR_def_label(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,
		check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0_i5);
MR_def_label(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
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


MR_BEGIN_MODULE(check_hlds__inst_util_module31)
	MR_init_entry1(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0);
	MR_init_label4(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0,4,6,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0_i4);
MR_def_label(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,
		check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0_i6);
MR_def_label(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__pred_inst_matches_3_0,
		check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0_i7);
MR_def_label(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0,1)
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

MR_decl_entry(check_hlds__inst_match__unique_matches_initial_2_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module32)
	MR_init_entry1(check_hlds__inst_util__merge_uniq_3_0);
	MR_init_label2(check_hlds__inst_util__merge_uniq_3_0,4,2)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(check_hlds__inst_util_module33)
	MR_init_entry1(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0);
	MR_init_label3(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0,10,3,4)
MR_BEGIN_CODE

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
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_inst_list_uniq_6_0,
		check_hlds__inst_util__merge_bound_inst_list_uniq_6_0_i4);
MR_def_label(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module34)
	MR_init_entry1(check_hlds__inst_util__merge_inst_list_uniq_6_0);
	MR_init_label3(check_hlds__inst_util__merge_inst_list_uniq_6_0,10,3,4)
MR_BEGIN_CODE

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
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_inst_uniq_6_0,
		check_hlds__inst_util__merge_inst_list_uniq_6_0_i4);
MR_def_label(check_hlds__inst_util__merge_inst_list_uniq_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__inst_util__merge_inst_list_uniq_6_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);
MR_decl_entry(svset__insert_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module35)
	MR_init_entry1(check_hlds__inst_util__merge_inst_uniq_6_0);
	MR_init_label8(check_hlds__inst_util__merge_inst_uniq_6_0,29,6,9,10,11,13,15,17)
	MR_init_label7(check_hlds__inst_util__merge_inst_uniq_6_0,19,21,20,23,24,27,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__merge_inst_uniq_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i29) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i6) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i29) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i9));
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i28);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i13) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i15) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i17) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i19) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i27));
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i11);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i28);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	MR_r2 = (MR_Word) MR_string_const("merge_inst_uniq: unexpected inst_var", 36);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i29) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i6) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i29) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i9));
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__member_2_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i21);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_inst_uniq_6_0_i20);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(svset__insert_3_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i23);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i24);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i29) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i6) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i29) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__merge_inst_uniq_6_0_i9));
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__merge_inst_uniq_6_0_i28);
MR_def_label(check_hlds__inst_util__merge_inst_uniq_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module36)
	MR_init_entry1(check_hlds__inst_util__merge_uniq_bound_5_0);
	MR_init_label4(check_hlds__inst_util__merge_uniq_bound_5_0,4,2,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__merge_uniq_bound_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_match__unique_matches_initial_2_0,
		check_hlds__inst_util__merge_uniq_bound_5_0_i4);
MR_def_label(check_hlds__inst_util__merge_uniq_bound_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__merge_uniq_bound_5_0_i2);
	}
	MR_sv(1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__merge_uniq_bound_5_0_i7);
MR_def_label(check_hlds__inst_util__merge_uniq_bound_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	}
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__merge_uniq_bound_5_0_i7);
MR_def_label(check_hlds__inst_util__merge_uniq_bound_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
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

MR_BEGIN_MODULE(check_hlds__inst_util_module37)
	MR_init_entry1(check_hlds__inst_util__inst_merge_6_0);
	MR_init_label8(check_hlds__inst_util__inst_merge_6_0,2,3,5,7,4,10,11,12)
	MR_init_label8(check_hlds__inst_util__inst_merge_6_0,13,15,16,17,18,19,20,22)
	MR_init_label2(check_hlds__inst_util__inst_merge_6_0,21,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_util__inst_merge_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__inst_merge_6_0_i2);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_merge_insts_2_0,
		check_hlds__inst_util__inst_merge_6_0_i3);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__inst_util__inst_merge_6_0_i5);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_6_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_6_0_i7);
	}
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__inst_util__inst_merge_6_0_i20);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__inst_util__inst_merge_6_0_i20);
	}
MR_def_label(check_hlds__inst_util__inst_merge_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__inst_util__inst_merge_6_0_i10);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_merge_insts_3_0,
		check_hlds__inst_util__inst_merge_6_0_i11);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__inst_merge_6_0_i12);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_merge_2_6_0,
		check_hlds__inst_util__inst_merge_6_0_i13);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_6_0_i1);
	}
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_util__inst_merge_6_0_i15);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_merge_insts_2_0,
		check_hlds__inst_util__inst_merge_6_0_i16);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		check_hlds__inst_util__inst_merge_6_0_i17);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_merge_insts_3_0,
		check_hlds__inst_util__inst_merge_6_0_i18);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		check_hlds__inst_util__inst_merge_6_0_i19);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_contains_instname_3_0,
		check_hlds__inst_util__inst_merge_6_0_i22);
MR_def_label(check_hlds__inst_util__inst_merge_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_6_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__inst_merge_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_6_0,1)
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


MR_BEGIN_MODULE(check_hlds__inst_util_module38)
	MR_init_entry1(check_hlds__inst_util__inst_merge_2_6_0);
	MR_init_label3(check_hlds__inst_util__inst_merge_2_6_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__inst_merge_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__inst_merge_2_6_0_i2);
MR_def_label(check_hlds__inst_util__inst_merge_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__inst_util__inst_merge_2_6_0_i3);
MR_def_label(check_hlds__inst_util__inst_merge_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_2_6_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__inst_util__inst_merge_3_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(set__non_empty_1_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module39)
	MR_init_entry1(check_hlds__inst_util__inst_merge_3_6_0);
	MR_init_label7(check_hlds__inst_util__inst_merge_3_6_0,6,8,11,10,4,44,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__inst_merge_3_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_3_6_0_i44);
	}
	MR_r5 = MR_ctfield(3, MR_r1, 2);
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_3_6_0_i4);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r2, 1);
	MR_r1 = MR_r5;
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_merge_6_0,
		check_hlds__inst_util__inst_merge_3_6_0_i6);
MR_def_label(check_hlds__inst_util__inst_merge_3_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_3_6_0_i1);
	}
	MR_sv(3) = MR_r3;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r4 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__inst_util__inst_merge_3_6_0_i8);
MR_def_label(check_hlds__inst_util__inst_merge_3_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__non_empty_1_0,
		check_hlds__inst_util__inst_merge_3_6_0_i11);
MR_def_label(check_hlds__inst_util__inst_merge_3_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_3_6_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__inst_util__inst_merge_3_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__inst_util__inst_merge_3_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_np_tailcall_ent(check_hlds__inst_util__inst_merge_6_0);
MR_def_label(check_hlds__inst_util__inst_merge_3_6_0,44)
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


MR_BEGIN_MODULE(check_hlds__inst_util_module40)
	MR_init_entry1(check_hlds__inst_util__inst_merge_4_6_0);
	MR_init_label8(check_hlds__inst_util__inst_merge_4_6_0,108,111,341,92,93,96,94,98)
	MR_init_label8(check_hlds__inst_util__inst_merge_4_6_0,101,103,104,106,80,83,86,176)
	MR_init_label8(check_hlds__inst_util__inst_merge_4_6_0,4,5,350,10,11,13,349,17)
	MR_init_label8(check_hlds__inst_util__inst_merge_4_6_0,20,18,22,25,29,353,38,36)
	MR_init_label8(check_hlds__inst_util__inst_merge_4_6_0,42,40,46,50,33,56,60,63)
	MR_init_label8(check_hlds__inst_util__inst_merge_4_6_0,352,348,69,71,154,68,74,76)
	MR_init_label4(check_hlds__inst_util__inst_merge_4_6_0,77,78,340,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__inst_merge_4_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i4);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i80);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i340);
	}
	MR_tempr2 = MR_tag(MR_r2);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i341);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i108);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if ((MR_tempr2 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i154);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i340);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r5,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i111);
	}
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i340);
	}
	MR_r2 = MR_r1;
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i92) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i101) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i103));
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_bound_5_0,
		check_hlds__inst_util__inst_merge_4_6_0_i93);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i96);
	}
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i94);
	}
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_0,
		check_hlds__inst_util__inst_merge_4_6_0_i98);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i154);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i104);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i106);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i176);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i83);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i340);
	}
	MR_r5 = MR_ctfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r5,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i86);
	}
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i340);
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i5) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i25) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i340) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i340) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i340) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i348));
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r5 = MR_tag(MR_tempr1);
	if ((MR_r5 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i349);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i350) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i13) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i340) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i340) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i340) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i340));
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,350)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_r2, 2);
	MR_sv(4) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i10);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_util__bound_inst_list_merge_6_0,
		check_hlds__inst_util__inst_merge_4_6_0_i11);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	MR_np_tailcall_ent(check_hlds__inst_util__inst_merge_bound_ground_7_0);
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,349)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if ((MR_r5 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_bound_5_0,
		check_hlds__inst_util__inst_merge_4_6_0_i17);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i20);
	}
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i18);
	}
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_0,
		check_hlds__inst_util__inst_merge_4_6_0_i22);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r5 = MR_tag(MR_tempr1);
	if ((MR_r5 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i352);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i29) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i353) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i340) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i340) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i340) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_merge_4_6_0_i340));
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(check_hlds__inst_util__inst_merge_bound_ground_7_0);
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_r1;
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(6) = MR_tempr1;
	MR_tempr4 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(3) = MR_tempr2;
	MR_sv(1) = MR_ctfield(3, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i33);
	}
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i33);
	}
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr5 = MR_r4;
	MR_sv(2) = MR_tempr5;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r3 = MR_tempr5;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__pred_inst_matches_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i38);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i36);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i63);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__pred_inst_matches_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i42);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i40);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i63);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0,
		check_hlds__inst_util__inst_merge_4_6_0_i46);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_0,
		check_hlds__inst_util__inst_merge_4_6_0_i50);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i63);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0,
		check_hlds__inst_util__inst_merge_4_6_0_i56);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0,
		check_hlds__inst_util__inst_merge_4_6_0_i60);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i63);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if ((MR_r5 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i154);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i68);
	}
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_uniq_3_0,
		check_hlds__inst_util__inst_merge_4_6_0_i69);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i71);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__inst_util__inst_merge_4_6_0_i74);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__inst_util__inst_merge_4_6_0_i76);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		check_hlds__inst_util__inst_merge_4_6_0_i77);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_list_merge_6_0,
		check_hlds__inst_util__inst_merge_4_6_0_i78);
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_4_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,340)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__inst_merge_4_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__bound_inst_list_is_ground_2_0);
MR_decl_entry(check_hlds__type_util__type_constructors_3_0);
MR_decl_entry(check_hlds__mode_util__constructors_to_bound_insts_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
MR_decl_entry(list__sort_and_remove_dups_2_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module41)
	MR_init_entry1(check_hlds__inst_util__inst_merge_bound_ground_7_0);
	MR_init_label8(check_hlds__inst_util__inst_merge_bound_ground_7_0,4,8,7,11,12,2,13,19)
	MR_init_label8(check_hlds__inst_util__inst_merge_bound_ground_7_0,18,22,23,16,24,26,27,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__inst_merge_bound_ground_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__bound_inst_list_is_ground_2_0,
		check_hlds__inst_util__inst_merge_bound_ground_7_0_i4);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_bound_ground_7_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__unique_matches_initial_2_0,
		check_hlds__inst_util__inst_merge_bound_ground_7_0_i8);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_bound_ground_7_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__inst_merge_bound_ground_7_0_i11);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__inst_merge_bound_ground_7_0_i11);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0,
		check_hlds__inst_util__inst_merge_bound_ground_7_0_i12);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_0,
		check_hlds__inst_util__inst_merge_bound_ground_7_0_i13);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_bound_ground_7_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_bound_ground_7_0_i16);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__unique_matches_initial_2_0,
		check_hlds__inst_util__inst_merge_bound_ground_7_0_i19);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_bound_ground_7_0_i18);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__inst_merge_bound_ground_7_0_i22);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__inst_merge_bound_ground_7_0_i22);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_util__merge_bound_inst_list_uniq_6_0,
		check_hlds__inst_util__inst_merge_bound_ground_7_0_i23);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(4), 0);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__type_util__type_constructors_3_0,
		check_hlds__inst_util__inst_merge_bound_ground_7_0_i24);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_merge_bound_ground_7_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__constructors_to_bound_insts_4_0,
		check_hlds__inst_util__inst_merge_bound_ground_7_0_i26);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		check_hlds__inst_util__inst_merge_bound_ground_7_0_i27);
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__inst_util__inst_merge_4_6_0);
	}
MR_def_label(check_hlds__inst_util__inst_merge_bound_ground_7_0,1)
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


MR_BEGIN_MODULE(check_hlds__inst_util_module42)
	MR_init_entry1(check_hlds__inst_util__inst_list_merge_6_0);
	MR_init_label5(check_hlds__inst_util__inst_list_merge_6_0,34,7,9,35,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__inst_list_merge_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_list_merge_6_0_i34);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_list_merge_6_0_i35);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__inst_list_merge_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_list_merge_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_list_merge_6_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_sv(3) = MR_ctfield(1, MR_r3, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_merge_6_0,
		check_hlds__inst_util__inst_list_merge_6_0_i7);
MR_def_label(check_hlds__inst_util__inst_list_merge_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_list_merge_6_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(3);
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
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__inst_util__inst_list_merge_6_0,35)
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

MR_BEGIN_MODULE(check_hlds__inst_util_module43)
	MR_init_entry1(check_hlds__inst_util__bound_inst_list_merge_6_0);
	MR_init_label8(check_hlds__inst_util__bound_inst_list_merge_6_0,2,112,16,14,18,19,10,21)
	MR_init_label8(check_hlds__inst_util__bound_inst_list_merge_6_0,23,24,25,26,28,8,9,31)
	MR_init_label4(check_hlds__inst_util__bound_inst_list_merge_6_0,32,30,34,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__bound_inst_list_merge_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i2);
	}
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i112);
	}
	MR_r2 = MR_r1;
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr7 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr7, 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(10) = MR_tempr2;
	MR_tempr8 = MR_r1;
	MR_tempr3 = MR_ctfield(1, MR_tempr8, 0);
	MR_r6 = MR_tempr3;
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(8) = MR_tempr4;
	MR_sv(7) = MR_ctfield(1, MR_tempr7, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr8, 1);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr3, 1);
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i10);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i10);
	}
	MR_r7 = MR_ctfield(1, MR_tempr4, 1);
	MR_r8 = MR_ctfield(1, MR_tempr2, 1);
	if ((MR_r7 != MR_r8)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i9);
	}
	MR_tempr5 = MR_ctfield(1, MR_tempr4, 0);
	MR_r7 = MR_tempr5;
	if (MR_PTAG_TESTR(MR_tempr5,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i14);
	}
	MR_tempr6 = MR_ctfield(1, MR_tempr2, 0);
	MR_r8 = MR_tempr6;
	if (MR_PTAG_TESTR(MR_tempr6,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i16);
	}
	MR_r9 = MR_ctfield(0, MR_tempr5, 0);
	MR_r7 = MR_ctfield(0, MR_tempr6, 0);
	if ((strcmp((char *)MR_r9, (char *)MR_r7) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i9);
	}
	MR_sv(1) = MR_tempr8;
	MR_sv(2) = MR_tempr7;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr3;
	MR_sv(6) = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_sv(12) = MR_r4;
	MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i23);
	}
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_ctfield(0, MR_r7, 0);
	MR_r7 = MR_ctfield(1, MR_r8, 1);
	if ((strcmp((char *)MR_r9, (char *)MR_r7) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r5;
	MR_r2 = MR_sv(9);
	MR_sv(12) = MR_r4;
	MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i23);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(10), 0);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i18);
	}
	MR_r9 = MR_ctfield(1, MR_r7, 1);
	MR_r7 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_r9, (char *)MR_r7) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r5;
	MR_r2 = MR_sv(9);
	MR_sv(12) = MR_r4;
	MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i23);
	}
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r5;
	MR_sv(12) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(13) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r7;
	MR_sv(14) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i19);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i8);
	}
	if ((strcmp((char *)MR_sv(14), (char *)MR_sv(13)) != 0)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i8);
	}
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i23);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r5;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i21);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i8);
	}
	MR_r2 = MR_sv(9);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i24);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i25);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_list_merge_6_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i26);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__inst_util__bound_inst_list_merge_6_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i28);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(15);
	}
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r4 = MR_sv(12);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r5;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i31);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i30);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	MR_np_localcall_lab(check_hlds__inst_util__bound_inst_list_merge_6_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i32);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(15);
	}
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	MR_np_localcall_lab(check_hlds__inst_util__bound_inst_list_merge_6_0,
		check_hlds__inst_util__bound_inst_list_merge_6_0_i34);
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_util__bound_inst_list_merge_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(15);
	}
MR_def_label(check_hlds__inst_util__bound_inst_list_merge_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module44)
	MR_init_entry1(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0);
	MR_init_label8(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,40,5,7,8,9,6,12,15)
	MR_init_label6(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,17,19,21,22,29,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i1);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i5) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i15) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i17) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i1));
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i6);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i7);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i8);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,
		check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i9);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__inst_util__ground_inst_info_is_nonstandard_func_mode_2_0);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	MR_r2 = (MR_Word) MR_string_const("internal error: uninstantiated inst parameter", 45);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i29);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	}
	MR_np_call_localret_ent(set__member_2_0,
		check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i19);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__insert_3_0,
		check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i21);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i22);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0_i40);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module45)
	MR_init_entry1(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0);
	MR_init_label1(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0,2)
MR_BEGIN_CODE

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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0_i2);
MR_def_label(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__insert_2_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module46)
	MR_init_entry1(check_hlds__inst_util__inst_contains_any_2_3_0);
	MR_init_label8(check_hlds__inst_util__inst_contains_any_2_3_0,38,5,7,8,9,6,12,14)
	MR_init_label6(check_hlds__inst_util__inst_contains_any_2_3_0,16,18,19,26,4,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_util__inst_contains_any_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_tag(MR_tempr1);
	if ((MR_r4 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_contains_any_2_3_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(check_hlds__inst_util__inst_contains_any_2_3_0_i5) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_contains_any_2_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_contains_any_2_3_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_contains_any_2_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_contains_any_2_3_0_i14) MR_AND
		MR_LABEL_AP(check_hlds__inst_util__inst_contains_any_2_3_0_i27));
	}
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__inst_util__inst_contains_any_2_3_0_i6);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__inst_util__inst_contains_any_2_3_0_i7);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__inst_util__inst_contains_any_2_3_0_i8);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__inst_util__inst_contains_any_2_3_0,
		check_hlds__inst_util__inst_contains_any_2_3_0_i9);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("inst_util", 9);
	MR_r2 = (MR_Word) MR_string_const("internal error: uninstantiated inst parameter", 45);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__inst_util__inst_contains_any_2_3_0_i26);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		check_hlds__inst_util__inst_contains_any_2_3_0_i16);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__inst_util__inst_contains_any_2_3_0_i27);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__insert_2_0,
		check_hlds__inst_util__inst_contains_any_2_3_0_i18);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__inst_util__inst_contains_any_2_3_0_i19);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__inst_util__inst_contains_any_2_3_0_i38);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r4 == MR_mktag((MR_Integer) 1));
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__inst_util__inst_contains_any_2_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module47)
	MR_init_entry1(check_hlds__inst_util__inst_contains_any_2_0);
	MR_init_label1(check_hlds__inst_util__inst_contains_any_2_0,2)
MR_BEGIN_CODE

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
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__inst_util__inst_contains_any_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__lookup_var_3_0);

MR_BEGIN_MODULE(check_hlds__inst_util_module48)
	MR_init_entry1(check_hlds__inst_util__var_inst_contains_any_3_0);
	MR_init_label2(check_hlds__inst_util__var_inst_contains_any_3_0,2,3)
MR_BEGIN_CODE

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
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__inst_util__var_inst_contains_any_3_0_i2);
MR_def_label(check_hlds__inst_util__var_inst_contains_any_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__inst_util__var_inst_contains_any_3_0_i3);
MR_def_label(check_hlds__inst_util__var_inst_contains_any_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__inst_util__inst_contains_any_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module49)
	MR_init_entry1(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0);
	MR_init_label5(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0,17,8,13,14,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i17) MR_AND
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i16) MR_AND
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i17) MR_AND
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i8));
MR_def_label(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i16) MR_AND
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i17) MR_AND
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i16) MR_AND
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i16) MR_AND
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i13) MR_AND
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i16));
MR_def_label(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i14);
MR_def_label(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i17) MR_AND
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i16) MR_AND
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i17) MR_AND
		MR_LABEL_AP(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0_i8));
MR_def_label(fn__check_hlds__inst_util__inst_may_restrict_cons_ids_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_util_module50)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_105_110_115_116_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

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
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__inst_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__inst_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
