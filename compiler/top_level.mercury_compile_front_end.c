/*
** Automatically generated from `mercury_compile_front_end.m'
** by the Mercury compiler,
** version rotd-2009-12-12, configured for i686-pc-linux-gnu.
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
INIT mercury__top_level__mercury_compile_front_end__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "top_level.mercury_compile_front_end.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "top_level.mercury_compile_front_end.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "top_level.mercury_compile_front_end.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "top_level.mercury_compile_front_end.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "top_level.mercury_compile_front_end.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "top_level.mercury_compile_front_end.c"
#line 48 "top_level.mercury_compile_front_end.c"
#include "top_level.mercury_compile_front_end.mh"

#line 51 "top_level.mercury_compile_front_end.c"
#line 52 "top_level.mercury_compile_front_end.c"
#ifndef TOP_LEVEL__MERCURY_COMPILE_FRONT_END_DECL_GUARD
#define TOP_LEVEL__MERCURY_COMPILE_FRONT_END_DECL_GUARD

#line 56 "top_level.mercury_compile_front_end.c"
#line 57 "top_level.mercury_compile_front_end.c"

#endif
#line 60 "top_level.mercury_compile_front_end.c"

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
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_top_level__mercury_compile_front_end__type_ctor_info_simplify_pass_0;
MR_decl_label8(top_level__mercury_compile_front_end__check_determinism_8_0, 2,3,4,5,6,8,10,11)
MR_decl_label10(top_level__mercury_compile_front_end__check_stratification_9_0, 2,3,4,11,8,7,14,15,16,17)
MR_decl_label6(top_level__mercury_compile_front_end__check_stratification_9_0, 18,19,21,23,24,6)
MR_decl_label10(top_level__mercury_compile_front_end__check_unique_modes_9_0, 2,3,4,5,6,7,8,10,12,13)
MR_decl_label7(top_level__mercury_compile_front_end__detect_cse_6_0, 2,3,5,6,7,8,9)
MR_decl_label5(top_level__mercury_compile_front_end__detect_switches_6_0, 2,3,4,5,6)
MR_decl_label10(top_level__mercury_compile_front_end__frontend_pass_13_0, 2,3,6,7,8,9,10,11,12,14)
MR_decl_label4(top_level__mercury_compile_front_end__frontend_pass_13_0, 5,16,17,18)
MR_decl_label10(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0, 2,3,4,5,6,7,8,9,13,15)
MR_decl_label10(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0, 12,18,19,20,21,22,23,24,10,11)
MR_decl_label10(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0, 25,26,28,29,30,31,32,33,34,27)
MR_decl_label10(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0, 35,36,37,40,39,41,38,42,43,44)
MR_decl_label10(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0, 46,48,49,50,53,51,57,55,58,59)
MR_decl_label10(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0, 60,61,62,68,67,66,70,71,72,73)
MR_decl_label7(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0, 74,78,81,82,80,64,84)
MR_decl_label10(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0, 12,15,16,17,18,19,20,21,22,23)
MR_decl_label10(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0, 24,25,26,27,28,29,30,31,14,13)
MR_decl_label1(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0, 39)
MR_decl_label10(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0, 2,3,26,5,6,7,8,9,12,11)
MR_decl_label10(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0, 13,14,15,16,17,18,20,21,22,23)
MR_decl_label1(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0, 24)
MR_decl_label10(top_level__mercury_compile_front_end__maybe_polymorphism_8_0, 2,3,4,7,8,11,12,10,14,15)
MR_decl_label3(top_level__mercury_compile_front_end__maybe_polymorphism_8_0, 16,17,6)
MR_decl_label10(top_level__mercury_compile_front_end__maybe_simplify_10_0, 2,3,4,6,8,9,10,11,12,13)
MR_decl_label10(top_level__mercury_compile_front_end__maybe_simplify_10_0, 19,21,23,25,27,28,30,31,5,34)
MR_decl_label10(top_level__mercury_compile_front_end__maybe_simplify_10_0, 35,36,37,40,43,44,48,49,50,32)
MR_decl_label10(top_level__mercury_compile_front_end__maybe_unused_imports_8_0, 2,3,5,6,7,8,9,10,11,12)
MR_decl_label10(top_level__mercury_compile_front_end__maybe_write_optfile_9_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(top_level__mercury_compile_front_end__maybe_write_optfile_9_0, 12,13,14,15,18,85,21,26,27,28)
MR_decl_label10(top_level__mercury_compile_front_end__maybe_write_optfile_9_0, 87,31,17,35,40,42,44,46,48,50)
MR_decl_label10(top_level__mercury_compile_front_end__maybe_write_optfile_9_0, 52,54,57,59,61,37,62,63,64,65)
MR_decl_label1(top_level__mercury_compile_front_end__maybe_write_optfile_9_0, 66)
MR_decl_label10(top_level__mercury_compile_front_end__modecheck_10_0, 2,3,4,7,6,8,12,13,14,15)
MR_decl_label10(top_level__mercury_compile_front_end__modecheck_10_0, 16,17,18,19,5,20,21,24,23,26)
MR_decl_label2(top_level__mercury_compile_front_end__modecheck_10_0, 27,28)
MR_decl_label10(top_level__mercury_compile_front_end__process_try_goals_9_0, 2,3,4,5,6,7,8,10,12,13)
MR_decl_label10(top_level__mercury_compile_front_end__puritycheck_8_0, 2,3,4,5,6,7,8,10,12,13)
MR_decl_label7(top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0, 2,3,4,5,6,7,8)
MR_def_extern_entry(top_level__mercury_compile_front_end__maybe_simplify_10_0)
MR_decl_static(top_level__mercury_compile_front_end__maybe_polymorphism_8_0)
MR_decl_static(top_level__mercury_compile_front_end__maybe_unused_imports_8_0)
MR_decl_static(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0)
MR_decl_static(top_level__mercury_compile_front_end__modecheck_10_0)
MR_decl_static(top_level__mercury_compile_front_end__detect_switches_6_0)
MR_decl_static(top_level__mercury_compile_front_end__detect_cse_6_0)
MR_decl_static(top_level__mercury_compile_front_end__check_determinism_8_0)
MR_decl_static(top_level__mercury_compile_front_end__check_unique_modes_9_0)
MR_decl_static(top_level__mercury_compile_front_end__check_stratification_9_0)
MR_decl_static(top_level__mercury_compile_front_end__process_try_goals_9_0)
MR_decl_static(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0)
MR_decl_static(top_level__mercury_compile_front_end__maybe_write_optfile_9_0)
MR_decl_static(top_level__mercury_compile_front_end__puritycheck_8_0)
MR_decl_static(top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0)
MR_decl_static(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0)
MR_def_extern_entry(top_level__mercury_compile_front_end__frontend_pass_13_0)
MR_def_extern_entry(__Unify___top_level__mercury_compile_front_end__simplify_pass_0_0)
MR_def_extern_entry(__Compare___top_level__mercury_compile_front_end__simplify_pass_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_front_end__maybe_simplify_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_simplifications_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_front_end__maybe_simplify_10_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(check_hlds__simplify, simplifications),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(check_hlds__mode_constraints__process_module_4_0);
MR_decl_entry(check_hlds__modes__modecheck_module_2_0);
static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(check_hlds__mode_constraints__process_module_4_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(check_hlds__modes__modecheck_module_2_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modes__type_ctor_info_modes_safe_to_continue_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modes__type_ctor_info_modes_safe_to_continue_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
3,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(check_hlds__modes, modes_safe_to_continue),
MR_TAG_COMMON(0,0,1)
},
{
MR_CTOR0_ADDR(builtin, tuple),
3,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(check_hlds__modes, modes_safe_to_continue),
MR_COMMON(0,2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_front_end__modecheck_10_0_1;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_front_end__modecheck_10_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(4,1)
},
};

static const MR_EnumFunctorDesc mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0 = {
	"simplify_pass_frontend",
	0
};

static const MR_EnumFunctorDesc mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1 = {
	"simplify_pass_post_untuple",
	1
};

static const MR_EnumFunctorDesc mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2 = {
	"simplify_pass_pre_prof_transforms",
	2
};

static const MR_EnumFunctorDesc mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3 = {
	"simplify_pass_ml_backend",
	3
};

static const MR_EnumFunctorDesc mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4 = {
	"simplify_pass_ll_backend",
	4
};

const MR_EnumFunctorDescPtr mercury_data_top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0[] = {
	&mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
	&mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
	&mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2,
	&mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
	&mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4
};

const MR_EnumFunctorDescPtr mercury_data_top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[] = {
	&mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
	&mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
	&mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
	&mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
	&mercury_data_top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2
};

const MR_Integer mercury_data_top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[] = {
	0,
	3,
	4,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_top_level__mercury_compile_front_end__type_ctor_info_simplify_pass_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___top_level__mercury_compile_front_end__simplify_pass_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___top_level__mercury_compile_front_end__simplify_pass_0_0)),
	"top_level.mercury_compile_front_end",
	"simplify_pass",
	{ (void *)mercury_data_top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0 },
	{ (void *)mercury_data_top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0 },
	5,
	4,
	mercury_data_top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0
};


static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_front_end__modecheck_10_0_1 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"modecheck_module",
2,
0
},
"top_level.mercury_compile_front_end",
"mercury_compile_front_end.m",
631,
"c5;s2-2;c3;q!;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_constraints",
"check_hlds.mode_constraints",
"process_module",
4,
0
},
"top_level.mercury_compile_front_end",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_front_end__maybe_simplify_10_0_1 = {
{
MR_PREDICATE,
"check_hlds.simplify",
"check_hlds.simplify",
"simplify_pred",
8,
0
},
"top_level.mercury_compile_front_end",
"mercury_compile_front_end.m",
885,
"d1;c13;d1;c8;"
};


MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(check_hlds__simplify__find_simplifications_3_0);
MR_decl_entry(fn__check_hlds__simplify__simplifications_to_list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_simplification_0;
MR_decl_entry(list__cons_3_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__list__delete_all_2_0);
MR_decl_entry(hlds__hlds_error_util__maybe_write_out_errors_8_0);
MR_decl_entry(libs__file_util__maybe_write_string_4_0);
MR_decl_entry(libs__file_util__maybe_flush_output_3_0);
MR_decl_entry(fn__check_hlds__simplify__list_to_simplifications_1_0);
MR_decl_entry(check_hlds__simplify__simplify_pred_8_0);
MR_decl_entry(hlds__passes_aux__process_all_nonimported_procs_errors_7_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(libs__file_util__maybe_report_stats_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module0)
	MR_init_entry1(top_level__mercury_compile_front_end__maybe_simplify_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__maybe_simplify_10_0);
	MR_init_label10(top_level__mercury_compile_front_end__maybe_simplify_10_0,2,3,4,6,8,9,10,11,12,13)
	MR_init_label10(top_level__mercury_compile_front_end__maybe_simplify_10_0,19,21,23,25,27,28,30,31,5,34)
	MR_init_label10(top_level__mercury_compile_front_end__maybe_simplify_10_0,35,36,37,40,43,44,48,49,50,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_simplify'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_front_end__maybe_simplify_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i2);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__simplify__find_simplifications_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i3);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__simplify__simplifications_to_list_1_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i4);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(2),
		MR_LABEL_AP(top_level__mercury_compile_front_end__maybe_simplify_10_0_i6) MR_AND
		MR_LABEL_AP(top_level__mercury_compile_front_end__maybe_simplify_10_0_i25) MR_AND
		MR_LABEL_AP(top_level__mercury_compile_front_end__maybe_simplify_10_0_i27) MR_AND
		MR_LABEL_AP(top_level__mercury_compile_front_end__maybe_simplify_10_0_i23) MR_AND
		MR_LABEL_AP(top_level__mercury_compile_front_end__maybe_simplify_10_0_i8));
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 5;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__cons_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i31);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 339;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i9);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 173;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i10);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 188;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i11);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 189;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i12);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_simplify_10_0_i13);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_simplify_10_0_i13);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_simplify_10_0_i13);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_simplify_10_0_i13);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 9;
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(list__cons_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i19);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Integer) 9;
	MR_np_call_localret_ent(fn__list__delete_all_2_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i19);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(list__cons_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i21);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 7;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__cons_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i31);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__cons_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i31);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__cons_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i31);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 175;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i28);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_simplify_10_0_i30);
	}
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_simplify_10_0_i5);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(list__cons_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i31);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_simplify_10_0_i32);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i34);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Simplifying goals...\n", 23);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i35);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i36);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__simplify__list_to_simplifications_1_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i37);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__simplify__simplify_pred_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_errors_7_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i40);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_simplify_10_0_i48);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i43);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i44);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i49);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i49);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__maybe_simplify_10_0_i50);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(top_level__mercury_compile_front_end__maybe_simplify_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__polymorphism__polymorphism_process_module_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module1)
	MR_init_entry1(top_level__mercury_compile_front_end__maybe_polymorphism_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__maybe_polymorphism_8_0);
	MR_init_label10(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,2,3,4,7,8,11,12,10,14,15)
	MR_init_label3(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,16,17,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_polymorphism'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__maybe_polymorphism_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i2);
MR_def_label(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i3);
MR_def_label(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 276;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i4);
MR_def_label(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 40;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i7);
MR_def_label(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_process_module_2_0,
		top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i8);
MR_def_label(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i10);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Transforming polymorphic unifications...", 42);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i11);
MR_def_label(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i12);
MR_def_label(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i16);
MR_def_label(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Transforming polymorphic unifications...\n", 43);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i14);
MR_def_label(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i15);
MR_def_label(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i16);
MR_def_label(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__maybe_polymorphism_8_0_i17);
MR_def_label(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury_compile_front_end.m", 27);
	MR_r2 = (MR_Word) MR_string_const("sorry, \140--no-polymorphism\' is no longer supported", 49);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__unused_imports__unused_imports_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module2)
	MR_init_entry1(top_level__mercury_compile_front_end__maybe_unused_imports_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__maybe_unused_imports_8_0);
	MR_init_label10(top_level__mercury_compile_front_end__maybe_unused_imports_8_0,2,3,5,6,7,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_unused_imports'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__maybe_unused_imports_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__maybe_unused_imports_8_0_i2);
MR_def_label(top_level__mercury_compile_front_end__maybe_unused_imports_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_unused_imports_8_0_i3);
MR_def_label(top_level__mercury_compile_front_end__maybe_unused_imports_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_unused_imports_8_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(top_level__mercury_compile_front_end__maybe_unused_imports_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__maybe_unused_imports_8_0_i6);
MR_def_label(top_level__mercury_compile_front_end__maybe_unused_imports_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Checking for unused imports...", 32);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__maybe_unused_imports_8_0_i7);
MR_def_label(top_level__mercury_compile_front_end__maybe_unused_imports_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__unused_imports__unused_imports_4_0,
		top_level__mercury_compile_front_end__maybe_unused_imports_8_0_i8);
MR_def_label(top_level__mercury_compile_front_end__maybe_unused_imports_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__maybe_unused_imports_8_0_i9);
MR_def_label(top_level__mercury_compile_front_end__maybe_unused_imports_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__maybe_unused_imports_8_0_i10);
MR_def_label(top_level__mercury_compile_front_end__maybe_unused_imports_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__maybe_unused_imports_8_0_i11);
MR_def_label(top_level__mercury_compile_front_end__maybe_unused_imports_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__maybe_unused_imports_8_0_i12);
MR_def_label(top_level__mercury_compile_front_end__maybe_unused_imports_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(benchmarking__benchmark_det_io_7_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module3)
	MR_init_entry1(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__maybe_mode_constraints_6_0);
	MR_init_label10(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,2,3,26,5,6,7,8,9,12,11)
	MR_init_label10(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,13,14,15,16,17,18,20,21,22,23)
	MR_init_label1(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_mode_constraints'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i2);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 134;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i3);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i5);
	}
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Dumping mode constraints...\n", 30);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i6);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i7);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i8);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 137;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i9);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i11);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_constraints__process_module_4_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i12);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i24);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 138;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i13);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i14);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i15);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i16);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mode-constraints", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i17);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i18);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_np_call_localret_ent(benchmarking__benchmark_det_io_7_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i20);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i21);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" ms\n", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i22);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i23);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i24);
MR_def_label(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__maybe_mode_constraints_6_0_i26);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(benchmarking__benchmark_det_5_0);
MR_decl_entry(fn__parse_tree__error_util__contains_errors_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module4)
	MR_init_entry1(top_level__mercury_compile_front_end__modecheck_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__modecheck_10_0);
	MR_init_label10(top_level__mercury_compile_front_end__modecheck_10_0,2,3,4,7,6,8,12,13,14,15)
	MR_init_label10(top_level__mercury_compile_front_end__modecheck_10_0,16,17,18,19,5,20,21,24,23,26)
	MR_init_label2(top_level__mercury_compile_front_end__modecheck_10_0,27,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__modecheck_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i2);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i3);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 137;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i4);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__modecheck_10_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_module_2_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i7);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_sv(7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_GOTO_LAB(top_level__mercury_compile_front_end__modecheck_10_0_i5);
	}
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 138;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i8);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(benchmarking__benchmark_det_5_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i12);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i13);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" ms\n", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i14);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" repeats: ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i15);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i16);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i17);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("BENCHMARK modecheck, ", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i18);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i19);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i20);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i21);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__modecheck_10_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i24);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Program is mode-correct.\n", 27);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i27);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i26);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Program contains mode error(s).\n", 34);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i27);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__modecheck_10_0_i28);
MR_def_label(top_level__mercury_compile_front_end__modecheck_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__switch_detection__detect_switches_in_module_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module5)
	MR_init_entry1(top_level__mercury_compile_front_end__detect_switches_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__detect_switches_6_0);
	MR_init_label5(top_level__mercury_compile_front_end__detect_switches_6_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_switches'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__detect_switches_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("% Detecting switches...\n", 24);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__detect_switches_6_0_i2);
MR_def_label(top_level__mercury_compile_front_end__detect_switches_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_front_end__detect_switches_6_0_i3);
MR_def_label(top_level__mercury_compile_front_end__detect_switches_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_module_2_0,
		top_level__mercury_compile_front_end__detect_switches_6_0_i4);
MR_def_label(top_level__mercury_compile_front_end__detect_switches_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__detect_switches_6_0_i5);
MR_def_label(top_level__mercury_compile_front_end__detect_switches_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__detect_switches_6_0_i6);
MR_def_label(top_level__mercury_compile_front_end__detect_switches_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__cse_detection__detect_cse_in_module_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module6)
	MR_init_entry1(top_level__mercury_compile_front_end__detect_cse_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__detect_cse_6_0);
	MR_init_label7(top_level__mercury_compile_front_end__detect_cse_6_0,2,3,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__detect_cse_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__detect_cse_6_0_i2);
MR_def_label(top_level__mercury_compile_front_end__detect_cse_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 320;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__detect_cse_6_0_i3);
MR_def_label(top_level__mercury_compile_front_end__detect_cse_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__detect_cse_6_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_front_end__detect_cse_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Detecting common deconstructions...\n", 38);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__detect_cse_6_0_i6);
MR_def_label(top_level__mercury_compile_front_end__detect_cse_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_module_2_0,
		top_level__mercury_compile_front_end__detect_cse_6_0_i7);
MR_def_label(top_level__mercury_compile_front_end__detect_cse_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__detect_cse_6_0_i8);
MR_def_label(top_level__mercury_compile_front_end__detect_cse_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__detect_cse_6_0_i9);
MR_def_label(top_level__mercury_compile_front_end__detect_cse_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_analysis__determinism_pass_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module7)
	MR_init_entry1(top_level__mercury_compile_front_end__check_determinism_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__check_determinism_8_0);
	MR_init_label8(top_level__mercury_compile_front_end__check_determinism_8_0,2,3,4,5,6,8,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_determinism'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__check_determinism_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(check_hlds__det_analysis__determinism_pass_3_0,
		top_level__mercury_compile_front_end__check_determinism_8_0_i2);
MR_def_label(top_level__mercury_compile_front_end__check_determinism_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__check_determinism_8_0_i3);
MR_def_label(top_level__mercury_compile_front_end__check_determinism_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__check_determinism_8_0_i4);
MR_def_label(top_level__mercury_compile_front_end__check_determinism_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		top_level__mercury_compile_front_end__check_determinism_8_0_i5);
MR_def_label(top_level__mercury_compile_front_end__check_determinism_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__check_determinism_8_0_i6);
MR_def_label(top_level__mercury_compile_front_end__check_determinism_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__check_determinism_8_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Program is determinism-correct.\n", 34);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__check_determinism_8_0_i10);
MR_def_label(top_level__mercury_compile_front_end__check_determinism_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Program contains determinism error(s).\n", 41);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__check_determinism_8_0_i10);
MR_def_label(top_level__mercury_compile_front_end__check_determinism_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__check_determinism_8_0_i11);
MR_def_label(top_level__mercury_compile_front_end__check_determinism_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__unique_modes__unique_modes_check_module_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module8)
	MR_init_entry1(top_level__mercury_compile_front_end__check_unique_modes_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__check_unique_modes_9_0);
	MR_init_label10(top_level__mercury_compile_front_end__check_unique_modes_9_0,2,3,4,5,6,7,8,10,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_unique_modes'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__check_unique_modes_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__check_unique_modes_9_0_i2);
MR_def_label(top_level__mercury_compile_front_end__check_unique_modes_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__check_unique_modes_9_0_i3);
MR_def_label(top_level__mercury_compile_front_end__check_unique_modes_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Checking for backtracking over unique modes...\n", 49);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__check_unique_modes_9_0_i4);
MR_def_label(top_level__mercury_compile_front_end__check_unique_modes_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_module_3_0,
		top_level__mercury_compile_front_end__check_unique_modes_9_0_i5);
MR_def_label(top_level__mercury_compile_front_end__check_unique_modes_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__check_unique_modes_9_0_i6);
MR_def_label(top_level__mercury_compile_front_end__check_unique_modes_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		top_level__mercury_compile_front_end__check_unique_modes_9_0_i7);
MR_def_label(top_level__mercury_compile_front_end__check_unique_modes_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__check_unique_modes_9_0_i8);
MR_def_label(top_level__mercury_compile_front_end__check_unique_modes_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__check_unique_modes_9_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Program is unique-mode-correct.\n", 34);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__check_unique_modes_9_0_i12);
MR_def_label(top_level__mercury_compile_front_end__check_unique_modes_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Program contains unique mode error(s).\n", 41);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__check_unique_modes_9_0_i12);
MR_def_label(top_level__mercury_compile_front_end__check_unique_modes_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__check_unique_modes_9_0_i13);
MR_def_label(top_level__mercury_compile_front_end__check_unique_modes_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_stratified_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(set__empty_1_0);
MR_decl_entry(check_hlds__stratify__check_stratification_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module9)
	MR_init_entry1(top_level__mercury_compile_front_end__check_stratification_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__check_stratification_9_0);
	MR_init_label10(top_level__mercury_compile_front_end__check_stratification_9_0,2,3,4,11,8,7,14,15,16,17)
	MR_init_label6(top_level__mercury_compile_front_end__check_stratification_9_0,18,19,21,23,24,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_stratification'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__check_stratification_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_stratified_preds_2_0,
		top_level__mercury_compile_front_end__check_stratification_9_0_i2);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__check_stratification_9_0_i3);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__check_stratification_9_0_i4);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		top_level__mercury_compile_front_end__check_stratification_9_0_i11);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__check_stratification_9_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_GOTO_LAB(top_level__mercury_compile_front_end__check_stratification_9_0_i7);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__check_stratification_9_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__check_stratification_9_0_i14);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Checking stratification...\n", 29);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__check_stratification_9_0_i15);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__stratify__check_stratification_4_0,
		top_level__mercury_compile_front_end__check_stratification_9_0_i16);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__check_stratification_9_0_i17);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		top_level__mercury_compile_front_end__check_stratification_9_0_i18);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__check_stratification_9_0_i19);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__check_stratification_9_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__check_stratification_9_0_i23);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Program contains stratification error(s).\n", 44);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__check_stratification_9_0_i23);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__check_stratification_9_0_i24);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(top_level__mercury_compile_front_end__check_stratification_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__try_expand__expand_try_goals_in_module_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module10)
	MR_init_entry1(top_level__mercury_compile_front_end__process_try_goals_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__process_try_goals_9_0);
	MR_init_label10(top_level__mercury_compile_front_end__process_try_goals_9_0,2,3,4,5,6,7,8,10,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_try_goals'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__process_try_goals_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__process_try_goals_9_0_i2);
MR_def_label(top_level__mercury_compile_front_end__process_try_goals_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__process_try_goals_9_0_i3);
MR_def_label(top_level__mercury_compile_front_end__process_try_goals_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Transforming try goals...\n", 28);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__process_try_goals_9_0_i4);
MR_def_label(top_level__mercury_compile_front_end__process_try_goals_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_module_4_0,
		top_level__mercury_compile_front_end__process_try_goals_9_0_i5);
MR_def_label(top_level__mercury_compile_front_end__process_try_goals_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__process_try_goals_9_0_i6);
MR_def_label(top_level__mercury_compile_front_end__process_try_goals_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		top_level__mercury_compile_front_end__process_try_goals_9_0_i7);
MR_def_label(top_level__mercury_compile_front_end__process_try_goals_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__process_try_goals_9_0_i8);
MR_def_label(top_level__mercury_compile_front_end__process_try_goals_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__process_try_goals_9_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__process_try_goals_9_0_i12);
MR_def_label(top_level__mercury_compile_front_end__process_try_goals_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Program contains error(s).\n", 29);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__process_try_goals_9_0_i12);
MR_def_label(top_level__mercury_compile_front_end__process_try_goals_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__process_try_goals_9_0_i13);
MR_def_label(top_level__mercury_compile_front_end__process_try_goals_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__passes_aux__maybe_dump_hlds_7_0);
MR_decl_entry(hlds__hlds_module__module_info_get_num_errors_2_0);
MR_decl_entry(io__get_exit_status_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module11)
	MR_init_entry1(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0);
	MR_init_label10(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,12,15,16,17,18,19,20,21,22,23)
	MR_init_label10(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,24,25,26,27,28,29,30,31,14,13)
	MR_init_label1(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'frontend_pass_by_phases'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i2);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 39;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i3);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 47;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i4);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__maybe_polymorphism_8_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i5);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = (MR_Integer) 30;
	MR_r3 = (MR_Word) MR_string_const("polymorphism", 12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i6);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__maybe_unused_imports_8_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i7);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = (MR_Integer) 31;
	MR_r3 = (MR_Word) MR_string_const("unused_imports", 14);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i8);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__maybe_mode_constraints_6_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i9);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 33;
	MR_r3 = (MR_Word) MR_string_const("mode_constraints", 16);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i10);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__modecheck_10_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i11);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 35;
	MR_r3 = (MR_Word) MR_string_const("modecheck", 9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i12);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i14);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__detect_switches_6_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i15);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 40;
	MR_r3 = (MR_Word) MR_string_const("switch_detect", 13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i16);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__detect_cse_6_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i17);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 45;
	MR_r3 = (MR_Word) MR_string_const("cse", 3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i18);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__check_determinism_8_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i19);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 50;
	MR_r3 = (MR_Word) MR_string_const("determinism", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i20);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__check_unique_modes_9_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i21);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_r2 = (MR_Integer) 55;
	MR_r3 = (MR_Word) MR_string_const("unique_modes", 12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i22);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__check_stratification_9_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i23);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_r2 = (MR_Integer) 60;
	MR_r3 = (MR_Word) MR_string_const("stratification", 14);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i24);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__process_try_goals_9_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i25);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_r2 = (MR_Integer) 62;
	MR_r3 = (MR_Word) MR_string_const("try", 3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i26);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__maybe_simplify_10_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i27);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Integer) 65;
	MR_r3 = (MR_Word) MR_string_const("frontend_simplify", 17);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i28);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_num_errors_2_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i29);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__get_exit_status_3_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i30);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i31);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i31);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i31);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i31);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i31);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i31);
	}
	MR_sv(1) = (MR_Integer) 0;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r2 = (MR_Integer) 99;
	MR_r3 = (MR_Word) MR_string_const("front_end", 9);
	MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i13);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r2 = (MR_Integer) 99;
	MR_r3 = (MR_Word) MR_string_const("front_end", 9);
	MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i13);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(7) = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 99;
	MR_r3 = (MR_Word) MR_string_const("front_end", 9);
	}
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0_i39);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);
MR_decl_entry(transform_hlds__intermod__adjust_pred_import_status_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(parse_tree__file_names__module_name_to_search_file_name_6_0);
MR_decl_entry(libs__file_util__search_for_file_returning_dir_6_0);
MR_decl_entry(transform_hlds__intermod__write_opt_file_4_0);
MR_decl_entry(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(parse_tree__file_names__module_name_to_file_name_7_0);
MR_decl_entry(parse_tree__module_cmds__update_interface_4_0);
MR_decl_entry(parse_tree__module_cmds__touch_interface_datestamp_5_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module12)
	MR_init_entry1(top_level__mercury_compile_front_end__maybe_write_optfile_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__maybe_write_optfile_9_0);
	MR_init_label10(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,12,13,14,15,18,85,21,26,27,28)
	MR_init_label10(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,87,31,17,35,40,42,44,46,48,50)
	MR_init_label10(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,52,54,57,59,61,37,62,63,64,65)
	MR_init_label1(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,66)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_write_optfile'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__maybe_write_optfile_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(15) = MR_tempr1;
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i2);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 299;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i3);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 304;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i4);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 324;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i5);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 597;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i6);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 301;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i7);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 392;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i8);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 399;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i9);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 384;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i10);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 386;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i11);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 407;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i12);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 408;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i13);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 366;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i14);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 369;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i15);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i17);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i18);
	}
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__intermod__adjust_pred_import_status_2_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i31);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i21);
	}
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__intermod__adjust_pred_import_status_2_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i31);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i87);
	}
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i26);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(".opt", 4);
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_search_file_name_6_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i27);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__file_util__search_for_file_returning_dir_6_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i28);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i85);
	}
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_decr_sp_and_return(18);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_decr_sp_and_return(18);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__intermod__write_opt_file_4_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i35);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i37);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i40);
	}
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i57);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i42);
	}
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i57);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i44);
	}
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i57);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i46);
	}
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i57);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(14),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i48);
	}
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i57);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i50);
	}
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i57);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(13),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i52);
	}
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i57);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i54);
	}
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i57);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i37);
	}
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i57);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i59);
	}
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i62);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i61);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i62);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_sv(16);
	MR_sv(5) = MR_sv(17);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i63);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(".opt", 4);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i64);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__module_cmds__update_interface_4_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i65);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(".optdate", 8);
	MR_np_call_localret_ent(parse_tree__module_cmds__touch_interface_datestamp_5_0,
		top_level__mercury_compile_front_end__maybe_write_optfile_9_0_i66);
MR_def_label(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__purity__puritycheck_module_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module13)
	MR_init_entry1(top_level__mercury_compile_front_end__puritycheck_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__puritycheck_8_0);
	MR_init_label10(top_level__mercury_compile_front_end__puritycheck_8_0,2,3,4,5,6,7,8,10,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'puritycheck'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__puritycheck_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r2 = (MR_Word) MR_string_const("% Purity-checking clauses...\n", 29);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__puritycheck_8_0_i2);
MR_def_label(top_level__mercury_compile_front_end__puritycheck_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__purity__puritycheck_module_4_0,
		top_level__mercury_compile_front_end__puritycheck_8_0_i3);
MR_def_label(top_level__mercury_compile_front_end__puritycheck_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__puritycheck_8_0_i4);
MR_def_label(top_level__mercury_compile_front_end__puritycheck_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__puritycheck_8_0_i5);
MR_def_label(top_level__mercury_compile_front_end__puritycheck_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		top_level__mercury_compile_front_end__puritycheck_8_0_i6);
MR_def_label(top_level__mercury_compile_front_end__puritycheck_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__puritycheck_8_0_i7);
MR_def_label(top_level__mercury_compile_front_end__puritycheck_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__puritycheck_8_0_i8);
MR_def_label(top_level__mercury_compile_front_end__puritycheck_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__puritycheck_8_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Program is purity-correct.\n", 29);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__puritycheck_8_0_i12);
MR_def_label(top_level__mercury_compile_front_end__puritycheck_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Program contains purity error(s).\n", 36);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__puritycheck_8_0_i12);
MR_def_label(top_level__mercury_compile_front_end__puritycheck_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__puritycheck_8_0_i13);
MR_def_label(top_level__mercury_compile_front_end__puritycheck_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module14)
	MR_init_entry1(top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0);
	MR_init_label7(top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'subst_implementation_defined_literals'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0_i2);
MR_def_label(top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0_i3);
MR_def_label(top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Substituting implementation-defined literals...\n", 50);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0_i4);
MR_def_label(top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0_i5);
MR_def_label(top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_0,
		top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0_i6);
MR_def_label(top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0_i7);
MR_def_label(top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0_i8);
MR_def_label(top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__dead_proc_elim__dead_pred_elim_2_0);
MR_decl_entry(check_hlds__inst_check__check_insts_have_matching_types_3_0);
MR_decl_entry(check_hlds__typecheck__typecheck_module_4_0);
MR_decl_entry(check_hlds__type_constraints__typecheck_constraints_3_0);
MR_decl_entry(fn__bool__not_1_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(check_hlds__post_typecheck__post_typecheck_finish_preds_7_0);
MR_decl_entry(fn__bool__or_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module15)
	MR_init_entry1(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0);
	MR_init_label10(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,2,3,4,5,6,7,8,9,13,15)
	MR_init_label10(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,12,18,19,20,21,22,23,24,10,11)
	MR_init_label10(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,25,26,28,29,30,31,32,33,34,27)
	MR_init_label10(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,35,36,37,40,39,41,38,42,43,44)
	MR_init_label10(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,46,48,49,50,53,51,57,55,58,59)
	MR_init_label10(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,60,61,62,68,67,66,70,71,72,73)
	MR_init_label7(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,74,78,81,82,80,64,84)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'frontend_pass_after_typecheck'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(10) = MR_tempr1;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i2);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 39;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i3);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 47;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i4);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 299;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i5);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 304;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i6);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 301;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i7);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 76;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i8);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 270;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i9);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i13);
	}
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(12);
	MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i12);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i15);
	}
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(12);
	MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i12);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i11);
	}
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(12);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(8),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i18);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i10);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i19);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Eliminating dead predicates... ", 33);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i20);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i21);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i22);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("done.\n", 6);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i23);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Word) MR_string_const("dead_pred_elim", 14);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i24);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 34;
	MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i25);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(6) = MR_sv(11);
	MR_sv(7) = MR_sv(12);
	MR_r2 = (MR_Integer) 34;
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i26);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i28);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r6 = MR_sv(7);
	MR_sv(7) = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_r6;
	MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i27);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i29);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Checking that insts have matching types... ", 45);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i30);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__inst_check__check_insts_have_matching_types_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i31);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i32);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("done.\n", 6);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i33);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 12;
	MR_r3 = (MR_Word) MR_string_const("warn_insts_without_matching_type", 32);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i34);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(10);
	}
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i35);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Type-checking...\n", 19);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i36);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Type-checking clauses...\n", 27);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i37);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i39);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_module_4_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i40);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_r3 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i38);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__type_constraints__typecheck_constraints_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i41);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Integer) 0;
	MR_r3 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i42);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i43);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i44);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i46);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Program is type-correct.\n", 27);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i48);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Program contains type error(s).\n", 34);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i48);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i49);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 15;
	MR_r3 = (MR_Word) MR_string_const("typecheck", 9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i50);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i51);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Program contains undefined inst or undefined mode error(s).\n", 62);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i53);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i57);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i55);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i57);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(11);
	MR_decr_sp_and_return(13);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__bool__not_1_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i58);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i59);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__post_typecheck_finish_preds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i60);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r3;
	MR_tempr2 = MR_r2;
	MR_sv(10) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 19;
	MR_r3 = (MR_Word) MR_string_const("post_typecheck", 14);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i61);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 86;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i62);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i64);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i68);
	}
	MR_r4 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i67);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(6),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i66);
	}
	MR_r4 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(10);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(13);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__puritycheck_8_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i70);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r2 = (MR_Integer) 20;
	MR_r3 = (MR_Word) MR_string_const("puritycheck", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i71);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i72);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r2 = (MR_Integer) 25;
	MR_r3 = (MR_Word) MR_string_const("implementation_defined_literals", 31);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i73);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i74);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i74);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__maybe_write_optfile_9_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i78);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r2 = MR_r5;
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i80);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__frontend_pass_by_phases_9_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i81);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__bool__or_2_0,
		top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i82);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(13);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(13);
	}
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(6),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0_i84);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(13);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__check_typeclass__check_typeclasses_6_0);
MR_decl_entry(hlds__make_hlds__set_module_recomp_info_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module16)
	MR_init_entry1(top_level__mercury_compile_front_end__frontend_pass_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_front_end__frontend_pass_13_0);
	MR_init_label10(top_level__mercury_compile_front_end__frontend_pass_13_0,2,3,6,7,8,9,10,11,12,14)
	MR_init_label4(top_level__mercury_compile_front_end__frontend_pass_13_0,5,16,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'frontend_pass'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_front_end__frontend_pass_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_front_end__frontend_pass_13_0_i2);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 39;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_front_end__frontend_pass_13_0_i3);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_13_0_i5);
	}
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__frontend_pass_13_0_i6);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Checking typeclasses...\n", 26);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__frontend_pass_13_0_i7);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__check_typeclass__check_typeclasses_6_0,
		top_level__mercury_compile_front_end__frontend_pass_13_0_i8);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_front_end__frontend_pass_13_0_i9);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 5;
	MR_r3 = (MR_Word) MR_string_const("typeclass", 9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_front_end__frontend_pass_13_0_i10);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__make_hlds__set_module_recomp_info_3_0,
		top_level__mercury_compile_front_end__frontend_pass_13_0_i11);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		top_level__mercury_compile_front_end__frontend_pass_13_0_i12);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_front_end__frontend_pass_13_0_i14);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(top_level__mercury_compile_front_end__frontend_pass_after_typecheck_11_0);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_error_util__maybe_write_out_errors_8_0,
		top_level__mercury_compile_front_end__frontend_pass_13_0_i16);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Program contains undefined type error(s).\n", 44);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_front_end__frontend_pass_13_0_i17);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		top_level__mercury_compile_front_end__frontend_pass_13_0_i18);
MR_def_label(top_level__mercury_compile_front_end__frontend_pass_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module17)
	MR_init_entry1(__Unify___top_level__mercury_compile_front_end__simplify_pass_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___top_level__mercury_compile_front_end__simplify_pass_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___top_level__mercury_compile_front_end__simplify_pass_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_front_end_module18)
	MR_init_entry1(__Compare___top_level__mercury_compile_front_end__simplify_pass_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___top_level__mercury_compile_front_end__simplify_pass_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___top_level__mercury_compile_front_end__simplify_pass_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__top_level__mercury_compile_front_end_maybe_bunch_0(void)
{
	top_level__mercury_compile_front_end_module0();
	top_level__mercury_compile_front_end_module1();
	top_level__mercury_compile_front_end_module2();
	top_level__mercury_compile_front_end_module3();
	top_level__mercury_compile_front_end_module4();
	top_level__mercury_compile_front_end_module5();
	top_level__mercury_compile_front_end_module6();
	top_level__mercury_compile_front_end_module7();
	top_level__mercury_compile_front_end_module8();
	top_level__mercury_compile_front_end_module9();
	top_level__mercury_compile_front_end_module10();
	top_level__mercury_compile_front_end_module11();
	top_level__mercury_compile_front_end_module12();
	top_level__mercury_compile_front_end_module13();
	top_level__mercury_compile_front_end_module14();
	top_level__mercury_compile_front_end_module15();
	top_level__mercury_compile_front_end_module16();
	top_level__mercury_compile_front_end_module17();
	top_level__mercury_compile_front_end_module18();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__top_level__mercury_compile_front_end__init(void);
void mercury__top_level__mercury_compile_front_end__init_type_tables(void);
void mercury__top_level__mercury_compile_front_end__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__top_level__mercury_compile_front_end__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__top_level__mercury_compile_front_end__init_complexity_procs(void);
#endif

void mercury__top_level__mercury_compile_front_end__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__top_level__mercury_compile_front_end_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_top_level__mercury_compile_front_end__type_ctor_info_simplify_pass_0,
		top_level__mercury_compile_front_end__simplify_pass_0_0);
	mercury__top_level__mercury_compile_front_end__init_debugger();
}

void mercury__top_level__mercury_compile_front_end__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_top_level__mercury_compile_front_end__type_ctor_info_simplify_pass_0);
	}
}


void mercury__top_level__mercury_compile_front_end__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__top_level__mercury_compile_front_end__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__top_level__mercury_compile_front_end);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__top_level__mercury_compile_front_end__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
