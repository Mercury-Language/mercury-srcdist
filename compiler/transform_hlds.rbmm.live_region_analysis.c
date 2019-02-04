/*
** Automatically generated from `rbmm.live_region_analysis.m'
** by the Mercury compiler,
** version rotd-2009-10-23, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__rbmm__live_region_analysis__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.rbmm.live_region_analysis.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.rbmm.live_region_analysis.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.rbmm.live_region_analysis.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.rbmm.live_region_analysis.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "transform_hlds.rbmm.live_region_analysis.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "transform_hlds.rbmm.live_region_analysis.c"
#line 48 "transform_hlds.rbmm.live_region_analysis.c"
#include "transform_hlds.rbmm.live_region_analysis.mh"

#line 51 "transform_hlds.rbmm.live_region_analysis.c"
#line 52 "transform_hlds.rbmm.live_region_analysis.c"
#ifndef TRANSFORM_HLDS__RBMM__LIVE_REGION_ANALYSIS_DECL_GUARD
#define TRANSFORM_HLDS__RBMM__LIVE_REGION_ANALYSIS_DECL_GUARD

#line 56 "transform_hlds.rbmm.live_region_analysis.c"
#line 57 "transform_hlds.rbmm.live_region_analysis.c"

#endif
#line 60 "transform_hlds.rbmm.live_region_analysis.c"

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
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_0, 10,3,4)
MR_decl_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_0, 10,3,4)
MR_decl_label9(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0, 2,5,6,7,8,9,10,11,12)
MR_decl_label2(transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_0, 2,3)
MR_decl_label10(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0, 5,3,8,10,11,13,14,15,16,18)
MR_decl_label10(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0, 19,20,21,22,23,24,25,26,27,28)
MR_decl_label10(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0, 31,33,35,36,37,38,39,40,41,42)
MR_decl_label4(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0, 43,44,7,45)
MR_decl_label3(transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0, 4,2,7)
MR_decl_label5(transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0, 4,6,2,8,12)
MR_def_extern_entry(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0)
MR_decl_static(transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_0)
MR_decl_static(transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0)
MR_decl_static(fn__transform_hlds__rbmm__live_region_analysis__this_file_0_0)
MR_decl_static(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0)
MR_decl_static(transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_0)

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
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
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_TAG_COMMON(0,0,1)
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
MR_COMMON(0,5)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_TAG_COMMON(0,0,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(0,7)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(0,6),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_graph",
"transform_hlds.rbmm.points_to_graph",
"rptg_reach_from_a_variable",
6,
0
},
"transform_hlds.rbmm.live_region_analysis",
"rbmm.live_region_analysis.m",
245,
"d1;c6;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.live_region_analysis",
"transform_hlds.rbmm.live_region_analysis",
"proc_lv_to_proc_lr",
7,
0
},
"transform_hlds.rbmm.live_region_analysis",
"rbmm.live_region_analysis.m",
189,
"d1;c25;e;t;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_graph",
"transform_hlds.rbmm.points_to_graph",
"rptg_reach_from_a_variable",
6,
0
},
"transform_hlds.rbmm.live_region_analysis",
"rbmm.live_region_analysis.m",
245,
"d1;c6;e;c2;"
};


MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_region_analysis_module0)
	MR_init_entry1(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0);
	MR_init_label9(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0,2,5,6,7,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'live_region_analysis'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0_i2);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0_i5);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0_i6);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0_i7);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0_i8);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0_i9);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0_i10);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0_i11);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0_i12);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(11);
	MR_r12 = MR_sv(12);
	MR_r13 = MR_sv(13);
	MR_r14 = MR_tempr1;
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_region_analysis_module1)
	MR_init_entry1(transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_0);
	MR_init_label2(transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'live_region_analysis_pred'/22 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(12) = MR_r12;
	MR_sv(13) = MR_r13;
	MR_sv(14) = MR_r14;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_0_i2);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_0_i3);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_sv(12);
	MR_r14 = MR_sv(13);
	MR_r15 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__empty_1_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_0);
MR_decl_entry(set__fold_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_region_analysis_module2)
	MR_init_entry1(transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0);
	MR_init_label3(transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0,4,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lv_to_lr'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0_i4);
MR_def_label(transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(set__init_1_0);
MR_def_label(transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0_i7);
MR_def_label(transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(set__fold_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__live_region_analysis_module3)
	MR_init_entry1(fn__transform_hlds__rbmm__live_region_analysis__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__rbmm__live_region_analysis__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__rbmm__live_region_analysis__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.live_region_analysis.m", 27);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__smm_common__some_are_special_preds_2_0);
MR_decl_entry(fn__transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_proc_info_3_0);
MR_decl_entry(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0);
MR_decl_entry(fn__set__from_list_1_0);
MR_decl_entry(svmap__set_4_0);
MR_decl_entry(set__difference_3_0);
MR_decl_entry(fn__transform_hlds__rbmm__points_to_graph__rptg_get_nodes_as_list_1_0);
MR_decl_entry(fn__set__difference_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__foldl_4_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__live_region_analysis_module4)
	MR_init_entry1(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0);
	MR_init_label10(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,5,3,8,10,11,13,14,15,16,18)
	MR_init_label10(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,19,20,21,22,23,24,25,26,27,28)
	MR_init_label10(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,31,33,35,36,37,38,39,40,41,42)
	MR_init_label4(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,43,44,7,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'live_region_analysis_proc'/23 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r6;
	MR_tfield(0, MR_tempr1, 1) = MR_r7;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(10) = MR_r8;
	MR_sv(11) = MR_r9;
	MR_sv(12) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(13) = MR_r12;
	MR_sv(15) = MR_r13;
	MR_sv(16) = MR_r14;
	MR_sv(17) = MR_r15;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__smm_common__some_are_special_preds_2_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i5);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i3);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(17);
	MR_decr_sp_and_return(20);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i8);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i7);
	}
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_3_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i10);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i11);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(0,0,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i13);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i14);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i15);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i16);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i18);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i19);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i20);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(15);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i21);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i22);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(16);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i23);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_graph__rptg_get_nodes_as_list_1_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i24);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i25);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__set__difference_2_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i26);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i27);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(17);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i28);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i31);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i33);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,1,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i35);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i36);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i37);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i38);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i39);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i40);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i41);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i42);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i43);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i44);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(8);
	MR_decr_sp_and_return(20);
	}
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__live_region_analysis__this_file_0_0,
		transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0_i45);
MR_def_label(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("live_region_analysis_proc: rpta_info must exist", 47);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__live_region_analysis_module5)
	MR_init_entry1(transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0);
	MR_init_label5(transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0,4,6,2,8,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_lv_to_proc_lr'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0_i4);
MR_def_label(transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0_i6);
MR_def_label(transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(svmap__set_4_0);
MR_def_label(transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0_i8);
MR_def_label(transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0_i12);
MR_def_label(transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(svmap__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__live_region_analysis_module6)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_0);
	MR_init_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl8__ho1__[7]_0'/18 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_0_i3);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_decr_sp_and_return(8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r7, 1);
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r7 = MR_tfield(1, MR_r7, 0);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(3);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_sv(2);
	MR_tempr7 = MR_r7;
	MR_r7 = MR_sv(1);
	MR_tempr8 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_r12 = MR_tempr5;
	MR_r13 = MR_tempr6;
	MR_r14 = MR_tempr7;
	MR_r15 = MR_tempr8;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__live_region_analysis_module7)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_0);
	MR_init_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl8__ho2__[6]_0'/18 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_0_i3);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_r7 = MR_r13;
	MR_r8 = MR_r14;
	MR_decr_sp_and_return(7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r6, 1);
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r6 = MR_tfield(1, MR_r6, 0);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(2);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_sv(1);
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr8 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_r14 = MR_tempr8;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_108_105_118_101_95_114_101_103_105_111_110_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__rbmm__live_region_analysis_maybe_bunch_0(void)
{
	transform_hlds__rbmm__live_region_analysis_module0();
	transform_hlds__rbmm__live_region_analysis_module1();
	transform_hlds__rbmm__live_region_analysis_module2();
	transform_hlds__rbmm__live_region_analysis_module3();
	transform_hlds__rbmm__live_region_analysis_module4();
	transform_hlds__rbmm__live_region_analysis_module5();
	transform_hlds__rbmm__live_region_analysis_module6();
	transform_hlds__rbmm__live_region_analysis_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__rbmm__live_region_analysis__init(void);
void mercury__transform_hlds__rbmm__live_region_analysis__init_type_tables(void);
void mercury__transform_hlds__rbmm__live_region_analysis__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__rbmm__live_region_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__rbmm__live_region_analysis__init_complexity_procs(void);
#endif

void mercury__transform_hlds__rbmm__live_region_analysis__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__rbmm__live_region_analysis_maybe_bunch_0();
	mercury__transform_hlds__rbmm__live_region_analysis__init_debugger();
}

void mercury__transform_hlds__rbmm__live_region_analysis__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__rbmm__live_region_analysis__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__rbmm__live_region_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__rbmm__live_region_analysis);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__rbmm__live_region_analysis__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
