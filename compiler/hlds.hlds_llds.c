/*
** Automatically generated from `hlds_llds.m'
** by the Mercury compiler,
** version rotd-2011-08-21, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__hlds_llds__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.hlds_llds.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "hlds.hlds_llds.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "hlds.hlds_llds.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "hlds.hlds_llds.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "hlds.hlds_llds.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "hlds.hlds_llds.c"
#line 49 "hlds.hlds_llds.c"
#include "hlds.hlds_llds.mh"

#line 52 "hlds.hlds_llds.c"
#line 53 "hlds.hlds_llds.c"
#ifndef HLDS__HLDS_LLDS_DECL_GUARD
#define HLDS__HLDS_LLDS_DECL_GUARD

#line 57 "hlds.hlds_llds.c"
#line 58 "hlds.hlds_llds.c"

#endif
#line 61 "hlds.hlds_llds.c"

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
	mercury_data_hlds__hlds_llds__type_ctor_info_abs_follow_vars_0,
	mercury_data_hlds__hlds_llds__type_ctor_info_abs_follow_vars_map_0,
	mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0,
	mercury_data_hlds__hlds_llds__type_ctor_info_abs_store_map_0,
	mercury_data_hlds__hlds_llds__type_ctor_info_llds_code_gen_details_0,
	mercury_data_hlds__hlds_llds__type_ctor_info_maybe_need_0,
	mercury_data_hlds__hlds_llds__type_ctor_info_need_across_call_0,
	mercury_data_hlds__hlds_llds__type_ctor_info_need_in_par_conj_0,
	mercury_data_hlds__hlds_llds__type_ctor_info_need_in_resume_0,
	mercury_data_hlds__hlds_llds__type_ctor_info_resume_locs_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__hlds_llds__type_ctor_info_resume_point_0,
	mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0,
	mercury_data_hlds__hlds_llds__type_ctor_info_stack_slots_0;
MR_decl_label6(hlds__hlds_llds__explain_stack_slots_2_4_0, 39,4,6,7,8,9)
MR_decl_label2(hlds__hlds_llds__goal_info_get_follow_vars_2_0, 2,3)
MR_decl_label3(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0, 2,6,3)
MR_decl_label3(hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0, 2,6,3)
MR_decl_label3(hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0, 2,6,3)
MR_decl_label2(hlds__hlds_llds__goal_info_get_post_births_2_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_get_post_deaths_2_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_get_pre_births_2_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_get_pre_deaths_2_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_get_resume_point_2_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_get_store_map_2_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_0, 2,1)
MR_decl_label2(hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0, 2,1)
MR_decl_label2(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_0, 2,1)
MR_decl_label2(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_0, 2,1)
MR_decl_label2(hlds__hlds_llds__goal_info_maybe_get_post_births_2_0, 2,1)
MR_decl_label2(hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0, 2,1)
MR_decl_label2(hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0, 2,1)
MR_decl_label2(hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0, 2,1)
MR_decl_label2(hlds__hlds_llds__goal_info_maybe_get_resume_point_2_0, 2,1)
MR_decl_label2(hlds__hlds_llds__goal_info_maybe_get_store_map_2_0, 2,1)
MR_decl_label1(hlds__hlds_llds__goal_info_resume_vars_and_loc_3_0, 3)
MR_decl_label2(hlds__hlds_llds__goal_info_set_follow_vars_3_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_set_need_across_call_3_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_set_need_in_par_conj_3_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_set_need_in_resume_3_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_set_post_births_3_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_set_post_deaths_3_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_set_pre_births_3_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_set_pre_deaths_3_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_set_resume_point_3_0, 2,3)
MR_decl_label2(hlds__hlds_llds__goal_info_set_store_map_3_0, 2,3)
MR_decl_label3(hlds__hlds_llds__goal_set_follow_vars_3_0, 2,3,6)
MR_decl_label3(hlds__hlds_llds__goal_set_resume_point_3_0, 2,3,6)
MR_decl_label10(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0, 2,3,4,5,7,10,11,12,6,15)
MR_decl_label10(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0, 16,17,19,20,18,23,26,27,28,25)
MR_decl_label4(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0, 32,31,35,36)
MR_decl_label3(hlds__hlds_llds__rename_vars_in_var_locn_list_4_0, 18,4,6)
MR_decl_label2(fn__f_104_108_100_115_95_95_104_108_100_115_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_0, 3,5)
MR_decl_label8(fn__hlds__hlds_llds__abs_locn_to_string_1_0, 38,5,4,8,7,11,10,13)
MR_decl_label2(fn__hlds__hlds_llds__explain_stack_slots_2_0, 3,4)
MR_decl_label6(fn__hlds__hlds_llds__get_details_1_0, 5,6,7,8,9,3)
MR_decl_label2(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0, 3,5)
MR_decl_label3(__Unify___hlds__hlds_llds__abs_follow_vars_0_0, 5,7,1)
MR_decl_label6(__Unify___hlds__hlds_llds__abs_locn_0_0, 5,6,8,25,10,1)
MR_decl_label9(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0, 5,7,9,11,13,15,17,21,1)
MR_decl_label5(__Unify___hlds__hlds_llds__maybe_need_0_0, 5,6,26,10,1)
MR_decl_label4(__Unify___hlds__hlds_llds__need_across_call_0_0, 5,7,11,1)
MR_decl_label1(__Unify___hlds__hlds_llds__need_in_par_conj_0_0, 7)
MR_decl_label3(__Unify___hlds__hlds_llds__need_in_resume_0_0, 5,9,1)
MR_decl_label4(__Unify___hlds__hlds_llds__resume_point_0_0, 13,5,8,1)
MR_decl_label4(__Unify___hlds__hlds_llds__stack_slot_0_0, 5,17,7,1)
MR_decl_label4(__Compare___hlds__hlds_llds__abs_follow_vars_0_0, 3,2,6,28)
MR_decl_label10(__Compare___hlds__hlds_llds__abs_locn_0_0, 66,7,8,9,5,13,14,16,11,20)
MR_decl_label10(__Compare___hlds__hlds_llds__abs_locn_0_0, 21,22,18,27,28,29,84,25,33,34)
MR_decl_label3(__Compare___hlds__hlds_llds__abs_locn_0_0, 62,35,63)
MR_decl_label10(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0, 3,2,6,11,16,21,25,30,34,98)
MR_decl_label10(__Compare___hlds__hlds_llds__maybe_need_0_0, 46,7,8,5,12,13,10,18,19,16)
MR_decl_label5(__Compare___hlds__hlds_llds__maybe_need_0_0, 23,42,24,43,25)
MR_decl_label5(__Compare___hlds__hlds_llds__need_across_call_0_0, 3,2,6,11,41)
MR_decl_label2(__Compare___hlds__hlds_llds__need_in_par_conj_0_0, 3,2)
MR_decl_label5(__Compare___hlds__hlds_llds__need_in_resume_0_0, 3,2,5,10,40)
MR_decl_label6(__Compare___hlds__hlds_llds__resume_point_0_0, 25,7,5,9,12,17)
MR_decl_label10(__Compare___hlds__hlds_llds__stack_slot_0_0, 3,2,7,5,12,35,10,27,16,28)
MR_decl_static(hlds__hlds_llds__explain_stack_slots_2_4_0)
MR_def_extern_entry(fn__hlds__hlds_llds__explain_stack_slots_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_get_pre_births_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_get_post_births_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_get_pre_deaths_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_get_post_deaths_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_get_follow_vars_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_get_store_map_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_get_resume_point_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_maybe_get_post_births_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_maybe_get_store_map_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_maybe_get_resume_point_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_0)
MR_decl_static(fn__hlds__hlds_llds__get_details_1_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_set_pre_births_3_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_set_post_births_3_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_set_pre_deaths_3_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_set_post_deaths_3_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_set_follow_vars_3_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_set_store_map_3_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_set_resume_point_3_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_set_need_across_call_3_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_set_need_in_resume_3_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_set_need_in_par_conj_3_0)
MR_def_extern_entry(hlds__hlds_llds__goal_set_follow_vars_3_0)
MR_def_extern_entry(hlds__hlds_llds__goal_set_resume_point_3_0)
MR_def_extern_entry(hlds__hlds_llds__goal_info_resume_vars_and_loc_3_0)
MR_decl_static(hlds__hlds_llds__rename_vars_in_var_locn_list_4_0)
MR_def_extern_entry(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0)
MR_def_extern_entry(fn__hlds__hlds_llds__stack_slot_num_1_0)
MR_def_extern_entry(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0)
MR_def_extern_entry(fn__hlds__hlds_llds__key_stack_slot_to_abs_locn_2_0)
MR_def_extern_entry(fn__hlds__hlds_llds__abs_locn_to_string_1_0)
MR_def_extern_entry(__Unify___hlds__hlds_llds__abs_follow_vars_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_llds__abs_follow_vars_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_llds__abs_follow_vars_map_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_llds__abs_follow_vars_map_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_llds__abs_locn_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_llds__abs_locn_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_llds__abs_store_map_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_llds__abs_store_map_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0)
MR_decl_static(__Unify___hlds__hlds_llds__maybe_need_0_0)
MR_decl_static(__Compare___hlds__hlds_llds__maybe_need_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_llds__need_across_call_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_llds__need_across_call_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_llds__need_in_par_conj_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_llds__need_in_par_conj_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_llds__need_in_resume_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_llds__need_in_resume_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_llds__resume_locs_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_llds__resume_locs_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_llds__resume_point_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_llds__resume_point_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_llds__stack_slot_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_llds__stack_slot_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_llds__stack_slots_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_llds__stack_slots_0_0)
MR_def_extern_entry(fn__f_104_108_100_115_95_95_104_108_100_115_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_0)

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
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_abs_follow_vars_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0 = {
	"abs_follow_vars",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_abs_follow_vars_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_name_ordered_abs_follow_vars_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0
};

const MR_Integer mercury_data_hlds__hlds_llds__functor_number_map_abs_follow_vars_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_follow_vars_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_llds__abs_follow_vars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_llds__abs_follow_vars_0_0)),
	"hlds.hlds_llds",
	"abs_follow_vars",
	{ (void *)mercury_data_hlds__hlds_llds__du_name_ordered_abs_follow_vars_0 },
	{ (void *)mercury_data_hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0 },
	1,
	4,
	mercury_data_hlds__hlds_llds__functor_number_map_abs_follow_vars_0
};

const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_follow_vars_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_llds__abs_follow_vars_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_llds__abs_follow_vars_map_0_0)),
	"hlds.hlds_llds",
	"abs_follow_vars_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_0 = {
	"any_reg",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_abs_locn_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_1 = {
	"abs_reg",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_abs_locn_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_abs_locn_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_2 = {
	"abs_stackvar",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_abs_locn_0_2,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_abs_locn_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_3 = {
	"abs_parent_stackvar",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_abs_locn_0_3,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_abs_locn_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_4 = {
	"abs_framevar",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_abs_locn_0_4,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_abs_locn_0_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_abs_locn_0_1[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_1

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_abs_locn_0_2[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_2

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_abs_locn_0_3[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_3,
	&mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_4

};

const MR_DuPtagLayout mercury_data_hlds__hlds_llds__du_ptag_ordered_abs_locn_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hlds__hlds_llds__du_stag_ordered_abs_locn_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_llds__du_stag_ordered_abs_locn_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_llds__du_stag_ordered_abs_locn_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_hlds__hlds_llds__du_stag_ordered_abs_locn_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_name_ordered_abs_locn_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_4,
	&mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_3,
	&mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_1,
	&mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_2,
	&mercury_data_hlds__hlds_llds__du_functor_desc_abs_locn_0_0
};

const MR_Integer mercury_data_hlds__hlds_llds__functor_number_map_abs_locn_0[] = {
	4,
	2,
	3,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_llds__abs_locn_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_llds__abs_locn_0_0)),
	"hlds.hlds_llds",
	"abs_locn",
	{ (void *)mercury_data_hlds__hlds_llds__du_name_ordered_abs_locn_0 },
	{ (void *)mercury_data_hlds__hlds_llds__du_ptag_ordered_abs_locn_0 },
	5,
	4,
	mercury_data_hlds__hlds_llds__functor_number_map_abs_locn_0
};

const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_store_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_llds__abs_store_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_llds__abs_store_map_0_0)),
	"hlds.hlds_llds",
	"abs_store_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree_bitset__type_ctor_info_tree_bitset_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_follow_vars_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_llds__type_ctor_info_abs_follow_vars_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_resume_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_maybe_need_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_llds_code_gen_details_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_llds__type_ctor_info_resume_point_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_llds__type_ctor_info_maybe_need_0
};

const MR_ConstString mercury_data_hlds__hlds_llds__field_names_llds_code_gen_details_0_0[] = {
	"pre_births",
	"post_births",
	"pre_deaths",
	"post_deaths",
	"follow_vars",
	"store_map",
	"resume_point",
	"maybe_need"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0 = {
	"llds_code_gen_details",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_llds_code_gen_details_0_0,
	mercury_data_hlds__hlds_llds__field_names_llds_code_gen_details_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0
};

const MR_Integer mercury_data_hlds__hlds_llds__functor_number_map_llds_code_gen_details_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_llds_code_gen_details_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0)),
	"hlds.hlds_llds",
	"llds_code_gen_details",
	{ (void *)mercury_data_hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0 },
	{ (void *)mercury_data_hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0 },
	1,
	4,
	mercury_data_hlds__hlds_llds__functor_number_map_llds_code_gen_details_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_maybe_need_0_0 = {
	"no_need",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_need_across_call_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_maybe_need_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_llds__type_ctor_info_need_across_call_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_maybe_need_0_1 = {
	"need_call",
	1,
	0,
	MR_SECTAG_NONE_DIRECT_ARG,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_maybe_need_0_1,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_need_in_resume_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_maybe_need_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_llds__type_ctor_info_need_in_resume_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_maybe_need_0_2 = {
	"need_resume",
	1,
	0,
	MR_SECTAG_NONE_DIRECT_ARG,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_maybe_need_0_2,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_need_in_par_conj_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_maybe_need_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_llds__type_ctor_info_need_in_par_conj_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_maybe_need_0_3 = {
	"need_par_conj",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_maybe_need_0_3,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_maybe_need_0_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_maybe_need_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_maybe_need_0_1[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_maybe_need_0_1

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_maybe_need_0_2[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_maybe_need_0_2

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_maybe_need_0_3[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_maybe_need_0_3

};

const MR_DuPtagLayout mercury_data_hlds__hlds_llds__du_ptag_ordered_maybe_need_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hlds__hlds_llds__du_stag_ordered_maybe_need_0_0 },
	{ 1, MR_SECTAG_NONE_DIRECT_ARG,
	mercury_data_hlds__hlds_llds__du_stag_ordered_maybe_need_0_1 },
	{ 1, MR_SECTAG_NONE_DIRECT_ARG,
	mercury_data_hlds__hlds_llds__du_stag_ordered_maybe_need_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_llds__du_stag_ordered_maybe_need_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_name_ordered_maybe_need_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_maybe_need_0_1,
	&mercury_data_hlds__hlds_llds__du_functor_desc_maybe_need_0_3,
	&mercury_data_hlds__hlds_llds__du_functor_desc_maybe_need_0_2,
	&mercury_data_hlds__hlds_llds__du_functor_desc_maybe_need_0_0
};

const MR_Integer mercury_data_hlds__hlds_llds__functor_number_map_maybe_need_0[] = {
	3,
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_maybe_need_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_llds__maybe_need_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_llds__maybe_need_0_0)),
	"hlds.hlds_llds",
	"maybe_need",
	{ (void *)mercury_data_hlds__hlds_llds__du_name_ordered_maybe_need_0 },
	{ (void *)mercury_data_hlds__hlds_llds__du_ptag_ordered_maybe_need_0 },
	4,
	4,
	mercury_data_hlds__hlds_llds__functor_number_map_maybe_need_0
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_need_across_call_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_hlds__hlds_llds__field_names_need_across_call_0_0[] = {
	"call_forward_vars",
	"call_resume_vars",
	"call_nondet_vars"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_need_across_call_0_0 = {
	"need_across_call",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_need_across_call_0_0,
	mercury_data_hlds__hlds_llds__field_names_need_across_call_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_need_across_call_0_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_need_across_call_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_llds__du_ptag_ordered_need_across_call_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_llds__du_stag_ordered_need_across_call_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_name_ordered_need_across_call_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_need_across_call_0_0
};

const MR_Integer mercury_data_hlds__hlds_llds__functor_number_map_need_across_call_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_need_across_call_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_llds__need_across_call_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_llds__need_across_call_0_0)),
	"hlds.hlds_llds",
	"need_across_call",
	{ (void *)mercury_data_hlds__hlds_llds__du_name_ordered_need_across_call_0 },
	{ (void *)mercury_data_hlds__hlds_llds__du_ptag_ordered_need_across_call_0 },
	1,
	4,
	mercury_data_hlds__hlds_llds__functor_number_map_need_across_call_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__set_of_var__type_ctor_info_set_of_var_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_parse_tree__set_of_var__type_ctor_info_set_of_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_NotagFunctorDesc mercury_data_hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 = {
	"need_in_par_conj",
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	"par_conj_engine_vars"
};

const MR_Integer mercury_data_hlds__hlds_llds__functor_number_map_need_in_par_conj_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_need_in_par_conj_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_llds__need_in_par_conj_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_llds__need_in_par_conj_0_0)),
	"hlds.hlds_llds",
	"need_in_par_conj",
	{ (void *)&mercury_data_hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 },
	{ (void *)&mercury_data_hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 },
	1,
	4,
	mercury_data_hlds__hlds_llds__functor_number_map_need_in_par_conj_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_need_in_resume_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_hlds__hlds_llds__field_names_need_in_resume_0_0[] = {
	"resume_vars_on_stack",
	"resume_resume_vars",
	"resume_nondet_vars"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_need_in_resume_0_0 = {
	"need_in_resume",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_need_in_resume_0_0,
	mercury_data_hlds__hlds_llds__field_names_need_in_resume_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_need_in_resume_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_llds__du_ptag_ordered_need_in_resume_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_name_ordered_need_in_resume_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_need_in_resume_0_0
};

const MR_Integer mercury_data_hlds__hlds_llds__functor_number_map_need_in_resume_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_need_in_resume_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_llds__need_in_resume_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_llds__need_in_resume_0_0)),
	"hlds.hlds_llds",
	"need_in_resume",
	{ (void *)mercury_data_hlds__hlds_llds__du_name_ordered_need_in_resume_0 },
	{ (void *)mercury_data_hlds__hlds_llds__du_ptag_ordered_need_in_resume_0 },
	1,
	4,
	mercury_data_hlds__hlds_llds__functor_number_map_need_in_resume_0
};

static const MR_EnumFunctorDesc mercury_data_hlds__hlds_llds__enum_functor_desc_resume_locs_0_0 = {
	"resume_locs_orig_only",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__hlds_llds__enum_functor_desc_resume_locs_0_1 = {
	"resume_locs_stack_only",
	1
};

static const MR_EnumFunctorDesc mercury_data_hlds__hlds_llds__enum_functor_desc_resume_locs_0_2 = {
	"resume_locs_orig_and_stack",
	2
};

static const MR_EnumFunctorDesc mercury_data_hlds__hlds_llds__enum_functor_desc_resume_locs_0_3 = {
	"resume_locs_stack_and_orig",
	3
};

const MR_EnumFunctorDescPtr mercury_data_hlds__hlds_llds__enum_value_ordered_resume_locs_0[] = {
	&mercury_data_hlds__hlds_llds__enum_functor_desc_resume_locs_0_0,
	&mercury_data_hlds__hlds_llds__enum_functor_desc_resume_locs_0_1,
	&mercury_data_hlds__hlds_llds__enum_functor_desc_resume_locs_0_2,
	&mercury_data_hlds__hlds_llds__enum_functor_desc_resume_locs_0_3
};

const MR_EnumFunctorDescPtr mercury_data_hlds__hlds_llds__enum_name_ordered_resume_locs_0[] = {
	&mercury_data_hlds__hlds_llds__enum_functor_desc_resume_locs_0_2,
	&mercury_data_hlds__hlds_llds__enum_functor_desc_resume_locs_0_0,
	&mercury_data_hlds__hlds_llds__enum_functor_desc_resume_locs_0_3,
	&mercury_data_hlds__hlds_llds__enum_functor_desc_resume_locs_0_1
};

const MR_Integer mercury_data_hlds__hlds_llds__functor_number_map_resume_locs_0[] = {
	1,
	3,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_resume_locs_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_llds__resume_locs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_llds__resume_locs_0_0)),
	"hlds.hlds_llds",
	"resume_locs",
	{ (void *)mercury_data_hlds__hlds_llds__enum_name_ordered_resume_locs_0 },
	{ (void *)mercury_data_hlds__hlds_llds__enum_value_ordered_resume_locs_0 },
	4,
	4,
	mercury_data_hlds__hlds_llds__functor_number_map_resume_locs_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_resume_locs_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_resume_point_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_llds__type_ctor_info_resume_locs_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_resume_point_0_0 = {
	"resume_point",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_resume_point_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_resume_point_0_1 = {
	"no_resume_point",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_resume_point_0_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_resume_point_0_1

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_resume_point_0_1[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_resume_point_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_llds__du_ptag_ordered_resume_point_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hlds__hlds_llds__du_stag_ordered_resume_point_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_llds__du_stag_ordered_resume_point_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_name_ordered_resume_point_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_resume_point_0_1,
	&mercury_data_hlds__hlds_llds__du_functor_desc_resume_point_0_0
};

const MR_Integer mercury_data_hlds__hlds_llds__functor_number_map_resume_point_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_resume_point_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_llds__resume_point_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_llds__resume_point_0_0)),
	"hlds.hlds_llds",
	"resume_point",
	{ (void *)mercury_data_hlds__hlds_llds__du_name_ordered_resume_point_0 },
	{ (void *)mercury_data_hlds__hlds_llds__du_ptag_ordered_resume_point_0 },
	2,
	4,
	mercury_data_hlds__hlds_llds__functor_number_map_resume_point_0
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_stack_slot_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_stack_slot_0_0 = {
	"det_slot",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_stack_slot_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_stack_slot_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_stack_slot_0_1 = {
	"parent_det_slot",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_stack_slot_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_llds__field_types_stack_slot_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_llds__du_functor_desc_stack_slot_0_2 = {
	"nondet_slot",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_llds__field_types_stack_slot_0_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_stack_slot_0_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_stack_slot_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_stack_slot_0_1[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_stack_slot_0_1

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_stag_ordered_stack_slot_0_2[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_stack_slot_0_2

};

const MR_DuPtagLayout mercury_data_hlds__hlds_llds__du_ptag_ordered_stack_slot_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_llds__du_stag_ordered_stack_slot_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_llds__du_stag_ordered_stack_slot_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_llds__du_stag_ordered_stack_slot_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_llds__du_name_ordered_stack_slot_0[] = {
	&mercury_data_hlds__hlds_llds__du_functor_desc_stack_slot_0_0,
	&mercury_data_hlds__hlds_llds__du_functor_desc_stack_slot_0_2,
	&mercury_data_hlds__hlds_llds__du_functor_desc_stack_slot_0_1
};

const MR_Integer mercury_data_hlds__hlds_llds__functor_number_map_stack_slot_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_llds__stack_slot_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_llds__stack_slot_0_0)),
	"hlds.hlds_llds",
	"stack_slot",
	{ (void *)mercury_data_hlds__hlds_llds__du_name_ordered_stack_slot_0 },
	{ (void *)mercury_data_hlds__hlds_llds__du_ptag_ordered_stack_slot_0 },
	3,
	4,
	mercury_data_hlds__hlds_llds__functor_number_map_stack_slot_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slots_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_llds__stack_slots_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_llds__stack_slots_0_0)),
	"hlds.hlds_llds",
	"stack_slots",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 },
	-1,
	0,
	NULL
};



MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(hlds__hlds_llds_module0)
	MR_init_entry1(hlds__hlds_llds__explain_stack_slots_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__explain_stack_slots_2_4_0);
	MR_init_label6(hlds__hlds_llds__explain_stack_slots_2_4_0,39,4,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'explain_stack_slots_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_llds__explain_stack_slots_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__explain_stack_slots_2_4_0_i39);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(hlds__hlds_llds__explain_stack_slots_2_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(hlds__hlds_llds__explain_stack_slots_2_4_0,
		hlds__hlds_llds__explain_stack_slots_2_4_0_i4);
MR_def_label(hlds__hlds_llds__explain_stack_slots_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__hlds_llds__explain_stack_slots_2_4_0_i6);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_sv(2) = (MR_Word) MR_string_const("sv", 2);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		hlds__hlds_llds__explain_stack_slots_2_4_0_i8);
MR_def_label(hlds__hlds_llds__explain_stack_slots_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(hlds__hlds_llds__explain_stack_slots_2_4_0_i7);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(2, MR_sv(2), 0);
	MR_sv(2) = (MR_Word) MR_string_const("fv", 2);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		hlds__hlds_llds__explain_stack_slots_2_4_0_i8);
MR_def_label(hlds__hlds_llds__explain_stack_slots_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_sv(2) = (MR_Word) MR_string_const("parent_sv", 9);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		hlds__hlds_llds__explain_stack_slots_2_4_0_i8);
MR_def_label(hlds__hlds_llds__explain_stack_slots_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		hlds__hlds_llds__explain_stack_slots_2_4_0_i9);
MR_def_label(hlds__hlds_llds__explain_stack_slots_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("\t ->\t", 5);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__hlds_llds_module1)
	MR_init_entry1(fn__hlds__hlds_llds__explain_stack_slots_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_llds__explain_stack_slots_2_0);
	MR_init_label2(fn__hlds__hlds_llds__explain_stack_slots_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'explain_stack_slots'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_llds__explain_stack_slots_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__hlds__hlds_llds__explain_stack_slots_2_0_i3);
MR_def_label(fn__hlds__hlds_llds__explain_stack_slots_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(hlds__hlds_llds__explain_stack_slots_2_4_0,
		fn__hlds__hlds_llds__explain_stack_slots_2_0_i4);
MR_def_label(fn__hlds__hlds_llds__explain_stack_slots_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nStack slot assignments (if any):\n", 34);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__hlds_llds_module2)
	MR_init_entry1(hlds__hlds_llds__goal_info_get_pre_births_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_get_pre_births_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_get_pre_births_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_get_pre_births'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_get_pre_births_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_get_pre_births_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_get_pre_births_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_get_pre_births_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__hlds_llds__goal_info_get_pre_births_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_llds", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_llds.goal_info_get_pre_births\'/2", 53);
	MR_r3 = (MR_Word) MR_string_const("no code_gen_info", 16);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module3)
	MR_init_entry1(hlds__hlds_llds__goal_info_get_post_births_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_get_post_births_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_get_post_births_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_get_post_births'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_get_post_births_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_get_post_births_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_get_post_births_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_get_post_births_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__hlds_llds__goal_info_get_post_births_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_llds", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_llds.goal_info_get_post_births\'/2", 54);
	MR_r3 = (MR_Word) MR_string_const("no code_gen_info", 16);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module4)
	MR_init_entry1(hlds__hlds_llds__goal_info_get_pre_deaths_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_get_pre_deaths_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_get_pre_deaths'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_get_pre_deaths_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_get_pre_deaths_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_get_pre_deaths_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_llds", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_llds.goal_info_get_pre_deaths\'/2", 53);
	MR_r3 = (MR_Word) MR_string_const("no code_gen_info", 16);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module5)
	MR_init_entry1(hlds__hlds_llds__goal_info_get_post_deaths_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_get_post_deaths_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_get_post_deaths_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_get_post_deaths'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_get_post_deaths_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_get_post_deaths_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_get_post_deaths_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_get_post_deaths_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 3);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__hlds_llds__goal_info_get_post_deaths_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_llds", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_llds.goal_info_get_post_deaths\'/2", 54);
	MR_r3 = (MR_Word) MR_string_const("no code_gen_info", 16);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module6)
	MR_init_entry1(hlds__hlds_llds__goal_info_get_follow_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_get_follow_vars_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_get_follow_vars_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_get_follow_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_get_follow_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_get_follow_vars_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_get_follow_vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_get_follow_vars_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 4);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__hlds_llds__goal_info_get_follow_vars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_llds", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_llds.goal_info_get_follow_vars\'/2", 54);
	MR_r3 = (MR_Word) MR_string_const("no code_gen_info", 16);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module7)
	MR_init_entry1(hlds__hlds_llds__goal_info_get_store_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_get_store_map_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_get_store_map_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_get_store_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_get_store_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_get_store_map_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_get_store_map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_get_store_map_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 5);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__hlds_llds__goal_info_get_store_map_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_llds", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_llds.goal_info_get_store_map\'/2", 52);
	MR_r3 = (MR_Word) MR_string_const("no code_gen_info", 16);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module8)
	MR_init_entry1(hlds__hlds_llds__goal_info_get_resume_point_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_get_resume_point_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_get_resume_point_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_get_resume_point'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_get_resume_point_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_get_resume_point_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_get_resume_point_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_get_resume_point_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 6);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__hlds_llds__goal_info_get_resume_point_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_llds", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_llds.goal_info_get_resume_point\'/2", 55);
	MR_r3 = (MR_Word) MR_string_const("no code_gen_info", 16);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module9)
	MR_init_entry1(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0);
	MR_init_label3(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0,2,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_get_maybe_need_across_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 7);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_body((MR_Integer) MR_r2, (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_llds", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_llds.goal_info_get_maybe_need_across_call\'/2", 65);
	MR_r3 = (MR_Word) MR_string_const("no code_gen_info", 16);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module10)
	MR_init_entry1(hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0);
	MR_init_label3(hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0,2,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_get_maybe_need_in_resume'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 7);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_body((MR_Integer) MR_r2, (MR_Integer) 2);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_llds", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_llds.goal_info_get_maybe_need_in_resume\'/2", 63);
	MR_r3 = (MR_Word) MR_string_const("no code_gen_info", 16);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module11)
	MR_init_entry1(hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0);
	MR_init_label3(hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0,2,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_get_maybe_need_in_par_conj'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 7);
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(3, MR_r2, 0);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_llds", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_llds.goal_info_get_maybe_need_in_par_conj\'/2", 65);
	MR_r3 = (MR_Word) MR_string_const("no code_gen_info", 16);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module12)
	MR_init_entry1(hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_maybe_get_pre_births'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module13)
	MR_init_entry1(hlds__hlds_llds__goal_info_maybe_get_post_births_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_maybe_get_post_births_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_maybe_get_post_births_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_maybe_get_post_births'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_maybe_get_post_births_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_maybe_get_post_births_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_post_births_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_maybe_get_post_births_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_post_births_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module14)
	MR_init_entry1(hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_maybe_get_pre_deaths'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module15)
	MR_init_entry1(hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_maybe_get_post_deaths'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 3);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module16)
	MR_init_entry1(hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_maybe_get_follow_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 4);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module17)
	MR_init_entry1(hlds__hlds_llds__goal_info_maybe_get_store_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_maybe_get_store_map_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_maybe_get_store_map_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_maybe_get_store_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_maybe_get_store_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_maybe_get_store_map_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_store_map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_maybe_get_store_map_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 5);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_store_map_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module18)
	MR_init_entry1(hlds__hlds_llds__goal_info_maybe_get_resume_point_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_maybe_get_resume_point_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_maybe_get_resume_point_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_maybe_get_resume_point'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_maybe_get_resume_point_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_maybe_get_resume_point_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_resume_point_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_maybe_get_resume_point_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 6);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_resume_point_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module19)
	MR_init_entry1(hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_maybe_get_maybe_need_across_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 7);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module20)
	MR_init_entry1(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_maybe_get_maybe_need_in_resume'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 7);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module21)
	MR_init_entry1(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_0);
	MR_init_label2(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_maybe_get_maybe_need_in_par_conj'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 7);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_tempr1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__parse_tree__set_of_var__init_0_0);

MR_BEGIN_MODULE(hlds__hlds_llds_module22)
	MR_init_entry1(fn__hlds__hlds_llds__get_details_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_llds__get_details_1_0);
	MR_init_label6(fn__hlds__hlds_llds__get_details_1_0,5,6,7,8,9,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_details'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_llds__get_details_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_llds__get_details_1_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__hlds__hlds_llds__get_details_1_0_i5);
MR_def_label(fn__hlds__hlds_llds__get_details_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		fn__hlds__hlds_llds__get_details_1_0_i6);
MR_def_label(fn__hlds__hlds_llds__get_details_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		fn__hlds__hlds_llds__get_details_1_0_i7);
MR_def_label(fn__hlds__hlds_llds__get_details_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		fn__hlds__hlds_llds__get_details_1_0_i8);
MR_def_label(fn__hlds__hlds_llds__get_details_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		fn__hlds__hlds_llds__get_details_1_0_i9);
MR_def_label(fn__hlds__hlds_llds__get_details_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 5) = MR_sv(3);
	MR_tfield(0, MR_r2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__hlds__hlds_llds__get_details_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_set_code_gen_info_3_0);

MR_BEGIN_MODULE(hlds__hlds_llds_module23)
	MR_init_entry1(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_initialize_liveness_info_7_0);
	MR_init_label2(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_initialize_liveness_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_initialize_liveness_info_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_initialize_liveness_info_7_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_llds__get_details_1_0,
		hlds__hlds_llds__goal_info_initialize_liveness_info_7_0_i3);
MR_def_label(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_set_code_gen_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module24)
	MR_init_entry1(hlds__hlds_llds__goal_info_set_pre_births_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_set_pre_births_3_0);
	MR_init_label2(hlds__hlds_llds__goal_info_set_pre_births_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_set_pre_births'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_set_pre_births_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_set_pre_births_3_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_set_pre_births_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_llds__get_details_1_0,
		hlds__hlds_llds__goal_info_set_pre_births_3_0_i3);
MR_def_label(hlds__hlds_llds__goal_info_set_pre_births_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_set_code_gen_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module25)
	MR_init_entry1(hlds__hlds_llds__goal_info_set_post_births_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_set_post_births_3_0);
	MR_init_label2(hlds__hlds_llds__goal_info_set_post_births_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_set_post_births'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_set_post_births_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_set_post_births_3_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_set_post_births_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_llds__get_details_1_0,
		hlds__hlds_llds__goal_info_set_post_births_3_0_i3);
MR_def_label(hlds__hlds_llds__goal_info_set_post_births_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_set_code_gen_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module26)
	MR_init_entry1(hlds__hlds_llds__goal_info_set_pre_deaths_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_set_pre_deaths_3_0);
	MR_init_label2(hlds__hlds_llds__goal_info_set_pre_deaths_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_set_pre_deaths'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_set_pre_deaths_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_set_pre_deaths_3_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_set_pre_deaths_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_llds__get_details_1_0,
		hlds__hlds_llds__goal_info_set_pre_deaths_3_0_i3);
MR_def_label(hlds__hlds_llds__goal_info_set_pre_deaths_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_set_code_gen_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module27)
	MR_init_entry1(hlds__hlds_llds__goal_info_set_post_deaths_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_set_post_deaths_3_0);
	MR_init_label2(hlds__hlds_llds__goal_info_set_post_deaths_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_set_post_deaths'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_set_post_deaths_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_set_post_deaths_3_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_set_post_deaths_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_llds__get_details_1_0,
		hlds__hlds_llds__goal_info_set_post_deaths_3_0_i3);
MR_def_label(hlds__hlds_llds__goal_info_set_post_deaths_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_set_code_gen_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module28)
	MR_init_entry1(hlds__hlds_llds__goal_info_set_follow_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_set_follow_vars_3_0);
	MR_init_label2(hlds__hlds_llds__goal_info_set_follow_vars_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_set_follow_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_set_follow_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_set_follow_vars_3_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_set_follow_vars_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_llds__get_details_1_0,
		hlds__hlds_llds__goal_info_set_follow_vars_3_0_i3);
MR_def_label(hlds__hlds_llds__goal_info_set_follow_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_set_code_gen_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module29)
	MR_init_entry1(hlds__hlds_llds__goal_info_set_store_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_set_store_map_3_0);
	MR_init_label2(hlds__hlds_llds__goal_info_set_store_map_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_set_store_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_set_store_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_set_store_map_3_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_set_store_map_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_llds__get_details_1_0,
		hlds__hlds_llds__goal_info_set_store_map_3_0_i3);
MR_def_label(hlds__hlds_llds__goal_info_set_store_map_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_set_code_gen_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module30)
	MR_init_entry1(hlds__hlds_llds__goal_info_set_resume_point_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_set_resume_point_3_0);
	MR_init_label2(hlds__hlds_llds__goal_info_set_resume_point_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_set_resume_point'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_set_resume_point_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_set_resume_point_3_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_set_resume_point_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_llds__get_details_1_0,
		hlds__hlds_llds__goal_info_set_resume_point_3_0_i3);
MR_def_label(hlds__hlds_llds__goal_info_set_resume_point_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_set_code_gen_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module31)
	MR_init_entry1(hlds__hlds_llds__goal_info_set_need_across_call_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_set_need_across_call_3_0);
	MR_init_label2(hlds__hlds_llds__goal_info_set_need_across_call_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_set_need_across_call'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_set_need_across_call_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_set_need_across_call_3_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_set_need_across_call_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_llds__get_details_1_0,
		hlds__hlds_llds__goal_info_set_need_across_call_3_0_i3);
MR_def_label(hlds__hlds_llds__goal_info_set_need_across_call_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(1));
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_set_code_gen_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module32)
	MR_init_entry1(hlds__hlds_llds__goal_info_set_need_in_resume_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_set_need_in_resume_3_0);
	MR_init_label2(hlds__hlds_llds__goal_info_set_need_in_resume_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_set_need_in_resume'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_set_need_in_resume_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_set_need_in_resume_3_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_set_need_in_resume_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_llds__get_details_1_0,
		hlds__hlds_llds__goal_info_set_need_in_resume_3_0_i3);
MR_def_label(hlds__hlds_llds__goal_info_set_need_in_resume_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = (MR_Word) MR_tmkword(2, (MR_Word *) MR_sv(1));
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_set_code_gen_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module33)
	MR_init_entry1(hlds__hlds_llds__goal_info_set_need_in_par_conj_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_set_need_in_par_conj_3_0);
	MR_init_label2(hlds__hlds_llds__goal_info_set_need_in_par_conj_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_set_need_in_par_conj'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_set_need_in_par_conj_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_info_set_need_in_par_conj_3_0_i2);
MR_def_label(hlds__hlds_llds__goal_info_set_need_in_par_conj_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_llds__get_details_1_0,
		hlds__hlds_llds__goal_info_set_need_in_par_conj_3_0_i3);
MR_def_label(hlds__hlds_llds__goal_info_set_need_in_par_conj_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_set_code_gen_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module34)
	MR_init_entry1(hlds__hlds_llds__goal_set_follow_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_set_follow_vars_3_0);
	MR_init_label3(hlds__hlds_llds__goal_set_follow_vars_3_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_set_follow_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_set_follow_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_set_follow_vars_3_0_i2);
MR_def_label(hlds__hlds_llds__goal_set_follow_vars_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_llds__get_details_1_0,
		hlds__hlds_llds__goal_set_follow_vars_3_0_i3);
MR_def_label(hlds__hlds_llds__goal_set_follow_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_code_gen_info_3_0,
		hlds__hlds_llds__goal_set_follow_vars_3_0_i6);
MR_def_label(hlds__hlds_llds__goal_set_follow_vars_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module35)
	MR_init_entry1(hlds__hlds_llds__goal_set_resume_point_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_set_resume_point_3_0);
	MR_init_label3(hlds__hlds_llds__goal_set_resume_point_3_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_set_resume_point'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_set_resume_point_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_llds__goal_set_resume_point_3_0_i2);
MR_def_label(hlds__hlds_llds__goal_set_resume_point_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_llds__get_details_1_0,
		hlds__hlds_llds__goal_set_resume_point_3_0_i3);
MR_def_label(hlds__hlds_llds__goal_set_resume_point_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_code_gen_info_3_0,
		hlds__hlds_llds__goal_set_resume_point_3_0_i6);
MR_def_label(hlds__hlds_llds__goal_set_resume_point_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module36)
	MR_init_entry1(hlds__hlds_llds__goal_info_resume_vars_and_loc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__goal_info_resume_vars_and_loc_3_0);
	MR_init_label1(hlds__hlds_llds__goal_info_resume_vars_and_loc_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_resume_vars_and_loc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__goal_info_resume_vars_and_loc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__goal_info_resume_vars_and_loc_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_proceed();
	}
MR_def_label(hlds__hlds_llds__goal_info_resume_vars_and_loc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_llds", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_llds.goal_info_resume_vars_and_loc\'/3", 58);
	MR_r3 = (MR_Word) MR_string_const("no resume point", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__rename_var_4_0);

MR_BEGIN_MODULE(hlds__hlds_llds_module37)
	MR_init_entry1(hlds__hlds_llds__rename_vars_in_var_locn_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__rename_vars_in_var_locn_list_4_0);
	MR_init_label3(hlds__hlds_llds__rename_vars_in_var_locn_list_4_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_vars_in_var_locn_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_llds__rename_vars_in_var_locn_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__rename_vars_in_var_locn_list_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__hlds_llds__rename_vars_in_var_locn_list_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__hlds_llds__rename_vars_in_var_locn_list_4_0_i4);
MR_def_label(hlds__hlds_llds__rename_vars_in_var_locn_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(hlds__hlds_llds__rename_vars_in_var_locn_list_4_0,
		hlds__hlds_llds__rename_vars_in_var_locn_list_4_0_i6);
MR_def_label(hlds__hlds_llds__rename_vars_in_var_locn_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__rename_vars_in_set_of_var_4_0);
MR_decl_entry(map__from_assoc_list_2_0);

MR_BEGIN_MODULE(hlds__hlds_llds_module38)
	MR_init_entry1(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0);
	MR_init_label10(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,2,3,4,5,7,10,11,12,6,15)
	MR_init_label10(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,16,17,19,20,18,23,26,27,28,25)
	MR_init_label4(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,32,31,35,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_vars_in_llds_code_gen_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_set_of_var_4_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i2);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_set_of_var_4_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i3);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_set_of_var_4_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i4);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_set_of_var_4_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i5);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i7);
	}
	MR_r3 = MR_sv(6);
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_GOTO_LAB(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i6);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i10);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__rename_vars_in_var_locn_list_4_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i11);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i12);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	}
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i15);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__rename_vars_in_var_locn_list_4_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i16);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i17);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i19);
	}
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_sv(7) = MR_r1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i18);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(9) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_set_of_var_4_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i20);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r1 = MR_sv(11);
	}
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i23);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(6);
	MR_tfield(0, MR_r1, 5) = MR_sv(7);
	MR_tfield(0, MR_r1, 6) = MR_r4;
	MR_tfield(0, MR_r1, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(14);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i25);
	}
	MR_sv(10) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r4;
	MR_tempr2 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_set_of_var_4_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i26);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_set_of_var_4_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i27);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_set_of_var_4_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i28);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(9);
	MR_tfield(0, MR_r2, 1) = MR_sv(10);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(6);
	MR_tfield(0, MR_r1, 5) = MR_sv(7);
	MR_tfield(0, MR_r1, 6) = MR_sv(8);
	MR_tfield(0, MR_r1, 7) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r2);
	MR_decr_sp_and_return(14);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),3)) {
		MR_GOTO_LAB(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r4;
	MR_r4 = MR_tfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_set_of_var_4_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i32);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(6);
	MR_tfield(0, MR_r1, 5) = MR_sv(7);
	MR_tfield(0, MR_r1, 6) = MR_sv(8);
	MR_tfield(0, MR_r1, 7) = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r4;
	MR_tempr2 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_set_of_var_4_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i35);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_set_of_var_4_0,
		hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0_i36);
MR_def_label(hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(6);
	MR_tfield(0, MR_r1, 5) = MR_sv(7);
	MR_tfield(0, MR_r1, 6) = MR_sv(8);
	MR_tfield(0, MR_r1, 7) = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr1);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module39)
	MR_init_entry1(fn__hlds__hlds_llds__stack_slot_num_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_llds__stack_slot_num_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stack_slot_num'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_llds__stack_slot_num_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module40)
	MR_init_entry1(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0);
	MR_init_label2(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stack_slot_to_abs_locn'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module41)
	MR_init_entry1(fn__hlds__hlds_llds__key_stack_slot_to_abs_locn_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_llds__key_stack_slot_to_abs_locn_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'key_stack_slot_to_abs_locn'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_llds__key_stack_slot_to_abs_locn_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_tailcall_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_llds_module42)
	MR_init_entry1(fn__hlds__hlds_llds__abs_locn_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_llds__abs_locn_to_string_1_0);
	MR_init_label8(fn__hlds__hlds_llds__abs_locn_to_string_1_0,38,5,4,8,7,11,10,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abs_locn_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_llds__abs_locn_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_llds__abs_locn_to_string_1_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("any_reg", 7);
	MR_proceed();
MR_def_label(fn__hlds__hlds_llds__abs_locn_to_string_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_llds__abs_locn_to_string_1_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_llds__abs_locn_to_string_1_0_i5);
MR_def_label(fn__hlds__hlds_llds__abs_locn_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("r", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_llds__abs_locn_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_llds__abs_locn_to_string_1_0_i7);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_llds__abs_locn_to_string_1_0_i8);
MR_def_label(fn__hlds__hlds_llds__abs_locn_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("stackvar", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_llds__abs_locn_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_llds__abs_locn_to_string_1_0_i10);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_llds__abs_locn_to_string_1_0_i11);
MR_def_label(fn__hlds__hlds_llds__abs_locn_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("framevar", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_llds__abs_locn_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_llds__abs_locn_to_string_1_0_i13);
MR_def_label(fn__hlds__hlds_llds__abs_locn_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("parent_stackvar", 15);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__hlds_llds_module43)
	MR_init_entry1(__Unify___hlds__hlds_llds__abs_follow_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_llds__abs_follow_vars_0_0);
	MR_init_label3(__Unify___hlds__hlds_llds__abs_follow_vars_0_0,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_llds__abs_follow_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__abs_follow_vars_0_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__hlds_llds__abs_follow_vars_0_0_i5);
MR_def_label(__Unify___hlds__hlds_llds__abs_follow_vars_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__abs_follow_vars_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___hlds__hlds_llds__abs_follow_vars_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__abs_follow_vars_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__hlds_llds_module44)
	MR_init_entry1(__Compare___hlds__hlds_llds__abs_follow_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_llds__abs_follow_vars_0_0);
	MR_init_label4(__Compare___hlds__hlds_llds__abs_follow_vars_0_0,3,2,6,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_llds__abs_follow_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_follow_vars_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_follow_vars_0_0_i2);
MR_def_label(__Compare___hlds__hlds_llds__abs_follow_vars_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_llds__abs_follow_vars_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__hlds_llds__abs_follow_vars_0_0_i6);
MR_def_label(__Compare___hlds__hlds_llds__abs_follow_vars_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_follow_vars_0_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__hlds_llds__abs_follow_vars_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module45)
	MR_init_entry1(__Unify___hlds__hlds_llds__abs_follow_vars_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_llds__abs_follow_vars_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_llds__abs_follow_vars_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module46)
	MR_init_entry1(__Compare___hlds__hlds_llds__abs_follow_vars_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_llds__abs_follow_vars_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_llds__abs_follow_vars_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module47)
	MR_init_entry1(__Unify___hlds__hlds_llds__abs_locn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_llds__abs_locn_0_0);
	MR_init_label6(__Unify___hlds__hlds_llds__abs_locn_0_0,5,6,8,25,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_llds__abs_locn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__abs_locn_0_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__abs_locn_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__hlds_llds__abs_locn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__abs_locn_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__abs_locn_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__abs_locn_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__abs_locn_0_0_i8);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__abs_locn_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__abs_locn_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__abs_locn_0_0_i10);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__abs_locn_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__abs_locn_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__abs_locn_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__abs_locn_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__abs_locn_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module48)
	MR_init_entry1(__Compare___hlds__hlds_llds__abs_locn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_llds__abs_locn_0_0);
	MR_init_label10(__Compare___hlds__hlds_llds__abs_locn_0_0,66,7,8,9,5,13,14,16,11,20)
	MR_init_label10(__Compare___hlds__hlds_llds__abs_locn_0_0,21,22,18,27,28,29,84,25,33,34)
	MR_init_label3(__Compare___hlds__hlds_llds__abs_locn_0_0,62,35,63)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_llds__abs_locn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i66);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i7);
	}
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i63);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i14);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i63);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i18);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i22);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i63);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i25);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i27);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i62);
	}
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i33);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i35);
	}
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__abs_locn_0_0_i84);
	}
MR_def_label(__Compare___hlds__hlds_llds__abs_locn_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module49)
	MR_init_entry1(__Unify___hlds__hlds_llds__abs_store_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_llds__abs_store_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_llds__abs_store_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module50)
	MR_init_entry1(__Compare___hlds__hlds_llds__abs_store_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_llds__abs_store_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_llds__abs_store_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree_bitset__tree_bitset_1_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(hlds__hlds_llds_module51)
	MR_init_entry1(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_llds__llds_code_gen_details_0_0);
	MR_init_label9(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0,5,7,9,11,13,15,17,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_llds__llds_code_gen_details_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i21);
	}
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i5);
MR_def_label(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i7);
MR_def_label(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i9);
MR_def_label(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i11);
MR_def_label(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_follow_vars);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i13);
MR_def_label(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i15);
MR_def_label(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___hlds__hlds_llds__resume_point_0_0,
		__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i17);
MR_def_label(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(__Unify___hlds__hlds_llds__maybe_need_0_0);
MR_def_label(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__llds_code_gen_details_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree_bitset__tree_bitset_1_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(hlds__hlds_llds_module52)
	MR_init_entry1(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_llds__llds_code_gen_details_0_0);
	MR_init_label10(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0,3,2,6,11,16,21,25,30,34,98)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_llds__llds_code_gen_details_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i2);
MR_def_label(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree_bitset__tree_bitset_1_0,
		__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i6);
MR_def_label(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i98);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___tree_bitset__tree_bitset_1_0,
		__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i11);
MR_def_label(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i98);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___tree_bitset__tree_bitset_1_0,
		__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i16);
MR_def_label(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i98);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___tree_bitset__tree_bitset_1_0,
		__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i21);
MR_def_label(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i98);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_follow_vars);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i25);
MR_def_label(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i98);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i30);
MR_def_label(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i98);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___hlds__hlds_llds__resume_point_0_0,
		__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i34);
MR_def_label(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0_i98);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___hlds__hlds_llds__maybe_need_0_0);
MR_def_label(__Compare___hlds__hlds_llds__llds_code_gen_details_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module53)
	MR_init_entry1(__Unify___hlds__hlds_llds__maybe_need_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_llds__maybe_need_0_0);
	MR_init_label5(__Unify___hlds__hlds_llds__maybe_need_0_0,5,6,26,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__hlds_llds__maybe_need_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__maybe_need_0_0_i26);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__maybe_need_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__hlds_llds__maybe_need_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__maybe_need_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__maybe_need_0_0_i1);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 1);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_llds__need_across_call_0_0);
MR_def_label(__Unify___hlds__hlds_llds__maybe_need_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__maybe_need_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__maybe_need_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_llds__need_in_par_conj_0_0);
MR_def_label(__Unify___hlds__hlds_llds__maybe_need_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__maybe_need_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__maybe_need_0_0_i1);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 2);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_llds__need_in_resume_0_0);
MR_def_label(__Unify___hlds__hlds_llds__maybe_need_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module54)
	MR_init_entry1(__Compare___hlds__hlds_llds__maybe_need_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_llds__maybe_need_0_0);
	MR_init_label10(__Compare___hlds__hlds_llds__maybe_need_0_0,46,7,8,5,12,13,10,18,19,16)
	MR_init_label5(__Compare___hlds__hlds_llds__maybe_need_0_0,23,42,24,43,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__hlds_llds__maybe_need_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i46);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i7);
	}
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i43);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i13);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 1);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_llds__need_across_call_0_0);
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i43);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i16);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i42);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_llds__need_in_par_conj_0_0);
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i24);
	}
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__maybe_need_0_0_i25);
	}
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__maybe_need_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 2);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_llds__need_in_resume_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module55)
	MR_init_entry1(__Unify___hlds__hlds_llds__need_across_call_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_llds__need_across_call_0_0);
	MR_init_label4(__Unify___hlds__hlds_llds__need_across_call_0_0,5,7,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_llds__need_across_call_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__need_across_call_0_0_i11);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
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
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		__Unify___hlds__hlds_llds__need_across_call_0_0_i5);
MR_def_label(__Unify___hlds__hlds_llds__need_across_call_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__need_across_call_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		__Unify___hlds__hlds_llds__need_across_call_0_0_i7);
MR_def_label(__Unify___hlds__hlds_llds__need_across_call_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__need_across_call_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___tree_bitset__tree_bitset_1_0);
MR_def_label(__Unify___hlds__hlds_llds__need_across_call_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__need_across_call_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module56)
	MR_init_entry1(__Compare___hlds__hlds_llds__need_across_call_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_llds__need_across_call_0_0);
	MR_init_label5(__Compare___hlds__hlds_llds__need_across_call_0_0,3,2,6,11,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_llds__need_across_call_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__need_across_call_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_llds__need_across_call_0_0_i2);
MR_def_label(__Compare___hlds__hlds_llds__need_across_call_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_llds__need_across_call_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree_bitset__tree_bitset_1_0,
		__Compare___hlds__hlds_llds__need_across_call_0_0_i6);
MR_def_label(__Compare___hlds__hlds_llds__need_across_call_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__need_across_call_0_0_i41);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___tree_bitset__tree_bitset_1_0,
		__Compare___hlds__hlds_llds__need_across_call_0_0_i11);
MR_def_label(__Compare___hlds__hlds_llds__need_across_call_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__need_across_call_0_0_i41);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___tree_bitset__tree_bitset_1_0);
MR_def_label(__Compare___hlds__hlds_llds__need_across_call_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module57)
	MR_init_entry1(__Unify___hlds__hlds_llds__need_in_par_conj_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_llds__need_in_par_conj_0_0);
	MR_init_label1(__Unify___hlds__hlds_llds__need_in_par_conj_0_0,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_llds__need_in_par_conj_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__need_in_par_conj_0_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree_bitset__tree_bitset_1_0);
MR_def_label(__Unify___hlds__hlds_llds__need_in_par_conj_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module58)
	MR_init_entry1(__Compare___hlds__hlds_llds__need_in_par_conj_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_llds__need_in_par_conj_0_0);
	MR_init_label2(__Compare___hlds__hlds_llds__need_in_par_conj_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_llds__need_in_par_conj_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__need_in_par_conj_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_llds__need_in_par_conj_0_0_i2);
MR_def_label(__Compare___hlds__hlds_llds__need_in_par_conj_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_llds__need_in_par_conj_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree_bitset__tree_bitset_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module59)
	MR_init_entry1(__Unify___hlds__hlds_llds__need_in_resume_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_llds__need_in_resume_0_0);
	MR_init_label3(__Unify___hlds__hlds_llds__need_in_resume_0_0,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_llds__need_in_resume_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__need_in_resume_0_0_i9);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__need_in_resume_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		__Unify___hlds__hlds_llds__need_in_resume_0_0_i5);
MR_def_label(__Unify___hlds__hlds_llds__need_in_resume_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__need_in_resume_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___tree_bitset__tree_bitset_1_0);
MR_def_label(__Unify___hlds__hlds_llds__need_in_resume_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__need_in_resume_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module60)
	MR_init_entry1(__Compare___hlds__hlds_llds__need_in_resume_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_llds__need_in_resume_0_0);
	MR_init_label5(__Compare___hlds__hlds_llds__need_in_resume_0_0,3,2,5,10,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_llds__need_in_resume_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__need_in_resume_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_llds__need_in_resume_0_0_i2);
MR_def_label(__Compare___hlds__hlds_llds__need_in_resume_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_llds__need_in_resume_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_llds__need_in_resume_0_0_i5);
MR_def_label(__Compare___hlds__hlds_llds__need_in_resume_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__need_in_resume_0_0_i40);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___tree_bitset__tree_bitset_1_0,
		__Compare___hlds__hlds_llds__need_in_resume_0_0_i10);
MR_def_label(__Compare___hlds__hlds_llds__need_in_resume_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__need_in_resume_0_0_i40);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___tree_bitset__tree_bitset_1_0);
MR_def_label(__Compare___hlds__hlds_llds__need_in_resume_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module61)
	MR_init_entry1(__Unify___hlds__hlds_llds__resume_locs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_llds__resume_locs_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_llds__resume_locs_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module62)
	MR_init_entry1(__Compare___hlds__hlds_llds__resume_locs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_llds__resume_locs_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_llds__resume_locs_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module63)
	MR_init_entry1(__Unify___hlds__hlds_llds__resume_point_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_llds__resume_point_0_0);
	MR_init_label4(__Unify___hlds__hlds_llds__resume_point_0_0,13,5,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_llds__resume_point_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__resume_point_0_0_i13);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__resume_point_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__hlds_llds__resume_point_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__resume_point_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__resume_point_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		__Unify___hlds__hlds_llds__resume_point_0_0_i8);
MR_def_label(__Unify___hlds__hlds_llds__resume_point_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__resume_point_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___hlds__hlds_llds__resume_point_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module64)
	MR_init_entry1(__Compare___hlds__hlds_llds__resume_point_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_llds__resume_point_0_0);
	MR_init_label6(__Compare___hlds__hlds_llds__resume_point_0_0,25,7,5,9,12,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_llds__resume_point_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__resume_point_0_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__resume_point_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__resume_point_0_0_i7);
	}
MR_def_label(__Compare___hlds__hlds_llds__resume_point_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__resume_point_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__resume_point_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__resume_point_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__resume_point_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree_bitset__tree_bitset_1_0,
		__Compare___hlds__hlds_llds__resume_point_0_0_i12);
MR_def_label(__Compare___hlds__hlds_llds__resume_point_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__resume_point_0_0_i17);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__hlds_llds__resume_point_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module65)
	MR_init_entry1(__Unify___hlds__hlds_llds__stack_slot_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_llds__stack_slot_0_0);
	MR_init_label4(__Unify___hlds__hlds_llds__stack_slot_0_0,5,17,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_llds__stack_slot_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__stack_slot_0_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__stack_slot_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__stack_slot_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__hlds_llds__stack_slot_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__stack_slot_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__stack_slot_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__stack_slot_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__stack_slot_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_llds__stack_slot_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_llds__stack_slot_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module66)
	MR_init_entry1(__Compare___hlds__hlds_llds__stack_slot_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_llds__stack_slot_0_0);
	MR_init_label10(__Compare___hlds__hlds_llds__stack_slot_0_0,3,2,7,5,12,35,10,27,16,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_llds__stack_slot_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__stack_slot_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_llds__stack_slot_0_0_i2);
MR_def_label(__Compare___hlds__hlds_llds__stack_slot_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_llds__stack_slot_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__stack_slot_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__stack_slot_0_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__hlds_llds__stack_slot_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__stack_slot_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__stack_slot_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__stack_slot_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__stack_slot_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__stack_slot_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__stack_slot_0_0_i27);
	}
MR_def_label(__Compare___hlds__hlds_llds__stack_slot_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__hlds_llds__stack_slot_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__stack_slot_0_0_i16);
	}
MR_def_label(__Compare___hlds__hlds_llds__stack_slot_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_llds__stack_slot_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_llds__stack_slot_0_0_i35);
	}
MR_def_label(__Compare___hlds__hlds_llds__stack_slot_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module67)
	MR_init_entry1(__Unify___hlds__hlds_llds__stack_slots_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_llds__stack_slots_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_llds__stack_slots_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module68)
	MR_init_entry1(__Compare___hlds__hlds_llds__stack_slots_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_llds__stack_slots_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_llds__stack_slots_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_llds_module69)
	MR_init_entry1(fn__f_104_108_100_115_95_95_104_108_100_115_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_104_108_100_115_95_95_104_108_100_115_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_init_label2(fn__f_104_108_100_115_95_95_104_108_100_115_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__key_stack_slot_to_abs_locn__[1, 2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_104_108_100_115_95_95_104_108_100_115_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_llds_maybe_bunch_0(void)
{
	hlds__hlds_llds_module0();
	hlds__hlds_llds_module1();
	hlds__hlds_llds_module2();
	hlds__hlds_llds_module3();
	hlds__hlds_llds_module4();
	hlds__hlds_llds_module5();
	hlds__hlds_llds_module6();
	hlds__hlds_llds_module7();
	hlds__hlds_llds_module8();
	hlds__hlds_llds_module9();
	hlds__hlds_llds_module10();
	hlds__hlds_llds_module11();
	hlds__hlds_llds_module12();
	hlds__hlds_llds_module13();
	hlds__hlds_llds_module14();
	hlds__hlds_llds_module15();
	hlds__hlds_llds_module16();
	hlds__hlds_llds_module17();
	hlds__hlds_llds_module18();
	hlds__hlds_llds_module19();
	hlds__hlds_llds_module20();
	hlds__hlds_llds_module21();
	hlds__hlds_llds_module22();
	hlds__hlds_llds_module23();
	hlds__hlds_llds_module24();
	hlds__hlds_llds_module25();
	hlds__hlds_llds_module26();
	hlds__hlds_llds_module27();
	hlds__hlds_llds_module28();
	hlds__hlds_llds_module29();
	hlds__hlds_llds_module30();
	hlds__hlds_llds_module31();
	hlds__hlds_llds_module32();
	hlds__hlds_llds_module33();
	hlds__hlds_llds_module34();
	hlds__hlds_llds_module35();
	hlds__hlds_llds_module36();
	hlds__hlds_llds_module37();
	hlds__hlds_llds_module38();
	hlds__hlds_llds_module39();
}

static void mercury__hlds__hlds_llds_maybe_bunch_1(void)
{
	hlds__hlds_llds_module40();
	hlds__hlds_llds_module41();
	hlds__hlds_llds_module42();
	hlds__hlds_llds_module43();
	hlds__hlds_llds_module44();
	hlds__hlds_llds_module45();
	hlds__hlds_llds_module46();
	hlds__hlds_llds_module47();
	hlds__hlds_llds_module48();
	hlds__hlds_llds_module49();
	hlds__hlds_llds_module50();
	hlds__hlds_llds_module51();
	hlds__hlds_llds_module52();
	hlds__hlds_llds_module53();
	hlds__hlds_llds_module54();
	hlds__hlds_llds_module55();
	hlds__hlds_llds_module56();
	hlds__hlds_llds_module57();
	hlds__hlds_llds_module58();
	hlds__hlds_llds_module59();
	hlds__hlds_llds_module60();
	hlds__hlds_llds_module61();
	hlds__hlds_llds_module62();
	hlds__hlds_llds_module63();
	hlds__hlds_llds_module64();
	hlds__hlds_llds_module65();
	hlds__hlds_llds_module66();
	hlds__hlds_llds_module67();
	hlds__hlds_llds_module68();
	hlds__hlds_llds_module69();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_llds__init(void);
void mercury__hlds__hlds_llds__init_type_tables(void);
void mercury__hlds__hlds_llds__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_llds__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_llds__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__hlds_llds__init_threadscope_string_table(void);
#endif

void mercury__hlds__hlds_llds__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_llds_maybe_bunch_0();
	mercury__hlds__hlds_llds_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_llds__type_ctor_info_abs_follow_vars_0,
		hlds__hlds_llds__abs_follow_vars_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_llds__type_ctor_info_abs_follow_vars_map_0,
		hlds__hlds_llds__abs_follow_vars_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0,
		hlds__hlds_llds__abs_locn_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_llds__type_ctor_info_abs_store_map_0,
		hlds__hlds_llds__abs_store_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_llds__type_ctor_info_llds_code_gen_details_0,
		hlds__hlds_llds__llds_code_gen_details_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_llds__type_ctor_info_maybe_need_0,
		hlds__hlds_llds__maybe_need_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_llds__type_ctor_info_need_across_call_0,
		hlds__hlds_llds__need_across_call_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_llds__type_ctor_info_need_in_par_conj_0,
		hlds__hlds_llds__need_in_par_conj_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_llds__type_ctor_info_need_in_resume_0,
		hlds__hlds_llds__need_in_resume_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_llds__type_ctor_info_resume_locs_0,
		hlds__hlds_llds__resume_locs_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_llds__type_ctor_info_resume_point_0,
		hlds__hlds_llds__resume_point_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0,
		hlds__hlds_llds__stack_slot_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_llds__type_ctor_info_stack_slots_0,
		hlds__hlds_llds__stack_slots_0_0);
	mercury__hlds__hlds_llds__init_debugger();
}

void mercury__hlds__hlds_llds__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_llds__type_ctor_info_abs_follow_vars_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_llds__type_ctor_info_abs_follow_vars_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_llds__type_ctor_info_abs_store_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_llds__type_ctor_info_llds_code_gen_details_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_llds__type_ctor_info_maybe_need_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_llds__type_ctor_info_need_across_call_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_llds__type_ctor_info_need_in_par_conj_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_llds__type_ctor_info_need_in_resume_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_llds__type_ctor_info_resume_locs_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_llds__type_ctor_info_resume_point_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_llds__type_ctor_info_stack_slots_0);
	}
}


void mercury__hlds__hlds_llds__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_llds__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__hlds_llds);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_llds__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__hlds_llds__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
