/*
** Automatically generated from `lambda.m'
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
INIT mercury__transform_hlds__lambda__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "transform_hlds.lambda.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "transform_hlds.lambda.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.lambda.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.lambda.c"
#line 40 "transform_hlds.lambda.c"
#include "transform_hlds.lambda.mh"

#line 43 "transform_hlds.lambda.c"
#line 44 "transform_hlds.lambda.c"
#ifndef TRANSFORM_HLDS__LAMBDA_DECL_GUARD
#define TRANSFORM_HLDS__LAMBDA_DECL_GUARD

#line 48 "transform_hlds.lambda.c"
#line 49 "transform_hlds.lambda.c"

#endif
#line 52 "transform_hlds.lambda.c"

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
	MR_Word * f3[4];
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

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__lambda__type_ctor_info_lambda_info_0;
MR_decl_label4(transform_hlds__lambda__constraint_contains_vars_2_0, 2,3,4,5)
MR_decl_label3(transform_hlds__lambda__lambda_process_cases_4_0, 4,5,3)
MR_decl_label8(transform_hlds__lambda__lambda_process_goal_4_0, 37,5,8,39,11,40,13,41)
MR_decl_label8(transform_hlds__lambda__lambda_process_goal_4_0, 15,42,17,43,19,44,21,22)
MR_decl_label3(transform_hlds__lambda__lambda_process_goal_4_0, 23,24,38)
MR_decl_label3(transform_hlds__lambda__lambda_process_goal_list_4_0, 4,5,3)
MR_decl_label8(transform_hlds__lambda__lambda_process_lambda_13_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__lambda__lambda_process_lambda_13_0, 12,16,127,23,10,25,26,27)
MR_decl_label8(transform_hlds__lambda__lambda_process_lambda_13_0, 32,28,34,35,39,40,46,47)
MR_decl_label8(transform_hlds__lambda__lambda_process_lambda_13_0, 44,50,51,52,53,57,55,60)
MR_decl_label8(transform_hlds__lambda__lambda_process_lambda_13_0, 54,61,62,63,69,72,67,75)
MR_decl_label8(transform_hlds__lambda__lambda_process_lambda_13_0, 76,77,36,37,78,79,80,81)
MR_decl_label8(transform_hlds__lambda__lambda_process_lambda_13_0, 82,83,84,85,86,87,88,89)
MR_decl_label8(transform_hlds__lambda__lambda_process_lambda_13_0, 90,91,92,93,94,95,96,97)
MR_decl_label8(transform_hlds__lambda__lambda_process_lambda_13_0, 98,99,100,101,102,126,104,106)
MR_decl_label5(transform_hlds__lambda__lambda_process_lambda_13_0, 107,108,109,110,112)
MR_decl_label2(transform_hlds__lambda__lambda_process_module_2_0, 2,3)
MR_decl_label2(transform_hlds__lambda__lambda_process_pred_3_0, 2,3)
MR_decl_label8(transform_hlds__lambda__lambda_process_proc_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__lambda__lambda_process_proc_4_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(transform_hlds__lambda__lambda_process_proc_4_0, 19,20,21,22,23,24,25,26)
MR_decl_label4(transform_hlds__lambda__lambda_process_proc_4_0, 27,28,29,30)
MR_decl_label3(transform_hlds__lambda__lambda_process_unify_goal_8_0, 4,5,2)
MR_decl_label3(transform_hlds__lambda__uni_modes_to_modes_2_0, 4,5,2)
MR_decl_label8(__Unify___transform_hlds__lambda__lambda_info_0_0, 4,6,8,10,12,14,16,18)
MR_decl_label1(__Unify___transform_hlds__lambda__lambda_info_0_0, 1)
MR_decl_label8(__Compare___transform_hlds__lambda__lambda_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label5(__Compare___transform_hlds__lambda__lambda_info_0_0, 29,33,37,41,93)
MR_def_extern_entry(transform_hlds__lambda__lambda_process_module_2_0)
MR_def_extern_entry(transform_hlds__lambda__lambda_process_pred_3_0)
MR_decl_static(transform_hlds__lambda__uni_modes_to_modes_2_0)
MR_decl_static(fn__transform_hlds__lambda__this_file_0_0)
MR_decl_static(transform_hlds__lambda__lambda_process_lambda_13_0)
MR_decl_static(transform_hlds__lambda__lambda_process_goal_4_0)
MR_decl_static(transform_hlds__lambda__lambda_process_goal_list_4_0)
MR_decl_static(transform_hlds__lambda__lambda_process_cases_4_0)
MR_decl_static(transform_hlds__lambda__lambda_process_unify_goal_8_0)
MR_decl_static(transform_hlds__lambda__lambda_process_proc_4_0)
MR_decl_static(transform_hlds__lambda__constraint_contains_vars_2_0)
MR_decl_static(__Unify___transform_hlds__lambda__lambda_info_0_0)
MR_decl_static(__Compare___transform_hlds__lambda__lambda_info_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__lambda_process_module_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__lambda_process_module_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

MR_decl_entry(parse_tree__prog_type__type_vars_2_0);
static const struct mercury_type_1 mercury_common_1[3] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(transform_hlds__lambda__lambda_process_pred_3_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(parse_tree__prog_type__type_vars_2_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(parse_tree__prog_type__type_vars_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__lambda_process_pred_3_0_1;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__lambda_process_pred_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_3 mercury_common_3[5] =
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
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,3,1)
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
MR_LIST_CTOR_ADDR,
MR_COMMON(3,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__lambda_process_lambda_13_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__lambda_process_lambda_13_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__constraint_contains_vars_2_0_1;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__lambda_process_lambda_13_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(3,4)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__lambda_process_lambda_13_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,4),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__constraint_contains_vars_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(3,4)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_marker_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__lambda__field_types_lambda_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__lambda__du_functor_desc_lambda_info_0_0 = {
	"lambda_info",
	11,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__lambda__field_types_lambda_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lambda__du_stag_ordered_lambda_info_0_0[] = {
	&mercury_data_transform_hlds__lambda__du_functor_desc_lambda_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__lambda__du_ptag_ordered_lambda_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__lambda__du_stag_ordered_lambda_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lambda__du_name_ordered_lambda_info_0[] = {
	&mercury_data_transform_hlds__lambda__du_functor_desc_lambda_info_0_0
};

const MR_Integer mercury_data_transform_hlds__lambda__functor_number_map_lambda_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lambda__type_ctor_info_lambda_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lambda__lambda_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lambda__lambda_info_0_0)),
	"transform_hlds.lambda",
	"lambda_info",
	{ (void *)mercury_data_transform_hlds__lambda__du_name_ordered_lambda_info_0 },
	{ (void *)mercury_data_transform_hlds__lambda__du_ptag_ordered_lambda_info_0 },
	1,
	4,
	mercury_data_transform_hlds__lambda__functor_number_map_lambda_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__lambda_process_module_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lambda",
"transform_hlds.lambda",
"lambda_process_pred",
3,
0
},
"transform_hlds.lambda",
"lambda.m",
137,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__lambda_process_pred_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lambda",
"transform_hlds.lambda",
"lambda_process_proc",
4,
0
},
"transform_hlds.lambda",
"lambda.m",
144,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__lambda_process_lambda_13_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type",
"parse_tree.prog_type",
"type_vars",
2,
0
},
"transform_hlds.lambda",
"lambda.m",
320,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__lambda_process_lambda_13_0_2 = {
{
MR_PREDICATE,
"transform_hlds.lambda",
"transform_hlds.lambda",
"constraint_contains_vars",
2,
0
},
"transform_hlds.lambda",
"lambda.m",
322,
"d1;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__constraint_contains_vars_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type",
"parse_tree.prog_type",
"type_vars",
2,
0
},
"transform_hlds.lambda",
"lambda.m",
536,
"d1;c4;"
};

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(hlds__hlds_module__module_info_clobber_dependency_info_2_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module0)
	MR_init_entry1(transform_hlds__lambda__lambda_process_module_2_0);
	MR_init_label2(transform_hlds__lambda__lambda_process_module_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_process_module_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__lambda__lambda_process_module_2_0_i2);
MR_def_label(transform_hlds__lambda__lambda_process_module_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__lambda__lambda_process_module_2_0_i3);
MR_def_label(transform_hlds__lambda__lambda_process_module_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_clobber_dependency_info_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;

MR_BEGIN_MODULE(transform_hlds__lambda_module1)
	MR_init_entry1(transform_hlds__lambda__lambda_process_pred_3_0);
	MR_init_label2(transform_hlds__lambda__lambda_process_pred_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_process_pred_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__lambda__lambda_process_pred_3_0_i2);
MR_def_label(transform_hlds__lambda__lambda_process_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__lambda__lambda_process_pred_3_0_i3);
MR_def_label(transform_hlds__lambda__lambda_process_pred_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lambda__lambda_process_proc_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module2)
	MR_init_entry1(transform_hlds__lambda__uni_modes_to_modes_2_0);
	MR_init_label3(transform_hlds__lambda__uni_modes_to_modes_2_0,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__uni_modes_to_modes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__uni_modes_to_modes_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(transform_hlds__lambda__uni_modes_to_modes_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0), 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break; } /* end while */
