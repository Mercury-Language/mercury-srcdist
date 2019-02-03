/*
** Automatically generated from `clause_to_proc.m'
** by the Mercury compiler,
** version 11.07-beta-2011-11-14, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__clause_to_proc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "check_hlds.clause_to_proc.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "check_hlds.clause_to_proc.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "check_hlds.clause_to_proc.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "check_hlds.clause_to_proc.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "check_hlds.clause_to_proc.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "check_hlds.clause_to_proc.c"
#line 49 "check_hlds.clause_to_proc.c"
#include "check_hlds.clause_to_proc.mh"

#line 52 "check_hlds.clause_to_proc.c"
#line 53 "check_hlds.clause_to_proc.c"
#ifndef CHECK_HLDS__CLAUSE_TO_PROC_DECL_GUARD
#define CHECK_HLDS__CLAUSE_TO_PROC_DECL_GUARD

#line 57 "check_hlds.clause_to_proc.c"
#line 58 "check_hlds.clause_to_proc.c"

#endif
#line 61 "check_hlds.clause_to_proc.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
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
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];
MR_decl_label4(check_hlds__clause_to_proc__contains_nonpure_goal_1_0, 20,7,3,1)
MR_decl_label10(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0, 2,3,4,5,8,9,10,12,13,16)
MR_decl_label10(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0, 19,21,22,14,7,34,36,38,31,29)
MR_decl_label10(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0, 41,42,43,45,46,49,52,54,55,47)
MR_decl_label1(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0, 61)
MR_decl_label5(check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0, 12,3,4,5,6)
MR_decl_label2(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0, 2,5)
MR_decl_label9(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0, 2,4,6,8,9,10,11,12,3)
MR_decl_label6(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0, 19,4,5,6,7,8)
MR_decl_label2(check_hlds__clause_to_proc__introduce_exists_casts_3_0, 2,5)
MR_decl_label10(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0, 5,75,9,11,12,14,15,16,18,21)
MR_decl_label10(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0, 22,23,20,26,25,28,29,24,7,31)
MR_decl_label1(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0, 32)
MR_decl_label10(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0, 2,10,11,16,18,20,21,22,23,24)
MR_decl_label5(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0, 25,26,27,13,6)
MR_decl_label10(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0, 2,4,7,9,11,13,14,15,16,3)
MR_decl_label10(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0, 12,14,17,19,13,22,23,25,26,27)
MR_decl_label5(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0, 28,29,30,31,32)
MR_decl_label5(check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0, 12,3,4,5,6)
MR_decl_label4(check_hlds__clause_to_proc__make_new_exist_cast_var_4_0, 2,3,4,5)
MR_decl_label10(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0, 2,3,7,9,10,11,12,14,15,16)
MR_decl_label2(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0, 19,5)
MR_decl_label5(check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0, 12,3,4,5,6)
MR_decl_label6(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0, 28,3,9,12,4,5)
MR_decl_label5(check_hlds__clause_to_proc__select_matching_clauses_3_0, 37,4,6,9,8)
MR_decl_label3(fn__check_hlds__clause_to_proc__set_arg_names_2_0, 2,3,5)
MR_def_extern_entry(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0)
MR_decl_static(check_hlds__clause_to_proc__contains_nonpure_goal_1_0)
MR_decl_static(check_hlds__clause_to_proc__select_matching_clauses_3_0)
MR_decl_static(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0)
MR_def_extern_entry(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0)
MR_def_extern_entry(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0)
MR_def_extern_entry(check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0)
MR_def_extern_entry(check_hlds__clause_to_proc__introduce_exists_casts_3_0)
MR_decl_static(check_hlds__clause_to_proc__make_new_exist_cast_var_4_0)
MR_decl_static(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0)
MR_decl_static(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0)
MR_decl_static(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0)
MR_def_extern_entry(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0)
MR_decl_static(check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0)
MR_decl_static(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0)
MR_decl_static(fn__check_hlds__clause_to_proc__set_arg_names_2_0)
MR_decl_static(check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0)
MR_decl_static(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0)
MR_decl_static(check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__206__1_2_0)
MR_decl_static(check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__207__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_purity_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_7;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, purity),
MR_CTOR0_ADDR(parse_tree__prog_data, purity),
MR_CTOR0_ADDR(parse_tree__prog_data, purity)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_7,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, purity),
MR_CTOR0_ADDR(parse_tree__prog_data, purity),
MR_CTOR0_ADDR(parse_tree__prog_data, purity)
}
},
};

MR_decl_entry(fn__hlds__hlds_goal__goal_get_purity_1_0);
MR_decl_entry(fn__parse_tree__prog_data__worst_purity_2_0);
static const struct mercury_type_2 mercury_common_2[6] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__goal_get_purity_1_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(fn__parse_tree__prog_data__worst_purity_2_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(fn__check_hlds__clause_to_proc__set_arg_names_2_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(fn__hlds__hlds_goal__goal_get_purity_1_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(fn__parse_tree__prog_data__worst_purity_2_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_expr_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_runtime_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_expr_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_runtime_0;
static const struct mercury_type_3 mercury_common_3[8] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg)
}
},
{
{
MR_CTOR1_ADDR(parse_tree__prog_data, trace_expr),
MR_CTOR0_ADDR(parse_tree__prog_data, trace_runtime)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_COMMON(3,4)
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
MR_CTOR1_ADDR(parse_tree__prog_data, trace_expr),
MR_CTOR0_ADDR(parse_tree__prog_data, trace_runtime)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_6;
static const struct mercury_type_4 mercury_common_4[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(parse_tree__prog_data, purity)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,3),
MR_COMMON(3,3)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,5),
MR_COMMON(3,5)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(parse_tree__prog_data, purity)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__introduce_exists_casts_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__clause_to_proc__introduce_exists_casts_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__introduce_exists_casts_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.clause_to_proc",
"check_hlds.clause_to_proc",
"introduce_exists_casts_pred",
4,
0
},
"check_hlds.clause_to_proc",
"clause_to_proc.m",
323,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_7 = {
{
MR_FUNCTION,
"parse_tree.prog_data",
"parse_tree.prog_data",
"worst_purity",
3,
0
},
"check_hlds.clause_to_proc",
"clause_to_proc.m",
254,
"68"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_6 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"goal_get_purity",
2,
0
},
"check_hlds.clause_to_proc",
"clause_to_proc.m",
253,
"66"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_5 = {
{
MR_PREDICATE,
"check_hlds.clause_to_proc",
"check_hlds.clause_to_proc",
"lambda_clause_to_proc_m_207",
2,
0
},
"check_hlds.clause_to_proc",
"clause_to_proc.m",
207,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_4 = {
{
MR_PREDICATE,
"check_hlds.clause_to_proc",
"check_hlds.clause_to_proc",
"lambda_clause_to_proc_m_206",
2,
0
},
"check_hlds.clause_to_proc",
"clause_to_proc.m",
206,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_3 = {
{
MR_FUNCTION,
"check_hlds.clause_to_proc",
"check_hlds.clause_to_proc",
"set_arg_names",
3,
0
},
"check_hlds.clause_to_proc",
"clause_to_proc.m",
205,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_2 = {
{
MR_FUNCTION,
"parse_tree.prog_data",
"parse_tree.prog_data",
"worst_purity",
3,
0
},
"check_hlds.clause_to_proc",
"clause_to_proc.m",
254,
"68"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"goal_get_purity",
2,
0
},
"check_hlds.clause_to_proc",
"clause_to_proc.m",
253,
"66"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.clause_to_proc",
"check_hlds.clause_to_proc",
"copy_pred_clauses_to_procs_if_needed",
3,
0
},
"check_hlds.clause_to_proc",
"clause_to_proc.m",
140,
"6"
};


MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module0)
	MR_init_entry1(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0);
	MR_init_label2(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_module_clauses_to_procs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0_i2);
MR_def_label(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0_i5);
MR_def_label(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__clause_to_proc_module1)
	MR_init_entry1(check_hlds__clause_to_proc__contains_nonpure_goal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__contains_nonpure_goal_1_0);
	MR_init_label4(check_hlds__clause_to_proc__contains_nonpure_goal_1_0,20,7,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains_nonpure_goal'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__clause_to_proc__contains_nonpure_goal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(check_hlds__clause_to_proc__contains_nonpure_goal_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__contains_nonpure_goal_1_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_purity_1_0,
		check_hlds__clause_to_proc__contains_nonpure_goal_1_0_i7);
MR_def_label(check_hlds__clause_to_proc__contains_nonpure_goal_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__contains_nonpure_goal_1_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(check_hlds__clause_to_proc__contains_nonpure_goal_1_0_i20);
MR_def_label(check_hlds__clause_to_proc__contains_nonpure_goal_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(check_hlds__clause_to_proc__contains_nonpure_goal_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module2)
	MR_init_entry1(check_hlds__clause_to_proc__select_matching_clauses_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__select_matching_clauses_3_0);
	MR_init_label5(check_hlds__clause_to_proc__select_matching_clauses_3_0,37,4,6,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select_matching_clauses'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__clause_to_proc__select_matching_clauses_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__select_matching_clauses_3_0_i37);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__clause_to_proc__select_matching_clauses_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(check_hlds__clause_to_proc__select_matching_clauses_3_0,
		check_hlds__clause_to_proc__select_matching_clauses_3_0_i4);
MR_def_label(check_hlds__clause_to_proc__select_matching_clauses_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__select_matching_clauses_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(check_hlds__clause_to_proc__select_matching_clauses_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__member_2_0,
		check_hlds__clause_to_proc__select_matching_clauses_3_0_i9);
MR_def_label(check_hlds__clause_to_proc__select_matching_clauses_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__select_matching_clauses_3_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__clause_to_proc__select_matching_clauses_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_clauses__clause_body_1_0);
MR_decl_entry(hlds__hlds_goal__goal_to_disj_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module3)
	MR_init_entry1(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0);
	MR_init_label6(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0,19,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_clause_disjuncts_and_warnings'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_body_1_0,
		check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0_i4);
MR_def_label(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_disj_list_2_0,
		check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0_i5);
MR_def_label(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r2, 4);
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0,
		check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0_i6);
MR_def_label(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0_i7);
MR_def_label(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0_i8);
MR_def_label(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_clauses__get_clause_list_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_statevar_warnings_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_context_3_0);
MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_purity_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__list__foldl_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);
MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(require__expect_4_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_body_7_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module4)
	MR_init_entry1(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0);
	MR_init_label10(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,2,3,4,5,8,9,10,12,13,16)
	MR_init_label10(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,19,21,22,14,7,34,36,38,31,29)
	MR_init_label10(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,41,42,43,45,46,49,52,54,55,47)
	MR_init_label1(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_clauses_to_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__clause_to_proc__copy_clauses_to_proc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 3);
	MR_sv(4) = MR_tfield(0, MR_r2, 4);
	MR_sv(5) = MR_tfield(0, MR_r2, 7);
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tfield(0, MR_r2, 5);
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_2_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i2);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__clause_to_proc__select_matching_clauses_3_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i3);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i4);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_statevar_warnings_3_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i5);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i7);
	}
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i8);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i9);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i10);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i12);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i13);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__clause_to_proc__contains_nonpure_goal_1_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i16);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i14);
	}
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, purity);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i19);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i21);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i22);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i61);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i61);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i29);
	}
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr4, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i31);
	}
	MR_tempr2 = MR_tempr4;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 5);
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_tfield(3, MR_tempr1, 4);
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i34);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__206__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("check_hlds.clause_to_proc", 25);
	MR_r3 = (MR_Word) MR_string_const("predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc\'/4", 60);
	MR_r4 = (MR_Word) MR_string_const("extra_args", 10);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i36);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__207__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(2);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_string_const("check_hlds.clause_to_proc", 25);
	MR_r3 = (MR_Word) MR_string_const("predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc\'/4", 60);
	MR_r4 = (MR_Word) MR_string_const("trace runtime cond", 18);
	MR_np_call_localret_ent(require__expect_4_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i38);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(1) = MR_sv(8);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i61);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(6) = MR_sv(2);
	MR_sv(1) = MR_tfield(1, MR_sv(1), 0);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i61);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_sv(1), 0), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i41);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i42);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i43);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i45);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i46);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__clause_to_proc__contains_nonpure_goal_1_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i49);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i47);
	}
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, purity);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i52);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i54);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i55);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i61);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		check_hlds__clause_to_proc__copy_clauses_to_proc_4_0_i61);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_body_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(parse_tree__prog_mode__in_mode_1_0);
MR_decl_entry(parse_tree__prog_mode__out_mode_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
MR_decl_entry(varset__init_1_0);
MR_decl_entry(hlds__make_hlds__add_new_proc_12_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module5)
	MR_init_entry1(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0);
	MR_init_label10(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,2,3,7,9,10,11,12,14,15,16)
	MR_init_label2(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,19,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_add_default_func_mode'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0_i2);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0_i3);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__is_empty_1_0,
		check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0_i7);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0_i9);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_call_localret_ent(parse_tree__prog_mode__in_mode_1_0,
		check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0_i10);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_mode__out_mode_1_0,
		check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0_i11);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0_i12);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0_i14);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0_i15);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0_i16);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(1, MR_r4, 0) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r8 = MR_sv(4);
	MR_r9 = (MR_Integer) 1;
	MR_r10 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_new_proc_12_0,
		check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0_i19);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module6)
	MR_init_entry1(check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0);
	MR_init_label5(check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0,12,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_add_default_func_modes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0_i4);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,
		check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0_i5);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0_i6);
MR_def_label(check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__clause_to_proc__maybe_add_default_func_modes_3_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__clause_to_proc_module7)
	MR_init_entry1(check_hlds__clause_to_proc__introduce_exists_casts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__introduce_exists_casts_3_0);
	MR_init_label2(check_hlds__clause_to_proc__introduce_exists_casts_3_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'introduce_exists_casts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__clause_to_proc__introduce_exists_casts_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_3_0_i2);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_3_0_i5);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(varset__name_var_4_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module8)
	MR_init_entry1(check_hlds__clause_to_proc__make_new_exist_cast_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__make_new_exist_cast_var_4_0);
	MR_init_label4(check_hlds__clause_to_proc__make_new_exist_cast_var_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_new_exist_cast_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__clause_to_proc__make_new_exist_cast_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__clause_to_proc__make_new_exist_cast_var_4_0_i2);
MR_def_label(check_hlds__clause_to_proc__make_new_exist_cast_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__clause_to_proc__make_new_exist_cast_var_4_0_i3);
MR_def_label(check_hlds__clause_to_proc__make_new_exist_cast_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ExistQ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		check_hlds__clause_to_proc__make_new_exist_cast_var_4_0_i4);
MR_def_label(check_hlds__clause_to_proc__make_new_exist_cast_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(varset__name_var_4_0,
		check_hlds__clause_to_proc__make_new_exist_cast_var_4_0_i5);
MR_def_label(check_hlds__clause_to_proc__make_new_exist_cast_var_4_0,5)
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

MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(term__context_init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(check_hlds__mode_util__mode_get_insts_4_0);
MR_decl_entry(hlds__goal_util__generate_cast_with_insts_7_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module9)
	MR_init_entry1(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0);
	MR_init_label10(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,2,10,11,16,18,20,21,22,23,24)
	MR_init_label5(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,25,26,27,13,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'introduce_exists_casts_for_head'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i2);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_proceed();
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i6);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r3, 0);
	MR_sv(4) = MR_tfield(1, MR_r4, 0);
	MR_sv(5) = MR_tfield(1, MR_r5, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_r5 = MR_tfield(1, MR_r5, 1);
	MR_np_localcall_lab(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,
		check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i10);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i11);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i16);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i13);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i18);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i20);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i21);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i22);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ExistQ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i23);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(13);
	}
	MR_np_call_localret_ent(varset__name_var_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i24);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(9);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i25);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i26);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r6 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_cast_with_insts_7_0,
		check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0_i27);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(15);
	}
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(15);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.clause_to_proc", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.clause_to_proc.introduce_exists_casts_for_head\'/12", 72);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_search_type_info_locn_3_0);
MR_decl_entry(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module10)
	MR_init_entry1(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0);
	MR_init_label6(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0,28,3,9,12,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_add_type_info_locns'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0_i5);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_search_type_info_locn_3_0,
		check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0_i9);
MR_def_label(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0_i4);
	}
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_r2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0,
		check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0_i12);
MR_def_label(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0_i28);
	}
MR_def_label(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
MR_def_label(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0_i28);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_output_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__goal_util__generate_cast_5_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_var_info_3_0);
MR_decl_entry(hlds__hlds_rtti__rtti_set_type_info_type_4_0);
MR_decl_entry(hlds__hlds_rtti__rtti_det_insert_type_info_type_4_0);
MR_decl_entry(hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module11)
	MR_init_entry1(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0);
	MR_init_label10(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,5,75,9,11,12,14,15,16,18,21)
	MR_init_label10(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,22,23,20,26,25,28,29,24,7,31)
	MR_init_label1(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'introduce_exists_casts_extra'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i75);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_proceed();
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.clause_to_proc", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", 69);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i9);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i7);
	}
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i11);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__clause_to_proc__make_new_exist_cast_var_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i12);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i14);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i15);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_cast_5_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i16);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i18);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i20);
	}
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i21);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_set_type_info_type_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i22);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_det_insert_type_info_type_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i23);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(10);
	MR_r8 = MR_sv(7);
	MR_r7 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i32);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i24);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i26);
	}
	MR_r3 = MR_sv(6);
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i25);
	}
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.clause_to_proc", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", 69);
	MR_r3 = (MR_Word) MR_string_const("missing constraint", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i25);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i28);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(5), 1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__clause_to_proc__maybe_add_type_info_locns_5_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i29);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(10);
	MR_r8 = MR_sv(7);
	MR_r7 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i32);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.clause_to_proc", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", 69);
	MR_r3 = (MR_Word) MR_string_const("rtti_varmaps info not found", 27);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i31);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_sv(4) = MR_sv(9);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,
		check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0_i32);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_class_context_2_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(list__drop_3_0);
MR_decl_entry(list__split_list_4_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module12)
	MR_init_entry1(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0);
	MR_init_label10(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,12,14,17,19,13,22,23,25,26,27)
	MR_init_label5(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,28,29,30,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'introduce_exists_casts_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i2);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i3);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i4);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i5);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i6);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = ((MR_Integer) MR_r1 - (MR_Integer) MR_sv(5));
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i7);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i8);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i9);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i10);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i11);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i12);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__drop_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i14);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__split_list_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i17);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__split_list_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i19);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r9 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r10 = MR_r3;
	MR_r3 = MR_sv(8);
	MR_r5 = MR_sv(5);
	MR_sv(5) = MR_r9;
	MR_r4 = MR_r10;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i22);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.clause_to_proc", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.clause_to_proc.introduce_exists_casts_proc\'/4", 67);
	MR_r3 = (MR_Word) MR_string_const("split_list failed", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i22);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i23);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr3 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i25);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(10);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__clause_to_proc__introduce_exists_casts_extra_13_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i26);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(7) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i27);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i28);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i29);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i30);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i31);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0_i32);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(11);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_body_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__clause_to_proc_module13)
	MR_init_entry1(check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0);
	MR_init_label5(check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0,12,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_clauses_to_procs_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0_i4);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,
		check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0_i5);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0_i6);
MR_def_label(check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_all_non_imported_procids_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module14)
	MR_init_entry1(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0);
	MR_init_label9(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0,2,4,6,8,9,10,11,12,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_pred_clauses_to_procs_if_needed'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0_i2);
MR_def_label(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0_i4);
MR_def_label(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0_i6);
MR_def_label(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0_i8);
MR_def_label(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0_i9);
MR_def_label(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_non_imported_procids_1_0,
		check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0_i10);
MR_def_label(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_0,
		check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0_i11);
MR_def_label(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0_i12);
MR_def_label(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_maybe_name_mode_1_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module15)
	MR_init_entry1(fn__check_hlds__clause_to_proc__set_arg_names_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__clause_to_proc__set_arg_names_2_0);
	MR_init_label3(fn__check_hlds__clause_to_proc__set_arg_names_2_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_arg_names'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__clause_to_proc__set_arg_names_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__foreign_arg_var_1_0,
		fn__check_hlds__clause_to_proc__set_arg_names_2_0_i2);
MR_def_label(fn__check_hlds__clause_to_proc__set_arg_names_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__foreign_arg_maybe_name_mode_1_0,
		fn__check_hlds__clause_to_proc__set_arg_names_2_0_i3);
MR_def_label(fn__check_hlds__clause_to_proc__set_arg_names_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__clause_to_proc__set_arg_names_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(fn__check_hlds__clause_to_proc__set_arg_names_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(varset__name_var_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__clause_to_proc_module16)
	MR_init_entry1(check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0);
	MR_init_label5(check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0,12,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'introduce_exists_casts_procs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0_i4);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__clause_to_proc__introduce_exists_casts_proc_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0_i5);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0_i6);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__clause_to_proc_module17)
	MR_init_entry1(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0);
	MR_init_label10(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0,2,4,7,9,11,13,14,15,16,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'introduce_exists_casts_pred'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0_i2);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0_i4);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__is_empty_1_0,
		check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0_i7);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0_i9);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0_i11);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0_i13);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_non_imported_procids_1_0,
		check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0_i14);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__clause_to_proc__introduce_exists_casts_procs_5_0,
		check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0_i15);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0_i16);
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(check_hlds__clause_to_proc__introduce_exists_casts_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module18)
	MR_init_entry1(check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__206__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__206__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__copy_clauses_to_proc__206__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__206__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(check_hlds__clause_to_proc_module19)
	MR_init_entry1(check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__207__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__207__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__copy_clauses_to_proc__207__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__207__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__clause_to_proc_maybe_bunch_0(void)
{
	check_hlds__clause_to_proc_module0();
	check_hlds__clause_to_proc_module1();
	check_hlds__clause_to_proc_module2();
	check_hlds__clause_to_proc_module3();
	check_hlds__clause_to_proc_module4();
	check_hlds__clause_to_proc_module5();
	check_hlds__clause_to_proc_module6();
	check_hlds__clause_to_proc_module7();
	check_hlds__clause_to_proc_module8();
	check_hlds__clause_to_proc_module9();
	check_hlds__clause_to_proc_module10();
	check_hlds__clause_to_proc_module11();
	check_hlds__clause_to_proc_module12();
	check_hlds__clause_to_proc_module13();
	check_hlds__clause_to_proc_module14();
	check_hlds__clause_to_proc_module15();
	check_hlds__clause_to_proc_module16();
	check_hlds__clause_to_proc_module17();
	check_hlds__clause_to_proc_module18();
	check_hlds__clause_to_proc_module19();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__clause_to_proc__init(void);
void mercury__check_hlds__clause_to_proc__init_type_tables(void);
void mercury__check_hlds__clause_to_proc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__clause_to_proc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__clause_to_proc__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__clause_to_proc__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__clause_to_proc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__clause_to_proc_maybe_bunch_0();
	mercury__check_hlds__clause_to_proc__init_debugger();
}

void mercury__check_hlds__clause_to_proc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__check_hlds__clause_to_proc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__clause_to_proc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__clause_to_proc);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__clause_to_proc__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__clause_to_proc__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
