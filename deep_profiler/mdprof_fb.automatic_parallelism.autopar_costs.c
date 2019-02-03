/*
** Automatically generated from `autopar_costs.m'
** by the Mercury compiler,
** version 11.07.1, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdprof_fb__automatic_parallelism__autopar_costs__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 202 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 28 "mdprof_fb.automatic_parallelism.autopar_costs.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 32 "mdprof_fb.automatic_parallelism.autopar_costs.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 36 "mdprof_fb.automatic_parallelism.autopar_costs.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 40 "mdprof_fb.automatic_parallelism.autopar_costs.c"
#line 284 "profile.int"
#include "profile.mh"

#line 44 "mdprof_fb.automatic_parallelism.autopar_costs.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "mdprof_fb.automatic_parallelism.autopar_costs.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "mdprof_fb.automatic_parallelism.autopar_costs.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 56 "mdprof_fb.automatic_parallelism.autopar_costs.c"
#line 57 "mdprof_fb.automatic_parallelism.autopar_costs.c"
#include "mdprof_fb.automatic_parallelism.autopar_costs.mh"

#line 60 "mdprof_fb.automatic_parallelism.autopar_costs.c"
#line 61 "mdprof_fb.automatic_parallelism.autopar_costs.c"
#ifndef MDPROF_FB__AUTOMATIC_PARALLELISM__AUTOPAR_COSTS_DECL_GUARD
#define MDPROF_FB__AUTOMATIC_PARALLELISM__AUTOPAR_COSTS_DECL_GUARD

#line 65 "mdprof_fb.automatic_parallelism.autopar_costs.c"
#line 66 "mdprof_fb.automatic_parallelism.autopar_costs.c"

#endif
#line 69 "mdprof_fb.automatic_parallelism.autopar_costs.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];
MR_decl_label4(mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0, 2,6,4,12)
MR_decl_label7(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0, 2,3,5,6,9,12,8)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0, 2,3,5,9,8,12,13,14,15,16)
MR_decl_label4(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0, 7,4,1,25)
MR_decl_label4(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0, 4,25,9,10)
MR_decl_label7(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0, 4,36,9,10,13,14,15)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_costs__earliest_use_3_0, 3)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_0, 3)
MR_decl_label2(mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_0, 2,3)
MR_decl_label2(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_0, 3,6)
MR_decl_label3(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1, 3,7,6)
MR_decl_label5(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0, 4,34,9,12,13)
MR_decl_label8(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0, 3,5,7,4,11,12,14,18)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_costs__earliest_use_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0)

extern const MR_TypeCtorInfo_Struct mercury_data_lazy__type_ctor_info_lazy_1;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_cost_and_callees_1;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_callee_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_callee_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_CTOR1_ADDR(lazy, lazy),
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(analysis_utils, cost_and_callees),
MR_CTOR0_ADDR(analysis_utils, callee)
}
},
{
{
MR_CTOR1_ADDR(analysis_utils, cost_and_callees),
MR_CTOR0_ADDR(analysis_utils, callee)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_COMMON(0,1),
MR_INT_CTOR_ADDR,
MR_COMMON(0,2),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cs_cost_csq_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_2;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_INT_CTOR_ADDR,
MR_COMMON(0,2),
MR_COMMON(0,4),
MR_CTOR0_ADDR(measurements, cs_cost_csq),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_INT_CTOR_ADDR,
MR_COMMON(0,2),
MR_COMMON(0,4),
MR_CTOR0_ADDR(measurements, cs_cost_csq),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_3;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(var_use_analysis, var_use_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_costs__earliest_use_3_0),
0
},
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_3 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_costs",
"mdprof_fb.automatic_parallelism.autopar_costs",
"earliest_use",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_costs",
"autopar_costs.m",
199,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_costs",
"mdprof_fb.automatic_parallelism.autopar_costs",
"compute_var_use_lazy_arg",
7,
0
},
"mdprof_fb.automatic_parallelism.autopar_costs",
"autopar_costs.m",
192,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_costs",
"mdprof_fb.automatic_parallelism.autopar_costs",
"compute_var_use_lazy_arg",
7,
0
},
"mdprof_fb.automatic_parallelism.autopar_costs",
"autopar_costs.m",
192,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0_1 = {
{
MR_FUNCTION,
"mdprof_fb.automatic_parallelism.autopar_costs",
"mdprof_fb.automatic_parallelism.autopar_costs",
"compute_var_use_lazy",
6,
0
},
"mdprof_fb.automatic_parallelism.autopar_costs",
"autopar_costs.m",
170,
"28"
};


MR_decl_entry(fn__measurements__dead_goal_cost_0_0);
MR_decl_entry(fn__measurements__atomic_goal_cost_1_0);
MR_decl_entry(coverage__get_coverage_after_det_2_0);
MR_decl_entry(fn__measurements__add_goal_costs_seq_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_costs_module0)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0);
	MR_init_label4(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0,4,25,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_calc_cost'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0_i25);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0_i4);
	}
	MR_np_tailcall_ent(fn__measurements__dead_goal_cost_0_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__measurements__atomic_goal_cost_1_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 2), 3);
	MR_np_call_localret_ent(coverage__get_coverage_after_det_2_0,
		mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0,
		mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 2), 4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__measurements__add_goal_costs_seq_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(coverage__get_coverage_before_and_after_det_3_0);
MR_decl_entry(fn__measurements__add_goal_costs_branch_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_costs_module1)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0);
	MR_init_label7(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0,4,36,9,10,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_calc_cost'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0_i36);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0_i4);
	}
	MR_np_tailcall_ent(fn__measurements__dead_goal_cost_0_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__measurements__atomic_goal_cost_1_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 2), 3);
	MR_np_call_localret_ent(coverage__get_coverage_before_and_after_det_3_0,
		mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0_i10);
	}
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__measurements__dead_goal_cost_0_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) MR_r2);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0,
		mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_tfield(0, MR_r2, 2), 4);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__atomic_goal_cost_1_0,
		mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_goal_costs_branch_3_0,
		mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__measurements__add_goal_costs_seq_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(coverage__get_coverage_before_det_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_costs_module2)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0);
	MR_init_label5(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0,4,34,9,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'switch_calc_cost'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0_i34);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0_i4);
	}
	MR_np_tailcall_ent(fn__measurements__dead_goal_cost_0_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__measurements__atomic_goal_cost_1_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0_i9);
	}
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__measurements__dead_goal_cost_0_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_sv(2), 2), 2), 3);
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_tempr1);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0,
		mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_sv(2), 2), 2), 4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__measurements__add_goal_costs_branch_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_costs_module3)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ite_calc_cost'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(2) = MR_tfield(0, MR_tfield(0, MR_r2, 2), 4);
	MR_sv(3) = MR_tfield(0, MR_tfield(0, MR_r3, 2), 4);
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__add_goal_costs_branch_3_0,
		mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__measurements__add_goal_costs_seq_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(program_representation_utils__atomic_goal_is_call_2_0);
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;
MR_decl_entry(fn__lazy__val_1_0);
MR_decl_entry(fn__lazy__delay_1_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_costs_module4)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0);
	MR_init_label4(mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0,2,6,4,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atomic_goal_build_use_map'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(program_representation_utils__atomic_goal_is_call_2_0,
		mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0_i4);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0_i6);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_r2, 1) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_np_call_localret_ent(fn__lazy__val_1_0,
		mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_tfield(0, MR_r2, 1) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_np_call_localret_ent(fn__lazy__val_1_0,
		mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = MR_sv(1);
	MR_tfield(0, MR_r2, 5) = MR_sv(4);
	MR_tfield(0, MR_r2, 6) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_r2, 7) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_np_call_localret_ent(fn__lazy__delay_1_0,
		mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__recursion_depth_from_float_1_0);
static const MR_Float mercury_float_const_2pt0000000000000000 = 2.0000000000000000;

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_costs_module5)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_0,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recursion_type_get_interesting_parallelisation_depth'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_0_i3);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_np_call_localret_ent(fn__measurements__recursion_depth_from_float_1_0,
		mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) &mercury_float_const_2pt0000000000000000;
	MR_np_call_localret_ent(fn__measurements__recursion_depth_from_float_1_0,
		mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_costs_module6)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1);
	MR_init_label3(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1,3,7,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recursion_type_get_interesting_parallelisation_depth'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_np_call_localret_ent(fn__measurements__recursion_depth_from_float_1_0,
		mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1_i6);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) &mercury_float_const_2pt0000000000000000;
	MR_np_call_localret_ent(fn__measurements__recursion_depth_from_float_1_0,
		mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_costs_module7)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'implicit_par_info_intermodule_var_use'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r1, 2), 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_r1, 11);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_mask_field(MR_r2, 2);
	MR_proceed();
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(analysis_utils__cost_and_callees_is_recursive_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cs_cost_csq_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(solutions__solutions_2_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_costs_module8)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0);
	MR_init_label8(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0,3,5,7,4,11,12,14,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_var_use_lazy'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_r1, 3);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tfield(0, MR_sv(1), 4);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_i3);
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(analysis_utils__cost_and_callees_is_recursive_2_0,
		fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_i5);
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = MR_tfield(0, MR_sv(1), 5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__search_3_0,
		fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_i7);
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_r2;
	MR_tfield(0, MR_tempr1, 8) = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_GOTO_LAB(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_i11);
	}
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 9);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_tfield(0, MR_r2, 6) = MR_tempr1;
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 8) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	}
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(solutions__solutions_2_0,
		fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_i12);
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0_i18);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_costs", 45);
	MR_r2 = (MR_Word) MR_string_const("function \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy\'/5", 79);
	MR_r3 = (MR_Word) MR_string_const("Too many solutions ", 19);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_costs_module9)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_costs__earliest_use_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_costs__earliest_use_3_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_costs__earliest_use_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'earliest_use'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_costs__earliest_use_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__earliest_use_3_0_i3);
	}
	MR_r1 = MR_r2;
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__earliest_use_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_0;
MR_decl_entry(fn__cord__empty_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(var_use_analysis__call_site_dynamic_var_use_info_9_1);
MR_decl_entry(var_use_analysis__pessimistic_var_use_info_3_0);
MR_decl_entry(message__append_message_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_costs_module10)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0);
	MR_init_label7(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0,2,3,5,6,9,12,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_var_use_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(8) = MR_tfield(0, MR_r2, 3);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(1);
	}
	MR_np_call_localret_ent(var_use_analysis__call_site_dynamic_var_use_info_9_1,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0_i8);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(var_use_analysis__pessimistic_var_use_info_3_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(fn__measurements__cs_cost_get_calls_1_0);
MR_decl_entry(fn__measurements__cs_cost_get_percall_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__member_index0_3_1);
MR_decl_entry(set__singleton_set_2_0);
MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(message__write_out_messages_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_costs_module11)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,2,3,5,9,8,12,13,14,15,16)
	MR_init_label4(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,7,4,1,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_var_use_lazy_arg'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy_arg/7-0", 7,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(3) = MR_r3;
	MR_fv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_fv(5) = MR_tempr1;
	MR_fv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_calls_1_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Float) 0.0000000000000000 >= MR_word_to_float(MR_r1))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i1);
	}
	MR_r1 = MR_fv(5);
	MR_np_call_localret_ent(fn__measurements__cs_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(3);
	MR_fv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_fv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_index0_3_1,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_fv(4);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i7);
	}
	MR_fv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis_utils, callee);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(set__singleton_set_2_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i8);
	}
	MR_fv(5) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_fv(1), 9);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_costs", 45);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy_arg\'/7", 84);
	MR_r3 = (MR_Word) MR_string_const("first-order call site has wrong number of CSDs", 46);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(7) = MR_r1;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_1,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_fv(6);
	MR_r6 = MR_fv(3);
	MR_r7 = MR_fv(5);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r1;
	MR_fv(5) = MR_r2;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(5);
	MR_np_call_localret_ent(message__write_out_messages_4_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(2);
	MR_succeed();
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(6);
	MR_r2 = MR_fv(3);
	MR_np_call_localret_ent(var_use_analysis__pessimistic_var_use_info_3_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_r1, 1) = MR_fv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(6);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i25);
	}
	MR_fv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_costs", 45);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy_arg\'/7", 84);
	MR_r3 = (MR_Word) MR_string_const("Var use type most be consumption if \\+ member(Var, Args)", 56);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(6);
	MR_r2 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_np_call_localret_ent(var_use_analysis__pessimistic_var_use_info_3_0,
		mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdprof_fb__automatic_parallelism__autopar_costs_maybe_bunch_0(void)
{
	mdprof_fb__automatic_parallelism__autopar_costs_module0();
	mdprof_fb__automatic_parallelism__autopar_costs_module1();
	mdprof_fb__automatic_parallelism__autopar_costs_module2();
	mdprof_fb__automatic_parallelism__autopar_costs_module3();
	mdprof_fb__automatic_parallelism__autopar_costs_module4();
	mdprof_fb__automatic_parallelism__autopar_costs_module5();
	mdprof_fb__automatic_parallelism__autopar_costs_module6();
	mdprof_fb__automatic_parallelism__autopar_costs_module7();
	mdprof_fb__automatic_parallelism__autopar_costs_module8();
	mdprof_fb__automatic_parallelism__autopar_costs_module9();
	mdprof_fb__automatic_parallelism__autopar_costs_module10();
	mdprof_fb__automatic_parallelism__autopar_costs_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init(void);
void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init_type_tables(void);
void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_fb__automatic_parallelism__autopar_costs__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init_threadscope_string_table(void);
#endif

void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_fb__automatic_parallelism__autopar_costs_maybe_bunch_0();
	mercury__mdprof_fb__automatic_parallelism__autopar_costs__init_debugger();
}

void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_fb__automatic_parallelism__autopar_costs__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_fb__automatic_parallelism__autopar_costs);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
