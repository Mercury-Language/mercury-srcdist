/*
** Automatically generated from `rbmm.live_variable_analysis.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__rbmm__live_variable_analysis__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.rbmm.live_variable_analysis.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.rbmm.live_variable_analysis.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.rbmm.live_variable_analysis.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.rbmm.live_variable_analysis.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.rbmm.live_variable_analysis.c"
#line 44 "transform_hlds.rbmm.live_variable_analysis.c"
#include "transform_hlds.rbmm.live_variable_analysis.mh"

#line 47 "transform_hlds.rbmm.live_variable_analysis.c"
#line 48 "transform_hlds.rbmm.live_variable_analysis.c"
#ifndef TRANSFORM_HLDS__RBMM__LIVE_VARIABLE_ANALYSIS_DECL_GUARD
#define TRANSFORM_HLDS__RBMM__LIVE_VARIABLE_ANALYSIS_DECL_GUARD

#line 52 "transform_hlds.rbmm.live_variable_analysis.c"
#line 53 "transform_hlds.rbmm.live_variable_analysis.c"

#endif
#line 56 "transform_hlds.rbmm.live_variable_analysis.c"

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
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[10];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];
MR_decl_label5(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0, 3,2,5,6,7)
MR_decl_label8(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0, 2,6,7,8,9,4,14,15)
MR_decl_label8(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0, 16,17,10,21,20,19,29,30)
MR_decl_label1(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0, 31)
MR_decl_label8(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0, 40,5,3,10,9,13,12,8)
MR_decl_label4(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0, 2,3,4,5)
MR_decl_label8(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0, 62,3,8,9,10,11,12,7)
MR_decl_label8(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0, 16,15,18,19,20,21,22,23)
MR_decl_label8(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0, 5,25,24,27,28,29,30,31)
MR_decl_label3(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0, 32,33,34)
MR_decl_label7(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0, 24,4,6,5,9,10,3)
MR_decl_label2(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0, 2,3)
MR_decl_label8(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0, 3,2,5,6,7,8,9,10)
MR_decl_label4(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0, 11,12,13,14)
MR_decl_label7(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0, 19,5,6,7,8,9,10)
MR_decl_label3(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0, 3,5,2)
MR_decl_label3(transform_hlds__rbmm__live_variable_analysis__void_var_4_0, 2,3,4)
MR_def_extern_entry(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0)
MR_decl_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0)
MR_decl_static(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0)
MR_decl_static(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0)
MR_decl_static(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0)
MR_decl_static(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0)
MR_decl_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0)
MR_decl_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0)
MR_decl_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0)
MR_decl_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0)
MR_decl_static(transform_hlds__rbmm__live_variable_analysis__void_var_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
static const struct mercury_type_0 mercury_common_0[11] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
MR_LIST_CTOR_ADDR,
MR_COMMON(1,1)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,2)
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
MR_COMMON(0,4)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,4)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,6)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,9)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_1 mercury_common_1[7] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(0,5)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,1,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,2),
MR_INT_CTOR_ADDR,
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0_1,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,2),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0_1;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,6),
MR_COMMON(0,7),
MR_COMMON(0,8),
MR_COMMON(0,8)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.live_variable_analysis",
"transform_hlds.rbmm.live_variable_analysis",
"live_variable_analysis_pred",
9,
0
},
"transform_hlds.rbmm.live_variable_analysis",
"rbmm.live_variable_analysis.m",
77,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.live_variable_analysis",
"transform_hlds.rbmm.live_variable_analysis",
"live_variable_analysis_proc",
10,
0
},
"transform_hlds.rbmm.live_variable_analysis",
"rbmm.live_variable_analysis.m",
90,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.live_variable_analysis",
"transform_hlds.rbmm.live_variable_analysis",
"void_var",
4,
0
},
"transform_hlds.rbmm.live_variable_analysis",
"rbmm.live_variable_analysis.m",
397,
"d1;c6;e;c2;"
};

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(map__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__foldl3_8_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module0)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0);
	MR_init_label4(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0_i2);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0_i3);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0_i4);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0_i5);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r9 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr2;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl3_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module1)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0);
	MR_init_label2(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0_i2);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0_i3);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_tempr2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr2;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl3_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module2)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0);
	MR_init_label3(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,3,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0_i3);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0_i5);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(svmap__set_4_0);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(svmap__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module3)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0);
	MR_init_label8(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,40,5,3,10,9,13,12,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i5);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.live_variable_analysis.m", 29);
	MR_r2 = (MR_Word) MR_string_const("get_inputs_outputs_proc_call_2: more actual arguments than formal ones", 70);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i10);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i40);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i13);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i40);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i40);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.live_variable_analysis.m", 29);
	MR_r2 = (MR_Word) MR_string_const("get_inputs_outputs_proc_call_2: more formal arguments that actual ones", 70);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module4)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0);
	MR_init_label8(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,2,6,7,8,9,4,14,15)
	MR_init_label8(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,16,17,10,21,20,19,29,30)
	MR_init_label1(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr1, 1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i29);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i6);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i7);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i8);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i9);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i29);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i10);
	}
	MR_r4 = MR_ctfield(0, MR_r3, 3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i14) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i15) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i16) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i17));
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i29);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i29);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(2, MR_tempr3, 0);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i29);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr3, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i29);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i21);
	}
	MR_r4 = MR_ctfield(3, MR_r3, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i19);
	}
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i20);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i19);
	}
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i29);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.live_variable_analysis.m", 29);
	MR_r2 = (MR_Word) MR_string_const("compute_useds_produceds: the expression must be either call, unify, true, or fail", 81);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i29);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i30);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i31);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(set__fold_4_1);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module5)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0);
	MR_init_label5(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,3,2,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0_i3);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0_i5);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__live_variable_analysis__void_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0_i6);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__fold_4_1,
		transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0_i7);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module6)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0);
	MR_init_label8(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,62,3,8,9,10,11,12,7)
	MR_init_label8(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,16,15,18,19,20,21,22,23)
	MR_init_label8(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,5,25,24,27,28,29,30,31)
	MR_init_label3(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,32,33,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i3);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_decr_sp_and_return(14);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr3 = MR_r7;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r8;
	MR_sv(8) = MR_r10;
	MR_sv(12) = MR_tempr1;
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_r9;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i8);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i9);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i10);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i11);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i12);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i34);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_tempr3 = MR_r8;
	MR_sv(6) = MR_tempr3;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(13) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i16);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i15);
	}
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i20);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i18);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(13);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i19);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(7);
	MR_r1 = MR_sv(13);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i21);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i22);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i23);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(14);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r8;
	MR_tempr3 = MR_r9;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_r10;
	MR_sv(13) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i25);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i24);
	}
	MR_r1 = MR_sv(3);
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i29);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i27);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i28);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i30);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i31);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i32);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i33);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i34);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(9);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i62);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module7)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0);
	MR_init_label7(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,19,5,6,7,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("rbmm.live_variable_analysis.m", 29);
	MR_r2 = (MR_Word) MR_string_const("live_variable_analysis_singleton_exec_path: impossible", 54);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i5);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i6);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i7);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i8);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i9);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i10);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module8)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0);
	MR_init_label7(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,24,4,6,5,9,10,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_ctfield(1, MR_r1, 1);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i4);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i6);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i5);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i10);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i9);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 1;
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i10);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r8 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i24);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__smm_common__some_are_special_preds_2_0);
MR_decl_entry(hlds__hlds_module__module_info_proc_info_3_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module9)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0);
	MR_init_label8(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,3,2,5,6,7,8,9,10)
	MR_init_label4(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__smm_common__some_are_special_preds_2_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i3);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i2);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(13);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i5);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i6);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i7);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i8);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i9);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i10);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i11);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i12);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i13);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i14);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
MR_decl_entry(string__substring_4_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module10)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__void_var_4_0);
	MR_init_label3(transform_hlds__rbmm__live_variable_analysis__void_var_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__void_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		transform_hlds__rbmm__live_variable_analysis__void_var_4_0_i2);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__void_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(string__substring_4_0,
		transform_hlds__rbmm__live_variable_analysis__void_var_4_0_i3);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__void_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__void_var_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__void_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__rbmm__live_variable_analysis_maybe_bunch_0(void)
{
	transform_hlds__rbmm__live_variable_analysis_module0();
	transform_hlds__rbmm__live_variable_analysis_module1();
	transform_hlds__rbmm__live_variable_analysis_module2();
	transform_hlds__rbmm__live_variable_analysis_module3();
	transform_hlds__rbmm__live_variable_analysis_module4();
	transform_hlds__rbmm__live_variable_analysis_module5();
	transform_hlds__rbmm__live_variable_analysis_module6();
	transform_hlds__rbmm__live_variable_analysis_module7();
	transform_hlds__rbmm__live_variable_analysis_module8();
	transform_hlds__rbmm__live_variable_analysis_module9();
	transform_hlds__rbmm__live_variable_analysis_module10();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__rbmm__live_variable_analysis__init(void);
void mercury__transform_hlds__rbmm__live_variable_analysis__init_type_tables(void);
void mercury__transform_hlds__rbmm__live_variable_analysis__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__rbmm__live_variable_analysis__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__rbmm__live_variable_analysis__init_complexity_procs(void);
#endif

void mercury__transform_hlds__rbmm__live_variable_analysis__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__rbmm__live_variable_analysis_maybe_bunch_0();
	mercury__transform_hlds__rbmm__live_variable_analysis__init_debugger();
}

void mercury__transform_hlds__rbmm__live_variable_analysis__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__rbmm__live_variable_analysis__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__rbmm__live_variable_analysis__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__rbmm__live_variable_analysis__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