MR_def_label(transform_hlds__lambda__uni_modes_to_modes_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(transform_hlds__lambda__uni_modes_to_modes_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module3)
	MR_init_entry1(fn__transform_hlds__lambda__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__lambda__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lambda.m", 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(list__condense_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
MR_decl_entry(list__filter_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_nonlocals_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__goal_util__extra_nonlocal_typeinfos_5_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(set__delete_list_3_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(list__remove_suffix_3_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(hlds__code_model__proc_info_interface_code_model_2_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(list__length_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__take_3_0);
MR_decl_entry(check_hlds__mode_util__mode_is_input_2_0);
MR_decl_entry(check_hlds__mode_util__modes_to_uni_modes_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_address_taken_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
MR_decl_entry(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0);
MR_decl_entry(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(hlds__hlds_module__module_info_next_lambda_count_4_0);
MR_decl_entry(parse_tree__prog_util__make_pred_name_with_context_7_0);
MR_decl_entry(parse_tree__prog_mode__in_mode_1_0);
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_pred__purity_to_markers_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(map__init_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_create_12_0);
MR_decl_entry(hlds__hlds_pred__ensure_all_headvars_are_named_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_assert_id_0;
MR_decl_entry(set__init_1_0);
MR_decl_entry(hlds__quantification__requantify_proc_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_create_16_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module4)
	MR_init_entry1(transform_hlds__lambda__lambda_process_lambda_13_0);
	MR_init_label8(transform_hlds__lambda__lambda_process_lambda_13_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__lambda__lambda_process_lambda_13_0,12,16,127,23,10,25,26,27)
	MR_init_label8(transform_hlds__lambda__lambda_process_lambda_13_0,32,28,34,35,39,40,46,47)
	MR_init_label8(transform_hlds__lambda__lambda_process_lambda_13_0,44,50,51,52,53,57,55,60)
	MR_init_label8(transform_hlds__lambda__lambda_process_lambda_13_0,54,61,62,63,69,72,67,75)
	MR_init_label8(transform_hlds__lambda__lambda_process_lambda_13_0,76,77,36,37,78,79,80,81)
	MR_init_label8(transform_hlds__lambda__lambda_process_lambda_13_0,82,83,84,85,86,87,88,89)
	MR_init_label8(transform_hlds__lambda__lambda_process_lambda_13_0,90,91,92,93,94,95,96,97)
	MR_init_label8(transform_hlds__lambda__lambda_process_lambda_13_0,98,99,100,101,102,126,104,106)
	MR_init_label5(transform_hlds__lambda__lambda_process_lambda_13_0,107,108,109,110,112)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__lambda_process_lambda_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(40);
	MR_sv(40) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r10;
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(17) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(18) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(19) = MR_ctfield(0, MR_tempr1, 10);
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i2);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_sv(32) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(33) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(33);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i3);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i4);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i5);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lambda__constraint_contains_vars_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = MR_sv(20);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i6);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(20) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(21) = MR_ctfield(0, MR_sv(7), 1);
	MR_r1 = MR_sv(21);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i7);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(32);
	MR_r2 = MR_sv(33);
	MR_r3 = MR_sv(22);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i8);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__goal_util__extra_nonlocal_typeinfos_5_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i9);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_lambda_13_0_i12) MR_AND
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_lambda_13_0_i127) MR_AND
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_lambda_13_0_i16) MR_AND
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_lambda_13_0_i127));
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(22);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_sv(22) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(23) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_sv(33);
	MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i10);
	}
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__lambda__this_file_0_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i23);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__lambda__this_file_0_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i23);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("transform_lambda: weird unification", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i10);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(33) = MR_r1;
	MR_np_call_localret_ent(set__delete_list_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i25);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(32);
	MR_r2 = MR_sv(33);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i26);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(32);
	MR_r2 = MR_sv(33);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i27);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(33);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i32);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i28);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	MR_sv(8) = (MR_Integer) 1;
	MR_r1 = MR_sv(33);
	MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i34);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	MR_sv(8) = MR_sv(19);
	MR_r1 = MR_sv(33);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(33) = MR_r1;
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i35);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(7), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i37);
	}
	MR_sv(24) = MR_r1;
	MR_sv(25) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(26) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(27) = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(26);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i39);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = MR_r2;
	MR_r2 = MR_sv(27);
	MR_sv(27) = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__remove_suffix_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i40);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i36);
	}
	MR_sv(34) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(35) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(36));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__lambda__lambda_process_lambda_13_0_i44);
	MR_sv(29) = MR_r2;
	MR_r1 = MR_sv(33);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__lambda__lambda_process_lambda_13_0_i46);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(32);
	MR_r2 = MR_sv(33);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i47);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(36));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(34);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(35);
	MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i36);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(29);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(34);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(35);
	MR_r1 = MR_sv(28);
	}
	MR_np_call_localret_ent(hlds__code_model__proc_info_interface_code_model_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i50);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i51);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(31) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i52);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 196;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i53);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i55);
	}
	if ((MR_sv(31) != MR_sv(30))) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i57);
	}
	MR_r1 = MR_sv(28);
	MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i54);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(31),2)) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i36);
	}
	if (MR_INT_NE(MR_sv(30),0)) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i36);
	}
	MR_r1 = MR_sv(28);
	MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i54);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(27);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i60);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i36);
	}
	if ((MR_sv(31) != MR_sv(30))) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i36);
	}
	MR_r1 = MR_sv(28);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i61);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i62);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_sv(30);
	MR_np_call_localret_ent(list__take_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i63);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i36);
	}
	MR_sv(37) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(38) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(39));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__lambda__lambda_process_lambda_13_0_i67);
	MR_sv(30) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__lambda__lambda_process_lambda_13_0_i69);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i72);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(39));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(37);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(38);
	MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i36);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(30);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(37);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(38);
	MR_sv(3) = MR_sv(29);
	MR_r1 = MR_sv(18);
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_uni_modes_4_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i75);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_address_taken_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i76);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(26);
	MR_r3 = MR_sv(27);
	MR_r5 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i77);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(25);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(26);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i112);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(24);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i78);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__lambda__lambda_process_lambda_13_0_i79);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i80);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i81);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i82);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_r1 = MR_sv(26);
	MR_np_call_localret_ent(term__context_line_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i83);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(26);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_next_lambda_count_4_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i84);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_sv(28) = MR_r2;
	MR_r1 = MR_sv(25);
	MR_r2 = (MR_Word) MR_string_const("IntroducedFrom", 14);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(17);
	MR_r5 = MR_sv(18);
	MR_r6 = MR_sv(26);
	MR_np_call_localret_ent(parse_tree__prog_util__make_pred_name_with_context_7_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i85);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_sv(21) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i86);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_sv(23) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__uni_modes_to_modes_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i87);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(29) = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i88);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_mode__in_mode_1_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i89);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(30);
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i90);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i91);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r4 = MR_sv(29);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i92);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(32);
	MR_r2 = MR_sv(33);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i93);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i94);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(28);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_uni_modes_4_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i95);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__lambda__lambda_process_lambda_13_0_i96);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(24);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i97);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__purity_to_markers_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i98);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(29) = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i99);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(24);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(13);
	MR_r10 = (MR_Integer) 0;
	MR_r11 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_12_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i100);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__ensure_all_headvars_are_named_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i101);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i102);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(19),0)) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_lambda_13_0_i104);
	}
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i106);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i126);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(27);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(18);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(26);
	MR_r12 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(23);
	MR_r6 = (MR_Word) MR_tbmkword(0, 8);
	MR_r7 = MR_sv(29);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(11);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_r11 = MR_sv(20);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_create_16_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i107);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(28);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i108);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_4_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i109);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i110);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		transform_hlds__lambda__lambda_process_lambda_13_0_i112);
