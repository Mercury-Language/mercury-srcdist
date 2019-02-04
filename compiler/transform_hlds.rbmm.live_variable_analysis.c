/*
** Automatically generated from `rbmm.live_variable_analysis.m'
** by the Mercury compiler,
** version rotd-2012-08-08, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__rbmm__live_variable_analysis__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.rbmm.live_variable_analysis.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "transform_hlds.rbmm.live_variable_analysis.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "transform_hlds.rbmm.live_variable_analysis.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "transform_hlds.rbmm.live_variable_analysis.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.rbmm.live_variable_analysis.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.rbmm.live_variable_analysis.c"
#line 49 "transform_hlds.rbmm.live_variable_analysis.c"
#include "transform_hlds.rbmm.live_variable_analysis.mh"

#line 52 "transform_hlds.rbmm.live_variable_analysis.c"
#line 53 "transform_hlds.rbmm.live_variable_analysis.c"
#ifndef TRANSFORM_HLDS__RBMM__LIVE_VARIABLE_ANALYSIS_DECL_GUARD
#define TRANSFORM_HLDS__RBMM__LIVE_VARIABLE_ANALYSIS_DECL_GUARD

#line 57 "transform_hlds.rbmm.live_variable_analysis.c"
#line 58 "transform_hlds.rbmm.live_variable_analysis.c"

#endif
#line 61 "transform_hlds.rbmm.live_variable_analysis.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[10];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];
MR_decl_label5(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0, 3,2,5,7,8)
MR_decl_label10(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0, 2,8,9,10,11,5,15,18,20,44)
MR_decl_label7(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0, 22,12,27,25,35,36,37)
MR_decl_label7(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0, 52,3,10,9,14,13,8)
MR_decl_label4(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0, 2,3,4,5)
MR_decl_label10(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0, 67,3,9,8,11,12,13,14,15,16)
MR_decl_label10(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0, 7,17,18,19,20,21,22,5,25,24)
MR_decl_label8(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0, 27,28,29,30,31,32,33,34)
MR_decl_label8(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0, 26,3,4,6,8,5,9,10)
MR_decl_label2(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0, 2,3)
MR_decl_label10(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0, 5,3,7,8,9,10,11,12,13,14)
MR_decl_label2(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0, 15,16)
MR_decl_label10(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0, 4,5,6,7,8,10,9,12,14,15)
MR_decl_label2(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0, 16,3)
MR_decl_label3(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0, 3,5,2)
MR_decl_label3(transform_hlds__rbmm__live_variable_analysis__void_var_4_0, 2,4,3)
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
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,3)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(0,6)
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(0,6)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
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
MR_COMMON(0,5)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(0,7)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,5)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
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
MR_COMMON(1,4),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
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
MR_COMMON(1,4),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_INT_CTOR_ADDR,
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_1;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,8),
MR_COMMON(0,9),
MR_COMMON(0,10),
MR_COMMON(0,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,8),
MR_COMMON(0,9),
MR_COMMON(0,10),
MR_COMMON(0,10)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_1 = {
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
376,
"12"
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
376,
"12"
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
83,
"13"
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
70,
"11"
};


MR_decl_entry(hlds__hlds_module__module_info_get_valid_predids_3_0);
MR_decl_entry(map__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__foldl3_8_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module0)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0);
	MR_init_label4(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'live_variable_analysis'/5 mode 0 */
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
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0_i2);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0_i3);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
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
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_r2;
	MR_r4 = MR_r2;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_tempr2;
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0);
	MR_init_label2(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'live_variable_analysis_pred'/9 mode 0 */
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
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_r2;
	MR_r4 = MR_r2;
	MR_r6 = MR_tempr2;
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
MR_decl_entry(fn__set__union_2_0);
MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module2)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0);
	MR_init_label3(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,3,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_live_vars_at_prog_point'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0_i3);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0_i5);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__set_4_0);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module3)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0);
	MR_init_label7(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,52,3,10,9,14,13,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_inputs_outputs_proc_call_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i8);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
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
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i52);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i14);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i13);
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
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i52);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0_i52);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.rbmm.live_variable_analysis", 42);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.rbmm.live_variable_analysis.get_inputs_outputs_proc_call_2\'/8", 87);
	MR_r3 = (MR_Word) MR_string_const("mismatched lists", 16);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(set__list_to_set_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module4)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0);
	MR_init_label10(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,2,8,9,10,11,5,15,18,20,44)
	MR_init_label7(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,22,12,27,25,35,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_useds_produceds'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i2);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_tempr1, 1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i35);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(2, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i8);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i9);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i10);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i11);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i35);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r3, 3);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i15);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(2, MR_tempr1, 1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(2, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i35);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i35);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i20);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i35);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i22);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i35);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr2, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_tempr2, 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i35);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i27);
	}
	MR_r4 = MR_tfield(3, MR_r3, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i25);
	}
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i44);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i44);
	}
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.rbmm.live_variable_analysis", 42);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.rbmm.live_variable_analysis.compute_useds_produceds\'/4", 80);
	MR_r3 = (MR_Word) MR_string_const("the expression must be either call, unify, true, or fail", 56);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i35);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(set__list_to_set_2_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i36);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0_i37);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
