/*
** Automatically generated from `delay_partial_inst.m'
** by the Mercury compiler,
** version rotd-2010-03-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__delay_partial_inst__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 28 "check_hlds.delay_partial_inst.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 32 "check_hlds.delay_partial_inst.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 36 "check_hlds.delay_partial_inst.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "check_hlds.delay_partial_inst.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "check_hlds.delay_partial_inst.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 48 "check_hlds.delay_partial_inst.c"
#line 49 "check_hlds.delay_partial_inst.c"
#include "check_hlds.delay_partial_inst.mh"

#line 52 "check_hlds.delay_partial_inst.c"
#line 53 "check_hlds.delay_partial_inst.c"
#ifndef CHECK_HLDS__DELAY_PARTIAL_INST_DECL_GUARD
#define CHECK_HLDS__DELAY_PARTIAL_INST_DECL_GUARD

#line 57 "check_hlds.delay_partial_inst.c"
#line 58 "check_hlds.delay_partial_inst.c"

#endif
#line 61 "check_hlds.delay_partial_inst.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__delay_partial_inst__type_ctor_info_canon_vars_map_0,
	mercury_data_check_hlds__delay_partial_inst__type_ctor_info_construct_map_0,
	mercury_data_check_hlds__delay_partial_inst__type_ctor_info_delay_partial_inst_info_0;
MR_decl_label5(check_hlds__delay_partial_inst__add_to_construct_map_5_0, 6,2,10,11,12)
MR_decl_label3(check_hlds__delay_partial_inst__create_canonical_variables_4_0, 3,4,5)
MR_decl_label3(check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0, 15,4,6)
MR_decl_label6(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0, 16,4,5,6,7,8)
MR_decl_label10(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0, 53,70,74,73,78,79,76,81,86,88)
MR_decl_label10(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0, 82,90,91,92,93,96,97,72,105,106)
MR_decl_label10(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0, 112,117,119,121,123,124,127,129,130,131)
MR_decl_label10(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0, 133,126,135,113,140,61,63,65,67,68)
MR_decl_label10(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0, 57,58,145,4,5,8,9,12,13,14)
MR_decl_label10(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0, 15,16,19,20,23,160,24,27,31,43)
MR_decl_label7(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0, 39,40,33,34,35,49,50)
MR_decl_label3(check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0, 14,4,5)
MR_decl_label7(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0, 22,3,4,5,7,9,11)
MR_decl_label10(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0, 2,3,4,5,7,8,12,13,15,16)
MR_decl_label4(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0, 17,18,19,20)
MR_decl_label5(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0, 5,7,10,9,1)
MR_decl_label3(fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0, 2,6,1)
MR_decl_label5(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0, 4,6,9,11,1)
MR_decl_label6(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0, 3,2,5,9,14,38)
MR_def_extern_entry(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0)
MR_decl_static(check_hlds__delay_partial_inst__create_canonical_variables_4_0)
MR_decl_static(check_hlds__delay_partial_inst__add_to_construct_map_5_0)
MR_decl_static(fn__check_hlds__delay_partial_inst__this_file_0_0)
MR_decl_static(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0)
MR_decl_static(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0)
MR_decl_static(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0)
MR_decl_static(check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0)
MR_decl_static(check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0)
MR_decl_static(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0)
MR_decl_static(fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0)
MR_decl_static(__Unify___check_hlds__delay_partial_inst__canon_vars_map_0_0)
MR_decl_static(__Compare___check_hlds__delay_partial_inst__canon_vars_map_0_0)
MR_decl_static(__Unify___check_hlds__delay_partial_inst__construct_map_0_0)
MR_decl_static(__Compare___check_hlds__delay_partial_inst__construct_map_0_0)
MR_decl_static(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0)
MR_decl_static(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_2;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(term, context),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(term, context),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
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
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_TAG_COMMON(0,1,1)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_string_const("delay_partial_inst", 18)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__delay_partial_inst__type_ctor_info_canon_vars_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__delay_partial_inst__canon_vars_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__delay_partial_inst__canon_vars_map_0_0)),
	"check_hlds.delay_partial_inst",
	"canon_vars_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__delay_partial_inst__type_ctor_info_construct_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__delay_partial_inst__construct_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__delay_partial_inst__construct_map_0_0)),
	"check_hlds.delay_partial_inst",
	"construct_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0[] = {
	"dpi_module_info",
	"dpi_varset",
	"dpi_vartypes",
	"dpi_changed"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0 = {
	"delay_partial_inst_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0,
	mercury_data_check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0[] = {
	&mercury_data_check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__delay_partial_inst__du_name_ordered_delay_partial_inst_info_0[] = {
	&mercury_data_check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0
};

const MR_Integer mercury_data_check_hlds__delay_partial_inst__functor_number_map_delay_partial_inst_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__delay_partial_inst__type_ctor_info_delay_partial_inst_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0)),
	"check_hlds.delay_partial_inst",
	"delay_partial_inst_info",
	{ (void *)mercury_data_check_hlds__delay_partial_inst__du_name_ordered_delay_partial_inst_info_0 },
	{ (void *)mercury_data_check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0 },
	1,
	4,
	mercury_data_check_hlds__delay_partial_inst__functor_number_map_delay_partial_inst_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_2 = {
{
MR_FUNCTION,
"check_hlds.delay_partial_inst",
"check_hlds.delay_partial_inst",
"maybe_unify_var_with_ground_var",
6,
0
},
"check_hlds.delay_partial_inst",
"delay_partial_inst.m",
370,
"d1;c9;d7;c2;d2;c2;t;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_1 = {
{
MR_FUNCTION,
"check_hlds.delay_partial_inst",
"check_hlds.delay_partial_inst",
"maybe_unify_var_with_ground_var",
6,
0
},
"check_hlds.delay_partial_inst",
"delay_partial_inst.m",
329,
"d1;c9;d7;c2;d1;c2;t;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.delay_partial_inst",
"check_hlds.delay_partial_inst",
"delay_partial_inst_proc",
6,
0
},
"check_hlds.delay_partial_inst",
"delay_partial_inst.m",
193,
"d2;c7;"
};


MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module0)
	MR_init_entry1(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0);
	MR_init_label7(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0,22,3,4,5,7,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_partial_inst_preds'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0_i4);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0_i5);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0_i7);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0_i22);
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0,
		check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0_i11);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(hlds__goal_util__clone_variables_9_0);
MR_decl_entry(parse_tree__prog_data__rename_var_list_4_0);

MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module1)
	MR_init_entry1(check_hlds__delay_partial_inst__create_canonical_variables_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__delay_partial_inst__create_canonical_variables_4_0);
	MR_init_label3(check_hlds__delay_partial_inst__create_canonical_variables_4_0,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_canonical_variables'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__delay_partial_inst__create_canonical_variables_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_r2;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__delay_partial_inst__create_canonical_variables_4_0_i3);
MR_def_label(check_hlds__delay_partial_inst__create_canonical_variables_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r2;
	MR_r5 = MR_r3;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__clone_variables_9_0,
		check_hlds__delay_partial_inst__create_canonical_variables_4_0_i4);
MR_def_label(check_hlds__delay_partial_inst__create_canonical_variables_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		check_hlds__delay_partial_inst__create_canonical_variables_4_0_i5);
MR_def_label(check_hlds__delay_partial_inst__create_canonical_variables_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module2)
	MR_init_entry1(check_hlds__delay_partial_inst__add_to_construct_map_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__delay_partial_inst__add_to_construct_map_5_0);
	MR_init_label5(check_hlds__delay_partial_inst__add_to_construct_map_5_0,6,2,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_to_construct_map'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__delay_partial_inst__add_to_construct_map_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__delay_partial_inst__add_to_construct_map_5_0_i6);
MR_def_label(check_hlds__delay_partial_inst__add_to_construct_map_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__add_to_construct_map_5_0_i2);
	}
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_GOTO_LAB(check_hlds__delay_partial_inst__add_to_construct_map_5_0_i11);
MR_def_label(check_hlds__delay_partial_inst__add_to_construct_map_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__delay_partial_inst__add_to_construct_map_5_0_i10);
MR_def_label(check_hlds__delay_partial_inst__add_to_construct_map_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
MR_def_label(check_hlds__delay_partial_inst__add_to_construct_map_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__delay_partial_inst__add_to_construct_map_5_0_i12);
MR_def_label(check_hlds__delay_partial_inst__add_to_construct_map_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module3)
	MR_init_entry1(fn__check_hlds__delay_partial_inst__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__delay_partial_inst__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__delay_partial_inst__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("delay_partial_inst.m", 20);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__to_assoc_list_1_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);

MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module4)
	MR_init_entry1(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0);
	MR_init_label5(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0,5,7,10,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_sole_cons_id_and_canon_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0_i5);
MR_def_label(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__to_assoc_list_1_0,
		check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0_i7);
MR_def_label(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0_i10);
	}
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("delay_partial_inst.m", 20);
	MR_r2 = (MR_Word) MR_string_const("delaying partial instantiations when variable could be bound to multiple functors", 81);
	}
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0_i9);
MR_def_label(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
MR_decl_entry(list__member_2_1);
MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(map__search_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__list__filter_map_corresponding3_4_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(fn__check_hlds__mode_util__mode_get_final_inst_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);
MR_decl_entry(hlds__hlds_goal__construct_functor_4_0);
MR_decl_entry(map__delete_3_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0);
MR_decl_entry(hlds__hlds_goal__conjoin_goals_3_0);
MR_decl_entry(hlds__goal_util__update_instmap_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module5)
	MR_init_entry1(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0);
	MR_init_label10(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,53,70,74,73,78,79,76,81,86,88)
	MR_init_label10(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,82,90,91,92,93,96,97,72,105,106)
	MR_init_label10(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,112,117,119,121,123,124,127,129,130,131)
	MR_init_label10(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,133,126,135,113,140,61,63,65,67,68)
	MR_init_label10(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,57,58,145,4,5,8,9,12,13,14)
	MR_init_label10(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,15,16,19,20,23,160,24,27,31,43)
	MR_init_label7(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,39,40,33,34,35,49,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_partial_inst_in_goal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(0, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i53) MR_AND
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i58) MR_AND
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i58) MR_AND
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i145));
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(0, MR_r5, 3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i70) MR_AND
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i112) MR_AND
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i160) MR_AND
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i140));
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r5;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_tempr3 = MR_r6;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i74);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_tempr3;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_tfield(0, MR_tempr3, 2);
	MR_r2 = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_r4;
	MR_sv(12) = MR_tfield(0, MR_tempr4, 0);
	MR_sv(15) = MR_r3;
	MR_sv(16) = MR_tempr4;
	MR_sv(13) = MR_tfield(0, MR_tempr3, 0);
	MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i73);
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i72);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(7) = MR_tempr1;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_r4;
	MR_sv(12) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(15) = MR_r3;
	MR_sv(16) = MR_tempr2;
	MR_sv(13) = MR_tfield(0, MR_tempr1, 0);
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(18) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(19));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i76);
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i78);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 1), 1);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i79);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(19));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(17);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(18);
	MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i81);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r6 = MR_sv(7);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(17);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(18);
	MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i72);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_sv(13);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i86);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i82);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i88);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i82);
	}
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_sv(15);
	MR_sv(4) = MR_sv(16);
	MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i92);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(check_hlds__delay_partial_inst__create_canonical_variables_4_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i90);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__delay_partial_inst__add_to_construct_map_5_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i91);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i93);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__list__filter_map_corresponding3_4_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i96);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i97);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_tag(MR_sv(5)) == MR_mktag((MR_Integer) 0)) || (MR_tag(MR_sv(5)) == MR_mktag((MR_Integer) 1)))) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i160);
	}
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_sv(5) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(9) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(10) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(11) = MR_tfield(2, MR_tempr1, 5);
	MR_sv(12) = MR_tfield(2, MR_tempr1, 6);
	MR_sv(13) = MR_tfield(2, MR_tempr1, 7);
	MR_sv(14) = MR_tfield(2, MR_tempr1, 8);
	MR_sv(15) = MR_r3;
	MR_sv(16) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i105);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(16);
	}
	MR_np_localcall_lab(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i106);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 9);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(11);
	MR_tfield(2, MR_tempr1, 6) = MR_sv(12);
	MR_tfield(2, MR_tempr1, 7) = MR_sv(13);
	MR_tfield(2, MR_tempr1, 8) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(8);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(6) = MR_tfield(0, MR_r5, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(15) = MR_r3;
	MR_sv(16) = MR_r4;
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i117);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i113);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i119);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i113);
	}
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_sv(16), 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i121);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__filter_map_corresponding3_4_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i123);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_sv(6), 0);
	MR_np_call_localret_ent(fn__check_hlds__mode_util__mode_get_final_inst_2_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i124);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i127);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i126);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i129);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(map__delete_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i130);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(15);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i131);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i133);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i135);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_sv(2) = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i135);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(16);
	MR_decr_sp_and_return(20);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(16);
	MR_decr_sp_and_return(20);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_r6, 0),0)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i160);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(3, MR_r6, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i58);
	}
	MR_tempr3 = MR_r5;
	MR_tempr2 = MR_tfield(0, MR_tempr3, 1);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i58);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(5) = MR_tempr2;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_tempr4 = MR_r3;
	MR_sv(15) = MR_tempr4;
	MR_sv(16) = MR_r4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i61);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i57);
	}
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i63);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 2) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i65);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i67);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conjoin_goals_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i68);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(16);
	MR_decr_sp_and_return(20);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(20);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r5, 0),
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i58) MR_AND
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i8) MR_AND
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i49) MR_AND
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i19) MR_AND
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i23) MR_AND
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i31));
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i5);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i9);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(15) = MR_r3;
	MR_sv(16) = MR_r4;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i13);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	}
	MR_np_localcall_lab(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i14);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_localcall_lab(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i15);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_localcall_lab(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i16);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(15) = MR_r3;
	MR_r2 = MR_tfield(3, MR_r5, 1);
	MR_np_localcall_lab(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i20);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_r6 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i24);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i24);
	}
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(20);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r3;
	MR_r2 = MR_r6;
	MR_np_localcall_lab(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i27);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i33);
	}
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i39);
	}
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_localcall_lab(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i43);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__delay_partial_inst__this_file_0_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i40);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("delay_partial_inst_in_goal: bi_implication", 42);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 6);
	MR_sv(15) = MR_r3;
	MR_r2 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i34);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(15);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i35);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0_i50);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);

MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module6)
	MR_init_entry1(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0);
	MR_init_label6(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0,16,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_partial_inst_in_conj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0_i4);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0_i5);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0_i6);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0_i7);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0_i8);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module7)
	MR_init_entry1(check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0);
	MR_init_label3(check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_partial_inst_in_goals'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0_i4);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_localcall_lab(check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0_i5);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module8)
	MR_init_entry1(check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0);
	MR_init_label3(check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0,15,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_partial_inst_in_cases'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0_i4);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	}
	MR_np_localcall_lab(check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0_i6);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__passes_aux__write_proc_progress_message_6_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);

MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module9)
	MR_init_entry1(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0);
	MR_init_label10(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,2,3,4,5,7,8,12,13,15,16)
	MR_init_label4(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,17,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_partial_inst_proc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("% Delaying partial instantiations in ", 37);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i2);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i3);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i4);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i5);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i7);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i8);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i12);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_0,
		check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i13);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i15);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i16);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i17);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i18);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i19);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0_i20);
MR_def_label(check_hlds__delay_partial_inst__delay_partial_inst_proc_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module10)
	MR_init_entry1(fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0);
	MR_init_label3(fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0,2,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_unify_var_with_ground_var'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r5, 1), 0);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0_i2);
MR_def_label(fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0_i6);
MR_def_label(fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module11)
	MR_init_entry1(__Unify___check_hlds__delay_partial_inst__canon_vars_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__delay_partial_inst__canon_vars_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__delay_partial_inst__canon_vars_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module12)
	MR_init_entry1(__Compare___check_hlds__delay_partial_inst__canon_vars_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__delay_partial_inst__canon_vars_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__delay_partial_inst__canon_vars_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module13)
	MR_init_entry1(__Unify___check_hlds__delay_partial_inst__construct_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__delay_partial_inst__construct_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__delay_partial_inst__construct_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module14)
	MR_init_entry1(__Compare___check_hlds__delay_partial_inst__construct_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__delay_partial_inst__construct_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__delay_partial_inst__construct_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module15)
	MR_init_entry1(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0);
	MR_init_label5(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0,4,6,9,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i11);
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
		__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i4);
MR_def_label(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i6);
MR_def_label(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i9);
MR_def_label(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__delay_partial_inst_module16)
	MR_init_entry1(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0);
	MR_init_label6(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0,3,2,5,9,14,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i2);
MR_def_label(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0,2)
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
		__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i5);
MR_def_label(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i38);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i9);
MR_def_label(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i38);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i14);
MR_def_label(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0_i38);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__delay_partial_inst__delay_partial_inst_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__delay_partial_inst_maybe_bunch_0(void)
{
	check_hlds__delay_partial_inst_module0();
	check_hlds__delay_partial_inst_module1();
	check_hlds__delay_partial_inst_module2();
	check_hlds__delay_partial_inst_module3();
	check_hlds__delay_partial_inst_module4();
	check_hlds__delay_partial_inst_module5();
	check_hlds__delay_partial_inst_module6();
	check_hlds__delay_partial_inst_module7();
	check_hlds__delay_partial_inst_module8();
	check_hlds__delay_partial_inst_module9();
	check_hlds__delay_partial_inst_module10();
	check_hlds__delay_partial_inst_module11();
	check_hlds__delay_partial_inst_module12();
	check_hlds__delay_partial_inst_module13();
	check_hlds__delay_partial_inst_module14();
	check_hlds__delay_partial_inst_module15();
	check_hlds__delay_partial_inst_module16();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__delay_partial_inst__init(void);
void mercury__check_hlds__delay_partial_inst__init_type_tables(void);
void mercury__check_hlds__delay_partial_inst__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__delay_partial_inst__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__delay_partial_inst__init_complexity_procs(void);
#endif

void mercury__check_hlds__delay_partial_inst__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__delay_partial_inst_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__delay_partial_inst__type_ctor_info_canon_vars_map_0,
		check_hlds__delay_partial_inst__canon_vars_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__delay_partial_inst__type_ctor_info_construct_map_0,
		check_hlds__delay_partial_inst__construct_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__delay_partial_inst__type_ctor_info_delay_partial_inst_info_0,
		check_hlds__delay_partial_inst__delay_partial_inst_info_0_0);
	mercury__check_hlds__delay_partial_inst__init_debugger();
}

void mercury__check_hlds__delay_partial_inst__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__delay_partial_inst__type_ctor_info_canon_vars_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__delay_partial_inst__type_ctor_info_construct_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__delay_partial_inst__type_ctor_info_delay_partial_inst_info_0);
	}
}


void mercury__check_hlds__delay_partial_inst__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__delay_partial_inst__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__delay_partial_inst);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__delay_partial_inst__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
