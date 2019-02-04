/*
** Automatically generated from `term_traversal.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__term_traversal__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.term_traversal.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.term_traversal.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.term_traversal.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.term_traversal.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.term_traversal.c"
#line 44 "transform_hlds.term_traversal.c"
#include "transform_hlds.term_traversal.mh"

#line 47 "transform_hlds.term_traversal.c"
#line 48 "transform_hlds.term_traversal.c"
#ifndef TRANSFORM_HLDS__TERM_TRAVERSAL_DECL_GUARD
#define TRANSFORM_HLDS__TERM_TRAVERSAL_DECL_GUARD

#line 52 "transform_hlds.term_traversal.c"
#line 53 "transform_hlds.term_traversal.c"

#endif
#line 56 "transform_hlds.term_traversal.c"

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

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__term_traversal__type_ctor_info_traversal_params_0,
	mercury_data_transform_hlds__term_traversal__type_ctor_info_traversal_info_0,
	mercury_data_transform_hlds__term_traversal__type_ctor_info_path_info_0;
MR_decl_label4(transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0, 2,3,6,1)
MR_decl_label2(transform_hlds__term_traversal__add_error_5_0, 12,4)
MR_decl_label2(transform_hlds__term_traversal__add_path_3_0, 4,3)
MR_decl_label3(transform_hlds__term_traversal__called_can_loop_5_0, 4,3,5)
MR_decl_label8(transform_hlds__term_traversal__combine_paths_4_0, 6,7,8,9,10,12,11,13)
MR_decl_label8(transform_hlds__term_traversal__combine_paths_4_0, 5,15,16,3,20,21,22,19)
MR_decl_label5(transform_hlds__term_traversal__combine_paths_4_0, 23,24,25,26,27)
MR_decl_label4(transform_hlds__term_traversal__compute_rec_start_vars_3_0, 3,10,9,41)
MR_decl_label4(transform_hlds__term_traversal__error_if_intersect_5_0, 5,6,4,3)
MR_decl_label4(transform_hlds__term_traversal__record_change_6_0, 4,5,6,3)
MR_decl_label8(transform_hlds__term_traversal__record_change_2_7_0, 22,5,7,8,9,4,11,3)
MR_decl_label4(transform_hlds__term_traversal__some_active_vars_in_bag_2_0, 18,5,3,1)
MR_decl_label3(transform_hlds__term_traversal__traverse_conj_8_0, 11,4,3)
MR_decl_label5(transform_hlds__term_traversal__traverse_disj_8_0, 4,5,6,3,7)
MR_decl_label4(transform_hlds__term_traversal__traverse_goal_8_0, 3,4,7,2)
MR_decl_label8(transform_hlds__term_traversal__traverse_goal_2_9_0, 4,213,10,12,8,214,17,19)
MR_decl_label8(transform_hlds__term_traversal__traverse_goal_2_9_0, 16,21,215,25,26,27,29,216)
MR_decl_label8(transform_hlds__term_traversal__traverse_goal_2_9_0, 31,211,34,35,36,37,38,39)
MR_decl_label8(transform_hlds__term_traversal__traverse_goal_2_9_0, 40,43,44,45,42,49,48,51)
MR_decl_label8(transform_hlds__term_traversal__traverse_goal_2_9_0, 55,52,56,58,59,61,57,64)
MR_decl_label8(transform_hlds__term_traversal__traverse_goal_2_9_0, 65,67,63,212,71,74,75,77)
MR_decl_label8(transform_hlds__term_traversal__traverse_goal_2_9_0, 79,80,83,84,82,76,89,92)
MR_decl_label8(transform_hlds__term_traversal__traverse_goal_2_9_0, 93,218,95,96,97,98,99,101)
MR_decl_label8(transform_hlds__term_traversal__traverse_goal_2_9_0, 100,106,105,109,219,113,115,117)
MR_decl_label8(transform_hlds__term_traversal__traverse_goal_2_9_0, 119,121,220,124,125,126,221,128)
MR_decl_label5(transform_hlds__term_traversal__traverse_switch_8_0, 4,5,6,3,7)
MR_decl_label8(transform_hlds__term_traversal__unify_change_9_0, 2,5,8,10,11,12,13,14)
MR_decl_label3(transform_hlds__term_traversal__unify_change_9_0, 7,16,1)
MR_decl_label2(transform_hlds__term_traversal__upper_bound_active_vars_2_0, 4,3)
MR_decl_label5(__Unify___transform_hlds__term_traversal__path_info_0_0, 4,6,8,12,1)
MR_decl_label5(__Unify___transform_hlds__term_traversal__traversal_info_0_0, 7,21,5,12,1)
MR_decl_label8(__Unify___transform_hlds__term_traversal__traversal_params_0_0, 4,6,8,10,12,14,16,1)
MR_decl_label7(__Compare___transform_hlds__term_traversal__path_info_0_0, 3,2,5,9,13,17,45)
MR_decl_label8(__Compare___transform_hlds__term_traversal__traversal_info_0_0, 3,2,9,7,5,15,17,54)
MR_decl_label8(__Compare___transform_hlds__term_traversal__traversal_params_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label2(__Compare___transform_hlds__term_traversal__traversal_params_0_0, 29,69)
MR_def_extern_entry(transform_hlds__term_traversal__init_traversal_params_9_0)
MR_decl_static(transform_hlds__term_traversal__params_get_context_2_0)
MR_decl_static(transform_hlds__term_traversal__params_get_max_errors_2_0)
MR_decl_static(transform_hlds__term_traversal__params_get_max_paths_2_0)
MR_decl_static(transform_hlds__term_traversal__combine_paths_4_0)
MR_decl_static(transform_hlds__term_traversal__add_path_3_0)
MR_decl_static(transform_hlds__term_traversal__add_error_5_0)
MR_decl_static(transform_hlds__term_traversal__called_can_loop_5_0)
MR_decl_static(fn__transform_hlds__term_traversal__this_file_0_0)
MR_decl_static(transform_hlds__term_traversal__compute_rec_start_vars_3_0)
MR_decl_static(transform_hlds__term_traversal__params_get_var_types_2_0)
MR_decl_static(transform_hlds__term_traversal__unify_change_9_0)
MR_decl_static(transform_hlds__term_traversal__record_change_2_7_0)
MR_decl_static(transform_hlds__term_traversal__record_change_6_0)
MR_decl_static(transform_hlds__term_traversal__some_active_vars_in_bag_2_0)
MR_decl_static(transform_hlds__term_traversal__error_if_intersect_5_0)
MR_decl_static(transform_hlds__term_traversal__params_get_ppid_2_0)
MR_decl_static(transform_hlds__term_traversal__params_get_output_suppliers_2_0)
MR_decl_static(transform_hlds__term_traversal__params_get_rec_input_suppliers_2_0)
MR_def_extern_entry(transform_hlds__term_traversal__traverse_goal_8_0)
MR_decl_static(transform_hlds__term_traversal__traverse_goal_2_9_0)
MR_decl_static(transform_hlds__term_traversal__traverse_conj_8_0)
MR_decl_static(transform_hlds__term_traversal__traverse_disj_8_0)
MR_decl_static(transform_hlds__term_traversal__traverse_switch_8_0)
MR_def_extern_entry(transform_hlds__term_traversal__upper_bound_active_vars_2_0)
MR_def_extern_entry(__Unify___transform_hlds__term_traversal__path_info_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_traversal__path_info_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_traversal__traversal_info_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_traversal__traversal_info_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_traversal__traversal_params_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_traversal__traversal_params_0_0)
MR_decl_static(transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(1,1),
MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(term, context)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_1 mercury_common_1[5] =
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
MR_LIST_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
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
mercury_data__closure_layout__transform_hlds__term_traversal__unify_change_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_traversal__traverse_goal_2_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_traversal__traverse_goal_2_9_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_traversal__unify_change_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_COMMON(0,2)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_traversal__traverse_goal_2_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_traversal__traverse_goal_2_9_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(1,4)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_COMMON(2,2),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1bool__type_ctor_info_bool_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_bool__type_ctor_info_bool_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1bool__type_ctor_info_bool_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_traversal__field_types_traversal_params_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_transform_hlds__term_traversal__field_names_traversal_params_0_0[] = {
	"functor_info",
	"ppid",
	"context",
	"vartypes",
	"output_suppliers",
	"rec_input_supplier",
	"max_errors",
	"max_paths"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_traversal__du_functor_desc_traversal_params_0_0 = {
	"traversal_params",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_traversal__field_types_traversal_params_0_0,
	mercury_data_transform_hlds__term_traversal__field_names_traversal_params_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_traversal__du_stag_ordered_traversal_params_0_0[] = {
	&mercury_data_transform_hlds__term_traversal__du_functor_desc_traversal_params_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_traversal__du_ptag_ordered_traversal_params_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_traversal__du_stag_ordered_traversal_params_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_traversal__du_name_ordered_traversal_params_0[] = {
	&mercury_data_transform_hlds__term_traversal__du_functor_desc_traversal_params_0_0
};

const MR_Integer mercury_data_transform_hlds__term_traversal__functor_number_map_traversal_params_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_traversal__type_ctor_info_traversal_params_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_traversal__traversal_params_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_traversal__traversal_params_0_0)),
	"transform_hlds.term_traversal",
	"traversal_params",
	{ (void *)mercury_data_transform_hlds__term_traversal__du_name_ordered_traversal_params_0 },
	{ (void *)mercury_data_transform_hlds__term_traversal__du_ptag_ordered_traversal_params_0 },
	1,
	4,
	mercury_data_transform_hlds__term_traversal__functor_number_map_traversal_params_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_traversal__type_ctor_info_path_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__term_traversal__type_ctor_info_path_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_traversal__type_ctor_info_path_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_traversal__field_types_traversal_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__term_traversal__type_ctor_info_path_info_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_traversal__du_functor_desc_traversal_info_0_0 = {
	"ok",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_traversal__field_types_traversal_info_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_traversal__field_types_traversal_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_traversal__du_functor_desc_traversal_info_0_1 = {
	"error",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_traversal__field_types_traversal_info_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_traversal__du_stag_ordered_traversal_info_0_0[] = {
	&mercury_data_transform_hlds__term_traversal__du_functor_desc_traversal_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_traversal__du_stag_ordered_traversal_info_0_1[] = {
	&mercury_data_transform_hlds__term_traversal__du_functor_desc_traversal_info_0_1

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_traversal__du_ptag_ordered_traversal_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_traversal__du_stag_ordered_traversal_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_traversal__du_stag_ordered_traversal_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_traversal__du_name_ordered_traversal_info_0[] = {
	&mercury_data_transform_hlds__term_traversal__du_functor_desc_traversal_info_0_1,
	&mercury_data_transform_hlds__term_traversal__du_functor_desc_traversal_info_0_0
};

const MR_Integer mercury_data_transform_hlds__term_traversal__functor_number_map_traversal_info_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_traversal__type_ctor_info_traversal_info_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_traversal__traversal_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_traversal__traversal_info_0_0)),
	"transform_hlds.term_traversal",
	"traversal_info",
	{ (void *)mercury_data_transform_hlds__term_traversal__du_name_ordered_traversal_info_0 },
	{ (void *)mercury_data_transform_hlds__term_traversal__du_ptag_ordered_traversal_info_0 },
	2,
	4,
	mercury_data_transform_hlds__term_traversal__functor_number_map_traversal_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_traversal__field_types_path_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_traversal__du_functor_desc_path_info_0_0 = {
	"path_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_traversal__field_types_path_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_traversal__du_stag_ordered_path_info_0_0[] = {
	&mercury_data_transform_hlds__term_traversal__du_functor_desc_path_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_traversal__du_ptag_ordered_path_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_traversal__du_stag_ordered_path_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_traversal__du_name_ordered_path_info_0[] = {
	&mercury_data_transform_hlds__term_traversal__du_functor_desc_path_info_0_0
};

const MR_Integer mercury_data_transform_hlds__term_traversal__functor_number_map_path_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_traversal__type_ctor_info_path_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_traversal__path_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_traversal__path_info_0_0)),
	"transform_hlds.term_traversal",
	"path_info",
	{ (void *)mercury_data_transform_hlds__term_traversal__du_name_ordered_path_info_0 },
	{ (void *)mercury_data_transform_hlds__term_traversal__du_ptag_ordered_path_info_0 },
	1,
	4,
	mercury_data_transform_hlds__term_traversal__functor_number_map_path_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_traversal__unify_change_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_traversal",
"transform_hlds.term_traversal",
"lambda_term_traversal_m_527",
2,
0
},
"transform_hlds.term_traversal",
"term_traversal.m",
527,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_traversal__traverse_goal_2_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_util",
"transform_hlds.term_util",
"pred_proc_id_terminates",
2,
0
},
"transform_hlds.term_traversal",
"term_traversal.m",
245,
"d9;c12;d1;c3;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_traversal__traverse_goal_2_9_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"transform_hlds.term_traversal",
"term_traversal.m",
216,
"d8;c14;"
};


MR_BEGIN_MODULE(transform_hlds__term_traversal_module0)
	MR_init_entry1(transform_hlds__term_traversal__init_traversal_params_9_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_traversal__init_traversal_params_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r5;
	MR_tfield(0, MR_tempr1, 5) = MR_r6;
	MR_tfield(0, MR_tempr1, 6) = MR_r7;
	MR_tfield(0, MR_tempr1, 7) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module1)
	MR_init_entry1(transform_hlds__term_traversal__params_get_context_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__params_get_context_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module2)
	MR_init_entry1(transform_hlds__term_traversal__params_get_max_errors_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__params_get_max_errors_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module3)
	MR_init_entry1(transform_hlds__term_traversal__params_get_max_paths_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__params_get_max_paths_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);
MR_decl_entry(list__take_upto_3_0);
MR_decl_entry(set__union_3_0);
MR_decl_entry(set__count_2_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module4)
	MR_init_entry1(transform_hlds__term_traversal__combine_paths_4_0);
	MR_init_label8(transform_hlds__term_traversal__combine_paths_4_0,6,7,8,9,10,12,11,13)
	MR_init_label8(transform_hlds__term_traversal__combine_paths_4_0,5,15,16,3,20,21,22,19)
	MR_init_label5(transform_hlds__term_traversal__combine_paths_4_0,23,24,25,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__combine_paths_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__combine_paths_4_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__combine_paths_4_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__params_get_max_errors_2_0,
		transform_hlds__term_traversal__combine_paths_4_0_i6);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_traversal__combine_paths_4_0_i7);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__take_upto_3_0,
		transform_hlds__term_traversal__combine_paths_4_0_i8);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(set__union_3_0,
		transform_hlds__term_traversal__combine_paths_4_0_i9);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__term_traversal__params_get_max_paths_2_0,
		transform_hlds__term_traversal__combine_paths_4_0_i10);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set__count_2_0,
		transform_hlds__term_traversal__combine_paths_4_0_i12);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(transform_hlds__term_traversal__combine_paths_4_0_i11);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__term_traversal__params_get_context_2_0,
		transform_hlds__term_traversal__combine_paths_4_0_i13);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__params_get_max_errors_2_0,
		transform_hlds__term_traversal__combine_paths_4_0_i15);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_traversal__combine_paths_4_0_i16);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__take_upto_3_0,
		transform_hlds__term_traversal__combine_paths_4_0_i27);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__combine_paths_4_0_i19);
	}
	MR_sv(1) = MR_ctfield(0, MR_r2, 1);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__term_traversal__params_get_max_errors_2_0,
		transform_hlds__term_traversal__combine_paths_4_0_i20);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_traversal__combine_paths_4_0_i21);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__take_upto_3_0,
		transform_hlds__term_traversal__combine_paths_4_0_i22);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__params_get_max_errors_2_0,
		transform_hlds__term_traversal__combine_paths_4_0_i23);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_traversal__combine_paths_4_0_i24);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__take_upto_3_0,
		transform_hlds__term_traversal__combine_paths_4_0_i25);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_traversal__combine_paths_4_0_i26);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__take_upto_3_0,
		transform_hlds__term_traversal__combine_paths_4_0_i27);
MR_def_label(transform_hlds__term_traversal__combine_paths_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module5)
	MR_init_entry1(transform_hlds__term_traversal__add_path_3_0);
	MR_init_label2(transform_hlds__term_traversal__add_path_3_0,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__add_path_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__add_path_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r2, 1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(set__insert_3_0,
		transform_hlds__term_traversal__add_path_3_0_i4);
MR_def_label(transform_hlds__term_traversal__add_path_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__term_traversal__add_path_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module6)
	MR_init_entry1(transform_hlds__term_traversal__add_error_5_0);
	MR_init_label2(transform_hlds__term_traversal__add_error_5_0,12,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__add_error_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__add_error_5_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_ctfield(0, MR_r4, 1);
	MR_proceed();
	}
MR_def_label(transform_hlds__term_traversal__add_error_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_r3, 6);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__take_upto_3_0,
		transform_hlds__term_traversal__add_error_5_0_i4);
MR_def_label(transform_hlds__term_traversal__add_error_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module7)
	MR_init_entry1(transform_hlds__term_traversal__called_can_loop_5_0);
	MR_init_label3(transform_hlds__term_traversal__called_can_loop_5_0,4,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__called_can_loop_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__called_can_loop_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_r3, 6);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__take_upto_3_0,
		transform_hlds__term_traversal__called_can_loop_5_0_i4);
MR_def_label(transform_hlds__term_traversal__called_can_loop_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__term_traversal__called_can_loop_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_r3, 6);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__take_upto_3_0,
		transform_hlds__term_traversal__called_can_loop_5_0_i5);
MR_def_label(transform_hlds__term_traversal__called_can_loop_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module8)
	MR_init_entry1(fn__transform_hlds__term_traversal__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_traversal__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_traversal.m", 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bag__init_1_0);
MR_decl_entry(bag__insert_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module9)
	MR_init_entry1(transform_hlds__term_traversal__compute_rec_start_vars_3_0);
	MR_init_label4(transform_hlds__term_traversal__compute_rec_start_vars_3_0,3,10,9,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__compute_rec_start_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__compute_rec_start_vars_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__compute_rec_start_vars_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_tailcall_ent(bag__init_1_0);
MR_def_label(transform_hlds__term_traversal__compute_rec_start_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__compute_rec_start_vars_3_0_i9);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(transform_hlds__term_traversal__compute_rec_start_vars_3_0,
		transform_hlds__term_traversal__compute_rec_start_vars_3_0_i10);
MR_def_label(transform_hlds__term_traversal__compute_rec_start_vars_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__compute_rec_start_vars_3_0_i41);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(bag__insert_3_0);
MR_def_label(transform_hlds__term_traversal__compute_rec_start_vars_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_traversal.m", 16);
	MR_r2 = (MR_Word) MR_string_const("compute_rec_start_vars/3: unmatched variables.", 46);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__term_traversal__compute_rec_start_vars_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module10)
	MR_init_entry1(transform_hlds__term_traversal__params_get_var_types_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__params_get_var_types_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(parse_tree__prog_type__type_is_higher_order_1_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(assoc_list__keys_and_values_3_0);
MR_decl_entry(transform_hlds__term_norm__functor_norm_9_0);
MR_decl_entry(transform_hlds__term_util__split_unification_vars_5_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module11)
	MR_init_entry1(transform_hlds__term_traversal__unify_change_9_0);
	MR_init_label8(transform_hlds__term_traversal__unify_change_9_0,2,5,8,10,11,12,13,14)
	MR_init_label3(transform_hlds__term_traversal__unify_change_9_0,7,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__unify_change_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__term_traversal__unify_change_9_0_i2);
MR_def_label(transform_hlds__term_traversal__unify_change_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_1_0,
		transform_hlds__term_traversal__unify_change_9_0_i5);
MR_def_label(transform_hlds__term_traversal__unify_change_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_traversal__unify_change_9_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__term_traversal__unify_change_9_0_i8);
MR_def_label(transform_hlds__term_traversal__unify_change_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__unify_change_9_0_i7);
	}
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		transform_hlds__term_traversal__unify_change_9_0_i10);
MR_def_label(transform_hlds__term_traversal__unify_change_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__term_traversal__unify_change_9_0_i11);
MR_def_label(transform_hlds__term_traversal__unify_change_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_np_call_localret_ent(assoc_list__keys_and_values_3_0,
		transform_hlds__term_traversal__unify_change_9_0_i12);
MR_def_label(transform_hlds__term_traversal__unify_change_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__term_norm__functor_norm_9_0,
		transform_hlds__term_traversal__unify_change_9_0_i13);
MR_def_label(transform_hlds__term_traversal__unify_change_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_util__split_unification_vars_5_0,
		transform_hlds__term_traversal__unify_change_9_0_i14);
MR_def_label(transform_hlds__term_traversal__unify_change_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_traversal__unify_change_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_traversal.m", 16);
	MR_r2 = (MR_Word) MR_string_const("unify_change/8: variable type.", 30);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_traversal__unify_change_9_0_i16);
MR_def_label(transform_hlds__term_traversal__unify_change_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_traversal__unify_change_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bag__intersect_2_0);
MR_decl_entry(bag__subtract_3_0);
MR_decl_entry(bag__union_3_0);
MR_decl_entry(svset__insert_3_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module12)
	MR_init_entry1(transform_hlds__term_traversal__record_change_2_7_0);
	MR_init_label8(transform_hlds__term_traversal__record_change_2_7_0,22,5,7,8,9,4,11,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__record_change_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_traversal__record_change_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__record_change_2_7_0_i3);
	}
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(bag__intersect_2_0,
		transform_hlds__term_traversal__record_change_2_7_0_i5);
MR_def_label(transform_hlds__term_traversal__record_change_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__record_change_2_7_0_i4);
	}
	MR_sv(6) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_sv(10));
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_traversal__record_change_2_7_0_i7);
MR_def_label(transform_hlds__term_traversal__record_change_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(bag__subtract_3_0,
		transform_hlds__term_traversal__record_change_2_7_0_i8);
MR_def_label(transform_hlds__term_traversal__record_change_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(bag__union_3_0,
		transform_hlds__term_traversal__record_change_2_7_0_i9);
MR_def_label(transform_hlds__term_traversal__record_change_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r3 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		transform_hlds__term_traversal__record_change_2_7_0_i11);
MR_def_label(transform_hlds__term_traversal__record_change_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_np_call_localret_ent(svset__insert_3_0,
		transform_hlds__term_traversal__record_change_2_7_0_i11);
MR_def_label(transform_hlds__term_traversal__record_change_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(transform_hlds__term_traversal__record_change_2_7_0_i22);
MR_def_label(transform_hlds__term_traversal__record_change_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(set__init_1_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module13)
	MR_init_entry1(transform_hlds__term_traversal__record_change_6_0);
	MR_init_label4(transform_hlds__term_traversal__record_change_6_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__record_change_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__record_change_6_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__term_traversal__record_change_6_0_i4);
MR_def_label(transform_hlds__term_traversal__record_change_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__term_traversal__record_change_6_0_i5);
MR_def_label(transform_hlds__term_traversal__record_change_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__term_traversal__record_change_2_7_0,
		transform_hlds__term_traversal__record_change_6_0_i6);
MR_def_label(transform_hlds__term_traversal__record_change_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__term_traversal__record_change_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module14)
	MR_init_entry1(transform_hlds__term_traversal__some_active_vars_in_bag_2_0);
	MR_init_label4(transform_hlds__term_traversal__some_active_vars_in_bag_2_0,18,5,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__some_active_vars_in_bag_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_traversal__some_active_vars_in_bag_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__some_active_vars_in_bag_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 4);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(bag__intersect_2_0,
		transform_hlds__term_traversal__some_active_vars_in_bag_2_0_i5);
MR_def_label(transform_hlds__term_traversal__some_active_vars_in_bag_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_traversal__some_active_vars_in_bag_2_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__term_traversal__some_active_vars_in_bag_2_0_i18);
MR_def_label(transform_hlds__term_traversal__some_active_vars_in_bag_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__term_traversal__some_active_vars_in_bag_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module15)
	MR_init_entry1(transform_hlds__term_traversal__error_if_intersect_5_0);
	MR_init_label4(transform_hlds__term_traversal__error_if_intersect_5_0,5,6,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__error_if_intersect_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__error_if_intersect_5_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__term_traversal__error_if_intersect_5_0_i5);
MR_def_label(transform_hlds__term_traversal__error_if_intersect_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__term_traversal__some_active_vars_in_bag_2_0,
		transform_hlds__term_traversal__error_if_intersect_5_0_i6);
MR_def_label(transform_hlds__term_traversal__error_if_intersect_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__error_if_intersect_5_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__term_traversal__error_if_intersect_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__term_traversal__error_if_intersect_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module16)
	MR_init_entry1(transform_hlds__term_traversal__params_get_ppid_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__params_get_ppid_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module17)
	MR_init_entry1(transform_hlds__term_traversal__params_get_output_suppliers_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__params_get_output_suppliers_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module18)
	MR_init_entry1(transform_hlds__term_traversal__params_get_rec_input_suppliers_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__params_get_rec_input_suppliers_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_determinism_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module19)
	MR_init_entry1(transform_hlds__term_traversal__traverse_goal_8_0);
	MR_init_label4(transform_hlds__term_traversal__traverse_goal_8_0,3,4,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_traversal__traverse_goal_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		transform_hlds__term_traversal__traverse_goal_8_0_i3);
MR_def_label(transform_hlds__term_traversal__traverse_goal_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		transform_hlds__term_traversal__traverse_goal_8_0_i4);
MR_def_label(transform_hlds__term_traversal__traverse_goal_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_8_0_i2);
	}
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_8_0_i2);
	}
	MR_sv(4) = MR_ctfield(0, MR_sv(4), 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__term_traversal__traverse_goal_8_0_i7);
MR_def_label(transform_hlds__term_traversal__traverse_goal_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__term_traversal__traverse_goal_2_9_0);
	}
MR_def_label(transform_hlds__term_traversal__traverse_goal_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__term_traversal__traverse_goal_2_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0);
MR_decl_entry(transform_hlds__term_util__partition_call_args_5_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(transform_hlds__term_util__remove_unused_args_4_0);
MR_decl_entry(transform_hlds__term_util__horder_vars_2_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_ho_values_1_0);
MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(transform_hlds__term_util__pred_proc_id_terminates_2_0);
MR_decl_entry(list__filter_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(transform_hlds__term_util__is_termination_known_2_0);
MR_decl_entry(transform_hlds__term_util__attributes_imply_termination_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module20)
	MR_init_entry1(transform_hlds__term_traversal__traverse_goal_2_9_0);
	MR_init_label8(transform_hlds__term_traversal__traverse_goal_2_9_0,4,213,10,12,8,214,17,19)
	MR_init_label8(transform_hlds__term_traversal__traverse_goal_2_9_0,16,21,215,25,26,27,29,216)
	MR_init_label8(transform_hlds__term_traversal__traverse_goal_2_9_0,31,211,34,35,36,37,38,39)
	MR_init_label8(transform_hlds__term_traversal__traverse_goal_2_9_0,40,43,44,45,42,49,48,51)
	MR_init_label8(transform_hlds__term_traversal__traverse_goal_2_9_0,55,52,56,58,59,61,57,64)
	MR_init_label8(transform_hlds__term_traversal__traverse_goal_2_9_0,65,67,63,212,71,74,75,77)
	MR_init_label8(transform_hlds__term_traversal__traverse_goal_2_9_0,79,80,83,84,82,76,89,92)
	MR_init_label8(transform_hlds__term_traversal__traverse_goal_2_9_0,93,218,95,96,97,98,99,101)
	MR_init_label8(transform_hlds__term_traversal__traverse_goal_2_9_0,100,106,105,109,219,113,115,117)
	MR_init_label8(transform_hlds__term_traversal__traverse_goal_2_9_0,119,121,220,124,125,126,221,128)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__traverse_goal_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i211) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i212) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i93));
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i213) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i214) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i215) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i29));
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_r1 = MR_tempr2;
	MR_tempr1 = MR_tempr3;
	MR_r2 = MR_sv(1);
	MR_r6 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 2);
	MR_r5 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__unify_change_9_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i10);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i8);
	}
	MR_sv(2) = MR_r3;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(bag__insert_3_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i12);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_traversal__record_change_6_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i109);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_tempr2;
	MR_tempr1 = MR_tempr3;
	MR_r2 = MR_sv(1);
	MR_r6 = MR_r3;
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 2);
	MR_r5 = MR_ctfield(1, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__unify_change_9_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i17);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	}
	MR_np_call_localret_ent(bag__insert_3_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i19);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) 0 - (MR_Integer) MR_sv(1));
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_traversal__record_change_6_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i109);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__term_traversal__this_file_0_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i21);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("traverse_goal_2/5: higher order deconstruction.", 47);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(bag__init_1_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i25);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(bag__insert_3_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i26);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(bag__insert_3_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i27);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_traversal__record_change_6_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i109);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i216);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__term_traversal__this_file_0_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i31);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("traverse_goal_2/5: complicated unify.", 37);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(6) = MR_ctfield(1, MR_r1, 2);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i34);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__term_traversal__params_get_ppid_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i35);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i36);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i37);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i38);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i39);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_util__partition_call_args_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i40);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i42);
	}
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__term_traversal__params_get_output_suppliers_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i43);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i44);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_util__remove_unused_args_4_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i45);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Integer) 0;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__record_change_6_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i51);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(8), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i48);
	}
	MR_sv(10) = MR_r2;
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__term_util__remove_unused_args_4_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i49);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_traversal__record_change_6_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i51);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__error_if_intersect_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i51);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i52);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(9), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i52);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__called_can_loop_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i55);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i56);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(3) = MR_r4;
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__term_traversal__params_get_var_types_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i58);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_util__horder_vars_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i59);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i57);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__add_error_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i61);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__params_get_rec_input_suppliers_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i64);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_traversal__params_get_rec_input_suppliers_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i64);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i65);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i63);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_traversal__compute_rec_start_vars_3_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i67);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__add_path_3_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i109);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(2, MR_r1, 0);
	MR_sv(6) = MR_ctfield(2, MR_r1, 1);
	MR_sv(7) = MR_ctfield(2, MR_r1, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i71);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i74) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i89) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i92) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i92));
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_r6, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_ho_values_1_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i75);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i77);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i76);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i79);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_util__pred_proc_id_terminates_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i80);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i82);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_util__partition_call_args_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i83);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__term_traversal__params_get_ppid_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i84);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__error_if_intersect_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i109);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_traversal__add_error_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i109);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_traversal__add_error_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i109);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_traversal__add_error_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i109);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i218) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i219) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i115) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i117) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i119) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i121) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i220) MR_AND
		MR_LABEL_AP(transform_hlds__term_traversal__traverse_goal_2_9_0_i221));
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(3, MR_r1, 1);
	MR_sv(6) = MR_ctfield(3, MR_r1, 2);
	MR_sv(7) = MR_ctfield(3, MR_r1, 3);
	MR_sv(8) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i95);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i96);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i97);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__term_util__partition_call_args_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i98);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i99);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__term_util__is_termination_known_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i101);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i100);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_traversal__error_if_intersect_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i109);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__term_util__attributes_imply_termination_1_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i106);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_goal_2_9_0_i105);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_traversal__error_if_intersect_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i109);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__add_error_5_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i109);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i113);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(transform_hlds__term_traversal__traverse_conj_8_0);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(transform_hlds__term_traversal__traverse_disj_8_0);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(transform_hlds__term_traversal__traverse_switch_8_0);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(transform_hlds__term_traversal__traverse_goal_8_0);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(transform_hlds__term_traversal__traverse_goal_8_0);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_r1, 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_sv(3) = MR_tempr4;
	MR_sv(1) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__traverse_conj_8_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i124);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__traverse_goal_8_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i125);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__combine_paths_4_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i126);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__term_traversal__this_file_0_0,
		transform_hlds__term_traversal__traverse_goal_2_9_0_i128);
MR_def_label(transform_hlds__term_traversal__traverse_goal_2_9_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("traverse_goal_2/5: shorthand goal.", 34);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module21)
	MR_init_entry1(transform_hlds__term_traversal__traverse_conj_8_0);
	MR_init_label3(transform_hlds__term_traversal__traverse_conj_8_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__traverse_conj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_traversal__traverse_conj_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_conj_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__term_traversal__traverse_goal_8_0,
		transform_hlds__term_traversal__traverse_conj_8_0_i4);
MR_def_label(transform_hlds__term_traversal__traverse_conj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__term_traversal__traverse_conj_8_0_i11);
MR_def_label(transform_hlds__term_traversal__traverse_conj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module22)
	MR_init_entry1(transform_hlds__term_traversal__traverse_disj_8_0);
	MR_init_label5(transform_hlds__term_traversal__traverse_disj_8_0,4,5,6,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__traverse_disj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_disj_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__term_traversal__traverse_goal_8_0,
		transform_hlds__term_traversal__traverse_disj_8_0_i4);
MR_def_label(transform_hlds__term_traversal__traverse_disj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(transform_hlds__term_traversal__traverse_disj_8_0,
		transform_hlds__term_traversal__traverse_disj_8_0_i5);
MR_def_label(transform_hlds__term_traversal__traverse_disj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__term_traversal__combine_paths_4_0,
		transform_hlds__term_traversal__traverse_disj_8_0_i6);
MR_def_label(transform_hlds__term_traversal__traverse_disj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__term_traversal__traverse_disj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__term_traversal__traverse_disj_8_0_i7);
MR_def_label(transform_hlds__term_traversal__traverse_disj_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module23)
	MR_init_entry1(transform_hlds__term_traversal__traverse_switch_8_0);
	MR_init_label5(transform_hlds__term_traversal__traverse_switch_8_0,4,5,6,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__traverse_switch_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__traverse_switch_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_np_call_localret_ent(transform_hlds__term_traversal__traverse_goal_8_0,
		transform_hlds__term_traversal__traverse_switch_8_0_i4);
MR_def_label(transform_hlds__term_traversal__traverse_switch_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(transform_hlds__term_traversal__traverse_switch_8_0,
		transform_hlds__term_traversal__traverse_switch_8_0_i5);
MR_def_label(transform_hlds__term_traversal__traverse_switch_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__term_traversal__combine_paths_4_0,
		transform_hlds__term_traversal__traverse_switch_8_0_i6);
MR_def_label(transform_hlds__term_traversal__traverse_switch_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__term_traversal__traverse_switch_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__term_traversal__traverse_switch_8_0_i7);
MR_def_label(transform_hlds__term_traversal__traverse_switch_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bag__least_upper_bound_3_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module24)
	MR_init_entry1(transform_hlds__term_traversal__upper_bound_active_vars_2_0);
	MR_init_label2(transform_hlds__term_traversal__upper_bound_active_vars_2_0,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_traversal__upper_bound_active_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_traversal__upper_bound_active_vars_2_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(transform_hlds__term_traversal__upper_bound_active_vars_2_0,
		transform_hlds__term_traversal__upper_bound_active_vars_2_0_i4);
MR_def_label(transform_hlds__term_traversal__upper_bound_active_vars_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_ctfield(0, MR_sv(1), 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(bag__least_upper_bound_3_0);
MR_def_label(transform_hlds__term_traversal__upper_bound_active_vars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_tailcall_ent(bag__init_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module25)
	MR_init_entry1(__Unify___transform_hlds__term_traversal__path_info_0_0);
	MR_init_label5(__Unify___transform_hlds__term_traversal__path_info_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_traversal__path_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__path_info_0_0_i12);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_traversal__path_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_traversal__path_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__path_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___transform_hlds__term_traversal__path_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__term_traversal__path_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__path_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__path_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_traversal__path_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__term_traversal__path_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__path_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___transform_hlds__term_traversal__path_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_traversal__path_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module26)
	MR_init_entry1(__Compare___transform_hlds__term_traversal__path_info_0_0);
	MR_init_label7(__Compare___transform_hlds__term_traversal__path_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_traversal__path_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__path_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__path_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_traversal__path_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_traversal__path_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_traversal__path_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_traversal__path_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__path_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___transform_hlds__term_traversal__path_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_traversal__path_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__path_info_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_traversal__path_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__term_traversal__path_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__path_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_traversal__path_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__term_traversal__path_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__path_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___transform_hlds__term_traversal__path_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module27)
	MR_init_entry1(__Unify___transform_hlds__term_traversal__traversal_info_0_0);
	MR_init_label5(__Unify___transform_hlds__term_traversal__traversal_info_0_0,7,21,5,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_traversal__traversal_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_info_0_0_i21);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_traversal__traversal_info_0_0_i7);
MR_def_label(__Unify___transform_hlds__term_traversal__traversal_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__term_traversal__traversal_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_traversal__traversal_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_traversal__traversal_info_0_0_i12);
MR_def_label(__Unify___transform_hlds__term_traversal__traversal_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__term_traversal__traversal_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_traversal_module28)
	MR_init_entry1(__Compare___transform_hlds__term_traversal__traversal_info_0_0);
	MR_init_label8(__Compare___transform_hlds__term_traversal__traversal_info_0_0,3,2,9,7,5,15,17,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_traversal__traversal_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_info_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_traversal__traversal_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_info_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_info_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_traversal__traversal_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_info_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_info_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___transform_hlds__term_norm__functor_info_0_0);
MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module29)
	MR_init_entry1(__Unify___transform_hlds__term_traversal__traversal_params_0_0);
	MR_init_label8(__Unify___transform_hlds__term_traversal__traversal_params_0_0,4,6,8,10,12,14,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_traversal__traversal_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_params_0_0_i16);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
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
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___transform_hlds__term_norm__functor_info_0_0,
		__Unify___transform_hlds__term_traversal__traversal_params_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_traversal__traversal_params_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_params_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_traversal__traversal_params_0_0_i6);
MR_def_label(__Unify___transform_hlds__term_traversal__traversal_params_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_params_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___transform_hlds__term_traversal__traversal_params_0_0_i8);
MR_def_label(__Unify___transform_hlds__term_traversal__traversal_params_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_params_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__term_traversal__traversal_params_0_0_i10);
MR_def_label(__Unify___transform_hlds__term_traversal__traversal_params_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_params_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__term_traversal__traversal_params_0_0_i12);
MR_def_label(__Unify___transform_hlds__term_traversal__traversal_params_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_params_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__term_traversal__traversal_params_0_0_i14);
MR_def_label(__Unify___transform_hlds__term_traversal__traversal_params_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_params_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_traversal__traversal_params_0_0_i1);
	}
	MR_r1 = (MR_sv(7) == MR_sv(14));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___transform_hlds__term_traversal__traversal_params_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_traversal__traversal_params_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___transform_hlds__term_norm__functor_info_0_0);
MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module30)
	MR_init_entry1(__Compare___transform_hlds__term_traversal__traversal_params_0_0);
	MR_init_label8(__Compare___transform_hlds__term_traversal__traversal_params_0_0,3,2,5,9,13,17,21,25)
	MR_init_label2(__Compare___transform_hlds__term_traversal__traversal_params_0_0,29,69)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_traversal__traversal_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_params_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_params_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_params_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_params_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___transform_hlds__term_norm__functor_info_0_0,
		__Compare___transform_hlds__term_traversal__traversal_params_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_params_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_params_0_0_i69);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_traversal__traversal_params_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_params_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_params_0_0_i69);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___transform_hlds__term_traversal__traversal_params_0_0_i13);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_params_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_params_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__term_traversal__traversal_params_0_0_i17);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_params_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_params_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__term_traversal__traversal_params_0_0_i21);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_params_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_params_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__term_traversal__traversal_params_0_0_i25);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_params_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_params_0_0_i69);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_traversal__traversal_params_0_0_i29);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_params_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_traversal__traversal_params_0_0_i69);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__term_traversal__traversal_params_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__pair__fst_1_0);
MR_decl_entry(parse_tree__prog_type__is_introduced_type_info_type_1_0);

MR_BEGIN_MODULE(transform_hlds__term_traversal_module31)
	MR_init_entry1(transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0);
	MR_init_label4(transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0,2,3,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_np_call_localret_ent(fn__pair__fst_1_0,
		transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0_i2);
MR_def_label(transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0_i3);
MR_def_label(transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__is_introduced_type_info_type_1_0,
		transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0_i6);
MR_def_label(transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0_i1);
	}
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_traversal__IntroducedFrom__pred__filter_args_and_modes__527__1_2_0,1)
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

static void mercury__transform_hlds__term_traversal_maybe_bunch_0(void)
{
	transform_hlds__term_traversal_module0();
	transform_hlds__term_traversal_module1();
	transform_hlds__term_traversal_module2();
	transform_hlds__term_traversal_module3();
	transform_hlds__term_traversal_module4();
	transform_hlds__term_traversal_module5();
	transform_hlds__term_traversal_module6();
	transform_hlds__term_traversal_module7();
	transform_hlds__term_traversal_module8();
	transform_hlds__term_traversal_module9();
	transform_hlds__term_traversal_module10();
	transform_hlds__term_traversal_module11();
	transform_hlds__term_traversal_module12();
	transform_hlds__term_traversal_module13();
	transform_hlds__term_traversal_module14();
	transform_hlds__term_traversal_module15();
	transform_hlds__term_traversal_module16();
	transform_hlds__term_traversal_module17();
	transform_hlds__term_traversal_module18();
	transform_hlds__term_traversal_module19();
	transform_hlds__term_traversal_module20();
	transform_hlds__term_traversal_module21();
	transform_hlds__term_traversal_module22();
	transform_hlds__term_traversal_module23();
	transform_hlds__term_traversal_module24();
	transform_hlds__term_traversal_module25();
	transform_hlds__term_traversal_module26();
	transform_hlds__term_traversal_module27();
	transform_hlds__term_traversal_module28();
	transform_hlds__term_traversal_module29();
	transform_hlds__term_traversal_module30();
	transform_hlds__term_traversal_module31();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_traversal__init(void);
void mercury__transform_hlds__term_traversal__init_type_tables(void);
void mercury__transform_hlds__term_traversal__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_traversal__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_traversal__init_complexity_procs(void);
#endif

void mercury__transform_hlds__term_traversal__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__term_traversal_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_traversal__type_ctor_info_traversal_params_0,
		transform_hlds__term_traversal__traversal_params_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_traversal__type_ctor_info_traversal_info_0,
		transform_hlds__term_traversal__traversal_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_traversal__type_ctor_info_path_info_0,
		transform_hlds__term_traversal__path_info_0_0);
	mercury__transform_hlds__term_traversal__init_debugger();
}

void mercury__transform_hlds__term_traversal__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_traversal__type_ctor_info_traversal_params_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_traversal__type_ctor_info_traversal_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_traversal__type_ctor_info_path_info_0);
	}
}


void mercury__transform_hlds__term_traversal__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__term_traversal__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_traversal__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