MR_decl_entry(set__fold_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module5)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0);
	MR_init_label5(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,3,2,5,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'collect_void_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
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
	MR_r1 = MR_sv(2);
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
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0_i7);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0_i8);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__list_to_set_1_0);
MR_decl_entry(fn__set__difference_2_0);
MR_decl_entry(set__union_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module6)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0);
	MR_init_label10(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,67,3,9,8,11,12,13,14,15,16)
	MR_init_label10(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,7,17,18,19,20,21,22,5,25,24)
	MR_init_label8(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,27,28,29,30,31,32,33,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'live_variable_analysis_exec_path'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i3);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_decr_sp_and_return(13);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i5);
	}
	MR_r6 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_tempr3 = MR_r8;
	MR_sv(9) = MR_tempr3;
	MR_sv(6) = MR_r9;
	MR_sv(5) = MR_r10;
	MR_sv(12) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i9);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i8);
	}
	MR_r2 = MR_sv(7);
	MR_sv(3) = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i13);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i11);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i12);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r1 = MR_sv(12);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i14);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i15);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i16);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_sv(7) = MR_tempr2;
	MR_sv(9) = MR_r8;
	MR_sv(5) = MR_r10;
	MR_sv(11) = MR_r6;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r9;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i17);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i18);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__set__difference_2_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i19);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(set__union_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i20);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i21);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i22);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i67);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(9) = MR_r8;
	MR_tempr3 = MR_r9;
	MR_sv(6) = MR_tempr3;
	MR_sv(5) = MR_r10;
	MR_sv(12) = MR_tempr2;
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
	MR_r1 = MR_sv(1);
	MR_sv(7) = MR_r2;
	MR_r3 = MR_sv(8);
	MR_sv(8) = MR_sv(6);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i29);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i27);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i28);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i30);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__set__difference_2_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i31);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(set__union_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i32);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i33);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i34);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0_i67);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module7)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0);
	MR_init_label10(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,4,5,6,7,8,10,9,12,14,15)
	MR_init_label2(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,16,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'live_variable_analysis_singleton_exec_path'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(5) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i4);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i5);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i6);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i7);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i8);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i10);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i9);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i12);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__live_variable_analysis__void_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i14);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i15);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0_i16);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.rbmm.live_variable_analysis", 42);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.rbmm.live_variable_analysis.live_variable_analysis_singleton_exec_path\'/11", 100);
	MR_r3 = (MR_Word) MR_string_const("empty list", 10);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module8)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0);
	MR_init_label8(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,26,3,4,6,8,5,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'live_variable_analysis_exec_paths'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tfield(1, MR_r1, 1);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i4);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
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
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i8);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i26);
	}
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i9);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i10);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0_i26);
	}
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0);
	MR_init_label10(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,5,3,7,8,9,10,11,12,13,14)
	MR_init_label2(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'live_variable_analysis_proc'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__smm_common__some_are_special_preds_2_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i5);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(14);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i7);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i8);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i9);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i10);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i11);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i12);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i13);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i14);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i15);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0_i16);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
MR_decl_entry(string__index_3_0);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_variable_analysis_module10)
	MR_init_entry1(transform_hlds__rbmm__live_variable_analysis__void_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_variable_analysis__void_var_4_0);
	MR_init_label3(transform_hlds__rbmm__live_variable_analysis__void_var_4_0,2,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'void_var'/4 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		transform_hlds__rbmm__live_variable_analysis__void_var_4_0_i2);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__void_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(string__index_3_0,
		transform_hlds__rbmm__live_variable_analysis__void_var_4_0_i4);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__void_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__void_var_4_0_i3);
	}
	if (((MR_Integer) 95 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_variable_analysis__void_var_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set__insert_3_0);
MR_def_label(transform_hlds__rbmm__live_variable_analysis__void_var_4_0,3)
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
void mercury__transform_hlds__rbmm__live_variable_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__rbmm__live_variable_analysis__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__rbmm__live_variable_analysis__init_threadscope_string_table(void);
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

void mercury__transform_hlds__rbmm__live_variable_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__rbmm__live_variable_analysis);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__rbmm__live_variable_analysis__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__rbmm__live_variable_analysis__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
