/*
** Automatically generated from `ml_disj_gen.m'
** by the Mercury compiler,
** version rotd-2011-07-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ml_disj_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.ml_disj_gen.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.ml_disj_gen.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ml_backend.ml_disj_gen.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ml_backend.ml_disj_gen.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "ml_backend.ml_disj_gen.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ml_backend.ml_disj_gen.c"
#line 49 "ml_backend.ml_disj_gen.c"
#include "ml_backend.ml_disj_gen.mh"

#line 52 "ml_backend.ml_disj_gen.c"
#line 53 "ml_backend.ml_disj_gen.c"
#ifndef ML_BACKEND__ML_DISJ_GEN_DECL_GUARD
#define ML_BACKEND__ML_DISJ_GEN_DECL_GUARD

#line 57 "ml_backend.ml_disj_gen.c"
#line 58 "ml_backend.ml_disj_gen.c"

#endif
#line 61 "ml_backend.ml_disj_gen.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_Word * f2;
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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];
MR_decl_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0, 19,5,7)
MR_decl_label4(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0, 4,3,6,7)
MR_decl_label10(ml_backend__ml_disj_gen__ml_gen_disj_7_0, 3,10,12,13,11,15,16,17,19,20)
MR_decl_label8(ml_backend__ml_disj_gen__ml_gen_disj_7_0, 22,24,27,9,29,30,8,6)
MR_decl_label10(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0, 2,3,4,5,6,7,10,12,13,14)
MR_decl_label10(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0, 15,16,17,18,19,20,21,23,24,38)
MR_decl_label10(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0, 4,3,6,9,8,12,13,14,15,19)
MR_decl_label1(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0, 11)
MR_decl_static(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0)
MR_decl_static(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0)
MR_def_extern_entry(ml_backend__ml_disj_gen__ml_gen_disj_7_0)
MR_decl_static(ml_backend__ml_disj_gen__IntroducedFrom__pred__ml_gen_lookup_disj__316__1_3_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0)

static const struct mercury_type_0 mercury_common_0[3] =
{
{
7
},
{
0
},
{
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
static const struct mercury_type_1 mercury_common_1[6] =
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
MR_LIST_CTOR_ADDR,
MR_COMMON(1,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,0),
MR_COMMON(1,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
}
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
0,
MR_TAG_COMMON(2,0,1)
},
{
0,
MR_TAG_COMMON(2,0,2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_disj_gen__ml_gen_disj_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_disj_gen__ml_gen_disj_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,4),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
},
};

MR_decl_entry(fn__ml_backend__ml_util__wrap_init_obj_1_0);
static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(fn__ml_backend__ml_util__wrap_init_obj_1_0),
0
},
};


static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_util",
"ml_backend.ml_util",
"wrap_init_obj",
2,
0
},
"ml_backend.ml_disj_gen",
"ml_disj_gen.m",
373,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_disj_gen__ml_gen_disj_7_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"ml_generate_constants_for_arm",
5,
0
},
"ml_backend.ml_disj_gen",
"ml_disj_gen.m",
177,
"43"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_2 = {
{
MR_FUNCTION,
"ml_backend.mlds",
"ml_backend.mlds",
"mercury_type_to_mlds_type",
3,
0
},
"ml_backend.ml_disj_gen",
"ml_disj_gen.m",
318,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_disj_gen",
"ml_backend.ml_disj_gen",
"lambda_ml_disj_gen_m_316",
3,
0
},
"ml_backend.ml_disj_gen",
"ml_disj_gen.m",
316,
"14"
};


MR_decl_entry(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0);
MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_test_success_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_block_3_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ml_backend__ml_disj_gen_module0)
	MR_init_entry1(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0);
	MR_init_label10(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,4,3,6,9,8,12,13,14,15,19)
	MR_init_label1(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_ordinary_model_det_semi_disj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,
		ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0_i4);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0_i6);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,
		ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0_i9);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,
		ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0_i12);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_test_success_2_0,
		ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0_i13);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	}
	MR_np_localcall_lab(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,
		ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0_i14);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0_i15);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(3, MR_r2, 2) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0_i19);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_disj_gen", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_disj_gen.ml_gen_ordinary_model_det_semi_disj\'/7", 72);
	MR_r3 = (MR_Word) MR_string_const("model_non disjunct in model_det or model_semi disjunction", 57);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_target_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_0);
MR_decl_entry(ml_backend__ml_global_data__ml_gen_static_vector_type_9_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(ml_backend__ml_global_data__ml_gen_static_vector_defn_6_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_lval_4_0);
MR_decl_entry(ml_backend__ml_code_util__ml_generate_field_assigns_10_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__ml_disj_gen_module1)
	MR_init_entry1(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0);
	MR_init_label10(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,2,3,4,5,6,7,10,12,13,14)
	MR_init_label10(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,15,16,17,18,19,20,21,23,24,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_lookup_disj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(10) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i2);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i3);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i4);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i5);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_target_2_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i6);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i7);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_disj_gen__IntroducedFrom__pred__ml_gen_lookup_disj__316__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i10);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i12);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i13);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_gen_static_vector_type_9_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i14);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i15);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(list__length_2_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i16);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_gen_static_vector_defn_6_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i17);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i18);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("slot", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i19);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i20);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i21);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_tempr3 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(11);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_generate_field_assigns_10_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i23);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i24);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tempr6 = MR_sv(8);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tempr7 = MR_sv(1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr2, 3) = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr4, 0) = MR_tempr6;
	MR_tfield(2, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_r1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr1;
	MR_sv(8) = MR_tempr3;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0_i38);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr6 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 22);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr3;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_failure_5_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(ml_backend__ml_disj_gen_module2)
	MR_init_entry1(ml_backend__ml_disj_gen__ml_gen_disj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_disj_gen__ml_gen_disj_7_0);
	MR_init_label10(ml_backend__ml_disj_gen__ml_gen_disj_7_0,3,10,12,13,11,15,16,17,19,20)
	MR_init_label8(ml_backend__ml_disj_gen__ml_gen_disj_7_0,22,24,27,9,29,30,8,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_disj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_disj_gen__ml_gen_disj_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_disj_gen__ml_gen_disj_7_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_gen_failure_5_0);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_disj_gen__ml_gen_disj_7_0_i6);
	}
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__ml_disj_gen__ml_gen_disj_7_0_i8);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_target_2_0,
		ml_backend__ml_disj_gen__ml_gen_disj_7_0_i10);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_disj_gen__ml_gen_disj_7_0_i12);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_disj_gen__ml_gen_disj_7_0_i11);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_disj_gen__ml_gen_disj_7_0_i13);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_disj_gen__ml_gen_disj_7_0_i11);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(ml_backend__ml_disj_gen__ml_gen_disj_7_0_i9);
	}
	MR_r1 = MR_sv(6);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_disj_gen__ml_gen_disj_7_0_i15);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_disj_gen__ml_gen_disj_7_0_i16);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 429;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_disj_gen__ml_gen_disj_7_0_i17);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_disj_gen__ml_gen_disj_7_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		ml_backend__ml_disj_gen__ml_gen_disj_7_0_i19);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0,
		ml_backend__ml_disj_gen__ml_gen_disj_7_0_i20);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_disj_gen__ml_gen_disj_7_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		ml_backend__ml_disj_gen__ml_gen_disj_7_0_i22);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ml_backend__ml_disj_gen__ml_gen_disj_7_0_i24);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_util__ml_generate_constants_for_arm_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_disj_gen__ml_gen_disj_7_0_i27);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_0);
	}
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,
		ml_backend__ml_disj_gen__ml_gen_disj_7_0_i29);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0,
		ml_backend__ml_disj_gen__ml_gen_disj_7_0_i30);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_r6;
	MR_np_tailcall_ent(ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_0);
MR_def_label(ml_backend__ml_disj_gen__ml_gen_disj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_disj_gen", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_disj_gen.ml_gen_disj\'/7", 48);
	MR_r3 = (MR_Word) MR_string_const("single disjunct", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ml_backend__ml_disj_gen_module3)
	MR_init_entry1(ml_backend__ml_disj_gen__IntroducedFrom__pred__ml_gen_lookup_disj__316__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_disj_gen__IntroducedFrom__pred__ml_gen_lookup_disj__316__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__ml_gen_lookup_disj__316__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_disj_gen__IntroducedFrom__pred__ml_gen_lookup_disj__316__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_disj_gen_module4)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0);
	MR_init_label4(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0,4,3,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ml_gen_ordinary_model_non_disj__[3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_disj_gen_module5)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0);
	MR_init_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0,19,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ml_construct_disjunction_vector__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_disj_gen_maybe_bunch_0(void)
{
	ml_backend__ml_disj_gen_module0();
	ml_backend__ml_disj_gen_module1();
	ml_backend__ml_disj_gen_module2();
	ml_backend__ml_disj_gen_module3();
	ml_backend__ml_disj_gen_module4();
	ml_backend__ml_disj_gen_module5();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_disj_gen__init(void);
void mercury__ml_backend__ml_disj_gen__init_type_tables(void);
void mercury__ml_backend__ml_disj_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_disj_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_disj_gen__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__ml_disj_gen__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__ml_disj_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_disj_gen_maybe_bunch_0();
	mercury__ml_backend__ml_disj_gen__init_debugger();
}

void mercury__ml_backend__ml_disj_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ml_backend__ml_disj_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_disj_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_disj_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_disj_gen__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__ml_disj_gen__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
