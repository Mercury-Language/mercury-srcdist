/*
** Automatically generated from `ctgc.util.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__ctgc__util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 27 "transform_hlds.ctgc.util.c"
#line 134 "../library/io.int2"
#include "io.mh"

#line 31 "transform_hlds.ctgc.util.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 35 "transform_hlds.ctgc.util.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "transform_hlds.ctgc.util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "transform_hlds.ctgc.util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "transform_hlds.ctgc.util.c"
#line 48 "transform_hlds.ctgc.util.c"
#include "transform_hlds.ctgc.util.mh"

#line 51 "transform_hlds.ctgc.util.c"
#line 52 "transform_hlds.ctgc.util.c"
#ifndef TRANSFORM_HLDS__CTGC__UTIL_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__UTIL_DECL_GUARD

#line 56 "transform_hlds.ctgc.util.c"
#line 57 "transform_hlds.ctgc.util.c"

#endif
#line 60 "transform_hlds.ctgc.util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label2(transform_hlds__ctgc__util__pred_requires_analysis_2_0, 4,1)
MR_decl_label8(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0, 2,3,6,8,9,10,4,1)
MR_decl_label2(transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0, 2,3)
MR_decl_label4(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0, 2,3,5,4)
MR_decl_label2(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0, 2,3)
MR_def_extern_entry(transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0)
MR_def_extern_entry(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0)
MR_def_extern_entry(transform_hlds__ctgc__util__pred_requires_analysis_2_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__util__get_type_substitution_4_0)
MR_decl_static(fn__transform_hlds__ctgc__util__get_pred_id_1_0)
MR_def_extern_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0)

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_INT_CTOR_ADDR
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,1),
MR_ENTRY_AP(fn__transform_hlds__ctgc__util__get_pred_id_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, special_pred_id),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_3 mercury_common_3[2] =
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.util",
"transform_hlds.ctgc.util",
"pred_requires_analysis",
2,
0
},
"transform_hlds.ctgc.util",
"ctgc.util.m",
84,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0_2 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.util",
"transform_hlds.ctgc.util",
"get_pred_id",
2,
0
},
"transform_hlds.ctgc.util",
"ctgc.util.m",
85,
"d1;c5;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__takewhile_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__util_module0)
	MR_init_entry1(transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0);
	MR_init_label2(transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__util__pred_requires_analysis_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0_i2);
MR_def_label(transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__takewhile_4_0,
		transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0_i3);
MR_def_label(transform_hlds__ctgc__util__preds_requiring_no_analysis_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 != (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_special_pred_map_2_0);
MR_decl_entry(map__values_2_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__util_module1)
	MR_init_entry1(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0);
	MR_init_label8(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0,2,3,6,8,9,10,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__util__pred_requires_no_analysis_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_special_pred_map_2_0,
		transform_hlds__ctgc__util__pred_requires_no_analysis_2_0_i2);
MR_def_label(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(map__values_2_0,
		transform_hlds__ctgc__util__pred_requires_no_analysis_2_0_i3);
MR_def_label(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__ctgc__util__pred_requires_no_analysis_2_0_i6);
MR_def_label(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ctgc__util__pred_requires_no_analysis_2_0_i8);
MR_def_label(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__ctgc__util__pred_requires_no_analysis_2_0_i9);
MR_def_label(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		transform_hlds__ctgc__util__pred_requires_no_analysis_2_0_i10);
MR_def_label(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0_i1);
	}
MR_def_label(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0,1)
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


MR_BEGIN_MODULE(transform_hlds__ctgc__util_module2)
	MR_init_entry1(transform_hlds__ctgc__util__pred_requires_analysis_2_0);
	MR_init_label2(transform_hlds__ctgc__util__pred_requires_analysis_2_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__util__pred_requires_analysis_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0,
		transform_hlds__ctgc__util__pred_requires_analysis_2_0_i4);
MR_def_label(transform_hlds__ctgc__util__pred_requires_analysis_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__util__pred_requires_analysis_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__util__pred_requires_analysis_2_0,1)
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

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(map__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__util_module3)
	MR_init_entry1(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0);
	MR_init_label2(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__util__get_variable_renaming_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		fn__transform_hlds__ctgc__util__get_variable_renaming_3_0_i2);
MR_def_label(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		fn__transform_hlds__ctgc__util__get_variable_renaming_3_0_i3);
MR_def_label(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(map__from_corresponding_lists_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__util_module4)
	MR_init_entry1(fn__transform_hlds__ctgc__util__get_type_substitution_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__util__get_type_substitution_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__util_module5)
	MR_init_entry1(fn__transform_hlds__ctgc__util__get_pred_id_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__util__get_pred_id_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(parse_tree__prog_type__type_list_subsumes_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__util_module6)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0);
	MR_init_label4(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0,2,3,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0_i2);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0_i3);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_subsumes_3_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0_i5);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0_i4);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_91_52_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__map__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ctgc__util_maybe_bunch_0(void)
{
	transform_hlds__ctgc__util_module0();
	transform_hlds__ctgc__util_module1();
	transform_hlds__ctgc__util_module2();
	transform_hlds__ctgc__util_module3();
	transform_hlds__ctgc__util_module4();
	transform_hlds__ctgc__util_module5();
	transform_hlds__ctgc__util_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__util__init(void);
void mercury__transform_hlds__ctgc__util__init_type_tables(void);
void mercury__transform_hlds__ctgc__util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__util__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__util__init_complexity_procs(void);
#endif

void mercury__transform_hlds__ctgc__util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__util_maybe_bunch_0();
	mercury__transform_hlds__ctgc__util__init_debugger();
}

void mercury__transform_hlds__ctgc__util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__ctgc__util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__util__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
