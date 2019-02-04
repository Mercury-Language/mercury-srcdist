/*
** Automatically generated from `live_vars.m'
** by the Mercury compiler,
** version rotd-2010-06-17, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__live_vars__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.live_vars.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.live_vars.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 36 "ll_backend.live_vars.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ll_backend.live_vars.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "ll_backend.live_vars.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "ll_backend.live_vars.c"
#line 49 "ll_backend.live_vars.c"
#include "ll_backend.live_vars.mh"

#line 52 "ll_backend.live_vars.c"
#line 53 "ll_backend.live_vars.c"
#ifndef LL_BACKEND__LIVE_VARS_DECL_GUARD
#define LL_BACKEND__LIVE_VARS_DECL_GUARD

#line 57 "ll_backend.live_vars.c"
#line 58 "ll_backend.live_vars.c"

#endif
#line 61 "ll_backend.live_vars.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

extern const MR_TypeClassDeclStruct
	mercury_data_ll_backend__live_vars__type_class_decl_stack_alloc_info_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__live_vars__type_ctor_info_alloc_data_0,
	mercury_data_ll_backend__live_vars__type_ctor_info_parallel_stackvars_0;
MR_decl_label10(ll_backend__live_vars__build_live_sets_in_call_12_0, 3,32,5,6,7,8,9,10,4,12)
MR_decl_label10(ll_backend__live_vars__build_live_sets_in_call_12_0, 16,17,18,13,21,22,23,24,35,26)
MR_decl_label4(ll_backend__live_vars__build_live_sets_in_call_12_0, 28,25,29,30)
MR_decl_label4(ll_backend__live_vars__build_live_sets_in_cases_12_0, 17,4,6,9)
MR_decl_label7(ll_backend__live_vars__build_live_sets_in_conj_12_0, 25,5,6,8,4,10,11)
MR_decl_label10(ll_backend__live_vars__build_live_sets_in_disj_13_0, 62,4,5,7,11,12,16,17,18,19)
MR_decl_label2(ll_backend__live_vars__build_live_sets_in_disj_13_0, 20,9)
MR_decl_label10(ll_backend__live_vars__build_live_sets_in_goal_12_0, 2,3,4,5,7,8,9,10,12,15)
MR_decl_label10(ll_backend__live_vars__build_live_sets_in_goal_12_0, 16,17,18,14,19,13,22,23,24,11)
MR_decl_label6(ll_backend__live_vars__build_live_sets_in_goal_12_0, 27,28,26,29,30,31)
MR_decl_label10(ll_backend__live_vars__build_live_sets_in_goal_2_14_0, 115,133,221,119,219,90,91,92,94,66)
MR_decl_label10(ll_backend__live_vars__build_live_sets_in_goal_2_14_0, 70,72,73,220,3,4,5,8,9,10)
MR_decl_label10(ll_backend__live_vars__build_live_sets_in_goal_2_14_0, 15,12,17,19,22,27,28,29,31,32)
MR_decl_label10(ll_backend__live_vars__build_live_sets_in_goal_2_14_0, 33,34,35,36,37,38,21,41,43,44)
MR_decl_label10(ll_backend__live_vars__build_live_sets_in_goal_2_14_0, 46,48,154,50,53,56,57,59,55,60)
MR_decl_label10(ll_backend__live_vars__build_live_sets_in_goal_2_14_0, 62,79,80,81,82,84,86,87,96,101)
MR_decl_label8(ll_backend__live_vars__build_live_sets_in_goal_2_14_0, 97,102,103,105,109,110,112,113)
MR_decl_label2(ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0, 3,4)
MR_decl_label4(ll_backend__live_vars__build_live_sets_in_par_conj_12_0, 18,4,7,9)
MR_decl_label2(ll_backend__live_vars__record_par_conj_5_0, 2,3)
MR_decl_label4(__Unify___ll_backend__live_vars__alloc_data_0_0, 4,6,8,1)
MR_decl_label4(__Unify___ll_backend__live_vars__parallel_stackvars_0_0, 6,8,12,1)
MR_decl_label6(__Compare___ll_backend__live_vars__alloc_data_0_0, 3,2,5,9,13,37)
MR_decl_label5(__Compare___ll_backend__live_vars__parallel_stackvars_0_0, 3,2,6,12,33)
MR_def_extern_entry(ll_backend__live_vars__at_call_site_4_0)
MR_def_extern_entry(ll_backend__live_vars__at_resume_site_4_0)
MR_def_extern_entry(ll_backend__live_vars__at_par_conj_4_0)
MR_decl_static(ll_backend__live_vars__resume_locs_include_stack_2_0)
MR_decl_static(ll_backend__live_vars__build_live_sets_in_call_12_0)
MR_decl_static(ll_backend__live_vars__record_par_conj_5_0)
MR_decl_static(fn__ll_backend__live_vars__this_file_0_0)
MR_decl_static(ll_backend__live_vars__build_live_sets_in_goal_12_0)
MR_decl_static(ll_backend__live_vars__build_live_sets_in_goal_2_14_0)
MR_decl_static(ll_backend__live_vars__build_live_sets_in_conj_12_0)
MR_decl_static(ll_backend__live_vars__build_live_sets_in_par_conj_12_0)
MR_decl_static(ll_backend__live_vars__build_live_sets_in_disj_13_0)
MR_decl_static(ll_backend__live_vars__build_live_sets_in_cases_12_0)
MR_def_extern_entry(ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0)
MR_def_extern_entry(__Unify___ll_backend__live_vars__alloc_data_0_0)
MR_def_extern_entry(__Compare___ll_backend__live_vars__alloc_data_0_0)
MR_decl_static(__Unify___ll_backend__live_vars__parallel_stackvars_0_0)
MR_decl_static(__Compare___ll_backend__live_vars__parallel_stackvars_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_1 mercury_common_1[3] =
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_TAG_COMMON(0,1,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__live_vars__build_live_sets_in_goal_2_14_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__live_vars__build_live_sets_in_goal_2_14_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(1,1)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[4] =
{
{
0
},
{
1
},
{
1
},
{
1
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__live_vars__field_types_alloc_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_ll_backend__live_vars__field_names_alloc_data_0_0[] = {
	"ad_module_info",
	"ad_proc_info",
	"ad_typeinfo_liveness",
	"ad_opt_no_return_calls"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__live_vars__du_functor_desc_alloc_data_0_0 = {
	"alloc_data",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__live_vars__field_types_alloc_data_0_0,
	mercury_data_ll_backend__live_vars__field_names_alloc_data_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__live_vars__du_stag_ordered_alloc_data_0_0[] = {
	&mercury_data_ll_backend__live_vars__du_functor_desc_alloc_data_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__live_vars__du_ptag_ordered_alloc_data_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__live_vars__du_stag_ordered_alloc_data_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__live_vars__du_name_ordered_alloc_data_0[] = {
	&mercury_data_ll_backend__live_vars__du_functor_desc_alloc_data_0_0
};

const MR_Integer mercury_data_ll_backend__live_vars__functor_number_map_alloc_data_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__live_vars__type_ctor_info_alloc_data_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__live_vars__alloc_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__live_vars__alloc_data_0_0)),
	"ll_backend.live_vars",
	"alloc_data",
	{ (void *)mercury_data_ll_backend__live_vars__du_name_ordered_alloc_data_0 },
	{ (void *)mercury_data_ll_backend__live_vars__du_ptag_ordered_alloc_data_0 },
	1,
	4,
	mercury_data_ll_backend__live_vars__functor_number_map_alloc_data_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__live_vars__field_types_parallel_stackvars_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0 = {
	"parallel_stackvars",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__live_vars__field_types_parallel_stackvars_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0[] = {
	&mercury_data_ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__live_vars__du_name_ordered_parallel_stackvars_0[] = {
	&mercury_data_ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0
};

const MR_Integer mercury_data_ll_backend__live_vars__functor_number_map_parallel_stackvars_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__live_vars__type_ctor_info_parallel_stackvars_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__live_vars__parallel_stackvars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__live_vars__parallel_stackvars_0_0)),
	"ll_backend.live_vars",
	"parallel_stackvars",
	{ (void *)mercury_data_ll_backend__live_vars__du_name_ordered_parallel_stackvars_0 },
	{ (void *)mercury_data_ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0 },
	1,
	4,
	mercury_data_ll_backend__live_vars__functor_number_map_parallel_stackvars_0
};

const MR_ConstString mercury_data_ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1[] = {
	"T",
};

const MR_TypeClassMethod mercury_data_ll_backend__live_vars__type_class_id_method_ids_stack_alloc_info_1[] = {
	{ "at_call_site", 4, MR_PREDICATE },
	{ "at_resume_site", 4, MR_PREDICATE },
	{ "at_par_conj", 4, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_ll_backend__live_vars__type_class_id_stack_alloc_info_1 = {
	"ll_backend.live_vars",
	"stack_alloc_info",
	1,
	1,
	3,
	mercury_data_ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1,
	mercury_data_ll_backend__live_vars__type_class_id_method_ids_stack_alloc_info_1
};

const MR_TypeClassDeclStruct mercury_data_ll_backend__live_vars__type_class_decl_stack_alloc_info_1 = {
	&mercury_data_ll_backend__live_vars__type_class_id_stack_alloc_info_1,
	0,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__live_vars__build_live_sets_in_goal_2_14_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"ll_backend.live_vars",
"live_vars.m",
427,
"d1;c15;d10;c8;"
};


MR_declare_entry(mercury__do_call_class_method_3);

MR_BEGIN_MODULE(ll_backend__live_vars_module0)
	MR_init_entry1(ll_backend__live_vars__at_call_site_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__live_vars__at_call_site_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'at_call_site'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__live_vars__at_call_site_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__live_vars__at_call_site_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__live_vars_module1)
	MR_init_entry1(ll_backend__live_vars__at_resume_site_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__live_vars__at_resume_site_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'at_resume_site'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__live_vars__at_resume_site_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__live_vars__at_resume_site_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__live_vars_module2)
	MR_init_entry1(ll_backend__live_vars__at_par_conj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__live_vars__at_par_conj_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'at_par_conj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__live_vars__at_par_conj_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__live_vars__at_par_conj_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__live_vars_module3)
	MR_init_entry1(ll_backend__live_vars__resume_locs_include_stack_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__live_vars__resume_locs_include_stack_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'resume_locs_include_stack'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__live_vars__resume_locs_include_stack_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, (MR_Integer) MR_r1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_rtti__get_typeinfo_vars_4_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(hlds__hlds_llds__goal_info_set_need_across_call_3_0);
MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(ll_backend__live_vars_module4)
	MR_init_entry1(ll_backend__live_vars__build_live_sets_in_call_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__live_vars__build_live_sets_in_call_12_0);
	MR_init_label10(ll_backend__live_vars__build_live_sets_in_call_12_0,3,32,5,6,7,8,9,10,4,12)
	MR_init_label10(ll_backend__live_vars__build_live_sets_in_call_12_0,16,17,18,13,21,22,23,24,35,26)
	MR_init_label4(ll_backend__live_vars__build_live_sets_in_call_12_0,28,25,29,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_live_sets_in_call'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__live_vars__build_live_sets_in_call_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(10) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_r7;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i3);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(4), 2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_call_12_0_i5);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_call_12_0_i4);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_tfield(0, MR_sv(4), 1);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i6);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i7);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_rtti__get_typeinfo_vars_4_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i8);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__get_typeinfo_vars_4_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i9);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i10);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i32);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i12);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_call_12_0_i13);
	}
	MR_r2 = MR_tfield(0, MR_sv(4), 3);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_call_12_0_i13);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i16);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i17);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i18);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_call_12_0_i21);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(7);
	MR_r2 = MR_sv(2);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_need_across_call_3_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i22);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__live_vars__build_live_sets_in_call_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__live_vars__build_live_sets_in_call_12_0_i23);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i24);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_call_12_0_i26);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_sv(7);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_call_12_0_i25);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_call_12_0_i35);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i28);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i29);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__live_vars__build_live_sets_in_call_12_0_i30);
MR_def_label(ll_backend__live_vars__build_live_sets_in_call_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_set_need_in_par_conj_3_0);

MR_BEGIN_MODULE(ll_backend__live_vars_module5)
	MR_init_entry1(ll_backend__live_vars__record_par_conj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__live_vars__record_par_conj_5_0);
	MR_init_label2(ll_backend__live_vars__record_par_conj_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_par_conj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__live_vars__record_par_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_need_in_par_conj_3_0,
		ll_backend__live_vars__record_par_conj_5_0_i2);
MR_def_label(ll_backend__live_vars__record_par_conj_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r2 = (MR_Integer) 3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__live_vars__record_par_conj_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__live_vars__record_par_conj_5_0_i3);
MR_def_label(ll_backend__live_vars__record_par_conj_5_0,3)
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


MR_BEGIN_MODULE(ll_backend__live_vars_module6)
	MR_init_entry1(fn__ll_backend__live_vars__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__live_vars__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__live_vars__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("live_vars.m", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_get_pre_deaths_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_pre_births_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_post_deaths_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_post_births_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_expr_has_subgoals_1_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_resume_point_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_set_need_in_resume_3_0);

MR_BEGIN_MODULE(ll_backend__live_vars_module7)
	MR_init_entry1(ll_backend__live_vars__build_live_sets_in_goal_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__live_vars__build_live_sets_in_goal_12_0);
	MR_init_label10(ll_backend__live_vars__build_live_sets_in_goal_12_0,2,3,4,5,7,8,9,10,12,15)
	MR_init_label10(ll_backend__live_vars__build_live_sets_in_goal_12_0,16,17,18,14,19,13,22,23,24,11)
	MR_init_label6(ll_backend__live_vars__build_live_sets_in_goal_12_0,27,28,26,29,30,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_live_sets_in_goal'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__live_vars__build_live_sets_in_goal_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(10) = MR_r7;
	MR_sv(11) = MR_r8;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i2);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_births_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i3);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i4);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i5);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i7);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i8);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_expr_has_subgoals_1_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i9);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i10);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_12_0_i12);
	}
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_12_0_i11);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r5,
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_12_0_i16) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_12_0_i18) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_12_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_12_0_i17));
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,1)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_12_0_i13);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_12_0_i14);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_12_0_i13);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_12_0_i14);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,1)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_12_0_i13);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_12_0_i14);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,1)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_12_0_i13);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i19);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_12_0_i22);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_sv(10);
	MR_r2 = MR_sv(4);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_need_in_resume_3_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i23);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(8);
	MR_r2 = (MR_Integer) 2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__live_vars__build_live_sets_in_goal_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__ll_backend__live_vars__build_live_sets_in_goal_12_0_i24);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(7);
	MR_r5 = MR_r1;
	MR_r3 = MR_sv(9);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_12_0_i26);
	}
	MR_sv(6) = MR_r5;
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i27);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(11);
	}
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i28);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i31);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r4;
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(11);
	}
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i29);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i30);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_goal_12_0_i31);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__arg_info__partition_proc_call_args_7_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(hlds__arg_info__partition_generic_call_args_7_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_call_mercury_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0);
MR_decl_entry(fn__set__union_list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__live_vars_module8)
	MR_init_entry1(ll_backend__live_vars__build_live_sets_in_goal_2_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__live_vars__build_live_sets_in_goal_2_14_0);
	MR_init_label10(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,115,133,221,119,219,90,91,92,94,66)
	MR_init_label10(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,70,72,73,220,3,4,5,8,9,10)
	MR_init_label10(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,15,12,17,19,22,27,28,29,31,32)
	MR_init_label10(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,33,34,35,36,37,38,21,41,43,44)
	MR_init_label10(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,46,48,154,50,53,56,57,59,55,60)
	MR_init_label10(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,62,79,80,81,82,84,86,87,96,101)
	MR_init_label8(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,97,102,103,105,109,110,112,113)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_live_sets_in_goal_2'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__live_vars__build_live_sets_in_goal_2_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i115) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i219) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i66) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i220));
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i133);
	}
	if (MR_INT_NE(MR_tfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i221);
	}
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_proceed();
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__ll_backend__live_vars__this_file_0_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i119);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("build_live_sets_in_goal_2: complicated_unify", 44);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_sv(7) = MR_tfield(1, MR_r2, 3);
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_tfield(1, MR_r2, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i90);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i91);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_call_args_7_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i92);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i94);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(8);
	MR_decr_sp_and_return(20);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_call_12_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i17);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	if (MR_INT_EQ(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i133);
	}
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tfield(2, MR_r2, 1);
	MR_sv(6) = MR_tfield(2, MR_r2, 2);
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i70);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i72);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_generic_call_args_7_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i73);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_call_12_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i17);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i19) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i43) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i112) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i86) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i96) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i79) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i109));
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(3, MR_r2, 1);
	MR_sv(6) = MR_tfield(3, MR_r2, 4);
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(3, MR_r2, 2);
	MR_sv(10) = MR_tfield(3, MR_r2, 3);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i4);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i5);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i8);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_call_args_7_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i9);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i10);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i12);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_call_mercury_1_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i15);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(8);
	MR_decr_sp_and_return(20);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_call_12_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i17);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(12);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_decr_sp_and_return(20);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r10 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i21);
	}
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_sv(5) = MR_tfield(3, MR_r2, 2);
	MR_tempr3 = MR_r9;
	MR_sv(6) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i22);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(16);
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i27);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i28);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i29);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r8 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(13);
	}
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_par_conj_12_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i31);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r5, 1);
	MR_sv(11) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i32);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i33);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__live_vars__record_par_conj_5_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i34);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i35);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i36);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i37);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i38);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(5);
	MR_decr_sp_and_return(20);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r10;
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_conj_12_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i41);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_decr_sp_and_return(20);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_disj_13_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i44);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i46);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_decr_sp_and_return(20);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(6) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i48);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i50);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_decr_sp_and_return(20);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i53);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i154);
	}
	MR_sv(17) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(18) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(19));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i55);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_1,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i56);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i57);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__live_vars__resume_locs_include_stack_2_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i59);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(19));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(17);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(18);
	MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i60);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(17);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(18);
	MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i154);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i62);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	MR_decr_sp_and_return(20);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(5) = MR_tfield(3, MR_r2, 3);
	MR_sv(6) = MR_tfield(3, MR_r2, 4);
	MR_tempr3 = MR_r7;
	MR_sv(12) = MR_tempr3;
	MR_tempr4 = MR_r8;
	MR_sv(13) = MR_tempr4;
	MR_sv(14) = MR_r1;
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_r9;
	}
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_12_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i80);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	}
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_12_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i81);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(14);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_tempr4;
	}
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_12_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i82);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i84);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(6);
	MR_decr_sp_and_return(20);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_12_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i87);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_decr_sp_and_return(20);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_tfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i97);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i97);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(11) = MR_r6;
	MR_sv(13) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_r7;
	MR_r4 = MR_tfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i101);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(8);
	MR_decr_sp_and_return(20);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(13) = MR_tempr1;
	MR_r2 = MR_r10;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_r9;
	}
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_12_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i102);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(6) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i103);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i105);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_decr_sp_and_return(20);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(6);
	MR_decr_sp_and_return(20);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__live_vars__this_file_0_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i110);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("build_live_sets_in_goal_2: unexpected shorthand", 47);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_cases_12_0,
		ll_backend__live_vars__build_live_sets_in_goal_2_14_0_i113);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_2_14_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_decr_sp_and_return(20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_unreachable_1_0);

MR_BEGIN_MODULE(ll_backend__live_vars_module9)
	MR_init_entry1(ll_backend__live_vars__build_live_sets_in_conj_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__live_vars__build_live_sets_in_conj_12_0);
	MR_init_label7(ll_backend__live_vars__build_live_sets_in_conj_12_0,25,5,6,8,4,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_live_sets_in_conj'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__live_vars__build_live_sets_in_conj_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_conj_12_0_i25);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_proceed();
MR_def_label(ll_backend__live_vars__build_live_sets_in_conj_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(8) = MR_tfield(1, MR_r2, 1);
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(7), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__live_vars__build_live_sets_in_conj_12_0_i5);
MR_def_label(ll_backend__live_vars__build_live_sets_in_conj_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__live_vars__build_live_sets_in_conj_12_0_i6);
MR_def_label(ll_backend__live_vars__build_live_sets_in_conj_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_conj_12_0_i4);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_12_0,
		ll_backend__live_vars__build_live_sets_in_conj_12_0_i8);
MR_def_label(ll_backend__live_vars__build_live_sets_in_conj_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_conj_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_12_0,
		ll_backend__live_vars__build_live_sets_in_conj_12_0_i10);
MR_def_label(ll_backend__live_vars__build_live_sets_in_conj_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	}
	MR_np_localcall_lab(ll_backend__live_vars__build_live_sets_in_conj_12_0,
		ll_backend__live_vars__build_live_sets_in_conj_12_0_i11);
MR_def_label(ll_backend__live_vars__build_live_sets_in_conj_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__live_vars_module10)
	MR_init_entry1(ll_backend__live_vars__build_live_sets_in_par_conj_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__live_vars__build_live_sets_in_par_conj_12_0);
	MR_init_label4(ll_backend__live_vars__build_live_sets_in_par_conj_12_0,18,4,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_live_sets_in_par_conj'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__live_vars__build_live_sets_in_par_conj_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_par_conj_12_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_proceed();
MR_def_label(ll_backend__live_vars__build_live_sets_in_par_conj_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(11) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_12_0,
		ll_backend__live_vars__build_live_sets_in_par_conj_12_0_i4);
MR_def_label(ll_backend__live_vars__build_live_sets_in_par_conj_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__live_vars__build_live_sets_in_par_conj_12_0_i7);
MR_def_label(ll_backend__live_vars__build_live_sets_in_par_conj_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r8 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(9);
	}
	MR_np_localcall_lab(ll_backend__live_vars__build_live_sets_in_par_conj_12_0,
		ll_backend__live_vars__build_live_sets_in_par_conj_12_0_i9);
MR_def_label(ll_backend__live_vars__build_live_sets_in_par_conj_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__live_vars_module11)
	MR_init_entry1(ll_backend__live_vars__build_live_sets_in_disj_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__live_vars__build_live_sets_in_disj_13_0);
	MR_init_label10(ll_backend__live_vars__build_live_sets_in_disj_13_0,62,4,5,7,11,12,16,17,18,19)
	MR_init_label2(ll_backend__live_vars__build_live_sets_in_disj_13_0,20,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_live_sets_in_disj'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__live_vars__build_live_sets_in_disj_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_disj_13_0_i62);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	MR_proceed();
MR_def_label(ll_backend__live_vars__build_live_sets_in_disj_13_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r7;
	MR_sv(4) = MR_tempr3;
	MR_tempr4 = MR_r8;
	MR_sv(5) = MR_tempr4;
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_r9;
	}
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_12_0,
		ll_backend__live_vars__build_live_sets_in_disj_13_0_i4);
MR_def_label(ll_backend__live_vars__build_live_sets_in_disj_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_tempr4 = MR_sv(7);
	MR_sv(7) = MR_r4;
	MR_r1 = MR_tempr4;
	MR_tempr5 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr5;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_tempr6;
	}
	MR_np_localcall_lab(ll_backend__live_vars__build_live_sets_in_disj_13_0,
		ll_backend__live_vars__build_live_sets_in_disj_13_0_i5);
MR_def_label(ll_backend__live_vars__build_live_sets_in_disj_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__live_vars__build_live_sets_in_disj_13_0_i7);
MR_def_label(ll_backend__live_vars__build_live_sets_in_disj_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_disj_13_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_disj_13_0_i11);
MR_def_label(ll_backend__live_vars__build_live_sets_in_disj_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		ll_backend__live_vars__build_live_sets_in_disj_13_0_i12);
MR_def_label(ll_backend__live_vars__build_live_sets_in_disj_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_disj_13_0_i9);
	}
	MR_r5 = MR_tfield(1, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r5,
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_disj_13_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_disj_13_0_i19) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_disj_13_0_i16) MR_AND
		MR_LABEL_AP(ll_backend__live_vars__build_live_sets_in_disj_13_0_i18));
MR_def_label(ll_backend__live_vars__build_live_sets_in_disj_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,1)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_disj_13_0_i9);
	}
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_disj_13_0_i20);
MR_def_label(ll_backend__live_vars__build_live_sets_in_disj_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_disj_13_0_i9);
	}
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_disj_13_0_i20);
MR_def_label(ll_backend__live_vars__build_live_sets_in_disj_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,1)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_disj_13_0_i9);
	}
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_disj_13_0_i20);
MR_def_label(ll_backend__live_vars__build_live_sets_in_disj_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,1)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_disj_13_0_i9);
	}
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_disj_13_0_i20);
MR_def_label(ll_backend__live_vars__build_live_sets_in_disj_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__live_vars__build_live_sets_in_disj_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__live_vars_module12)
	MR_init_entry1(ll_backend__live_vars__build_live_sets_in_cases_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__live_vars__build_live_sets_in_cases_12_0);
	MR_init_label4(ll_backend__live_vars__build_live_sets_in_cases_12_0,17,4,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_live_sets_in_cases'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__live_vars__build_live_sets_in_cases_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__live_vars__build_live_sets_in_cases_12_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_proceed();
MR_def_label(ll_backend__live_vars__build_live_sets_in_cases_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_12_0,
		ll_backend__live_vars__build_live_sets_in_cases_12_0_i4);
MR_def_label(ll_backend__live_vars__build_live_sets_in_cases_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_sv(8);
	MR_tempr5 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr5;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr6;
	}
	MR_np_localcall_lab(ll_backend__live_vars__build_live_sets_in_cases_12_0,
		ll_backend__live_vars__build_live_sets_in_cases_12_0_i6);
MR_def_label(ll_backend__live_vars__build_live_sets_in_cases_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__live_vars__build_live_sets_in_cases_12_0_i9);
MR_def_label(ll_backend__live_vars__build_live_sets_in_cases_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__live_vars_module13)
	MR_init_entry1(ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0);
	MR_init_label2(ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_live_sets_in_goal_no_par_stack'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(8) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0_i3);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0_i4);
MR_def_label(ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r8 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__live_vars__build_live_sets_in_goal_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__proc_info_0_0);

MR_BEGIN_MODULE(ll_backend__live_vars_module14)
	MR_init_entry1(__Unify___ll_backend__live_vars__alloc_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__live_vars__alloc_data_0_0);
	MR_init_label4(__Unify___ll_backend__live_vars__alloc_data_0_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__live_vars__alloc_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__live_vars__alloc_data_0_0_i8);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___ll_backend__live_vars__alloc_data_0_0_i4);
MR_def_label(__Unify___ll_backend__live_vars__alloc_data_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__live_vars__alloc_data_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__proc_info_0_0,
		__Unify___ll_backend__live_vars__alloc_data_0_0_i6);
MR_def_label(__Unify___ll_backend__live_vars__alloc_data_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__live_vars__alloc_data_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___ll_backend__live_vars__alloc_data_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___ll_backend__live_vars__alloc_data_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__live_vars__alloc_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__proc_info_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__live_vars_module15)
	MR_init_entry1(__Compare___ll_backend__live_vars__alloc_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__live_vars__alloc_data_0_0);
	MR_init_label6(__Compare___ll_backend__live_vars__alloc_data_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__live_vars__alloc_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__live_vars__alloc_data_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__live_vars__alloc_data_0_0_i2);
MR_def_label(__Compare___ll_backend__live_vars__alloc_data_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__live_vars__alloc_data_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___ll_backend__live_vars__alloc_data_0_0_i5);
MR_def_label(__Compare___ll_backend__live_vars__alloc_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__live_vars__alloc_data_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__proc_info_0_0,
		__Compare___ll_backend__live_vars__alloc_data_0_0_i9);
MR_def_label(__Compare___ll_backend__live_vars__alloc_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__live_vars__alloc_data_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__live_vars__alloc_data_0_0_i13);
MR_def_label(__Compare___ll_backend__live_vars__alloc_data_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__live_vars__alloc_data_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__live_vars__alloc_data_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__live_vars_module16)
	MR_init_entry1(__Unify___ll_backend__live_vars__parallel_stackvars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__live_vars__parallel_stackvars_0_0);
	MR_init_label4(__Unify___ll_backend__live_vars__parallel_stackvars_0_0,6,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__live_vars__parallel_stackvars_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__live_vars__parallel_stackvars_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__live_vars__parallel_stackvars_0_0_i6);
MR_def_label(__Unify___ll_backend__live_vars__parallel_stackvars_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__live_vars__parallel_stackvars_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__live_vars__parallel_stackvars_0_0_i8);
MR_def_label(__Unify___ll_backend__live_vars__parallel_stackvars_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__live_vars__parallel_stackvars_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ll_backend__live_vars__parallel_stackvars_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__live_vars__parallel_stackvars_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__live_vars_module17)
	MR_init_entry1(__Compare___ll_backend__live_vars__parallel_stackvars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__live_vars__parallel_stackvars_0_0);
	MR_init_label5(__Compare___ll_backend__live_vars__parallel_stackvars_0_0,3,2,6,12,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__live_vars__parallel_stackvars_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__live_vars__parallel_stackvars_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__live_vars__parallel_stackvars_0_0_i2);
MR_def_label(__Compare___ll_backend__live_vars__parallel_stackvars_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__live_vars__parallel_stackvars_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__live_vars__parallel_stackvars_0_0_i6);
MR_def_label(__Compare___ll_backend__live_vars__parallel_stackvars_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__live_vars__parallel_stackvars_0_0_i33);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__live_vars__parallel_stackvars_0_0_i12);
MR_def_label(__Compare___ll_backend__live_vars__parallel_stackvars_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__live_vars__parallel_stackvars_0_0_i33);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___ll_backend__live_vars__parallel_stackvars_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__live_vars_maybe_bunch_0(void)
{
	ll_backend__live_vars_module0();
	ll_backend__live_vars_module1();
	ll_backend__live_vars_module2();
	ll_backend__live_vars_module3();
	ll_backend__live_vars_module4();
	ll_backend__live_vars_module5();
	ll_backend__live_vars_module6();
	ll_backend__live_vars_module7();
	ll_backend__live_vars_module8();
	ll_backend__live_vars_module9();
	ll_backend__live_vars_module10();
	ll_backend__live_vars_module11();
	ll_backend__live_vars_module12();
	ll_backend__live_vars_module13();
	ll_backend__live_vars_module14();
	ll_backend__live_vars_module15();
	ll_backend__live_vars_module16();
	ll_backend__live_vars_module17();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__live_vars__init(void);
void mercury__ll_backend__live_vars__init_type_tables(void);
void mercury__ll_backend__live_vars__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__live_vars__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__live_vars__init_complexity_procs(void);
#endif

void mercury__ll_backend__live_vars__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__live_vars_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__live_vars__type_ctor_info_alloc_data_0,
		ll_backend__live_vars__alloc_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__live_vars__type_ctor_info_parallel_stackvars_0,
		ll_backend__live_vars__parallel_stackvars_0_0);
	mercury__ll_backend__live_vars__init_debugger();
}

void mercury__ll_backend__live_vars__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__live_vars__type_ctor_info_alloc_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__live_vars__type_ctor_info_parallel_stackvars_0);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_ll_backend__live_vars__type_class_decl_stack_alloc_info_1);
	}
}


void mercury__ll_backend__live_vars__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__live_vars__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__live_vars);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__live_vars__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
