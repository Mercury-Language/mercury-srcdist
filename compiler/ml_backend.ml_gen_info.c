/*
** Automatically generated from `ml_gen_info.m'
** by the Mercury compiler,
** version rotd-2011-09-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ml_gen_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.ml_gen_info.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.ml_gen_info.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ml_backend.ml_gen_info.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ml_backend.ml_gen_info.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ml_backend.ml_gen_info.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ml_backend.ml_gen_info.c"
#line 49 "ml_backend.ml_gen_info.c"
#include "ml_backend.ml_gen_info.mh"

#line 52 "ml_backend.ml_gen_info.c"
#line 53 "ml_backend.ml_gen_info.c"
#ifndef ML_BACKEND__ML_GEN_INFO_DECL_GUARD
#define ML_BACKEND__ML_GEN_INFO_DECL_GUARD

#line 57 "ml_backend.ml_gen_info.c"
#line 58 "ml_backend.ml_gen_info.c"

#endif
#line 61 "ml_backend.ml_gen_info.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ml_gen_info__type_ctor_info_cond_seq_0,
	mercury_data_ml_backend__ml_gen_info__type_ctor_info_conv_seq_0,
	mercury_data_ml_backend__ml_gen_info__type_ctor_info_label_num_0,
	mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0,
	mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0,
	mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0,
	mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_map_0,
	mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_label_func_0,
	mercury_data_ml_backend__ml_gen_info__type_ctor_info_success_cont_0;
MR_decl_label1(ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_0, 2)
MR_decl_label2(ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_0, 2,3)
MR_decl_label4(ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0, 2,5,6,7)
MR_decl_label1(ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_0, 2)
MR_decl_label1(ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_0, 2)
MR_decl_label1(ml_backend__ml_gen_info__ml_gen_info_new_func_label_3_0, 2)
MR_decl_label1(ml_backend__ml_gen_info__ml_gen_info_new_label_3_0, 2)
MR_decl_label1(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0, 2)
MR_decl_label1(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0, 2)
MR_decl_label1(ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_0, 2)
MR_decl_label1(ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_0, 3)
MR_decl_label1(ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_0, 3)
MR_decl_label1(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0, 2)
MR_decl_label10(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0, 2,3,4,5,6,7,8,10,11,12)
MR_decl_label7(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0, 13,14,15,16,17,18,19)
MR_decl_label1(__Unify___ml_backend__ml_gen_info__cond_seq_0_0, 4)
MR_decl_label1(__Unify___ml_backend__ml_gen_info__conv_seq_0_0, 4)
MR_decl_label9(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0, 4,6,9,11,13,15,17,21,1)
MR_decl_label10(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0, 4,6,8,10,12,15,17,19,23,1)
MR_decl_label4(__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0, 4,6,10,1)
MR_decl_label5(__Unify___ml_backend__ml_gen_info__success_cont_0_0, 4,6,8,12,1)
MR_decl_label2(__Compare___ml_backend__ml_gen_info__cond_seq_0_0, 3,2)
MR_decl_label2(__Compare___ml_backend__ml_gen_info__conv_seq_0_0, 3,2)
MR_decl_label10(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0, 3,2,5,9,14,19,24,29,33,97)
MR_decl_label10(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label5(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0, 37,42,46,50,149)
MR_decl_label5(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0, 3,2,5,9,29)
MR_decl_label6(__Compare___ml_backend__ml_gen_info__success_cont_0_0, 3,2,5,9,13,37)
MR_def_extern_entry(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_target_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_value_output_vars_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_set_varset_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_set_var_types_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_set_value_output_vars_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_new_label_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_new_func_label_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_add_closure_wrapper_defn_3_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_get_env_var_names_2_0)
MR_def_extern_entry(ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_0)
MR_def_extern_entry(__Unify___ml_backend__ml_gen_info__cond_seq_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_gen_info__cond_seq_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_gen_info__conv_seq_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_gen_info__conv_seq_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_gen_info__label_num_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_gen_info__label_num_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0)
MR_decl_static(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0)
MR_decl_static(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_gen_info__ml_ground_term_map_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_gen_info__ml_ground_term_map_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_gen_info__ml_label_func_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_gen_info__ml_label_func_0_0)
MR_def_extern_entry(__Unify___ml_backend__ml_gen_info__success_cont_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_gen_info__success_cont_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_NotagFunctorDesc mercury_data_ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0 = {
	"cond_seq",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_ml_backend__ml_gen_info__functor_number_map_cond_seq_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_cond_seq_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_gen_info__cond_seq_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_gen_info__cond_seq_0_0)),
	"ml_backend.ml_gen_info",
	"cond_seq",
	{ (void *)&mercury_data_ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0 },
	{ (void *)&mercury_data_ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0 },
	1,
	4,
	mercury_data_ml_backend__ml_gen_info__functor_number_map_cond_seq_0
};

static const MR_NotagFunctorDesc mercury_data_ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0 = {
	"conv_seq",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_ml_backend__ml_gen_info__functor_number_map_conv_seq_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_conv_seq_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_gen_info__conv_seq_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_gen_info__conv_seq_0_0)),
	"ml_backend.ml_gen_info",
	"conv_seq",
	{ (void *)&mercury_data_ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0 },
	{ (void *)&mercury_data_ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0 },
	1,
	4,
	mercury_data_ml_backend__ml_gen_info__functor_number_map_conv_seq_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_label_num_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_gen_info__label_num_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_gen_info__label_num_0_0)),
	"ml_backend.ml_gen_info",
	"label_num",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
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
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_global_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_global_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_gen_info__field_types_ml_gen_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_global_data_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0
};

const MR_ConstString mercury_data_ml_backend__ml_gen_info__field_names_ml_gen_info_0_0[] = {
	"mgi_module_info",
	"mgi_varset",
	"mgi_var_types",
	"mgi_byref_output_vars",
	"mgi_value_output_vars",
	"mgi_var_lvals",
	"mgi_global_data",
	"mgi_sub_info"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0 = {
	"ml_gen_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_gen_info__field_types_ml_gen_info_0_0,
	mercury_data_ml_backend__ml_gen_info__field_names_ml_gen_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_gen_info__du_stag_ordered_ml_gen_info_0_0[] = {
	&mercury_data_ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_gen_info__du_stag_ordered_ml_gen_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_gen_info__du_name_ordered_ml_gen_info_0[] = {
	&mercury_data_ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0
};

const MR_Integer mercury_data_ml_backend__ml_gen_info__functor_number_map_ml_gen_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0)),
	"ml_backend.ml_gen_info",
	"ml_gen_info",
	{ (void *)mercury_data_ml_backend__ml_gen_info__du_name_ordered_ml_gen_info_0 },
	{ (void *)mercury_data_ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_info_0 },
	1,
	4,
	mercury_data_ml_backend__ml_gen_info__functor_number_map_ml_gen_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_compilation_target_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_stack__type_ctor_info_stack_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_success_cont_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0 = {
	&mercury_data_stack__type_ctor_info_stack_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ml_gen_info__type_ctor_info_success_cont_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_compilation_target_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_compilation_target_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0[] = {
	"mgsi_high_level_data",
	"mgsi_target",
	"mgsi_pred_id",
	"mgsi_proc_id",
	"mgsi_func_counter",
	"mgsi_label_counter",
	"mgsi_aux_var_counter",
	"mgsi_cond_var_counter",
	"mgsi_conv_var_counter",
	"mgsi_const_var_map",
	"mgsi_closure_wrapper_defns",
	"mgsi_success_cont_stack",
	"mgsi_env_var_names"
};

const MR_DuArgLocn mercury_data_ml_backend__ml_gen_info__field_locns_ml_gen_sub_info_0_0[] = {
	{ 0, 0, 1 },
	{ 0, 1, 3 },
	{ 1, 0, 0 },
	{ 2, 0, 0 },
	{ 3, 0, 0 },
	{ 4, 0, 0 },
	{ 5, 0, 0 },
	{ 6, 0, 0 },
	{ 7, 0, 0 },
	{ 8, 0, 0 },
	{ 9, 0, 0 },
	{ 10, 0, 0 },
	{ 11, 0, 0 },
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0 = {
	"ml_gen_sub_info",
	13,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0,
	mercury_data_ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0,
	mercury_data_ml_backend__ml_gen_info__field_locns_ml_gen_sub_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_gen_info__du_stag_ordered_ml_gen_sub_info_0_0[] = {
	&mercury_data_ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_sub_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_gen_info__du_stag_ordered_ml_gen_sub_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_gen_info__du_name_ordered_ml_gen_sub_info_0[] = {
	&mercury_data_ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0
};

const MR_Integer mercury_data_ml_backend__ml_gen_info__functor_number_map_ml_gen_sub_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0)),
	"ml_backend.ml_gen_info",
	"ml_gen_sub_info",
	{ (void *)mercury_data_ml_backend__ml_gen_info__du_name_ordered_ml_gen_sub_info_0 },
	{ (void *)mercury_data_ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_sub_info_0 },
	1,
	4,
	mercury_data_ml_backend__ml_gen_info__functor_number_map_ml_gen_sub_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_gen_info__field_types_ml_ground_term_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0 = {
	"ml_ground_term",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_gen_info__field_types_ml_ground_term_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_gen_info__du_stag_ordered_ml_ground_term_0_0[] = {
	&mercury_data_ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_gen_info__du_ptag_ordered_ml_ground_term_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_gen_info__du_stag_ordered_ml_ground_term_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_gen_info__du_name_ordered_ml_ground_term_0[] = {
	&mercury_data_ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0
};

const MR_Integer mercury_data_ml_backend__ml_gen_info__functor_number_map_ml_ground_term_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0)),
	"ml_backend.ml_gen_info",
	"ml_ground_term",
	{ (void *)mercury_data_ml_backend__ml_gen_info__du_name_ordered_ml_ground_term_0 },
	{ (void *)mercury_data_ml_backend__ml_gen_info__du_ptag_ordered_ml_ground_term_0 },
	1,
	4,
	mercury_data_ml_backend__ml_gen_info__functor_number_map_ml_ground_term_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_gen_info__ml_ground_term_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_gen_info__ml_ground_term_map_0_0)),
	"ml_backend.ml_gen_info",
	"ml_ground_term_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_label_func_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_gen_info__ml_label_func_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_gen_info__ml_label_func_0_0)),
	"ml_backend.ml_gen_info",
	"ml_label_func",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_lval_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_gen_info__field_types_success_cont_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_lval_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0 = {
	"success_cont",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_gen_info__field_types_success_cont_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_gen_info__du_stag_ordered_success_cont_0_0[] = {
	&mercury_data_ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_gen_info__du_ptag_ordered_success_cont_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_gen_info__du_stag_ordered_success_cont_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_gen_info__du_name_ordered_success_cont_0[] = {
	&mercury_data_ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0
};

const MR_Integer mercury_data_ml_backend__ml_gen_info__functor_number_map_success_cont_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_success_cont_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_gen_info__success_cont_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_gen_info__success_cont_0_0)),
	"ml_backend.ml_gen_info",
	"success_cont",
	{ (void *)mercury_data_ml_backend__ml_gen_info__du_name_ordered_success_cont_0 },
	{ (void *)mercury_data_ml_backend__ml_gen_info__du_ptag_ordered_success_cont_0 },
	1,
	4,
	mercury_data_ml_backend__ml_gen_info__functor_number_map_success_cont_0
};



MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(fn__check_hlds__mode_util__select_output_vars_4_0);
MR_decl_entry(counter__init_2_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(stack__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module0)
	MR_init_entry1(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0);
	MR_init_label10(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,2,3,4,5,6,7,8,10,11,12)
	MR_init_label7(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,13,14,15,16,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_init'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i2);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 237;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i3);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i4);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i5);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i6);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i7);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i8);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_util__select_output_vars_4_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i10);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(counter__init_2_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i11);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(counter__init_2_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i12);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(counter__init_2_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i13);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(counter__init_2_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i14);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(counter__init_2_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i15);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_ground_term);
	MR_np_call_localret_ent(map__init_1_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i16);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, success_cont);
	MR_np_call_localret_ent(stack__init_1_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i17);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_np_call_localret_ent(map__init_1_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i18);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0_i19);
MR_def_label(fn__ml_backend__ml_gen_info__ml_gen_info_init_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 12);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_sv(5) | ((MR_Integer) MR_sv(6) << (MR_Integer) 1));
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(10);
	MR_tfield(0, MR_r2, 4) = MR_sv(11);
	MR_tfield(0, MR_r2, 5) = MR_sv(12);
	MR_tfield(0, MR_r2, 6) = MR_sv(13);
	MR_tfield(0, MR_r2, 7) = MR_sv(14);
	MR_tfield(0, MR_r2, 8) = MR_sv(15);
	MR_tfield(0, MR_r2, 9) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 10) = MR_sv(17);
	MR_tfield(0, MR_r2, 11) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = MR_sv(8);
	MR_tfield(0, MR_r1, 3) = MR_sv(9);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 5) = MR_sv(16);
	MR_tfield(0, MR_r1, 6) = MR_sv(4);
	MR_tfield(0, MR_r1, 7) = MR_r2;
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module1)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_module_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module2)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_high_level_data'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 7), 0) & (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module3)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_target_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_target_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_target'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_target_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 7), 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module4)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_pred_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 7), 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module5)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_proc_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 7), 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module6)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_varset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module7)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_var_types'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module8)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_byref_output_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module9)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_value_output_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_value_output_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_value_output_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_value_output_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module10)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_global_data'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module11)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_set_module_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module12)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_set_varset_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_set_varset_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_set_varset'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_set_varset_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module13)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_set_var_types_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_set_var_types_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_set_var_types'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_set_var_types_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module14)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_set_byref_output_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module15)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_set_value_output_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_set_value_output_vars_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_set_value_output_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_set_value_output_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module16)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_set_global_data'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module17)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_globals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_get_globals_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module18)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_module_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_get_name_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module19)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0);
	MR_init_label1(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_use_gcc_nested_functions'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0_i2);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 238;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module20)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_0);
	MR_init_label1(ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_put_commit_in_own_func'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_0_i2);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 241;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__allocate_3_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module21)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_new_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_new_label_3_0);
	MR_init_label1(ml_backend__ml_gen_info__ml_gen_info_new_label_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_new_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_new_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 7), 4);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_gen_info__ml_gen_info_new_label_3_0_i2);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_new_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 7);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_tempr3 | ((MR_Integer) MR_tempr2 << (MR_Integer) 1));
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr4, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr4, 4) = MR_r2;
	MR_tfield(0, MR_tempr4, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_tempr4, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_tempr4, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_tempr4, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_tempr4, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_tempr4, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_tempr4, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr5, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr5, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr5, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr5, 6);
	MR_tfield(0, MR_r2, 7) = MR_tempr4;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module22)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_new_func_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_new_func_label_3_0);
	MR_init_label1(ml_backend__ml_gen_info__ml_gen_info_new_func_label_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_new_func_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_new_func_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 7), 3);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_gen_info__ml_gen_info_new_func_label_3_0_i2);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_new_func_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 7);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_tempr3 | ((MR_Integer) MR_tempr2 << (MR_Integer) 1));
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr4, 3) = MR_r2;
	MR_tfield(0, MR_tempr4, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_tempr4, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_tempr4, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_tempr4, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_tempr4, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_tempr4, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_tempr4, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_tempr4, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr5, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr5, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr5, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr5, 6);
	MR_tfield(0, MR_r2, 7) = MR_tempr4;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__counter__init_1_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module23)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_0);
	MR_init_label2(ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_bump_counters'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 7), 3);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_0_i2);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 10000);
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_0_i3);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr4, 7);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_tempr2 | ((MR_Integer) MR_r2 << (MR_Integer) 1));
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_tempr3, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_tempr3, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_tempr3, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_tempr3, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_tempr3, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_r1, 7) = MR_tempr3;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module24)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0);
	MR_init_label4(ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0,2,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_new_aux_var_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r2, 7), 5);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0_i2);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 7);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_tempr3 | ((MR_Integer) MR_tempr2 << (MR_Integer) 1));
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr4, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr4, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_tempr4, 5) = MR_r2;
	MR_tfield(0, MR_tempr4, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_tempr4, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_tempr4, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_tempr4, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_tempr4, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_tempr4, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr5, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr5, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr5, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr5, 6);
	MR_tfield(0, MR_r2, 7) = MR_tempr4;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0_i5);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0_i6);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0_i7);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module25)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_0);
	MR_init_label1(ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_new_cond_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 7), 6);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_0_i2);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 7);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_tempr3 | ((MR_Integer) MR_tempr2 << (MR_Integer) 1));
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr4, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr4, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_tempr4, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_tempr4, 6) = MR_r2;
	MR_tfield(0, MR_tempr4, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_tempr4, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_tempr4, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_tempr4, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_tempr4, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr5, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr5, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr5, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr5, 6);
	MR_tfield(0, MR_r2, 7) = MR_tempr4;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module26)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_0);
	MR_init_label1(ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_new_conv_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 7), 7);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_0_i2);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 7);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_tempr3 | ((MR_Integer) MR_tempr2 << (MR_Integer) 1));
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr4, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr4, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_tempr4, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_tempr4, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_tempr4, 7) = MR_r2;
	MR_tfield(0, MR_tempr4, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_tempr4, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_tempr4, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_tempr4, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr5, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr5, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr5, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr5, 6);
	MR_tfield(0, MR_r2, 7) = MR_tempr4;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module27)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_const_var_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 7), 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module28)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_set_const_var_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r2, 7);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_tempr3 | ((MR_Integer) MR_tempr2 << (MR_Integer) 1));
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr4, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr4, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_tempr4, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_tempr4, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_tempr4, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_tempr4, 8) = MR_r1;
	MR_tfield(0, MR_tempr4, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_tempr4, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_tempr4, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_r1, 7) = MR_tempr4;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module29)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_0);
	MR_init_label1(ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_set_const_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_ground_term);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tfield(0, MR_tfield(0, MR_sv(1), 7), 8);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_0_i3);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr4, 7);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_tempr2 | ((MR_Integer) MR_r2 << (MR_Integer) 1));
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_tempr3, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_tempr3, 8) = MR_r1;
	MR_tfield(0, MR_tempr3, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_tempr3, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_tempr3, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_r1, 7) = MR_tempr3;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module30)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_lookup_const_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_ground_term);
	MR_r4 = MR_tfield(0, MR_tfield(0, MR_tempr1, 7), 8);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module31)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_search_const_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_ground_term);
	MR_r4 = MR_tfield(0, MR_tfield(0, MR_tempr1, 7), 8);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__push_3_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module32)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0);
	MR_init_label1(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_push_success_cont'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, success_cont);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r2, 7), 10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stack__push_3_0,
		ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0_i2);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr4, 7);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_tempr2 | ((MR_Integer) MR_r2 << (MR_Integer) 1));
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_tempr3, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_tempr3, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_tempr3, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_tempr3, 10) = MR_r1;
	MR_tfield(0, MR_tempr3, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_r1, 7) = MR_tempr3;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__det_pop_3_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module33)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0);
	MR_init_label1(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_pop_success_cont'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, success_cont);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_sv(1), 7), 10);
	MR_np_call_localret_ent(stack__det_pop_3_0,
		ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0_i2);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 7);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr4, 0) = ((MR_Integer) MR_tempr3 | ((MR_Integer) MR_tempr2 << (MR_Integer) 1));
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr4, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr4, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_tempr4, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_tempr4, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_tempr4, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_tempr4, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_tempr4, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_tempr4, 10) = MR_r2;
	MR_tfield(0, MR_tempr4, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr5, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr5, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr5, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr5, 6);
	MR_tfield(0, MR_r1, 7) = MR_tempr4;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__det_top_2_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module34)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_current_success_cont'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, success_cont);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 7), 10);
	MR_np_tailcall_ent(stack__det_top_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module35)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_var_lvals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module36)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_set_var_lvals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module37)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_0);
	MR_init_label1(ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_set_var_lval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tfield(0, MR_sv(1), 5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_0_i3);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module38)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_closure_wrapper_defns'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 7), 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module39)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_add_closure_wrapper_defn_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_add_closure_wrapper_defn_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_add_closure_wrapper_defn'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_add_closure_wrapper_defn_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_tfield(0, MR_r2, 7);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 9);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr2, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr5, 0) = ((MR_Integer) MR_tempr4 | ((MR_Integer) MR_tempr3 << (MR_Integer) 1));
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr5, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr5, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr5, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr5, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr5, 9) = MR_tempr1;
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr5, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_r1, 7) = MR_tempr5;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module40)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_get_env_var_names_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_get_env_var_names_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_get_env_var_names'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_get_env_var_names_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 7), 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module41)
	MR_init_entry1(ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_0);
	MR_init_label1(ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_info_add_env_var_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_sv(1), 7), 11);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_0_i2);
MR_def_label(ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr4, 7);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_tempr2 | ((MR_Integer) MR_r2 << (MR_Integer) 1));
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_tempr3, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_tempr3, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_tempr3, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_tempr3, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_tempr3, 11) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_r1, 7) = MR_tempr3;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module42)
	MR_init_entry1(__Unify___ml_backend__ml_gen_info__cond_seq_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_gen_info__cond_seq_0_0);
	MR_init_label1(__Unify___ml_backend__ml_gen_info__cond_seq_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_gen_info__cond_seq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__cond_seq_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_gen_info__cond_seq_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module43)
	MR_init_entry1(__Compare___ml_backend__ml_gen_info__cond_seq_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_gen_info__cond_seq_0_0);
	MR_init_label2(__Compare___ml_backend__ml_gen_info__cond_seq_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_gen_info__cond_seq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__cond_seq_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__cond_seq_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_gen_info__cond_seq_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_gen_info__cond_seq_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module44)
	MR_init_entry1(__Unify___ml_backend__ml_gen_info__conv_seq_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_gen_info__conv_seq_0_0);
	MR_init_label1(__Unify___ml_backend__ml_gen_info__conv_seq_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_gen_info__conv_seq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__conv_seq_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_gen_info__conv_seq_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module45)
	MR_init_entry1(__Compare___ml_backend__ml_gen_info__conv_seq_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_gen_info__conv_seq_0_0);
	MR_init_label2(__Compare___ml_backend__ml_gen_info__conv_seq_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_gen_info__conv_seq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__conv_seq_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__conv_seq_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_gen_info__conv_seq_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_gen_info__conv_seq_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module46)
	MR_init_entry1(__Unify___ml_backend__ml_gen_info__label_num_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_gen_info__label_num_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_gen_info__label_num_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module47)
	MR_init_entry1(__Compare___ml_backend__ml_gen_info__label_num_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_gen_info__label_num_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_gen_info__label_num_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___ml_backend__ml_global_data__ml_global_data_0_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module48)
	MR_init_entry1(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_gen_info__ml_gen_info_0_0);
	MR_init_label9(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0,4,6,9,11,13,15,17,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_gen_info__ml_gen_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i21);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(14) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i4);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i6);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i1);
	}
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i9);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i11);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i13);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i15);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___ml_backend__ml_global_data__ml_global_data_0_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i17);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___ml_backend__ml_global_data__ml_global_data_0_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module49)
	MR_init_entry1(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_gen_info__ml_gen_info_0_0);
	MR_init_label10(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0,3,2,5,9,14,19,24,29,33,97)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_gen_info__ml_gen_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
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
		__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i5);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i97);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i9);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i97);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i14);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i97);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i19);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i97);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i24);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i97);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i29);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i97);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___ml_backend__ml_global_data__ml_global_data_0_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i33);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0_i97);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_info_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___counter__counter_0_0);
MR_decl_entry(__Unify___stack__stack_1_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module50)
	MR_init_entry1(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0);
	MR_init_label10(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,4,6,8,10,12,15,17,19,23,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i23);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr2, 0) & (MR_Integer) 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i1);
	}
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 4);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 8);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 9);
	MR_sv(7) = MR_tfield(0, MR_tempr3, 10);
	MR_sv(8) = MR_tfield(0, MR_tempr3, 11);
	MR_sv(9) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr4, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr4, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr4, 8);
	MR_sv(14) = MR_tfield(0, MR_tempr4, 9);
	MR_sv(15) = MR_tfield(0, MR_tempr4, 10);
	MR_sv(16) = MR_tfield(0, MR_tempr4, 11);
	MR_r1 = MR_tfield(0, MR_tempr3, 3);
	MR_r2 = MR_tfield(0, MR_tempr4, 3);
	}
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i4);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i6);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i8);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i10);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i12);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_ground_term);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i15);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i17);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, success_cont);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___stack__stack_1_0,
		__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i19);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___counter__counter_0_0);
MR_decl_entry(__Compare___stack__stack_1_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module51)
	MR_init_entry1(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0);
	MR_init_label10(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label5(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,37,42,46,50,149)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i3);
	}
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(13) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr6 = MR_sv(1);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 11);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 2);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 1) & (MR_Integer) 7);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_tempr3, 0) & (MR_Integer) 1);
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 0) & (MR_Integer) 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i5);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i149);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i9);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i149);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i13);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i149);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i17);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i149);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i21);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i149);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i25);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i149);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i29);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i149);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i33);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i149);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i37);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_ground_term);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i42);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i46);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, success_cont);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___stack__stack_1_0,
		__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i50);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(24);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_gen_sub_info_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_rval_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_type_0_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module52)
	MR_init_entry1(__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_gen_info__ml_ground_term_0_0);
	MR_init_label4(__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_gen_info__ml_ground_term_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_rval_0_0,
		__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0_i4);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0_i6);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ml_backend__mlds__mlds_type_0_0);
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_gen_info__ml_ground_term_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_rval_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Compare___ml_backend__mlds__mlds_type_0_0);

MR_BEGIN_MODULE(ml_backend__ml_gen_info_module53)
	MR_init_entry1(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_gen_info__ml_ground_term_0_0);
	MR_init_label5(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_gen_info__ml_ground_term_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_rval_0_0,
		__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0_i5);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0_i9);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ml_backend__mlds__mlds_type_0_0);
MR_def_label(__Compare___ml_backend__ml_gen_info__ml_ground_term_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module54)
	MR_init_entry1(__Unify___ml_backend__ml_gen_info__ml_ground_term_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_gen_info__ml_ground_term_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_gen_info__ml_ground_term_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_ground_term);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module55)
	MR_init_entry1(__Compare___ml_backend__ml_gen_info__ml_ground_term_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_gen_info__ml_ground_term_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_gen_info__ml_ground_term_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_ground_term);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module56)
	MR_init_entry1(__Unify___ml_backend__ml_gen_info__ml_label_func_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_gen_info__ml_label_func_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_gen_info__ml_label_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module57)
	MR_init_entry1(__Compare___ml_backend__ml_gen_info__ml_label_func_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_gen_info__ml_label_func_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_gen_info__ml_label_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module58)
	MR_init_entry1(__Unify___ml_backend__ml_gen_info__success_cont_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_gen_info__success_cont_0_0);
	MR_init_label5(__Unify___ml_backend__ml_gen_info__success_cont_0_0,4,6,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_gen_info__success_cont_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__success_cont_0_0_i12);
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
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_rval_0_0,
		__Unify___ml_backend__ml_gen_info__success_cont_0_0_i4);
MR_def_label(__Unify___ml_backend__ml_gen_info__success_cont_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__success_cont_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_rval_0_0,
		__Unify___ml_backend__ml_gen_info__success_cont_0_0_i6);
MR_def_label(__Unify___ml_backend__ml_gen_info__success_cont_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__success_cont_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ml_gen_info__success_cont_0_0_i8);
MR_def_label(__Unify___ml_backend__ml_gen_info__success_cont_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_gen_info__success_cont_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ml_gen_info__success_cont_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_gen_info__success_cont_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_gen_info_module59)
	MR_init_entry1(__Compare___ml_backend__ml_gen_info__success_cont_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_gen_info__success_cont_0_0);
	MR_init_label6(__Compare___ml_backend__ml_gen_info__success_cont_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_gen_info__success_cont_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__success_cont_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__success_cont_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_gen_info__success_cont_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_gen_info__success_cont_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_rval_0_0,
		__Compare___ml_backend__ml_gen_info__success_cont_0_0_i5);
MR_def_label(__Compare___ml_backend__ml_gen_info__success_cont_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__success_cont_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_rval_0_0,
		__Compare___ml_backend__ml_gen_info__success_cont_0_0_i9);
MR_def_label(__Compare___ml_backend__ml_gen_info__success_cont_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__success_cont_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ml_gen_info__success_cont_0_0_i13);
MR_def_label(__Compare___ml_backend__ml_gen_info__success_cont_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_gen_info__success_cont_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ml_gen_info__success_cont_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_gen_info_maybe_bunch_0(void)
{
	ml_backend__ml_gen_info_module0();
	ml_backend__ml_gen_info_module1();
	ml_backend__ml_gen_info_module2();
	ml_backend__ml_gen_info_module3();
	ml_backend__ml_gen_info_module4();
	ml_backend__ml_gen_info_module5();
	ml_backend__ml_gen_info_module6();
	ml_backend__ml_gen_info_module7();
	ml_backend__ml_gen_info_module8();
	ml_backend__ml_gen_info_module9();
	ml_backend__ml_gen_info_module10();
	ml_backend__ml_gen_info_module11();
	ml_backend__ml_gen_info_module12();
	ml_backend__ml_gen_info_module13();
	ml_backend__ml_gen_info_module14();
	ml_backend__ml_gen_info_module15();
	ml_backend__ml_gen_info_module16();
	ml_backend__ml_gen_info_module17();
	ml_backend__ml_gen_info_module18();
	ml_backend__ml_gen_info_module19();
	ml_backend__ml_gen_info_module20();
	ml_backend__ml_gen_info_module21();
	ml_backend__ml_gen_info_module22();
	ml_backend__ml_gen_info_module23();
	ml_backend__ml_gen_info_module24();
	ml_backend__ml_gen_info_module25();
	ml_backend__ml_gen_info_module26();
	ml_backend__ml_gen_info_module27();
	ml_backend__ml_gen_info_module28();
	ml_backend__ml_gen_info_module29();
	ml_backend__ml_gen_info_module30();
	ml_backend__ml_gen_info_module31();
	ml_backend__ml_gen_info_module32();
	ml_backend__ml_gen_info_module33();
	ml_backend__ml_gen_info_module34();
	ml_backend__ml_gen_info_module35();
	ml_backend__ml_gen_info_module36();
	ml_backend__ml_gen_info_module37();
	ml_backend__ml_gen_info_module38();
	ml_backend__ml_gen_info_module39();
}

static void mercury__ml_backend__ml_gen_info_maybe_bunch_1(void)
{
	ml_backend__ml_gen_info_module40();
	ml_backend__ml_gen_info_module41();
	ml_backend__ml_gen_info_module42();
	ml_backend__ml_gen_info_module43();
	ml_backend__ml_gen_info_module44();
	ml_backend__ml_gen_info_module45();
	ml_backend__ml_gen_info_module46();
	ml_backend__ml_gen_info_module47();
	ml_backend__ml_gen_info_module48();
	ml_backend__ml_gen_info_module49();
	ml_backend__ml_gen_info_module50();
	ml_backend__ml_gen_info_module51();
	ml_backend__ml_gen_info_module52();
	ml_backend__ml_gen_info_module53();
	ml_backend__ml_gen_info_module54();
	ml_backend__ml_gen_info_module55();
	ml_backend__ml_gen_info_module56();
	ml_backend__ml_gen_info_module57();
	ml_backend__ml_gen_info_module58();
	ml_backend__ml_gen_info_module59();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_gen_info__init(void);
void mercury__ml_backend__ml_gen_info__init_type_tables(void);
void mercury__ml_backend__ml_gen_info__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_gen_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_gen_info__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__ml_gen_info__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__ml_gen_info__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_gen_info_maybe_bunch_0();
	mercury__ml_backend__ml_gen_info_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_gen_info__type_ctor_info_cond_seq_0,
		ml_backend__ml_gen_info__cond_seq_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_gen_info__type_ctor_info_conv_seq_0,
		ml_backend__ml_gen_info__conv_seq_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_gen_info__type_ctor_info_label_num_0,
		ml_backend__ml_gen_info__label_num_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0,
		ml_backend__ml_gen_info__ml_gen_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0,
		ml_backend__ml_gen_info__ml_gen_sub_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0,
		ml_backend__ml_gen_info__ml_ground_term_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_map_0,
		ml_backend__ml_gen_info__ml_ground_term_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_label_func_0,
		ml_backend__ml_gen_info__ml_label_func_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_gen_info__type_ctor_info_success_cont_0,
		ml_backend__ml_gen_info__success_cont_0_0);
	mercury__ml_backend__ml_gen_info__init_debugger();
}

void mercury__ml_backend__ml_gen_info__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_gen_info__type_ctor_info_cond_seq_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_gen_info__type_ctor_info_conv_seq_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_gen_info__type_ctor_info_label_num_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_label_func_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_gen_info__type_ctor_info_success_cont_0);
	}
}


void mercury__ml_backend__ml_gen_info__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_gen_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_gen_info);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_gen_info__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__ml_gen_info__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