MR_def_label(transform_hlds__lambda__lambda_process_lambda_13_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 0;
	MR_tempr4 = MR_sv(3);
	MR_tfield(1, MR_r1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(22);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 5) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 11);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr3, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr3, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr3, 4) = MR_sv(13);
	MR_tfield(0, MR_tempr3, 5) = MR_sv(14);
	MR_tfield(0, MR_tempr3, 6) = MR_sv(15);
	MR_tfield(0, MR_tempr3, 7) = MR_sv(16);
	MR_tfield(0, MR_tempr3, 8) = MR_sv(17);
	MR_tfield(0, MR_tempr3, 9) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 10) = MR_sv(8);
	MR_decr_sp_and_return(40);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module5)
	MR_init_entry1(transform_hlds__lambda__lambda_process_goal_4_0);
	MR_init_label8(transform_hlds__lambda__lambda_process_goal_4_0,37,5,8,39,11,40,13,41)
	MR_init_label8(transform_hlds__lambda__lambda_process_goal_4_0,15,42,17,43,19,44,21,22)
	MR_init_label3(transform_hlds__lambda__lambda_process_goal_4_0,23,24,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__lambda_process_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_goal_4_0_i37) MR_AND
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_goal_4_0_i38) MR_AND
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_goal_4_0_i38) MR_AND
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_goal_4_0_i8));
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r6 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(transform_hlds__lambda__lambda_process_unify_goal_8_0,
		transform_hlds__lambda__lambda_process_goal_4_0_i5);
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_goal_4_0_i38) MR_AND
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_goal_4_0_i39) MR_AND
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_goal_4_0_i40) MR_AND
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_goal_4_0_i41) MR_AND
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_goal_4_0_i42) MR_AND
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_goal_4_0_i43) MR_AND
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_goal_4_0_i44) MR_AND
		MR_LABEL_AP(transform_hlds__lambda__lambda_process_goal_4_0_i24));
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__lambda__lambda_process_goal_list_4_0,
		transform_hlds__lambda__lambda_process_goal_4_0_i11);
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(transform_hlds__lambda__lambda_process_goal_list_4_0,
		transform_hlds__lambda__lambda_process_goal_4_0_i13);
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__lambda__lambda_process_cases_4_0,
		transform_hlds__lambda__lambda_process_goal_4_0_i15);
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__lambda__lambda_process_goal_4_0,
		transform_hlds__lambda__lambda_process_goal_4_0_i17);
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__lambda__lambda_process_goal_4_0,
		transform_hlds__lambda__lambda_process_goal_4_0_i19);
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__lambda__lambda_process_goal_4_0,
		transform_hlds__lambda__lambda_process_goal_4_0_i21);
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__lambda_process_goal_4_0,
		transform_hlds__lambda__lambda_process_goal_4_0_i22);
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__lambda_process_goal_4_0,
		transform_hlds__lambda__lambda_process_goal_4_0_i23);
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lambda.m", 8);
	MR_r2 = (MR_Word) MR_string_const("lambda_process_goal_2: unexpected shorthand", 43);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__lambda__lambda_process_goal_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module6)
	MR_init_entry1(transform_hlds__lambda__lambda_process_goal_list_4_0);
	MR_init_label3(transform_hlds__lambda__lambda_process_goal_list_4_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__lambda_process_goal_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_goal_list_4_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__lambda__lambda_process_goal_4_0,
		transform_hlds__lambda__lambda_process_goal_list_4_0_i4);
