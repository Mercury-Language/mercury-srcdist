/*
** Automatically generated from `trans_opt.m'
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
INIT mercury__transform_hlds__trans_opt__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.trans_opt.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.trans_opt.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.trans_opt.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.trans_opt.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "transform_hlds.trans_opt.c"
#line 44 "transform_hlds.trans_opt.c"
#include "transform_hlds.trans_opt.mh"

#line 47 "transform_hlds.trans_opt.c"
#line 48 "transform_hlds.trans_opt.c"
#ifndef TRANSFORM_HLDS__TRANS_OPT_DECL_GUARD
#define TRANSFORM_HLDS__TRANS_OPT_DECL_GUARD

#line 52 "transform_hlds.trans_opt.c"
#line 53 "transform_hlds.trans_opt.c"

#endif
#line 56 "transform_hlds.trans_opt.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];
MR_decl_label8(transform_hlds__trans_opt__grab_trans_opt_files_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label2(transform_hlds__trans_opt__grab_trans_opt_files_6_0, 10,11)
MR_decl_label8(transform_hlds__trans_opt__read_trans_opt_files_7_0, 22,4,5,6,7,8,9,10)
MR_decl_label6(transform_hlds__trans_opt__read_trans_opt_files_7_0, 11,12,13,14,15,3)
MR_decl_label8(transform_hlds__trans_opt__write_trans_opt_file_3_0, 2,3,4,7,8,9,10,11)
MR_decl_label8(transform_hlds__trans_opt__write_trans_opt_file_3_0, 12,13,14,15,16,17,18,19)
MR_decl_label8(transform_hlds__trans_opt__write_trans_opt_file_3_0, 20,21,22,23,24,25,26,27)
MR_decl_label8(transform_hlds__trans_opt__write_trans_opt_file_3_0, 28,29,30,31,6,33,34,35)
MR_decl_label7(transform_hlds__trans_opt__write_trans_opt_file_3_0, 36,37,38,39,40,41,42)
MR_def_extern_entry(transform_hlds__trans_opt__write_trans_opt_file_3_0)
MR_decl_static(transform_hlds__trans_opt__read_trans_opt_files_7_0)
MR_def_extern_entry(transform_hlds__trans_opt__grab_trans_opt_files_6_0)
MR_decl_static(transform_hlds__trans_opt__get_pred_id_2_0)
MR_decl_static(transform_hlds__trans_opt__IntroducedFrom__pred__write_trans_opt_file__148__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_proc_exception_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_proc_trailing_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_proc_mm_tabling_info_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
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
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, proc_exception_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, proc_trailing_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, proc_mm_tabling_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_INT_CTOR_ADDR
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(transform_hlds__trans_opt__IntroducedFrom__pred__write_trans_opt_file__148__1_2_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(transform_hlds__trans_opt__get_pred_id_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_6;
static const struct mercury_type_3 mercury_common_3[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_6,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_9;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_7,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,2),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_8,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,3),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_9,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,4),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.trans_opt",
"transform_hlds.trans_opt",
"lambda_trans_opt_m_148",
2,
0
},
"transform_hlds.trans_opt",
"trans_opt.m",
148,
"d1;c9;d2;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.trans_opt",
"transform_hlds.trans_opt",
"get_pred_id",
2,
0
},
"transform_hlds.trans_opt",
"trans_opt.m",
149,
"d1;c9;d2;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_3 = {
{
MR_PREDICATE,
"transform_hlds.termination",
"transform_hlds.termination",
"write_pred_termination_info",
4,
0
},
"transform_hlds.trans_opt",
"trans_opt.m",
152,
"d1;c9;d2;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_4 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"output_pred_termination2_info",
4,
0
},
"transform_hlds.trans_opt",
"trans_opt.m",
154,
"d1;c9;d2;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_5 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_sharing.analysis",
"transform_hlds.ctgc.structure_sharing.analysis",
"write_pred_sharing_info",
4,
0
},
"transform_hlds.trans_opt",
"trans_opt.m",
157,
"d1;c9;d2;c21;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_6 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.analysis",
"transform_hlds.ctgc.structure_reuse.analysis",
"write_pred_reuse_info",
4,
0
},
"transform_hlds.trans_opt",
"trans_opt.m",
159,
"d1;c9;d2;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_7 = {
{
MR_PREDICATE,
"transform_hlds.exception_analysis",
"transform_hlds.exception_analysis",
"write_pragma_exceptions",
5,
0
},
"transform_hlds.trans_opt",
"trans_opt.m",
163,
"d1;c9;d2;c26;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_8 = {
{
MR_PREDICATE,
"transform_hlds.trailing_analysis",
"transform_hlds.trailing_analysis",
"write_pragma_trailing_info",
5,
0
},
"transform_hlds.trans_opt",
"trans_opt.m",
168,
"d1;c9;d2;c29;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__trans_opt__write_trans_opt_file_3_0_9 = {
{
MR_PREDICATE,
"transform_hlds.tabling_analysis",
"transform_hlds.tabling_analysis",
"write_pragma_mm_tabling_info",
5,
0
},
"transform_hlds.trans_opt",
"trans_opt.m",
173,
"d1;c9;d2;c32;"
};

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(parse_tree__modules__module_name_to_file_name_6_0);
MR_decl_entry(io__open_output_4_0);
MR_decl_entry(io__set_output_stream_4_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_structure_reuse_map_2_0);
MR_decl_entry(map__values_2_0);
MR_decl_entry(list__map_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__delete_elems_3_0);
MR_decl_entry(transform_hlds__termination__write_pred_termination_info_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(transform_hlds__term_constr_main__output_pred_termination2_info_4_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__analysis__write_pred_sharing_info_4_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0);
MR_decl_entry(hlds__hlds_module__module_info_get_exception_info_2_0);
MR_decl_entry(transform_hlds__exception_analysis__write_pragma_exceptions_5_0);
MR_decl_entry(hlds__hlds_module__module_info_get_trailing_info_2_0);
MR_decl_entry(transform_hlds__trailing_analysis__write_pragma_trailing_info_5_0);
MR_decl_entry(hlds__hlds_module__module_info_get_mm_tabling_info_2_0);
MR_decl_entry(transform_hlds__tabling_analysis__write_pragma_mm_tabling_info_5_0);
MR_decl_entry(io__close_output_3_0);
MR_decl_entry(parse_tree__modules__update_interface_3_0);
MR_decl_entry(parse_tree__modules__touch_interface_datestamp_4_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(transform_hlds__trans_opt_module0)
	MR_init_entry1(transform_hlds__trans_opt__write_trans_opt_file_3_0);
	MR_init_label8(transform_hlds__trans_opt__write_trans_opt_file_3_0,2,3,4,7,8,9,10,11)
	MR_init_label8(transform_hlds__trans_opt__write_trans_opt_file_3_0,12,13,14,15,16,17,18,19)
	MR_init_label8(transform_hlds__trans_opt__write_trans_opt_file_3_0,20,21,22,23,24,25,26,27)
	MR_init_label8(transform_hlds__trans_opt__write_trans_opt_file_3_0,28,29,30,31,6,33,34,35)
	MR_init_label7(transform_hlds__trans_opt__write_trans_opt_file_3_0,36,37,38,39,40,41,42)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__trans_opt__write_trans_opt_file_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i2);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(".trans_opt.tmp", 14);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i3);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(io__open_output_4_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i4);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__trans_opt__write_trans_opt_file_3_0_i6);
	}
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i7);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i8);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":- module ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i9);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i10);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i11);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i12);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_structure_reuse_map_2_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i13);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__values_2_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i14);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i15);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i16);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__delete_elems_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i17);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__termination__write_pred_termination_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i18);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_main__output_pred_termination2_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i19);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_sharing__analysis__write_pred_sharing_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i20);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i21);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_exception_info_2_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i22);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__exception_analysis__write_pragma_exceptions_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i23);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_trailing_info_2_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i24);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__trailing_analysis__write_pragma_trailing_info_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i25);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_mm_tabling_info_2_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i26);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__tabling_analysis__write_pragma_mm_tabling_info_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i27);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i28);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__close_output_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i29);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(".trans_opt", 10);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i30);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__modules__update_interface_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i31);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(".trans_opt_date", 15);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(parse_tree__modules__touch_interface_datestamp_4_0);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i33);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("trans_opt.m", 11);
	MR_np_call_localret_ent(io__progname_base_4_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i34);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i35);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": cannot open transitive optimisation file \140", 44);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i36);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i37);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\' \n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i38);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i39);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": for output: ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i40);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i41);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__trans_opt__write_trans_opt_file_3_0_i42);
MR_def_label(transform_hlds__trans_opt__write_trans_opt_file_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(parse_tree__prog_out__maybe_write_string_4_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(parse_tree__prog_out__maybe_flush_output_3_0);
MR_decl_entry(parse_tree__modules__module_name_to_search_file_name_5_0);
MR_decl_entry(parse_tree__prog_io__read_opt_file_7_0);
MR_decl_entry(transform_hlds__intermod__update_error_status_8_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_and_context_0;
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(transform_hlds__trans_opt_module1)
	MR_init_entry1(transform_hlds__trans_opt__read_trans_opt_files_7_0);
	MR_init_label8(transform_hlds__trans_opt__read_trans_opt_files_7_0,22,4,5,6,7,8,9,10)
	MR_init_label6(transform_hlds__trans_opt__read_trans_opt_files_7_0,11,12,13,14,15,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__trans_opt__read_trans_opt_files_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__trans_opt__read_trans_opt_files_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__trans_opt__read_trans_opt_files_7_0_i4);
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Reading transitive optimization interface for module", 54);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__trans_opt__read_trans_opt_files_7_0_i5);
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const(" \140", 2);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__trans_opt__read_trans_opt_files_7_0_i6);
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		transform_hlds__trans_opt__read_trans_opt_files_7_0_i7);
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__trans_opt__read_trans_opt_files_7_0_i8);
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("\'... ", 5);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__trans_opt__read_trans_opt_files_7_0_i9);
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_flush_output_3_0,
		transform_hlds__trans_opt__read_trans_opt_files_7_0_i10);
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(".trans_opt", 10);
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_search_file_name_5_0,
		transform_hlds__trans_opt__read_trans_opt_files_7_0_i11);
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_io__read_opt_file_7_0,
		transform_hlds__trans_opt__read_trans_opt_files_7_0_i12);
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__trans_opt__read_trans_opt_files_7_0_i13);
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__intermod__update_error_status_8_0,
		transform_hlds__trans_opt__read_trans_opt_files_7_0_i14);
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item_and_context);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__trans_opt__read_trans_opt_files_7_0_i15);
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__trans_opt__read_trans_opt_files_7_0_i22);
MR_def_label(transform_hlds__trans_opt__read_trans_opt_files_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__modules__append_pseudo_decl_3_0);
MR_decl_entry(parse_tree__modules__module_imports_get_items_2_0);
MR_decl_entry(parse_tree__modules__module_imports_set_items_3_0);
MR_decl_entry(parse_tree__modules__module_imports_set_error_3_0);

MR_BEGIN_MODULE(transform_hlds__trans_opt_module2)
	MR_init_entry1(transform_hlds__trans_opt__grab_trans_opt_files_6_0);
	MR_init_label8(transform_hlds__trans_opt__grab_trans_opt_files_6_0,2,3,4,5,6,7,8,9)
	MR_init_label2(transform_hlds__trans_opt__grab_trans_opt_files_6_0,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__trans_opt__grab_trans_opt_files_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__trans_opt__grab_trans_opt_files_6_0_i2);
MR_def_label(transform_hlds__trans_opt__grab_trans_opt_files_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Reading .trans_opt files..\n", 29);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__trans_opt__grab_trans_opt_files_6_0_i3);
MR_def_label(transform_hlds__trans_opt__grab_trans_opt_files_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_flush_output_3_0,
		transform_hlds__trans_opt__grab_trans_opt_files_6_0_i4);
MR_def_label(transform_hlds__trans_opt__grab_trans_opt_files_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(transform_hlds__trans_opt__read_trans_opt_files_7_0,
		transform_hlds__trans_opt__grab_trans_opt_files_6_0_i5);
MR_def_label(transform_hlds__trans_opt__grab_trans_opt_files_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_np_call_localret_ent(parse_tree__modules__append_pseudo_decl_3_0,
		transform_hlds__trans_opt__grab_trans_opt_files_6_0_i6);
MR_def_label(transform_hlds__trans_opt__grab_trans_opt_files_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(parse_tree__modules__module_imports_get_items_2_0,
		transform_hlds__trans_opt__grab_trans_opt_files_6_0_i7);
MR_def_label(transform_hlds__trans_opt__grab_trans_opt_files_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item_and_context);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__trans_opt__grab_trans_opt_files_6_0_i8);
MR_def_label(transform_hlds__trans_opt__grab_trans_opt_files_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__modules__module_imports_set_items_3_0,
		transform_hlds__trans_opt__grab_trans_opt_files_6_0_i9);
MR_def_label(transform_hlds__trans_opt__grab_trans_opt_files_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__modules__module_imports_set_error_3_0,
		transform_hlds__trans_opt__grab_trans_opt_files_6_0_i10);
MR_def_label(transform_hlds__trans_opt__grab_trans_opt_files_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Done.\n", 8);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__trans_opt__grab_trans_opt_files_6_0_i11);
MR_def_label(transform_hlds__trans_opt__grab_trans_opt_files_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__trans_opt_module3)
	MR_init_entry1(transform_hlds__trans_opt__get_pred_id_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__trans_opt__get_pred_id_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(pair__fst_2_0);

MR_BEGIN_MODULE(transform_hlds__trans_opt_module4)
	MR_init_entry1(transform_hlds__trans_opt__IntroducedFrom__pred__write_trans_opt_file__148__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__trans_opt__IntroducedFrom__pred__write_trans_opt_file__148__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_np_tailcall_ent(pair__fst_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__trans_opt_maybe_bunch_0(void)
{
	transform_hlds__trans_opt_module0();
	transform_hlds__trans_opt_module1();
	transform_hlds__trans_opt_module2();
	transform_hlds__trans_opt_module3();
	transform_hlds__trans_opt_module4();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__trans_opt__init(void);
void mercury__transform_hlds__trans_opt__init_type_tables(void);
void mercury__transform_hlds__trans_opt__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__trans_opt__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__trans_opt__init_complexity_procs(void);
#endif

void mercury__transform_hlds__trans_opt__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__trans_opt_maybe_bunch_0();
	mercury__transform_hlds__trans_opt__init_debugger();
}

void mercury__transform_hlds__trans_opt__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__trans_opt__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__trans_opt__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__trans_opt__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
