/*
** Automatically generated from `inlining.m'
** by the Mercury compiler,
** version 11.07-beta-2011-12-16, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__inlining__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 33 "../library/array.int2"
#include "array.mh"

#line 28 "transform_hlds.inlining.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "transform_hlds.inlining.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 36 "transform_hlds.inlining.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 40 "transform_hlds.inlining.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "transform_hlds.inlining.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "transform_hlds.inlining.c"
#line 49 "transform_hlds.inlining.c"
#include "transform_hlds.inlining.mh"

#line 52 "transform_hlds.inlining.c"
#line 53 "transform_hlds.inlining.c"
#ifndef TRANSFORM_HLDS__INLINING_DECL_GUARD
#define TRANSFORM_HLDS__INLINING_DECL_GUARD

#line 57 "transform_hlds.inlining.c"
#line 58 "transform_hlds.inlining.c"

#endif
#line 61 "transform_hlds.inlining.c"

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
	mercury_data_transform_hlds__inlining__type_ctor_info_inline_info_0,
	mercury_data_transform_hlds__inlining__type_ctor_info_inline_params_0;
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0, 3,6,9,11,8,12,13,17,19,21)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0, 22,20,24,29,31,25,26,33,34,38)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0, 41,43,45,40,50,53,52,35,58,56)
MR_decl_label1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0, 1)
MR_decl_label2(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0, 2,3)
MR_decl_label9(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0, 2,4,5,7,6,11,14,9,1)
MR_decl_label10(transform_hlds__inlining__do_inline_call_13_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label10(transform_hlds__inlining__do_inline_call_13_0, 13,14,17,16,18,19,15,20,21,22)
MR_decl_label3(transform_hlds__inlining__do_inline_call_13_0, 23,24,25)
MR_decl_label4(transform_hlds__inlining__do_inlining_6_0, 11,3,4,5)
MR_decl_label6(transform_hlds__inlining__get_type_substitution_5_0, 5,4,3,12,13,10)
MR_decl_label10(transform_hlds__inlining__inline_in_proc_5_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__inlining__inline_in_proc_5_0, 12,14,15,16,17,18,19,20,40,22)
MR_decl_label10(transform_hlds__inlining__inline_in_proc_5_0, 21,26,24,28,29,27,30,31,43,33)
MR_decl_label4(transform_hlds__inlining__inline_in_proc_5_0, 32,35,36,37)
MR_decl_label10(transform_hlds__inlining__inlining_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__inlining__inlining_2_0, 12,17,19,15,20,22,23,24,25,26)
MR_decl_label1(transform_hlds__inlining__inlining_2_0, 27)
MR_decl_label10(transform_hlds__inlining__inlining_in_call_11_0, 2,4,8,10,11,12,13,51,15,16)
MR_decl_label10(transform_hlds__inlining__inlining_in_call_11_0, 18,20,21,23,19,26,27,30,31,28)
MR_decl_label10(transform_hlds__inlining__inlining_in_call_11_0, 33,35,36,34,38,39,40,42,44,3)
MR_decl_label3(transform_hlds__inlining__inlining_in_cases_4_0, 18,4,6)
MR_decl_label5(transform_hlds__inlining__inlining_in_conj_4_0, 18,4,5,6,7)
MR_decl_label10(transform_hlds__inlining__inlining_in_goal_4_0, 7,6,10,4,14,13,18,19,20,17)
MR_decl_label10(transform_hlds__inlining__inlining_in_goal_4_0, 24,23,28,27,31,34,30,39,38,95)
MR_decl_label1(transform_hlds__inlining__inlining_in_goal_4_0, 94)
MR_decl_label3(transform_hlds__inlining__inlining_in_goals_4_0, 17,4,5)
MR_decl_label5(transform_hlds__inlining__inlining_in_par_conj_4_0, 18,4,5,6,7)
MR_decl_label6(transform_hlds__inlining__is_flat_simple_goal_1_0, 3,6,10,14,30,1)
MR_decl_label4(transform_hlds__inlining__is_flat_simple_goal_list_1_0, 17,4,2,1)
MR_decl_label4(transform_hlds__inlining__is_simple_clause_list_2_0, 2,7,3,1)
MR_decl_label3(transform_hlds__inlining__is_simple_goal_2_0, 2,3,1)
MR_decl_label10(transform_hlds__inlining__mark_predproc_6_0, 3,4,5,6,12,14,15,9,10,19)
MR_decl_label10(transform_hlds__inlining__mark_predproc_6_0, 22,17,18,24,8,30,32,33,36,68)
MR_decl_label2(transform_hlds__inlining__mark_predproc_6_0, 35,2)
MR_decl_label4(transform_hlds__inlining__rename_goal_11_0, 3,4,5,6)
MR_decl_label6(transform_hlds__inlining__tci_vars_different_constraints_2_0, 37,6,7,12,5,1)
MR_decl_label10(__Unify___transform_hlds__inlining__inline_info_0_0, 4,6,9,11,13,16,18,20,22,1)
MR_decl_label2(__Unify___transform_hlds__inlining__inline_params_0_0, 4,1)
MR_decl_label10(__Compare___transform_hlds__inlining__inline_info_0_0, 3,2,5,9,13,17,21,26,30,34)
MR_decl_label8(__Compare___transform_hlds__inlining__inline_info_0_0, 39,43,47,51,55,59,63,183)
MR_decl_label10(__Compare___transform_hlds__inlining__inline_params_0_0, 3,2,5,9,13,17,21,25,29,69)
MR_decl_static(transform_hlds__inlining__is_flat_simple_goal_1_0)
MR_decl_static(transform_hlds__inlining__is_flat_simple_goal_list_1_0)
MR_def_extern_entry(transform_hlds__inlining__is_simple_goal_2_0)
MR_decl_static(transform_hlds__inlining__mark_predproc_6_0)
MR_def_extern_entry(transform_hlds__inlining__get_type_substitution_5_0)
MR_def_extern_entry(transform_hlds__inlining__rename_goal_11_0)
MR_def_extern_entry(transform_hlds__inlining__do_inline_call_13_0)
MR_decl_static(transform_hlds__inlining__tci_vars_different_constraints_2_0)
MR_decl_static(transform_hlds__inlining__inlining_in_call_11_0)
MR_decl_static(transform_hlds__inlining__inlining_in_goal_4_0)
MR_decl_static(transform_hlds__inlining__inlining_in_goals_4_0)
MR_decl_static(transform_hlds__inlining__inlining_in_cases_4_0)
MR_decl_static(transform_hlds__inlining__inlining_in_conj_4_0)
MR_decl_static(transform_hlds__inlining__inlining_in_par_conj_4_0)
MR_decl_static(transform_hlds__inlining__inline_in_proc_5_0)
MR_decl_static(transform_hlds__inlining__do_inlining_6_0)
MR_def_extern_entry(transform_hlds__inlining__inlining_2_0)
MR_def_extern_entry(transform_hlds__inlining__is_simple_clause_list_2_0)
MR_def_extern_entry(transform_hlds__inlining__can_inline_proc_6_0)
MR_decl_static(__Unify___transform_hlds__inlining__inline_info_0_0)
MR_decl_static(__Compare___transform_hlds__inlining__inline_info_0_0)
MR_decl_static(__Unify___transform_hlds__inlining__inline_params_0_0)
MR_decl_static(__Compare___transform_hlds__inlining__inline_params_0_0)
MR_def_extern_entry(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
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
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_marker_0
}};
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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__inlining__field_types_inline_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_transform_hlds__inlining__field_names_inline_info_0_0[] = {
	"i_var_threshold",
	"i_highlevel_code",
	"i_exec_trace",
	"i_inlined_procs",
	"i_module_info",
	"i_univ_caller_tvars",
	"i_pred_markers",
	"i_prog_varset",
	"i_vartypes",
	"i_tvarset",
	"i_rtti_varmaps",
	"i_done_any_inlining",
	"i_inlined_parallel",
	"i_need_requant",
	"i_changed_detism",
	"i_changed_purity"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__inlining__du_functor_desc_inline_info_0_0 = {
	"inline_info",
	16,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__inlining__field_types_inline_info_0_0,
	mercury_data_transform_hlds__inlining__field_names_inline_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__inlining__du_stag_ordered_inline_info_0_0[] = {
	&mercury_data_transform_hlds__inlining__du_functor_desc_inline_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__inlining__du_ptag_ordered_inline_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__inlining__du_stag_ordered_inline_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__inlining__du_name_ordered_inline_info_0[] = {
	&mercury_data_transform_hlds__inlining__du_functor_desc_inline_info_0_0
};

const MR_Integer mercury_data_transform_hlds__inlining__functor_number_map_inline_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__inlining__type_ctor_info_inline_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__inlining__inline_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__inlining__inline_info_0_0)),
	"transform_hlds.inlining",
	"inline_info",
	{ (void *)mercury_data_transform_hlds__inlining__du_name_ordered_inline_info_0 },
	{ (void *)mercury_data_transform_hlds__inlining__du_ptag_ordered_inline_info_0 },
	1,
	4,
	mercury_data_transform_hlds__inlining__functor_number_map_inline_info_0
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__inlining__field_types_inline_params_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_transform_hlds__inlining__field_names_inline_params_0_0[] = {
	"simple",
	"single_use",
	"call_cost",
	"compound_size_threshold",
	"simple_goal_threshold",
	"var_threshold",
	"highlevel_code",
	"any_tracing"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__inlining__du_functor_desc_inline_params_0_0 = {
	"params",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__inlining__field_types_inline_params_0_0,
	mercury_data_transform_hlds__inlining__field_names_inline_params_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__inlining__du_stag_ordered_inline_params_0_0[] = {
	&mercury_data_transform_hlds__inlining__du_functor_desc_inline_params_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__inlining__du_ptag_ordered_inline_params_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__inlining__du_stag_ordered_inline_params_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__inlining__du_name_ordered_inline_params_0[] = {
	&mercury_data_transform_hlds__inlining__du_functor_desc_inline_params_0_0
};

const MR_Integer mercury_data_transform_hlds__inlining__functor_number_map_inline_params_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__inlining__type_ctor_info_inline_params_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__inlining__inline_params_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__inlining__inline_params_0_0)),
	"transform_hlds.inlining",
	"inline_params",
	{ (void *)mercury_data_transform_hlds__inlining__du_name_ordered_inline_params_0 },
	{ (void *)mercury_data_transform_hlds__inlining__du_ptag_ordered_inline_params_0 },
	1,
	4,
	mercury_data_transform_hlds__inlining__functor_number_map_inline_params_0
};




MR_BEGIN_MODULE(transform_hlds__inlining_module0)
	MR_init_entry1(transform_hlds__inlining__is_flat_simple_goal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__is_flat_simple_goal_1_0);
	MR_init_label6(transform_hlds__inlining__is_flat_simple_goal_1_0,3,6,10,14,30,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_flat_simple_goal'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__is_flat_simple_goal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_1_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 3);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_1_0_i30);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_1_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_1_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_np_tailcall_ent(transform_hlds__inlining__is_flat_simple_goal_list_1_0);
	}
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_1_0_i10);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_localtailcall(transform_hlds__inlining__is_flat_simple_goal_1_0);
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_1_0_i1);
	}
	MR_r3 = MR_tfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_1_0_i14);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_1_0_i30);
	}
	}
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localtailcall(transform_hlds__inlining__is_flat_simple_goal_1_0);
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__inlining_module1)
	MR_init_entry1(transform_hlds__inlining__is_flat_simple_goal_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__is_flat_simple_goal_list_1_0);
	MR_init_label4(transform_hlds__inlining__is_flat_simple_goal_list_1_0,17,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_flat_simple_goal_list'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__is_flat_simple_goal_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_list_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_list_1_0_i2);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__inlining__is_flat_simple_goal_1_0,
		transform_hlds__inlining__is_flat_simple_goal_list_1_0_i4);
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_list_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_list_1_0_i17);
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_list_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__goal_size_2_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module2)
	MR_init_entry1(transform_hlds__inlining__is_simple_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__is_simple_goal_2_0);
	MR_init_label3(transform_hlds__inlining__is_simple_goal_2_0,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_simple_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__inlining__is_simple_goal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		transform_hlds__inlining__is_simple_goal_2_0_i2);
MR_def_label(transform_hlds__inlining__is_simple_goal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 < (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(transform_hlds__inlining__is_simple_goal_2_0_i3);
	}
	MR_r2 = ((MR_Integer) MR_sv(2) * (MR_Integer) 3);
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_simple_goal_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__inlining__is_flat_simple_goal_1_0);
MR_def_label(transform_hlds__inlining__is_simple_goal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__inlining__is_simple_goal_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(hlds__goal_util__goal_calls_2_0);
MR_decl_entry(set__insert_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_requested_inlining_1_0);
MR_decl_entry(hlds__passes_aux__write_proc_progress_message_6_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module3)
	MR_init_entry1(transform_hlds__inlining__mark_predproc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__mark_predproc_6_0);
	MR_init_label10(transform_hlds__inlining__mark_predproc_6_0,3,4,5,6,12,14,15,9,10,19)
	MR_init_label10(transform_hlds__inlining__mark_predproc_6_0,22,17,18,24,8,30,32,33,36,68)
	MR_init_label2(transform_hlds__inlining__mark_predproc_6_0,35,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_predproc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__mark_predproc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(9) = MR_tfield(0, MR_r1, 0);
	MR_sv(10) = MR_tfield(0, MR_r1, 1);
	MR_sv(11) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__inlining__mark_predproc_6_0_i3);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__inlining__mark_predproc_6_0_i4);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__inlining__mark_predproc_6_0_i5);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__inlining__mark_predproc_6_0_i6);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(9);
	MR_tfield(0, MR_r2, 1) = MR_sv(10);
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i10);
	}
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		transform_hlds__inlining__mark_predproc_6_0_i12);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i14);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i8);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(8) * (MR_Integer) 3);
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i9);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__inlining__is_flat_simple_goal_1_0,
		transform_hlds__inlining__mark_predproc_6_0_i15);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i9);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i8);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(7),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i18);
	}
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, maybe_needed);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__inlining__mark_predproc_6_0_i19);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i17);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i17);
	}
	MR_sv(8) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		transform_hlds__inlining__mark_predproc_6_0_i22);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (((MR_Integer) MR_r1 - (MR_Integer) MR_sv(6)) * (MR_Integer) MR_sv(8));
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_sv(7))) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i17);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i8);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i2);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, maybe_needed);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__inlining__mark_predproc_6_0_i24);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i2);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	}
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__goal_util__goal_calls_2_0,
		transform_hlds__inlining__mark_predproc_6_0_i30);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i2);
	}
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(set__insert_3_0,
		transform_hlds__inlining__mark_predproc_6_0_i32);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__inlining__mark_predproc_6_0_i33);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_requested_inlining_1_0,
		transform_hlds__inlining__mark_predproc_6_0_i36);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i35);
	}
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Inlining ", 11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		transform_hlds__inlining__mark_predproc_6_0_i68);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_list_subsumes_3_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(parse_tree__prog_type__type_unify_list_5_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module4)
	MR_init_entry1(transform_hlds__inlining__get_type_substitution_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__get_type_substitution_5_0);
	MR_init_label6(transform_hlds__inlining__get_type_substitution_5_0,5,4,3,12,13,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_type_substitution'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__inlining__get_type_substitution_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__get_type_substitution_5_0_i3);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_subsumes_3_0,
		transform_hlds__inlining__get_type_substitution_5_0_i5);
MR_def_label(transform_hlds__inlining__get_type_substitution_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__get_type_substitution_5_0_i4);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__inlining__get_type_substitution_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__init_1_0);
MR_def_label(transform_hlds__inlining__get_type_substitution_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__inlining__get_type_substitution_5_0_i12);
MR_def_label(transform_hlds__inlining__get_type_substitution_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_list_5_0,
		transform_hlds__inlining__get_type_substitution_5_0_i13);
MR_def_label(transform_hlds__inlining__get_type_substitution_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__get_type_substitution_5_0_i10);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__inlining__get_type_substitution_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.inlining", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.inlining.get_type_substitution\'/5", 59);
	MR_r3 = (MR_Word) MR_string_const("type unification failed", 23);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(varset__vars_2_0);
MR_decl_entry(hlds__goal_util__clone_variables_9_0);
MR_decl_entry(hlds__hlds_goal__must_rename_vars_in_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module5)
	MR_init_entry1(transform_hlds__inlining__rename_goal_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__rename_goal_11_0);
	MR_init_label4(transform_hlds__inlining__rename_goal_11_0,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_goal'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__inlining__rename_goal_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		transform_hlds__inlining__rename_goal_11_0_i3);
MR_def_label(transform_hlds__inlining__rename_goal_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(varset__vars_2_0,
		transform_hlds__inlining__rename_goal_11_0_i4);
MR_def_label(transform_hlds__inlining__rename_goal_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(hlds__goal_util__clone_variables_9_0,
		transform_hlds__inlining__rename_goal_11_0_i5);
MR_def_label(transform_hlds__inlining__rename_goal_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__must_rename_vars_in_goal_3_0,
		transform_hlds__inlining__rename_goal_11_0_i6);
MR_def_label(transform_hlds__inlining__rename_goal_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(parse_tree__prog_data__tvarset_merge_renaming_4_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0);
MR_decl_entry(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_overlay_3_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module6)
	MR_init_entry1(transform_hlds__inlining__do_inline_call_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__do_inline_call_13_0);
	MR_init_label10(transform_hlds__inlining__do_inline_call_13_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label10(transform_hlds__inlining__do_inline_call_13_0,13,14,17,16,18,19,15,20,21,22)
	MR_init_label3(transform_hlds__inlining__do_inline_call_13_0,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_inline_call'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__inlining__do_inline_call_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__inlining__do_inline_call_13_0_i2);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__inlining__do_inline_call_13_0_i3);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__inlining__do_inline_call_13_0_i4);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__inlining__do_inline_call_13_0_i5);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__inlining__do_inline_call_13_0_i6);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__inlining__do_inline_call_13_0_i7);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__tvarset_merge_renaming_4_0,
		transform_hlds__inlining__do_inline_call_13_0_i8);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i9);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i11);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i12);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0,
		transform_hlds__inlining__do_inline_call_13_0_i13);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__inlining__get_type_substitution_5_0,
		transform_hlds__inlining__do_inline_call_13_0_i14);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__do_inline_call_13_0_i16);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i17);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_sv(6);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(transform_hlds__inlining__do_inline_call_13_0_i15);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i18);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i19);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(15);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i20);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(varset__vars_2_0,
		transform_hlds__inlining__do_inline_call_13_0_i21);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(hlds__goal_util__clone_variables_9_0,
		transform_hlds__inlining__do_inline_call_13_0_i22);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__must_rename_vars_in_goal_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i23);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,
		transform_hlds__inlining__do_inline_call_13_0_i24);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_overlay_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i25);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_var_info_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__prog_constraint_0_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module7)
	MR_init_entry1(transform_hlds__inlining__tci_vars_different_constraints_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__tci_vars_different_constraints_2_0);
	MR_init_label6(transform_hlds__inlining__tci_vars_different_constraints_2_0,37,6,7,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'tci_vars_different_constraints'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__tci_vars_different_constraints_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__inlining__tci_vars_different_constraints_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__tci_vars_different_constraints_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__tci_vars_different_constraints_2_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,
		transform_hlds__inlining__tci_vars_different_constraints_2_0_i6);
MR_def_label(transform_hlds__inlining__tci_vars_different_constraints_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,
		transform_hlds__inlining__tci_vars_different_constraints_2_0_i7);
MR_def_label(transform_hlds__inlining__tci_vars_different_constraints_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(transform_hlds__inlining__tci_vars_different_constraints_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__inlining__tci_vars_different_constraints_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(2, MR_sv(2), 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__prog_constraint_0_0,
		transform_hlds__inlining__tci_vars_different_constraints_2_0_i12);
MR_def_label(transform_hlds__inlining__tci_vars_different_constraints_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__inlining__tci_vars_different_constraints_2_0_i5);
	}
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__inlining__tci_vars_different_constraints_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__inlining__tci_vars_different_constraints_2_0_i37);
MR_def_label(transform_hlds__inlining__tci_vars_different_constraints_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(multi_map__from_corresponding_lists_3_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(multi_map__lookup_3_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module8)
	MR_init_entry1(transform_hlds__inlining__inlining_in_call_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__inlining_in_call_11_0);
	MR_init_label10(transform_hlds__inlining__inlining_in_call_11_0,2,4,8,10,11,12,13,51,15,16)
	MR_init_label10(transform_hlds__inlining__inlining_in_call_11_0,18,20,21,23,19,26,27,30,31,28)
	MR_init_label10(transform_hlds__inlining__inlining_in_call_11_0,33,35,36,34,38,39,40,42,44,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inlining_in_call'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__inlining_in_call_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(32);
	MR_sv(32) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(17) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(18) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(19) = MR_tfield(0, MR_tempr1, 12);
	MR_sv(20) = MR_tfield(0, MR_tempr1, 13);
	MR_sv(21) = MR_tfield(0, MR_tempr1, 14);
	MR_sv(22) = MR_tfield(0, MR_tempr1, 15);
	MR_sv(26) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__inlining__inlining_in_call_11_0_i2);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_sv(24) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,
		transform_hlds__inlining__inlining_in_call_11_0_i4);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i51);
	}
	MR_sv(27) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(varset__vars_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i8);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = (MR_Word) MR_TAG_COMMON(0,0,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(28);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i10);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(24);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i11);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__vars_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i12);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(28);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i13);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(25) + (MR_Integer) MR_r1);
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i3);
	}
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(24);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i15);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(24);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i16);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = (MR_Word) MR_TAG_COMMON(0,0,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(28);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(multi_map__from_corresponding_lists_3_0,
		transform_hlds__inlining__inlining_in_call_11_0_i18);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(29) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(30) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(31));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__inlining__inlining_in_call_11_0_i19);
	MR_sv(27) = MR_r1;
	MR_r1 = MR_sv(28);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__inlining__inlining_in_call_11_0_i20);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(28);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(27);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(multi_map__lookup_3_0,
		transform_hlds__inlining__inlining_in_call_11_0_i21);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__inlining__tci_vars_different_constraints_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i23);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(31));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(29);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(30);
	MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i3);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(29);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(30);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(23);
	MR_r4 = MR_sv(24);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_r8 = MR_sv(18);
	MR_np_call_localret_ent(transform_hlds__inlining__do_inline_call_13_0,
		transform_hlds__inlining__inlining_in_call_11_0_i26);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(15) = MR_r4;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__inlining__inlining_in_call_11_0_i27);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		transform_hlds__inlining__inlining_in_call_11_0_i30);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		transform_hlds__inlining__inlining_in_call_11_0_i31);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i28);
	}
	MR_r1 = MR_sv(7);
	MR_sv(3) = MR_sv(20);
	MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i33);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_sv(3) = (MR_Integer) 1;
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__inlining__inlining_in_call_11_0_i35);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__inlining__inlining_in_call_11_0_i36);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(16) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i34);
	}
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_sv(22);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__inlining__inlining_in_call_11_0_i38);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_sv(7) = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__inlining__inlining_in_call_11_0_i38);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__inlining__inlining_in_call_11_0_i39);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(16) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i40);
	}
	MR_r1 = MR_sv(24);
	MR_sv(16) = MR_sv(21);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i42);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(24);
	MR_sv(16) = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i42);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i44);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 12) = MR_sv(19);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 14) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 15) = MR_sv(7);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(32);
	}
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 12) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 13) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 14) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 15) = MR_sv(7);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(32);
	}
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_tfield(1, MR_r1, 2) = MR_sv(3);
	MR_tfield(1, MR_r1, 3) = MR_sv(4);
	MR_tfield(1, MR_r1, 4) = MR_sv(5);
	MR_tfield(1, MR_r1, 5) = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(26);
	MR_decr_sp_and_return(32);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__inlining_module9)
	MR_init_entry1(transform_hlds__inlining__inlining_in_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__inlining_in_goal_4_0);
	MR_init_label10(transform_hlds__inlining__inlining_in_goal_4_0,7,6,10,4,14,13,18,19,20,17)
	MR_init_label10(transform_hlds__inlining__inlining_in_goal_4_0,24,23,28,27,31,34,30,39,38,95)
	MR_init_label1(transform_hlds__inlining__inlining_in_goal_4_0,94)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inlining_in_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__inlining_in_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 0)))) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goal_4_0_i95);
	}
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goal_4_0_i4);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tempr3 = MR_r3;
	MR_tempr2 = MR_tfield(3, MR_tempr3, 1);
	MR_r4 = MR_tempr2;
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goal_4_0_i6);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_par_conj_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i7);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,7)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_conj_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i10);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,10)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goal_4_0_i13);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_goals_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i14);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,14)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goal_4_0_i17);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i18);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i19);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i20);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,20)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goal_4_0_i23);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i24);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,24)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goal_4_0_i27);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_tempr4 = MR_r3;
	MR_r1 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr4, 1);
	MR_tempr3 = MR_tempr4;
	MR_r3 = MR_tfield(1, MR_r3, 2);
	MR_r4 = MR_tfield(1, MR_tempr3, 3);
	MR_r5 = MR_tfield(1, MR_tempr3, 4);
	MR_r6 = MR_tfield(1, MR_tempr3, 5);
	MR_r7 = MR_tfield(0, MR_tempr1, 1);
	MR_r8 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_call_11_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i28);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goal_4_0_i30);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r9 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goal_4_0_i31);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goal_4_0_i94);
	}
	}
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i34);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,34)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goal_4_0_i38);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_cases_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i39);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,39)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.inlining", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.inlining.inlining_in_goal\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__inlining_module10)
	MR_init_entry1(transform_hlds__inlining__inlining_in_goals_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__inlining_in_goals_4_0);
	MR_init_label3(transform_hlds__inlining__inlining_in_goals_4_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inlining_in_goals'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__inlining_in_goals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goals_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__inlining__inlining_in_goals_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_goals_4_0_i4);
MR_def_label(transform_hlds__inlining__inlining_in_goals_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_goals_4_0,
		transform_hlds__inlining__inlining_in_goals_4_0_i5);
MR_def_label(transform_hlds__inlining__inlining_in_goals_4_0,5)
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


MR_BEGIN_MODULE(transform_hlds__inlining_module11)
	MR_init_entry1(transform_hlds__inlining__inlining_in_cases_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__inlining_in_cases_4_0);
	MR_init_label3(transform_hlds__inlining__inlining_in_cases_4_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inlining_in_cases'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__inlining_in_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_cases_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__inlining__inlining_in_cases_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_cases_4_0_i4);
MR_def_label(transform_hlds__inlining__inlining_in_cases_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_cases_4_0,
		transform_hlds__inlining__inlining_in_cases_4_0_i6);
MR_def_label(transform_hlds__inlining__inlining_in_cases_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(transform_hlds__inlining_module12)
	MR_init_entry1(transform_hlds__inlining__inlining_in_conj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__inlining_in_conj_4_0);
	MR_init_label5(transform_hlds__inlining__inlining_in_conj_4_0,18,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inlining_in_conj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__inlining_in_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_conj_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__inlining__inlining_in_conj_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_conj_4_0_i4);
MR_def_label(transform_hlds__inlining__inlining_in_conj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__inlining__inlining_in_conj_4_0_i5);
MR_def_label(transform_hlds__inlining__inlining_in_conj_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_conj_4_0,
		transform_hlds__inlining__inlining_in_conj_4_0_i6);
MR_def_label(transform_hlds__inlining__inlining_in_conj_4_0,6)
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
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__inlining__inlining_in_conj_4_0_i7);
MR_def_label(transform_hlds__inlining__inlining_in_conj_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_par_conj_list_2_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module13)
	MR_init_entry1(transform_hlds__inlining__inlining_in_par_conj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__inlining_in_par_conj_4_0);
	MR_init_label5(transform_hlds__inlining__inlining_in_par_conj_4_0,18,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inlining_in_par_conj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__inlining_in_par_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_par_conj_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__inlining__inlining_in_par_conj_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_par_conj_4_0_i4);
MR_def_label(transform_hlds__inlining__inlining_in_par_conj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_par_conj_list_2_0,
		transform_hlds__inlining__inlining_in_par_conj_4_0_i5);
MR_def_label(transform_hlds__inlining__inlining_in_par_conj_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_par_conj_4_0,
		transform_hlds__inlining__inlining_in_par_conj_4_0_i6);
MR_def_label(transform_hlds__inlining__inlining_in_par_conj_4_0,6)
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
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__inlining__inlining_in_par_conj_4_0_i7);
MR_def_label(transform_hlds__inlining__inlining_in_par_conj_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_typevarset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(check_hlds__purity__repuritycheck_proc_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);
MR_decl_entry(check_hlds__det_analysis__det_infer_proc_8_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module14)
	MR_init_entry1(transform_hlds__inlining__inline_in_proc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__inline_in_proc_5_0);
	MR_init_label10(transform_hlds__inlining__inline_in_proc_5_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(transform_hlds__inlining__inline_in_proc_5_0,12,14,15,16,17,18,19,20,40,22)
	MR_init_label10(transform_hlds__inlining__inline_in_proc_5_0,21,26,24,28,29,27,30,31,43,33)
	MR_init_label4(transform_hlds__inlining__inline_in_proc_5_0,32,35,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inline_in_proc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__inline_in_proc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(16) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		transform_hlds__inlining__inline_in_proc_5_0_i2);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__inlining__inline_in_proc_5_0_i3);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__inlining__inline_in_proc_5_0_i4);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(21) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(22) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__inlining__inline_in_proc_5_0_i5);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_0,
		transform_hlds__inlining__inline_in_proc_5_0_i6);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__inlining__inline_in_proc_5_0_i7);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__inlining__inline_in_proc_5_0_i8);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__inlining__inline_in_proc_5_0_i9);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__inlining__inline_in_proc_5_0_i10);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__inlining__inline_in_proc_5_0_i11);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__inlining__inline_in_proc_5_0_i12);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = MR_sv(16);
	MR_tfield(0, MR_r2, 5) = MR_sv(10);
	MR_tfield(0, MR_r2, 6) = MR_sv(12);
	MR_tfield(0, MR_r2, 7) = MR_sv(14);
	MR_tfield(0, MR_r2, 8) = MR_sv(15);
	MR_tfield(0, MR_r2, 9) = MR_sv(11);
	MR_tfield(0, MR_r2, 10) = MR_r1;
	MR_tfield(0, MR_r2, 11) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 12) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 13) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 14) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 15) = (MR_Integer) 0;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inline_in_proc_5_0_i14);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 7);
	MR_sv(4) = MR_tfield(0, MR_r2, 8);
	MR_sv(5) = MR_tfield(0, MR_r2, 9);
	MR_sv(10) = MR_tfield(0, MR_r2, 10);
	MR_sv(11) = MR_tfield(0, MR_r2, 11);
	MR_sv(12) = MR_tfield(0, MR_r2, 12);
	MR_sv(13) = MR_tfield(0, MR_r2, 13);
	MR_sv(14) = MR_tfield(0, MR_r2, 14);
	MR_sv(15) = MR_tfield(0, MR_r2, 15);
	MR_r1 = MR_tfield(0, MR_r2, 6);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		transform_hlds__inlining__inline_in_proc_5_0_i15);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_typevarset_3_0,
		transform_hlds__inlining__inline_in_proc_5_0_i16);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__inlining__inline_in_proc_5_0_i17);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__inlining__inline_in_proc_5_0_i18);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		transform_hlds__inlining__inline_in_proc_5_0_i19);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__inlining__inline_in_proc_5_0_i20);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inline_in_proc_5_0_i22);
	}
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(9);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(22);
	MR_GOTO_LAB(transform_hlds__inlining__inline_in_proc_5_0_i21);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0,
		transform_hlds__inlining__inline_in_proc_5_0_i40);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(13),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inline_in_proc_5_0_i24);
	}
	MR_sv(7) = MR_r3;
	MR_sv(9) = MR_r5;
	MR_sv(21) = MR_r1;
	MR_sv(22) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__inlining__inline_in_proc_5_0_i26);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(9);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(22);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inline_in_proc_5_0_i28);
	}
	MR_sv(2) = MR_sv(16);
	MR_GOTO_LAB(transform_hlds__inlining__inline_in_proc_5_0_i27);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r3;
	MR_sv(9) = MR_r5;
	MR_sv(21) = MR_r1;
	MR_sv(22) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__inlining__inline_in_proc_5_0_i29);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(9);
	MR_r4 = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(22);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r3;
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__inlining__inline_in_proc_5_0_i30);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__inlining__inline_in_proc_5_0_i31);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(15),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inline_in_proc_5_0_i33);
	}
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	MR_GOTO_LAB(transform_hlds__inlining__inline_in_proc_5_0_i32);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__purity__repuritycheck_proc_4_0,
		transform_hlds__inlining__inline_in_proc_5_0_i43);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__inlining__inline_in_proc_5_0_i35);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__inlining__inline_in_proc_5_0_i36);
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(14),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inline_in_proc_5_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_proc_8_0);
	}
MR_def_label(transform_hlds__inlining__inline_in_proc_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__inlining_module15)
	MR_init_entry1(transform_hlds__inlining__do_inlining_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__do_inlining_6_0);
	MR_init_label4(transform_hlds__inlining__do_inlining_6_0,11,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_inlining'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__do_inlining_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__inlining__do_inlining_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__do_inlining_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__inlining__do_inlining_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__inlining__inline_in_proc_5_0,
		transform_hlds__inlining__do_inlining_6_0_i4);
MR_def_label(transform_hlds__inlining__do_inlining_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__inlining__mark_predproc_6_0,
		transform_hlds__inlining__do_inlining_6_0_i5);
MR_def_label(transform_hlds__inlining__do_inlining_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__inlining__do_inlining_6_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(libs__globals__get_trace_level_2_0);
MR_decl_entry(fn__libs__trace_params__given_trace_level_is_none_1_0);
MR_decl_entry(fn__bool__not_1_0);
MR_decl_entry(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0);
MR_decl_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(hlds__hlds_module__module_info_clobber_dependency_info_2_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module16)
	MR_init_entry1(transform_hlds__inlining__inlining_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__inlining_2_0);
	MR_init_label10(transform_hlds__inlining__inlining_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(transform_hlds__inlining__inlining_2_0,12,17,19,15,20,22,23,24,25,26)
	MR_init_label1(transform_hlds__inlining__inlining_2_0,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inlining'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__inlining__inlining_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__inlining__inlining_2_0_i2);
MR_def_label(transform_hlds__inlining__inlining_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 324;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__inlining__inlining_2_0_i3);
MR_def_label(transform_hlds__inlining__inlining_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 326;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__inlining__inlining_2_0_i4);
MR_def_label(transform_hlds__inlining__inlining_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 327;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__inlining__inlining_2_0_i5);
MR_def_label(transform_hlds__inlining__inlining_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 328;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__inlining__inlining_2_0_i6);
MR_def_label(transform_hlds__inlining__inlining_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 329;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__inlining__inlining_2_0_i7);
MR_def_label(transform_hlds__inlining__inlining_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 330;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__inlining__inlining_2_0_i8);
MR_def_label(transform_hlds__inlining__inlining_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 238;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__inlining__inlining_2_0_i9);
MR_def_label(transform_hlds__inlining__inlining_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		transform_hlds__inlining__inlining_2_0_i10);
MR_def_label(transform_hlds__inlining__inlining_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__trace_params__given_trace_level_is_none_1_0,
		transform_hlds__inlining__inlining_2_0_i11);
MR_def_label(transform_hlds__inlining__inlining_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bool__not_1_0,
		transform_hlds__inlining__inlining_2_0_i12);
MR_def_label(transform_hlds__inlining__inlining_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(6);
	MR_tfield(0, MR_r2, 5) = MR_sv(7);
	MR_tfield(0, MR_r2, 6) = MR_sv(1);
	MR_tfield(0, MR_r2, 7) = MR_r1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_2_0_i17);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,
		transform_hlds__inlining__inlining_2_0_i19);
MR_def_label(transform_hlds__inlining__inlining_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(5),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_2_0_i15);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,
		transform_hlds__inlining__inlining_2_0_i19);
MR_def_label(transform_hlds__inlining__inlining_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__inlining__inlining_2_0_i22);
MR_def_label(transform_hlds__inlining__inlining_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, maybe_needed);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__inlining__inlining_2_0_i20);
MR_def_label(transform_hlds__inlining__inlining_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__inlining__inlining_2_0_i22);
MR_def_label(transform_hlds__inlining__inlining_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		transform_hlds__inlining__inlining_2_0_i23);
MR_def_label(transform_hlds__inlining__inlining_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__inlining__inlining_2_0_i24);
MR_def_label(transform_hlds__inlining__inlining_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__inlining__inlining_2_0_i25);
MR_def_label(transform_hlds__inlining__inlining_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__inlining__inlining_2_0_i26);
MR_def_label(transform_hlds__inlining__inlining_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__inlining__do_inlining_6_0,
		transform_hlds__inlining__inlining_2_0_i27);
MR_def_label(transform_hlds__inlining__inlining_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_clobber_dependency_info_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__clause_list_size_2_0);
MR_decl_entry(fn__hlds__hlds_clauses__clause_body_1_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module17)
	MR_init_entry1(transform_hlds__inlining__is_simple_clause_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__is_simple_clause_list_2_0);
	MR_init_label4(transform_hlds__inlining__is_simple_clause_list_2_0,2,7,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_simple_clause_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__inlining__is_simple_clause_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__goal_util__clause_list_size_2_0,
		transform_hlds__inlining__is_simple_clause_list_2_0_i2);
MR_def_label(transform_hlds__inlining__is_simple_clause_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 < (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(transform_hlds__inlining__is_simple_clause_list_2_0_i3);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_simple_clause_list_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_simple_clause_list_2_0_i1);
	}
	MR_r2 = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_body_1_0,
		transform_hlds__inlining__is_simple_clause_list_2_0_i7);
MR_def_label(transform_hlds__inlining__is_simple_clause_list_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(2) * (MR_Integer) 3);
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_simple_clause_list_2_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__inlining__is_flat_simple_goal_1_0);
MR_def_label(transform_hlds__inlining__is_simple_clause_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__inlining__is_simple_clause_list_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__inlining_module18)
	MR_init_entry1(transform_hlds__inlining__can_inline_proc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__inlining__can_inline_proc_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_inline_proc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__inlining__can_inline_proc_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_markers_0;
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module19)
	MR_init_entry1(__Unify___transform_hlds__inlining__inline_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__inlining__inline_info_0_0);
	MR_init_label10(__Unify___transform_hlds__inlining__inline_info_0_0,4,6,9,11,13,16,18,20,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__inlining__inline_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i22);
	}
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
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
	MR_sv(9) = MR_tfield(0, MR_tempr3, 12);
	MR_sv(10) = MR_tfield(0, MR_tempr3, 13);
	MR_sv(11) = MR_tfield(0, MR_tempr3, 14);
	MR_sv(12) = MR_tfield(0, MR_tempr3, 15);
	MR_sv(13) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(14) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(15) = MR_tfield(0, MR_tempr4, 6);
	MR_sv(16) = MR_tfield(0, MR_tempr4, 7);
	MR_sv(17) = MR_tfield(0, MR_tempr4, 8);
	MR_sv(18) = MR_tfield(0, MR_tempr4, 9);
	MR_sv(19) = MR_tfield(0, MR_tempr4, 10);
	MR_sv(20) = MR_tfield(0, MR_tempr4, 11);
	MR_sv(21) = MR_tfield(0, MR_tempr4, 12);
	MR_sv(22) = MR_tfield(0, MR_tempr4, 13);
	MR_sv(23) = MR_tfield(0, MR_tempr4, 14);
	MR_sv(24) = MR_tfield(0, MR_tempr4, 15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tfield(0, MR_tempr3, 3);
	MR_r3 = MR_tfield(0, MR_tempr4, 3);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i9);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_markers);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i11);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i13);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i16);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i18);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i20);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(20))) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	if ((MR_sv(9) != MR_sv(21))) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	if ((MR_sv(10) != MR_sv(22))) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	if ((MR_sv(11) != MR_sv(23))) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_r1 = (MR_sv(12) == MR_sv(24));
	MR_decr_sp_and_return(25);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module20)
	MR_init_entry1(__Compare___transform_hlds__inlining__inline_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__inlining__inline_info_0_0);
	MR_init_label10(__Compare___transform_hlds__inlining__inline_info_0_0,3,2,5,9,13,17,21,26,30,34)
	MR_init_label8(__Compare___transform_hlds__inlining__inline_info_0_0,39,43,47,51,55,59,63,183)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__inlining__inline_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i3);
	}
	MR_incr_sp(31);
	MR_sv(31) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(30) = MR_tfield(0, MR_tempr5, 15);
	MR_sv(29) = MR_tfield(0, MR_tempr5, 14);
	MR_sv(28) = MR_tfield(0, MR_tempr5, 13);
	MR_sv(27) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(26) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(25) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(15) = MR_tfield(0, MR_tempr6, 15);
	MR_sv(14) = MR_tfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_tfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i21);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i26);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_markers);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i30);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i34);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i39);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i43);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i47);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i51);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i55);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i59);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i63);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i183);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(30);
	MR_succip_word = MR_sv(31);
	MR_decr_sp(31);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(31);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__inlining_module21)
	MR_init_entry1(__Unify___transform_hlds__inlining__inline_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__inlining__inline_params_0_0);
	MR_init_label2(__Unify___transform_hlds__inlining__inline_params_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__inlining__inline_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__inlining__inline_params_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__inlining__inline_params_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__inlining_module22)
	MR_init_entry1(__Compare___transform_hlds__inlining__inline_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__inlining__inline_params_0_0);
	MR_init_label10(__Compare___transform_hlds__inlining__inline_params_0_0,3,2,5,9,13,17,21,25,29,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__inlining__inline_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_params_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_params_0_0_i2);
MR_def_label(__Compare___transform_hlds__inlining__inline_params_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__inlining__inline_params_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_params_0_0_i5);
MR_def_label(__Compare___transform_hlds__inlining__inline_params_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_params_0_0_i69);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_params_0_0_i9);
MR_def_label(__Compare___transform_hlds__inlining__inline_params_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_params_0_0_i69);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_params_0_0_i13);
MR_def_label(__Compare___transform_hlds__inlining__inline_params_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_params_0_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_params_0_0_i17);
MR_def_label(__Compare___transform_hlds__inlining__inline_params_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_params_0_0_i69);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_params_0_0_i21);
MR_def_label(__Compare___transform_hlds__inlining__inline_params_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_params_0_0_i69);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_params_0_0_i25);
MR_def_label(__Compare___transform_hlds__inlining__inline_params_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_params_0_0_i69);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_params_0_0_i29);
MR_def_label(__Compare___transform_hlds__inlining__inline_params_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_params_0_0_i69);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__inlining__inline_params_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__inlining_module23)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0);
	MR_init_label2(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__can_inline_proc__[5]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 238;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module24)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0);
	MR_init_label9(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,2,4,5,7,6,11,14,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__should_inline_proc__[5, 7]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r5 = (MR_Integer) 1;
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 6;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i6);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i9);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__member_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i14);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i1);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_eval_method_2_0);
MR_decl_entry(__Unify___parse_tree__prog_data__eval_method_0_0);
MR_decl_entry(hlds__hlds_pred__pred_info_requested_no_inlining_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_0);
MR_decl_entry(fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(fn__parse_tree__prog_data__get_foreign_language_1_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_duplicate_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_promised_purity_2_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module25)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0);
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,3,6,9,11,8,12,13,17,19,21)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,22,20,24,29,31,25,26,33,34,38)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,41,43,45,40,50,53,52,35,58,56)
	MR_init_label1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__can_inline_proc_2__[6]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i8);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) == MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i1);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i12);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__eval_method_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i13);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_requested_no_inlining_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i17);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i19);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i21);
	}
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i20);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i22);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = MR_sv(7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i24);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i26);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i29);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i31);
	}
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i25);
	}
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i33);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i34);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i38);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i41);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i40);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i43);
	}
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i40);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i45);
	}
	if (MR_INT_NE(MR_sv(1),6)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i40);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i1);
	}
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = MR_sv(2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_duplicate_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i50);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i53);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i52);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = MR_sv(6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i56);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_promised_purity_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0_i58);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 2 == (MR_Integer) MR_r1);
	MR_decr_sp_and_return(8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__inlining_maybe_bunch_0(void)
{
	transform_hlds__inlining_module0();
	transform_hlds__inlining_module1();
	transform_hlds__inlining_module2();
	transform_hlds__inlining_module3();
	transform_hlds__inlining_module4();
	transform_hlds__inlining_module5();
	transform_hlds__inlining_module6();
	transform_hlds__inlining_module7();
	transform_hlds__inlining_module8();
	transform_hlds__inlining_module9();
	transform_hlds__inlining_module10();
	transform_hlds__inlining_module11();
	transform_hlds__inlining_module12();
	transform_hlds__inlining_module13();
	transform_hlds__inlining_module14();
	transform_hlds__inlining_module15();
	transform_hlds__inlining_module16();
	transform_hlds__inlining_module17();
	transform_hlds__inlining_module18();
	transform_hlds__inlining_module19();
	transform_hlds__inlining_module20();
	transform_hlds__inlining_module21();
	transform_hlds__inlining_module22();
	transform_hlds__inlining_module23();
	transform_hlds__inlining_module24();
	transform_hlds__inlining_module25();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__inlining__init(void);
void mercury__transform_hlds__inlining__init_type_tables(void);
void mercury__transform_hlds__inlining__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__inlining__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__inlining__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__inlining__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__inlining__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__inlining_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__inlining__type_ctor_info_inline_info_0,
		transform_hlds__inlining__inline_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__inlining__type_ctor_info_inline_params_0,
		transform_hlds__inlining__inline_params_0_0);
	mercury__transform_hlds__inlining__init_debugger();
}

void mercury__transform_hlds__inlining__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__inlining__type_ctor_info_inline_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__inlining__type_ctor_info_inline_params_0);
	}
}


void mercury__transform_hlds__inlining__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__inlining__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__inlining);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__inlining__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__inlining__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