MR_def_label(transform_hlds__lambda__lambda_process_goal_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__lambda_process_goal_list_4_0,
		transform_hlds__lambda__lambda_process_goal_list_4_0_i5);
MR_def_label(transform_hlds__lambda__lambda_process_goal_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__lambda__lambda_process_goal_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module7)
	MR_init_entry1(transform_hlds__lambda__lambda_process_cases_4_0);
	MR_init_label3(transform_hlds__lambda__lambda_process_cases_4_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__lambda_process_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_cases_4_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__lambda__lambda_process_goal_4_0,
		transform_hlds__lambda__lambda_process_cases_4_0_i4);
MR_def_label(transform_hlds__lambda__lambda_process_cases_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__lambda__lambda_process_cases_4_0,
		transform_hlds__lambda__lambda_process_cases_4_0_i5);
MR_def_label(transform_hlds__lambda__lambda_process_cases_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__lambda__lambda_process_cases_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module8)
	MR_init_entry1(transform_hlds__lambda__lambda_process_unify_goal_8_0);
	MR_init_label3(transform_hlds__lambda__lambda_process_unify_goal_8_0,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__lambda_process_unify_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_unify_goal_8_0_i2);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(8) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(9) = MR_ctfield(2, MR_tempr1, 5);
	MR_sv(10) = MR_ctfield(2, MR_tempr1, 6);
	MR_r1 = MR_ctfield(2, MR_tempr1, 7);
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__lambda_process_goal_4_0,
		transform_hlds__lambda__lambda_process_unify_goal_8_0_i4);
