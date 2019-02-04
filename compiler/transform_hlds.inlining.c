/*
** Automatically generated from `inlining.m'
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
INIT mercury__transform_hlds__inlining__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "transform_hlds.inlining.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "transform_hlds.inlining.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.inlining.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.inlining.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.inlining.c"
#line 44 "transform_hlds.inlining.c"
#include "transform_hlds.inlining.mh"

#line 47 "transform_hlds.inlining.c"
#line 48 "transform_hlds.inlining.c"
#ifndef TRANSFORM_HLDS__INLINING_DECL_GUARD
#define TRANSFORM_HLDS__INLINING_DECL_GUARD

#line 52 "transform_hlds.inlining.c"
#line 53 "transform_hlds.inlining.c"

#endif
#line 56 "transform_hlds.inlining.c"

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
	mercury_data_transform_hlds__inlining__type_ctor_info_inline_params_0,
	mercury_data_transform_hlds__inlining__type_ctor_info_inline_info_0;
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0, 2,3,5,8,11,13,10,14)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0, 15,19,21,23,24,22,26,31)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0, 33,27,28,35,36,40,43,42)
MR_decl_label7(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0, 48,51,50,37,56,54,1)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0, 3,6,9,11,8,12,13,17)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0, 19,21,22,20,24,29,31,25)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0, 26,33,34,38,41,40,46,49)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0, 48,35,52,53,55,54,59,58)
MR_decl_label2(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0, 61,1)
MR_decl_label8(transform_hlds__inlining__do_inline_call_13_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__inlining__do_inline_call_13_0, 10,11,12,13,16,15,17,18)
MR_decl_label3(transform_hlds__inlining__do_inline_call_13_0, 19,20,21)
MR_decl_label4(transform_hlds__inlining__do_inlining_6_0, 12,4,5,3)
MR_decl_label6(transform_hlds__inlining__get_type_substitution_5_0, 5,4,3,10,11,9)
MR_decl_label8(transform_hlds__inlining__in_predproc_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__inlining__in_predproc_5_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(transform_hlds__inlining__in_predproc_5_0, 18,19,39,21,20,25,23,27)
MR_decl_label8(transform_hlds__inlining__in_predproc_5_0, 28,26,29,30,42,32,31,34)
MR_decl_label2(transform_hlds__inlining__in_predproc_5_0, 35,36)
MR_decl_label8(transform_hlds__inlining__inlining_2_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__inlining__inlining_2_0, 10,11,12,16,18,14,19,21)
MR_decl_label5(transform_hlds__inlining__inlining_2_0, 22,23,24,25,26)
MR_decl_label8(transform_hlds__inlining__inlining_in_call_11_0, 2,4,8,9,10,11,12,34)
MR_decl_label8(transform_hlds__inlining__inlining_in_call_11_0, 13,14,16,17,15,19,21,22)
MR_decl_label7(transform_hlds__inlining__inlining_in_call_11_0, 20,24,25,26,28,30,3)
MR_decl_label3(transform_hlds__inlining__inlining_in_cases_4_0, 4,5,3)
MR_decl_label5(transform_hlds__inlining__inlining_in_conj_4_0, 4,5,6,7,3)
MR_decl_label8(transform_hlds__inlining__inlining_in_goal_4_0, 46,6,8,47,12,14,48,16)
MR_decl_label8(transform_hlds__inlining__inlining_in_goal_4_0, 49,18,50,20,51,22,52,24)
MR_decl_label4(transform_hlds__inlining__inlining_in_goal_4_0, 25,26,27,45)
MR_decl_label3(transform_hlds__inlining__inlining_in_goals_4_0, 4,5,3)
MR_decl_label5(transform_hlds__inlining__inlining_in_par_conj_4_0, 4,5,6,7,3)
MR_decl_label6(transform_hlds__inlining__is_flat_simple_goal_1_0, 4,5,9,12,25,1)
MR_decl_label4(transform_hlds__inlining__is_flat_simple_goal_list_1_0, 17,4,2,1)
MR_decl_label3(transform_hlds__inlining__is_simple_clause_list_2_0, 2,3,1)
MR_decl_label3(transform_hlds__inlining__is_simple_goal_2_0, 2,3,1)
MR_decl_label8(transform_hlds__inlining__mark_predproc_6_0, 3,4,5,6,11,13,14,8)
MR_decl_label8(transform_hlds__inlining__mark_predproc_6_0, 9,18,21,16,17,23,7,29)
MR_decl_label1(transform_hlds__inlining__mark_predproc_6_0, 2)
MR_decl_label5(transform_hlds__inlining__mark_proc_as_inlined_4_0, 2,3,6,10,5)
MR_decl_label4(transform_hlds__inlining__rename_goal_11_0, 2,3,4,5)
MR_decl_label8(__Unify___transform_hlds__inlining__inline_info_0_0, 4,6,8,10,12,14,16,18)
MR_decl_label2(__Unify___transform_hlds__inlining__inline_info_0_0, 20,1)
MR_decl_label2(__Unify___transform_hlds__inlining__inline_params_0_0, 4,1)
MR_decl_label8(__Compare___transform_hlds__inlining__inline_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label8(__Compare___transform_hlds__inlining__inline_info_0_0, 29,33,37,41,45,49,53,57)
MR_decl_label2(__Compare___transform_hlds__inlining__inline_info_0_0, 61,133)
MR_decl_label8(__Compare___transform_hlds__inlining__inline_params_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label2(__Compare___transform_hlds__inlining__inline_params_0_0, 29,69)
MR_decl_static(transform_hlds__inlining__is_flat_simple_goal_1_0)
MR_decl_static(transform_hlds__inlining__is_flat_simple_goal_list_1_0)
MR_def_extern_entry(transform_hlds__inlining__is_simple_goal_2_0)
MR_decl_static(transform_hlds__inlining__mark_proc_as_inlined_4_0)
MR_decl_static(transform_hlds__inlining__mark_predproc_6_0)
MR_def_extern_entry(transform_hlds__inlining__get_type_substitution_5_0)
MR_def_extern_entry(transform_hlds__inlining__rename_goal_11_0)
MR_def_extern_entry(transform_hlds__inlining__do_inline_call_13_0)
MR_decl_static(transform_hlds__inlining__inlining_in_call_11_0)
MR_decl_static(transform_hlds__inlining__inlining_in_goal_4_0)
MR_decl_static(transform_hlds__inlining__inlining_in_goals_4_0)
MR_decl_static(transform_hlds__inlining__inlining_in_cases_4_0)
MR_decl_static(transform_hlds__inlining__inlining_in_conj_4_0)
MR_decl_static(transform_hlds__inlining__inlining_in_par_conj_4_0)
MR_decl_static(transform_hlds__inlining__in_predproc_5_0)
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

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

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
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__inlining__field_types_inline_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
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
	13,
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


MR_BEGIN_MODULE(transform_hlds__inlining_module0)
	MR_init_entry1(transform_hlds__inlining__is_flat_simple_goal_1_0);
	MR_init_label6(transform_hlds__inlining__is_flat_simple_goal_1_0,4,5,9,12,25,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__is_flat_simple_goal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,3)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_1_0_i4);
	}
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_1_0_i25);
	}
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_1_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 3);
	MR_r1 = ((MR_Integer) MR_tempr2 == (MR_Integer) 0);
	MR_proceed();
	}
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(transform_hlds__inlining__is_flat_simple_goal_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__is_flat_simple_goal_1_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__is_flat_simple_goal_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__is_flat_simple_goal_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__is_flat_simple_goal_1_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__is_flat_simple_goal_1_0_i12) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__is_flat_simple_goal_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__is_flat_simple_goal_1_0_i1));
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_flat_simple_goal_1_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_tempr2, 2);
	MR_np_tailcall_ent(transform_hlds__inlining__is_flat_simple_goal_list_1_0);
	}
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_localtailcall(transform_hlds__inlining__is_flat_simple_goal_1_0);
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 2);
	MR_np_localtailcall(transform_hlds__inlining__is_flat_simple_goal_1_0);
MR_def_label(transform_hlds__inlining__is_flat_simple_goal_1_0,25)
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
	MR_init_label4(transform_hlds__inlining__is_flat_simple_goal_list_1_0,17,4,2,1)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
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
	MR_init_label3(transform_hlds__inlining__is_simple_goal_2_0,2,3,1)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(2) * (MR_Integer) 3);
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_simple_goal_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__inlining__is_flat_simple_goal_1_0);
	}
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

MR_decl_entry(svset__insert_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_requested_inlining_1_0);
MR_decl_entry(hlds__passes_aux__write_proc_progress_message_6_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module3)
	MR_init_entry1(transform_hlds__inlining__mark_proc_as_inlined_4_0);
	MR_init_label5(transform_hlds__inlining__mark_proc_as_inlined_4_0,2,3,6,10,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__mark_proc_as_inlined_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(svset__insert_3_0,
		transform_hlds__inlining__mark_proc_as_inlined_4_0_i2);
MR_def_label(transform_hlds__inlining__mark_proc_as_inlined_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__inlining__mark_proc_as_inlined_4_0_i3);
MR_def_label(transform_hlds__inlining__mark_proc_as_inlined_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_requested_inlining_1_0,
		transform_hlds__inlining__mark_proc_as_inlined_4_0_i6);
MR_def_label(transform_hlds__inlining__mark_proc_as_inlined_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_proc_as_inlined_4_0_i5);
	}
MR_def_label(transform_hlds__inlining__mark_proc_as_inlined_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__inlining__mark_proc_as_inlined_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Inlining ", 11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		transform_hlds__inlining__mark_proc_as_inlined_4_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(hlds__goal_util__goal_calls_2_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module4)
	MR_init_entry1(transform_hlds__inlining__mark_predproc_6_0);
	MR_init_label8(transform_hlds__inlining__mark_predproc_6_0,3,4,5,6,11,13,14,8)
	MR_init_label8(transform_hlds__inlining__mark_predproc_6_0,9,18,21,16,17,23,7,29)
	MR_init_label1(transform_hlds__inlining__mark_predproc_6_0,2)
MR_BEGIN_CODE

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
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(9) = MR_ctfield(0, MR_r1, 0);
	MR_sv(10) = MR_ctfield(0, MR_r1, 1);
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
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__inlining__mark_predproc_6_0_i5);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__inlining__mark_predproc_6_0_i6);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i9);
	}
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		transform_hlds__inlining__mark_predproc_6_0_i11);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i13);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i7);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(8) * (MR_Integer) 3);
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i8);
	}
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__inlining__is_flat_simple_goal_1_0,
		transform_hlds__inlining__mark_predproc_6_0_i14);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i8);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i7);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(7),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i17);
	}
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__inlining__mark_predproc_6_0_i18);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i16);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i16);
	}
	MR_sv(8) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		transform_hlds__inlining__mark_predproc_6_0_i21);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (((MR_Integer) MR_r1 - (MR_Integer) MR_sv(6)) * (MR_Integer) MR_sv(8));
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_sv(7))) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i16);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i7);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i2);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__inlining__mark_predproc_6_0_i23);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i2);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	}
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__goal_util__goal_calls_2_0,
		transform_hlds__inlining__mark_predproc_6_0_i29);
MR_def_label(transform_hlds__inlining__mark_predproc_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__inlining__mark_predproc_6_0_i2);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(transform_hlds__inlining__mark_proc_as_inlined_4_0);
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
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module5)
	MR_init_entry1(transform_hlds__inlining__get_type_substitution_5_0);
	MR_init_label6(transform_hlds__inlining__get_type_substitution_5_0,5,4,3,10,11,9)
MR_BEGIN_CODE

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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__init_1_0);
MR_def_label(transform_hlds__inlining__get_type_substitution_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__inlining__get_type_substitution_5_0_i10);
MR_def_label(transform_hlds__inlining__get_type_substitution_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_list_5_0,
		transform_hlds__inlining__get_type_substitution_5_0_i11);
MR_def_label(transform_hlds__inlining__get_type_substitution_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__get_type_substitution_5_0_i9);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__inlining__get_type_substitution_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("inlining.m", 10);
	MR_r2 = (MR_Word) MR_string_const("get_type_substitution: type unification failed", 46);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(varset__vars_2_0);
MR_decl_entry(hlds__goal_util__create_variables_9_0);
MR_decl_entry(hlds__goal_util__must_rename_vars_in_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module6)
	MR_init_entry1(transform_hlds__inlining__rename_goal_11_0);
	MR_init_label4(transform_hlds__inlining__rename_goal_11_0,2,3,4,5)
MR_BEGIN_CODE

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
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		transform_hlds__inlining__rename_goal_11_0_i2);
MR_def_label(transform_hlds__inlining__rename_goal_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(varset__vars_2_0,
		transform_hlds__inlining__rename_goal_11_0_i3);
MR_def_label(transform_hlds__inlining__rename_goal_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(hlds__goal_util__create_variables_9_0,
		transform_hlds__inlining__rename_goal_11_0_i4);
MR_def_label(transform_hlds__inlining__rename_goal_11_0,4)
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
	MR_np_call_localret_ent(hlds__goal_util__must_rename_vars_in_goal_3_0,
		transform_hlds__inlining__rename_goal_11_0_i5);
MR_def_label(transform_hlds__inlining__rename_goal_11_0,5)
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

MR_BEGIN_MODULE(transform_hlds__inlining_module7)
	MR_init_entry1(transform_hlds__inlining__do_inline_call_13_0);
	MR_init_label8(transform_hlds__inlining__do_inline_call_13_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__inlining__do_inline_call_13_0,10,11,12,13,16,15,17,18)
	MR_init_label3(transform_hlds__inlining__do_inline_call_13_0,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__inlining__do_inline_call_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
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
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__tvarset_merge_renaming_4_0,
		transform_hlds__inlining__do_inline_call_13_0_i8);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i9);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i10);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i11);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0,
		transform_hlds__inlining__do_inline_call_13_0_i12);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__inlining__get_type_substitution_5_0,
		transform_hlds__inlining__do_inline_call_13_0_i13);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__do_inline_call_13_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i16);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r7 = MR_sv(9);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__inlining__rename_goal_11_0,
		transform_hlds__inlining__do_inline_call_13_0_i19);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i17);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i18);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r7 = MR_sv(9);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r4 = MR_sv(13);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__inlining__rename_goal_11_0,
		transform_hlds__inlining__do_inline_call_13_0_i19);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,
		transform_hlds__inlining__do_inline_call_13_0_i20);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_overlay_3_0,
		transform_hlds__inlining__do_inline_call_13_0_i21);
MR_def_label(transform_hlds__inlining__do_inline_call_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_nonlocals_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_purity_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module8)
	MR_init_entry1(transform_hlds__inlining__inlining_in_call_11_0);
	MR_init_label8(transform_hlds__inlining__inlining_in_call_11_0,2,4,8,9,10,11,12,34)
	MR_init_label8(transform_hlds__inlining__inlining_in_call_11_0,13,14,16,17,15,19,21,22)
	MR_init_label7(transform_hlds__inlining__inlining_in_call_11_0,20,24,25,26,28,30,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__inlining_in_call_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(28);
	MR_sv(28) = (MR_Word) MR_succip;
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
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(17) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(18) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(19) = MR_ctfield(0, MR_tempr1, 12);
	MR_sv(20) = MR_ctfield(0, MR_tempr1, 13);
	MR_sv(21) = MR_ctfield(0, MR_tempr1, 14);
	MR_sv(22) = MR_ctfield(0, MR_tempr1, 15);
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
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i34);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(varset__vars_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i8);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i9);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(24);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i10);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__vars_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i11);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i12);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(25) + (MR_Integer) MR_r1);
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i3);
	}
	}
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(13);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_r8 = MR_sv(18);
	MR_r3 = MR_sv(23);
	MR_r4 = MR_sv(24);
	MR_np_call_localret_ent(transform_hlds__inlining__do_inline_call_13_0,
		transform_hlds__inlining__inlining_in_call_11_0_i13);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(15) = MR_r4;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i14);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		transform_hlds__inlining__inlining_in_call_11_0_i16);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__inlining__inlining_in_call_11_0_i17);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i15);
	}
	MR_r1 = MR_sv(7);
	MR_sv(3) = MR_sv(20);
	MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i19);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_sv(3) = (MR_Integer) 1;
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i21);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i22);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(16) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i20);
	}
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_sv(22);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i24);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_sv(7) = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i24);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i25);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(16) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i26);
	}
	MR_r1 = MR_sv(24);
	MR_sv(16) = MR_sv(21);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i28);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(24);
	MR_sv(16) = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		transform_hlds__inlining__inlining_in_call_11_0_i28);
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_call_11_0_i30);
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
	MR_decr_sp_and_return(28);
	}
MR_def_label(transform_hlds__inlining__inlining_in_call_11_0,30)
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
	MR_decr_sp_and_return(28);
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
	MR_decr_sp_and_return(28);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__inlining_module9)
	MR_init_entry1(transform_hlds__inlining__inlining_in_goal_4_0);
	MR_init_label8(transform_hlds__inlining__inlining_in_goal_4_0,46,6,8,47,12,14,48,16)
	MR_init_label8(transform_hlds__inlining__inlining_in_goal_4_0,49,18,50,20,51,22,52,24)
	MR_init_label4(transform_hlds__inlining__inlining_in_goal_4_0,25,26,27,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__inlining_in_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(transform_hlds__inlining__inlining_in_goal_4_0_i45) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__inlining_in_goal_4_0_i46) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__inlining_in_goal_4_0_i45) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__inlining_in_goal_4_0_i8));
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r8 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_ctfield(1, MR_r3, 2);
	MR_r4 = MR_ctfield(1, MR_tempr2, 3);
	MR_r5 = MR_ctfield(1, MR_tempr2, 4);
	MR_r6 = MR_ctfield(1, MR_tempr2, 5);
	MR_r7 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_call_11_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i6);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,6)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(transform_hlds__inlining__inlining_in_goal_4_0_i45) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__inlining_in_goal_4_0_i47) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__inlining_in_goal_4_0_i48) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__inlining_in_goal_4_0_i49) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__inlining_in_goal_4_0_i50) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__inlining_in_goal_4_0_i51) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__inlining_in_goal_4_0_i52) MR_AND
		MR_LABEL_AP(transform_hlds__inlining__inlining_in_goal_4_0_i27));
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goal_4_0_i12);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_conj_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i14);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_par_conj_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i14);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,14)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_goals_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i16);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,16)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,49)
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
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_cases_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i18);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,18)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i20);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,20)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,51)
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
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i22);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,22)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,52)
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
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i24);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i25);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_goal_4_0_i26);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,26)
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
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("inlining.m", 10);
	MR_r2 = (MR_Word) MR_string_const("inlining_in_goal: unexpected shorthand", 38);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__inlining__inlining_in_goal_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__inlining_module10)
	MR_init_entry1(transform_hlds__inlining__inlining_in_goals_4_0);
	MR_init_label3(transform_hlds__inlining__inlining_in_goals_4_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__inlining_in_goals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_goals_4_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_goals_4_0_i4);
MR_def_label(transform_hlds__inlining__inlining_in_goals_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
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
MR_def_label(transform_hlds__inlining__inlining_in_goals_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__inlining_module11)
	MR_init_entry1(transform_hlds__inlining__inlining_in_cases_4_0);
	MR_init_label3(transform_hlds__inlining__inlining_in_cases_4_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__inlining_in_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_cases_4_0_i3);
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
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__inlining_in_cases_4_0_i4);
MR_def_label(transform_hlds__inlining__inlining_in_cases_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_cases_4_0,
		transform_hlds__inlining__inlining_in_cases_4_0_i5);
MR_def_label(transform_hlds__inlining__inlining_in_cases_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__inlining__inlining_in_cases_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
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
	MR_init_label5(transform_hlds__inlining__inlining_in_conj_4_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__inlining_in_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_conj_4_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
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
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_conj_4_0,
		transform_hlds__inlining__inlining_in_conj_4_0_i6);
MR_def_label(transform_hlds__inlining__inlining_in_conj_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__inlining__inlining_in_conj_4_0_i7);
MR_def_label(transform_hlds__inlining__inlining_in_conj_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__inlining__inlining_in_conj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_par_conj_list_2_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module13)
	MR_init_entry1(transform_hlds__inlining__inlining_in_par_conj_4_0);
	MR_init_label5(transform_hlds__inlining__inlining_in_par_conj_4_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__inlining_in_par_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_in_par_conj_4_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
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
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__inlining__inlining_in_par_conj_4_0,
		transform_hlds__inlining__inlining_in_par_conj_4_0_i6);
MR_def_label(transform_hlds__inlining__inlining_in_par_conj_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__inlining__inlining_in_par_conj_4_0_i7);
MR_def_label(transform_hlds__inlining__inlining_in_par_conj_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__inlining__inlining_in_par_conj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
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
MR_decl_entry(hlds__quantification__requantify_proc_2_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(check_hlds__purity__repuritycheck_proc_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);
MR_decl_entry(check_hlds__det_analysis__det_infer_proc_7_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module14)
	MR_init_entry1(transform_hlds__inlining__in_predproc_5_0);
	MR_init_label8(transform_hlds__inlining__in_predproc_5_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__inlining__in_predproc_5_0,10,11,12,13,14,15,16,17)
	MR_init_label8(transform_hlds__inlining__in_predproc_5_0,18,19,39,21,20,25,23,27)
	MR_init_label8(transform_hlds__inlining__in_predproc_5_0,28,26,29,30,42,32,31,34)
	MR_init_label2(transform_hlds__inlining__in_predproc_5_0,35,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__in_predproc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(6) = MR_ctfield(0, MR_r1, 0);
	MR_sv(7) = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(16) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__inlining__in_predproc_5_0_i2);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__inlining__in_predproc_5_0_i3);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__inlining__in_predproc_5_0_i4);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__inlining__in_predproc_5_0_i5);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_0,
		transform_hlds__inlining__in_predproc_5_0_i6);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__inlining__in_predproc_5_0_i7);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__inlining__in_predproc_5_0_i8);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__inlining__in_predproc_5_0_i9);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__inlining__in_predproc_5_0_i10);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__inlining__in_predproc_5_0_i11);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__inlining__in_predproc_5_0_i12);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 10) = MR_r1;
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 12) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 13) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 14) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 15) = (MR_Integer) 0;
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_in_goal_4_0,
		transform_hlds__inlining__in_predproc_5_0_i13);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 13);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 14);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 15);
	MR_r1 = MR_ctfield(0, MR_tempr1, 6);
	MR_r2 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		transform_hlds__inlining__in_predproc_5_0_i14);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_typevarset_3_0,
		transform_hlds__inlining__in_predproc_5_0_i15);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__inlining__in_predproc_5_0_i16);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__inlining__in_predproc_5_0_i17);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		transform_hlds__inlining__in_predproc_5_0_i18);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__inlining__in_predproc_5_0_i19);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__in_predproc_5_0_i21);
	}
MR_def_label(transform_hlds__inlining__in_predproc_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_r1;
	MR_GOTO_LAB(transform_hlds__inlining__in_predproc_5_0_i20);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0,
		transform_hlds__inlining__in_predproc_5_0_i39);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(13),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__in_predproc_5_0_i23);
	}
	MR_sv(7) = MR_r4;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_2_0,
		transform_hlds__inlining__in_predproc_5_0_i25);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_r1;
MR_def_label(transform_hlds__inlining__in_predproc_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__in_predproc_5_0_i27);
	}
	MR_sv(2) = MR_sv(16);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_GOTO_LAB(transform_hlds__inlining__in_predproc_5_0_i26);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r4;
	MR_sv(9) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r5;
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__inlining__in_predproc_5_0_i28);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_sv(2) = MR_r2;
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r4;
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__inlining__in_predproc_5_0_i29);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__inlining__in_predproc_5_0_i30);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(15),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__in_predproc_5_0_i32);
	}
MR_def_label(transform_hlds__inlining__in_predproc_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_GOTO_LAB(transform_hlds__inlining__in_predproc_5_0_i31);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__purity__repuritycheck_proc_4_0,
		transform_hlds__inlining__in_predproc_5_0_i42);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r4;
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__inlining__in_predproc_5_0_i34);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__inlining__in_predproc_5_0_i35);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(14),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__in_predproc_5_0_i36);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_proc_7_0);
MR_def_label(transform_hlds__inlining__in_predproc_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__inlining_module15)
	MR_init_entry1(transform_hlds__inlining__do_inlining_6_0);
	MR_init_label4(transform_hlds__inlining__do_inlining_6_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__inlining__do_inlining_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__inlining__do_inlining_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__do_inlining_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__inlining__in_predproc_5_0,
		transform_hlds__inlining__do_inlining_6_0_i4);
MR_def_label(transform_hlds__inlining__do_inlining_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__inlining__mark_predproc_6_0,
		transform_hlds__inlining__do_inlining_6_0_i5);
MR_def_label(transform_hlds__inlining__do_inlining_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__inlining__do_inlining_6_0_i12);
MR_def_label(transform_hlds__inlining__do_inlining_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
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
	MR_init_label8(transform_hlds__inlining__inlining_2_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__inlining__inlining_2_0,10,11,12,16,18,14,19,21)
	MR_init_label5(transform_hlds__inlining__inlining_2_0,22,23,24,25,26)
MR_BEGIN_CODE

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
	MR_r2 = (MR_Integer) 266;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__inlining__inlining_2_0_i3);
MR_def_label(transform_hlds__inlining__inlining_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 268;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__inlining__inlining_2_0_i4);
MR_def_label(transform_hlds__inlining__inlining_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 269;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__inlining__inlining_2_0_i5);
MR_def_label(transform_hlds__inlining__inlining_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 270;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__inlining__inlining_2_0_i6);
MR_def_label(transform_hlds__inlining__inlining_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 271;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__inlining__inlining_2_0_i7);
MR_def_label(transform_hlds__inlining__inlining_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 272;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__inlining__inlining_2_0_i8);
MR_def_label(transform_hlds__inlining__inlining_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 196;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__inlining__inlining_2_0_i9);
MR_def_label(transform_hlds__inlining__inlining_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_2_0_i16);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,
		transform_hlds__inlining__inlining_2_0_i18);
MR_def_label(transform_hlds__inlining__inlining_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(5),0)) {
		MR_GOTO_LAB(transform_hlds__inlining__inlining_2_0_i14);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,
		transform_hlds__inlining__inlining_2_0_i18);
MR_def_label(transform_hlds__inlining__inlining_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__inlining__inlining_2_0_i21);
MR_def_label(transform_hlds__inlining__inlining_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__inlining__inlining_2_0_i19);
MR_def_label(transform_hlds__inlining__inlining_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__inlining__inlining_2_0_i21);
MR_def_label(transform_hlds__inlining__inlining_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		transform_hlds__inlining__inlining_2_0_i22);
MR_def_label(transform_hlds__inlining__inlining_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__inlining__inlining_2_0_i23);
MR_def_label(transform_hlds__inlining__inlining_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__inlining__inlining_2_0_i24);
MR_def_label(transform_hlds__inlining__inlining_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__inlining__inlining_2_0_i25);
MR_def_label(transform_hlds__inlining__inlining_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__inlining__do_inlining_6_0,
		transform_hlds__inlining__inlining_2_0_i26);
MR_def_label(transform_hlds__inlining__inlining_2_0,26)
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

MR_BEGIN_MODULE(transform_hlds__inlining_module17)
	MR_init_entry1(transform_hlds__inlining__is_simple_clause_list_2_0);
	MR_init_label3(transform_hlds__inlining__is_simple_clause_list_2_0,2,3,1)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_simple_clause_list_2_0_i1);
	}
	MR_tempr1 = ((MR_Integer) MR_sv(2) * (MR_Integer) 3);
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(transform_hlds__inlining__is_simple_clause_list_2_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__inlining__is_flat_simple_goal_1_0);
	}
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
MR_BEGIN_CODE

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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_markers_0;
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module19)
	MR_init_entry1(__Unify___transform_hlds__inlining__inline_info_0_0);
	MR_init_label8(__Unify___transform_hlds__inlining__inline_info_0_0,4,6,8,10,12,14,16,18)
	MR_init_label2(__Unify___transform_hlds__inlining__inline_info_0_0,20,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__inlining__inline_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i20);
	}
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 4);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 9);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 10);
	MR_sv(8) = MR_ctfield(0, MR_tempr3, 11);
	MR_sv(9) = MR_ctfield(0, MR_tempr3, 12);
	MR_sv(10) = MR_ctfield(0, MR_tempr3, 13);
	MR_sv(11) = MR_ctfield(0, MR_tempr3, 14);
	MR_sv(12) = MR_ctfield(0, MR_tempr3, 15);
	MR_sv(13) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(14) = MR_ctfield(0, MR_tempr4, 5);
	MR_sv(15) = MR_ctfield(0, MR_tempr4, 6);
	MR_sv(16) = MR_ctfield(0, MR_tempr4, 7);
	MR_sv(17) = MR_ctfield(0, MR_tempr4, 8);
	MR_sv(18) = MR_ctfield(0, MR_tempr4, 9);
	MR_sv(19) = MR_ctfield(0, MR_tempr4, 10);
	MR_sv(20) = MR_ctfield(0, MR_tempr4, 11);
	MR_sv(21) = MR_ctfield(0, MR_tempr4, 12);
	MR_sv(22) = MR_ctfield(0, MR_tempr4, 13);
	MR_sv(23) = MR_ctfield(0, MR_tempr4, 14);
	MR_sv(24) = MR_ctfield(0, MR_tempr4, 15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_ctfield(0, MR_tempr3, 3);
	MR_r3 = MR_ctfield(0, MR_tempr4, 3);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_markers);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i12);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i14);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i16);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_info_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Unify___transform_hlds__inlining__inline_info_0_0_i18);
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,18)
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
MR_def_label(__Unify___transform_hlds__inlining__inline_info_0_0,20)
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
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module20)
	MR_init_entry1(__Compare___transform_hlds__inlining__inline_info_0_0);
	MR_init_label8(__Compare___transform_hlds__inlining__inline_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label8(__Compare___transform_hlds__inlining__inline_info_0_0,29,33,37,41,45,49,53,57)
	MR_init_label2(__Compare___transform_hlds__inlining__inline_info_0_0,61,133)
MR_BEGIN_CODE

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
	MR_sv(30) = MR_ctfield(0, MR_tempr5, 15);
	MR_sv(29) = MR_ctfield(0, MR_tempr5, 14);
	MR_sv(28) = MR_ctfield(0, MR_tempr5, 13);
	MR_sv(27) = MR_ctfield(0, MR_tempr5, 12);
	MR_sv(26) = MR_ctfield(0, MR_tempr5, 11);
	MR_sv(25) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(24) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(23) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(22) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(21) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(20) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(19) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(18) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(17) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(15) = MR_ctfield(0, MR_tempr6, 15);
	MR_sv(14) = MR_ctfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_ctfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_ctfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_ctfield(0, MR_tempr6, 11);
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
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i21);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i25);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_markers);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i29);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i33);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i37);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i41);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i45);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i49);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i53);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i57);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__inlining__inline_info_0_0_i61);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__inlining__inline_info_0_0_i133);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(30);
	MR_succip_word = MR_sv(31);
	MR_decr_sp(31);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__inlining__inline_info_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(31);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__inlining_module21)
	MR_init_entry1(__Unify___transform_hlds__inlining__inline_params_0_0);
	MR_init_label2(__Unify___transform_hlds__inlining__inline_params_0_0,4,1)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 5);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 6);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 6);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___transform_hlds__inlining__inline_params_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 7);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = (MR_r1 == MR_tempr3);
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
	MR_init_label8(__Compare___transform_hlds__inlining__inline_params_0_0,3,2,5,9,13,17,21,25)
	MR_init_label2(__Compare___transform_hlds__inlining__inline_params_0_0,29,69)
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(transform_hlds__inlining_module23)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0);
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,2,3,5,8,11,13,10,14)
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,15,19,21,23,24,22,26,31)
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,33,27,28,35,36,40,43,42)
	MR_init_label7(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,48,51,50,37,56,54,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
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
	MR_r2 = (MR_Integer) 196;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i1);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i10);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i13);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) == MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i1);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i14);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__eval_method_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i15);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_requested_no_inlining_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i19);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i21);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i23);
	}
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i22);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i24);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i26);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i28);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i31);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i33);
	}
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i27);
	}
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i35);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i36);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i37);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i40);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i43);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i1);
	}
	if (MR_INT_NE(MR_sv(1),5)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_duplicate_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i48);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i51);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i50);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(6);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i54);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_promised_purity_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0_i56);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 2 == (MR_Integer) MR_r1);
	MR_decr_sp_and_return(8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_0,1)
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

MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(transform_hlds__inlining_module24)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0);
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,3,6,9,11,8,12,13,17)
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,19,21,22,20,24,29,31,25)
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,26,33,34,38,41,40,46,49)
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,48,35,52,53,55,54,59,58)
	MR_init_label2(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,61,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i1);
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
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i1);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i8);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) == MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i1);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i12);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__eval_method_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i13);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_requested_no_inlining_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i17);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i19);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i21);
	}
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i20);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i22);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i1);
	}
	MR_r1 = MR_sv(7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i24);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i26);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i29);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i31);
	}
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i25);
	}
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i33);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i34);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i35);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i38);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i41);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i40);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i1);
	}
	if (MR_INT_NE(MR_sv(3),5)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i1);
	}
	MR_r1 = MR_sv(6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_duplicate_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i46);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i49);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i48);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i52);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i53);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i55);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i54);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 6;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i59);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i58);
	}
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(set__member_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i61);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0_i1);
	}
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_105_110_108_105_110_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_0,1)
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__inlining__init(void);
void mercury__transform_hlds__inlining__init_type_tables(void);
void mercury__transform_hlds__inlining__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__inlining__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__inlining__init_complexity_procs(void);
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
		mercury_data_transform_hlds__inlining__type_ctor_info_inline_params_0,
		transform_hlds__inlining__inline_params_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__inlining__type_ctor_info_inline_info_0,
		transform_hlds__inlining__inline_info_0_0);
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
		&mercury_data_transform_hlds__inlining__type_ctor_info_inline_params_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__inlining__type_ctor_info_inline_info_0);
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

void mercury__transform_hlds__inlining__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__inlining__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
