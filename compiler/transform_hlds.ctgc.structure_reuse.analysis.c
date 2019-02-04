/*
** Automatically generated from `structure_reuse.analysis.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__ctgc__structure_reuse__analysis__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.ctgc.structure_reuse.analysis.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.ctgc.structure_reuse.analysis.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.ctgc.structure_reuse.analysis.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.ctgc.structure_reuse.analysis.c"
#line 40 "transform_hlds.ctgc.structure_reuse.analysis.c"
#include "transform_hlds.ctgc.structure_reuse.analysis.mh"

#line 43 "transform_hlds.ctgc.structure_reuse.analysis.c"
#line 44 "transform_hlds.ctgc.structure_reuse.analysis.c"
#ifndef TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__ANALYSIS_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__ANALYSIS_DECL_GUARD

#line 48 "transform_hlds.ctgc.structure_reuse.analysis.c"
#line 49 "transform_hlds.ctgc.structure_reuse.analysis.c"

#endif
#line 52 "transform_hlds.ctgc.structure_reuse.analysis.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];
MR_decl_label2(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_116_114_117_99_116_117_114_101_95_114_101_117_115_101_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_110_110_111_116_97_116_101_95_105_110_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_0, 2,3)
MR_decl_label7(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0, 2,3,4,5,6,7,8)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0, 2,5,7,8,9,10,12,11)
MR_decl_label4(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0, 15,16,17,4)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0, 2,3,4,5,6,8,10,11)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0, 12,7)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0, 10,11,12,13,14,15,16,17)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0, 18)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0, 2,3,4,8,7,12,15,17)
MR_decl_label7(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0, 18,19,20,21,22,23,25)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0, 2,5,6,7,8,9,10,11)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0, 3)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__analysis__annotate_in_use_information_7_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__analysis__IntroducedFrom__pred__write_proc_reuse_info__343__1_3_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_116_114_117_99_116_117_114_101_95_114_101_117_115_101_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_110_110_111_116_97_116_101_95_105_110_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_0)

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(5,3),
MR_COMMON(6,4),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const struct mercury_type_1 mercury_common_1[3] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0),
0
},
{
MR_COMMON(2,0),
MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__analysis__annotate_in_use_information_7_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
0,
MR_TAG_COMMON(0,1,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_INT_CTOR_ADDR,
MR_COMMON(5,0),
MR_COMMON(5,0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(6,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_6 mercury_common_6[5] =
{
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(5,0),
MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(term, context),
MR_COMMON(6,0),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.analysis",
"transform_hlds.ctgc.structure_reuse.analysis",
"process_imported_reuse_in_pred",
3,
0
},
"transform_hlds.ctgc.structure_reuse.analysis",
"structure_reuse.analysis.m",
164,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.analysis",
"transform_hlds.ctgc.structure_reuse.analysis",
"annotate_in_use_information",
7,
0
},
"transform_hlds.ctgc.structure_reuse.analysis",
"structure_reuse.analysis.m",
125,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_3 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.analysis",
"transform_hlds.ctgc.structure_reuse.analysis",
"save_reuse_in_module_info",
4,
0
},
"transform_hlds.ctgc.structure_reuse.analysis",
"structure_reuse.analysis.m",
150,
"d1;c30;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.analysis",
"transform_hlds.ctgc.structure_reuse.analysis",
"write_proc_reuse_info",
8,
0
},
"transform_hlds.ctgc.structure_reuse.analysis",
"structure_reuse.analysis.m",
321,
"d1;c9;t;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.analysis",
"transform_hlds.ctgc.structure_reuse.analysis",
"process_imported_reuse_in_proc",
4,
0
},
"transform_hlds.ctgc.structure_reuse.analysis",
"structure_reuse.analysis.m",
185,
"d1;c3;q;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.analysis",
"transform_hlds.ctgc.structure_reuse.analysis",
"lambda_structure_reuse_analysis_m_343",
3,
0
},
"transform_hlds.ctgc.structure_reuse.analysis",
"structure_reuse.analysis.m",
343,
"d1;c11;d1;c8;"
};

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_1_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0);
MR_decl_entry(parse_tree__prog_out__maybe_write_string_4_0);
MR_decl_entry(hlds__passes_aux__process_all_nonimported_procs_5_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_7_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_7_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__analysis_module0)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,10,11,12,13,14,15,16,17)
	MR_init_label1(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_1_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Annotating in use information...", 34);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_5_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("done.\n", 6);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Direct reuse...\n", 18);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_7_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Direct reuse: done.\n", 22);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Indirect reuse...\n", 20);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i14);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_7_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Indirect reuse: done.\n", 24);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0,
		transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_analysis_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_spec_info_2_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);
MR_decl_entry(set__member_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__analysis_module1)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,2,3,4,8,7,12,15,17)
	MR_init_label7(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,18,19,20,21,22,23,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_spec_info_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i8);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_ctfield(0, MR_r2, 1);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i25);
	}
	MR_r1 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i25);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i20);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i21);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i22);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0_i23);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(fn__map__det_elem_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(svmap__det_update_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__analysis_module2)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0);
	MR_init_label7(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_imported_structure_reuse_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(map__from_corresponding_lists_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(parse_tree__prog_type__type_unify_list_5_0);
MR_decl_entry(parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_structure_reuse_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_reset_imported_structure_reuse_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__analysis_module3)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,2,5,7,8,9,10,12,11)
	MR_init_label4(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,15,16,17,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_imported_structure_reuse_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0_i4);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_list_5_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0_i11);
	}
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_structure_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_reset_imported_structure_reuse_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(svmap__det_update_4_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_module__module_info_get_structure_reuse_map_2_0);
MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__analysis_module4)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0,2,3,4,5,6,8,10,11)
	MR_init_label2(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0,12,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0,
		transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_structure_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0,
		transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_structure_reuse_map_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0_i7);
	}
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r2;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0,
		transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_structure_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__analysis_module5)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__analysis__annotate_in_use_information_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__analysis__annotate_in_use_information_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_116_114_117_99_116_117_114_101_95_114_101_117_115_101_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_110_110_111_116_97_116_101_95_105_110_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_structure_reuse_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_declared_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__write_pragma_structure_reuse_info_11_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__analysis_module6)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0,2,5,6,7,8,9,10,11)
	MR_init_label1(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = (MR_Integer) 333;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_structure_reuse_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_declared_argmodes_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__analysis__IntroducedFrom__pred__write_proc_reuse_info__343__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_r8, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r8, 0) = MR_sv(5);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r9 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__write_pragma_structure_reuse_info_11_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__analysis__write_proc_reuse_info_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__analysis_module7)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__analysis__IntroducedFrom__pred__write_proc_reuse_info__343__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__analysis__IntroducedFrom__pred__write_proc_reuse_info__343__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__lbu__backward_use_information_3_0);
MR_decl_entry(check_hlds__goal_path__fill_goal_path_slots_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__analysis_module8)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_116_114_117_99_116_117_114_101_95_114_101_117_115_101_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_110_110_111_116_97_116_101_95_105_110_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_0);
	MR_init_label2(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_116_114_117_99_116_117_114_101_95_114_101_117_115_101_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_110_110_111_116_97_116_101_95_105_110_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_116_114_117_99_116_117_114_101_95_114_101_117_115_101_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_110_110_111_116_97_116_101_95_105_110_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_116_114_117_99_116_117_114_101_95_114_101_117_115_101_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_110_110_111_116_97_116_101_95_105_110_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_116_114_117_99_116_117_114_101_95_114_101_117_115_101_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_110_110_111_116_97_116_101_95_105_110_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lbu__backward_use_information_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_116_114_117_99_116_117_114_101_95_114_101_117_115_101_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_110_110_111_116_97_116_101_95_105_110_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_0_i3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_116_114_117_99_116_117_114_101_95_114_101_117_115_101_95_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_110_110_111_116_97_116_101_95_105_110_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__goal_path__fill_goal_path_slots_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ctgc__structure_reuse__analysis_maybe_bunch_0(void)
{
	transform_hlds__ctgc__structure_reuse__analysis_module0();
	transform_hlds__ctgc__structure_reuse__analysis_module1();
	transform_hlds__ctgc__structure_reuse__analysis_module2();
	transform_hlds__ctgc__structure_reuse__analysis_module3();
	transform_hlds__ctgc__structure_reuse__analysis_module4();
	transform_hlds__ctgc__structure_reuse__analysis_module5();
	transform_hlds__ctgc__structure_reuse__analysis_module6();
	transform_hlds__ctgc__structure_reuse__analysis_module7();
	transform_hlds__ctgc__structure_reuse__analysis_module8();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__structure_reuse__analysis__init(void);
void mercury__transform_hlds__ctgc__structure_reuse__analysis__init_type_tables(void);
void mercury__transform_hlds__ctgc__structure_reuse__analysis__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__structure_reuse__analysis__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__structure_reuse__analysis__init_complexity_procs(void);
#endif

void mercury__transform_hlds__ctgc__structure_reuse__analysis__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__structure_reuse__analysis_maybe_bunch_0();
	mercury__transform_hlds__ctgc__structure_reuse__analysis__init_debugger();
}

void mercury__transform_hlds__ctgc__structure_reuse__analysis__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__ctgc__structure_reuse__analysis__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__structure_reuse__analysis__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__structure_reuse__analysis__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