MR_def_label(transform_hlds__lambda__lambda_process_unify_goal_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r10 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(7);
	MR_r9 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__lambda__lambda_process_lambda_13_0,
		transform_hlds__lambda__lambda_process_unify_goal_8_0_i5);
MR_def_label(transform_hlds__lambda__lambda_process_unify_goal_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__lambda__lambda_process_unify_goal_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r6;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__quantification__implicitly_quantify_clause_body_10_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_typevarset_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module9)
	MR_init_entry1(transform_hlds__lambda__lambda_process_proc_4_0);
	MR_init_label8(transform_hlds__lambda__lambda_process_proc_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__lambda__lambda_process_proc_4_0,10,11,12,13,14,15,16,17)
	MR_init_label8(transform_hlds__lambda__lambda_process_proc_4_0,19,20,21,22,23,24,25,26)
	MR_init_label4(transform_hlds__lambda__lambda_process_proc_4_0,27,28,29,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__lambda_process_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i2);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i3);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i4);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i5);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i6);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i7);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i8);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i9);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i10);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i11);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i12);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i13);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i14);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i15);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i16);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 10) = (MR_Integer) 0;
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(transform_hlds__lambda__lambda_process_goal_4_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i17);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 10);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__lambda_process_proc_4_0_i19);
	}
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i21);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 9);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_clause_body_10_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i20);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i21);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i22);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i23);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i24);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_typevarset_3_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i25);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i26);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i27);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i28);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i29);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__lambda__lambda_process_proc_4_0_i30);
MR_def_label(transform_hlds__lambda__lambda_process_proc_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(set__subset_2_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module10)
	MR_init_entry1(transform_hlds__lambda__constraint_contains_vars_2_0);
	MR_init_label4(transform_hlds__lambda__constraint_contains_vars_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__constraint_contains_vars_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__lambda__constraint_contains_vars_2_0_i2);
MR_def_label(transform_hlds__lambda__constraint_contains_vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__lambda__constraint_contains_vars_2_0_i3);
MR_def_label(transform_hlds__lambda__constraint_contains_vars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__lambda__constraint_contains_vars_2_0_i4);
MR_def_label(transform_hlds__lambda__constraint_contains_vars_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__lambda__constraint_contains_vars_2_0_i5);
MR_def_label(transform_hlds__lambda__constraint_contains_vars_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(set__subset_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_markers_0;
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module11)
	MR_init_entry1(__Unify___transform_hlds__lambda__lambda_info_0_0);
	MR_init_label8(__Unify___transform_hlds__lambda__lambda_info_0_0,4,6,8,10,12,14,16,18)
	MR_init_label1(__Unify___transform_hlds__lambda__lambda_info_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lambda__lambda_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i18);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(15) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(16) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(17) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(18) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(19) = MR_ctfield(0, MR_tempr2, 9);
	MR_sv(20) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i12);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_markers);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i14);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(16))) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(17))) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(8), (char *)MR_sv(18)) != 0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i16);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_sv(10) == MR_sv(20));
	MR_decr_sp_and_return(21);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module12)
	MR_init_entry1(__Compare___transform_hlds__lambda__lambda_info_0_0);
	MR_init_label8(__Compare___transform_hlds__lambda__lambda_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label5(__Compare___transform_hlds__lambda__lambda_info_0_0,29,33,37,41,93)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lambda__lambda_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i3);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(20) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(19) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(18) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(17) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(15) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i93);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i21);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_markers);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i25);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i93);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i29);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i93);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i33);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i93);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i37);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i93);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i41);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i93);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(20);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__lambda_maybe_bunch_0(void)
{
	transform_hlds__lambda_module0();
	transform_hlds__lambda_module1();
	transform_hlds__lambda_module2();
	transform_hlds__lambda_module3();
	transform_hlds__lambda_module4();
	transform_hlds__lambda_module5();
	transform_hlds__lambda_module6();
	transform_hlds__lambda_module7();
	transform_hlds__lambda_module8();
	transform_hlds__lambda_module9();
	transform_hlds__lambda_module10();
	transform_hlds__lambda_module11();
	transform_hlds__lambda_module12();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__lambda__init(void);
void mercury__transform_hlds__lambda__init_type_tables(void);
void mercury__transform_hlds__lambda__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__lambda__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__lambda__init_complexity_procs(void);
#endif

void mercury__transform_hlds__lambda__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__lambda_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lambda__type_ctor_info_lambda_info_0,
		transform_hlds__lambda__lambda_info_0_0);
	mercury__transform_hlds__lambda__init_debugger();
}

void mercury__transform_hlds__lambda__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lambda__type_ctor_info_lambda_info_0);
	}
}


void mercury__transform_hlds__lambda__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__lambda__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__lambda__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
