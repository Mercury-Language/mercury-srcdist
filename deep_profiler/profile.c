/*
** Automatically generated from `profile.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__profile__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 124 "../library/array.int"
#include "array.mh"

#line 27 "profile.c"
#line 130 "../library/io.int2"
#include "io.mh"

#line 31 "profile.c"
#line 136 "../library/io.int2"
#include "string.mh"

#line 35 "profile.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "profile.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 43 "profile.c"
#line 44 "profile.c"
#include "profile.mh"

#line 47 "profile.c"
#line 48 "profile.c"
#ifndef PROFILE_DECL_GUARD
#define PROFILE_DECL_GUARD

#line 52 "profile.c"
#line 53 "profile.c"

#endif
#line 56 "profile.c"


struct mercury_type_0 {
	MR_Integer f1;
	MR_String f2[3];
	MR_Integer f3[2];
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
static const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_profile__type_ctor_info_profile_stats_0,
	mercury_data_profile__type_ctor_info_proc_statics_0,
	mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	mercury_data_profile__type_ctor_info_proc_static_0,
	mercury_data_profile__type_ctor_info_proc_id_0,
	mercury_data_profile__type_ctor_info_proc_dynamics_0,
	mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0,
	mercury_data_profile__type_ctor_info_proc_dynamic_0,
	mercury_data_profile__type_ctor_info_pred_or_func_0,
	mercury_data_profile__type_ctor_info_module_data_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_profile__type_ctor_info_is_zeroed_0,
	mercury_data_profile__type_ctor_info_initial_deep_0,
	mercury_data_profile__type_ctor_info_deep_0,
	mercury_data_profile__type_ctor_info_compensation_table_0,
	mercury_data_profile__type_ctor_info_clique_ptr_0,
	mercury_data_profile__type_ctor_info_call_site_statics_0,
	mercury_data_profile__type_ctor_info_call_site_static_ptr_0,
	mercury_data_profile__type_ctor_info_call_site_static_map_0,
	mercury_data_profile__type_ctor_info_call_site_static_0,
	mercury_data_profile__type_ctor_info_call_site_kind_and_callee_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_profile__type_ctor_info_call_site_kind_0,
	mercury_data_profile__type_ctor_info_call_site_dynamics_0,
	mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0,
	mercury_data_profile__type_ctor_info_call_site_dynamic_0,
	mercury_data_profile__type_ctor_info_call_site_caller_0,
	mercury_data_profile__type_ctor_info_call_site_callees_0,
	mercury_data_profile__type_ctor_info_call_site_array_slot_0;
MR_decl_label1(profile__deep_extract_csdptr_callee_3_0, 2)
MR_decl_label1(profile__deep_extract_csdptr_caller_3_0, 2)
MR_decl_label1(profile__deep_lookup_csd_own_3_0, 2)
MR_decl_label1(profile__deep_lookup_proc_dynamic_sites_3_0, 2)
MR_decl_label2(profile__deep_update_csd_comp_table_4_0, 2,3)
MR_decl_label2(profile__deep_update_csd_desc_4_0, 2,3)
MR_decl_label2(profile__deep_update_pd_comp_table_4_0, 2,3)
MR_decl_label2(profile__deep_update_pd_desc_4_0, 2,3)
MR_decl_label2(profile__deep_update_pd_own_4_0, 2,3)
MR_decl_label1(profile__extract_csdptr_callee_3_0, 2)
MR_decl_label1(profile__extract_csdptr_caller_3_0, 2)
MR_decl_label2(profile__lookup_call_site_calls_3_0, 3,2)
MR_decl_label2(profile__lookup_call_site_dynamics_3_0, 3,2)
MR_decl_label2(profile__lookup_call_site_static_map_3_0, 3,2)
MR_decl_label2(profile__lookup_call_site_statics_3_0, 3,2)
MR_decl_label2(profile__lookup_clique_index_3_0, 3,2)
MR_decl_label2(profile__lookup_clique_maybe_child_3_0, 3,2)
MR_decl_label2(profile__lookup_clique_members_3_0, 3,2)
MR_decl_label2(profile__lookup_clique_parents_3_0, 3,2)
MR_decl_label2(profile__lookup_csd_comp_table_3_0, 3,2)
MR_decl_label2(profile__lookup_csd_desc_3_0, 3,2)
MR_decl_label2(profile__lookup_csd_own_3_0, 3,2)
MR_decl_label2(profile__lookup_css_desc_3_0, 3,2)
MR_decl_label2(profile__lookup_css_own_3_0, 3,2)
MR_decl_label2(profile__lookup_pd_comp_table_3_0, 3,2)
MR_decl_label2(profile__lookup_pd_desc_3_0, 3,2)
MR_decl_label2(profile__lookup_pd_own_3_0, 3,2)
MR_decl_label2(profile__lookup_proc_callers_3_0, 3,2)
MR_decl_label2(profile__lookup_proc_dynamics_3_0, 3,2)
MR_decl_label2(profile__lookup_proc_statics_3_0, 3,2)
MR_decl_label2(profile__lookup_ps_desc_3_0, 3,2)
MR_decl_label2(profile__lookup_ps_own_3_0, 3,2)
MR_decl_label1(profile__valid_call_site_dynamic_ptr_2_0, 1)
MR_decl_label1(profile__valid_call_site_dynamic_ptr_raw_2_0, 1)
MR_decl_label1(profile__valid_call_site_static_ptr_2_0, 1)
MR_decl_label1(profile__valid_call_site_static_ptr_raw_2_0, 1)
MR_decl_label1(profile__valid_clique_ptr_2_0, 1)
MR_decl_label1(profile__valid_proc_dynamic_ptr_2_0, 1)
MR_decl_label1(profile__valid_proc_dynamic_ptr_raw_2_0, 1)
MR_decl_label1(profile__valid_proc_static_ptr_2_0, 1)
MR_decl_label1(profile__valid_proc_static_ptr_raw_2_0, 1)
MR_decl_label2(fn__profile__root_total_info_1_0, 2,3)
MR_decl_label2(__Unify___profile__call_site_array_slot_0_0, 3,1)
MR_decl_label1(__Unify___profile__call_site_dynamic_0_0, 1)
MR_decl_label2(__Unify___profile__call_site_kind_and_callee_0_0, 4,1)
MR_decl_label2(__Unify___profile__call_site_static_0_0, 2,1)
MR_decl_label8(__Unify___profile__deep_0_0, 2,4,6,8,10,12,14,16)
MR_decl_label8(__Unify___profile__deep_0_0, 18,20,22,24,26,28,30,32)
MR_decl_label6(__Unify___profile__deep_0_0, 34,36,38,40,42,1)
MR_decl_label4(__Unify___profile__initial_deep_0_0, 2,4,6,1)
MR_decl_label3(__Unify___profile__module_data_0_0, 2,4,1)
MR_decl_label1(__Unify___profile__proc_dynamic_0_0, 1)
MR_decl_label2(__Unify___profile__proc_id_0_0, 3,1)
MR_decl_label3(__Unify___profile__proc_static_0_0, 2,4,1)
MR_decl_label1(__Unify___profile__profile_stats_0_0, 1)
MR_decl_label5(__Compare___profile__call_site_array_slot_0_0, 5,3,40,10,37)
MR_decl_label3(__Compare___profile__call_site_dynamic_0_0, 3,7,12)
MR_decl_label8(__Compare___profile__call_site_kind_and_callee_0_0, 51,19,12,5,8,4,67,144)
MR_decl_label2(__Compare___profile__call_site_kind_and_callee_0_0, 39,138)
MR_decl_label5(__Compare___profile__call_site_static_0_0, 3,7,11,15,22)
MR_decl_label8(__Compare___profile__deep_0_0, 3,7,11,15,19,23,27,31)
MR_decl_label8(__Compare___profile__deep_0_0, 35,39,43,47,51,55,59,63)
MR_decl_label8(__Compare___profile__deep_0_0, 67,71,75,79,83,87,91,95)
MR_decl_label2(__Compare___profile__deep_0_0, 99,127)
MR_decl_label6(__Compare___profile__initial_deep_0_0, 3,7,11,15,19,27)
MR_decl_label3(__Compare___profile__module_data_0_0, 3,7,12)
MR_decl_label2(__Compare___profile__proc_dynamic_0_0, 3,7)
MR_decl_label8(__Compare___profile__proc_id_0_0, 7,11,15,19,23,5,3,121)
MR_decl_label6(__Compare___profile__proc_id_0_0, 35,39,43,47,51,118)
MR_decl_label8(__Compare___profile__proc_static_0_0, 3,7,11,15,19,23,27,31)
MR_decl_label1(__Compare___profile__proc_static_0_0, 42)
MR_decl_label8(__Compare___profile__profile_stats_0_0, 3,7,11,15,19,23,27,31)
MR_decl_label2(__Compare___profile__profile_stats_0_0, 35,47)
MR_def_extern_entry(fn__profile__decl_module_1_0)
MR_def_extern_entry(fn__profile__dummy_proc_id_0_0)
MR_def_extern_entry(fn__profile__main_parent_proc_id_0_0)
MR_def_extern_entry(fn__profile__dummy_proc_dynamic_ptr_0_0)
MR_def_extern_entry(fn__profile__dummy_proc_static_ptr_0_0)
MR_def_extern_entry(fn__profile__dummy_call_site_dynamic_ptr_0_0)
MR_def_extern_entry(fn__profile__dummy_call_site_static_ptr_0_0)
MR_def_extern_entry(fn__profile__dummy_clique_ptr_0_0)
MR_def_extern_entry(profile__valid_clique_ptr_2_0)
MR_def_extern_entry(profile__valid_proc_dynamic_ptr_2_0)
MR_def_extern_entry(profile__valid_proc_static_ptr_2_0)
MR_def_extern_entry(profile__valid_call_site_dynamic_ptr_2_0)
MR_def_extern_entry(profile__valid_call_site_static_ptr_2_0)
MR_def_extern_entry(profile__valid_proc_dynamic_ptr_raw_2_0)
MR_def_extern_entry(profile__valid_proc_static_ptr_raw_2_0)
MR_def_extern_entry(profile__valid_call_site_dynamic_ptr_raw_2_0)
MR_def_extern_entry(profile__valid_call_site_static_ptr_raw_2_0)
MR_def_extern_entry(profile__lookup_call_site_dynamics_3_0)
MR_def_extern_entry(profile__lookup_call_site_statics_3_0)
MR_def_extern_entry(profile__lookup_proc_dynamics_3_0)
MR_def_extern_entry(profile__lookup_proc_statics_3_0)
MR_def_extern_entry(profile__lookup_clique_index_3_0)
MR_def_extern_entry(profile__lookup_clique_members_3_0)
MR_def_extern_entry(profile__lookup_clique_parents_3_0)
MR_def_extern_entry(profile__lookup_clique_maybe_child_3_0)
MR_def_extern_entry(profile__lookup_proc_callers_3_0)
MR_def_extern_entry(profile__lookup_call_site_static_map_3_0)
MR_def_extern_entry(profile__lookup_call_site_calls_3_0)
MR_def_extern_entry(profile__lookup_pd_own_3_0)
MR_def_extern_entry(profile__lookup_pd_desc_3_0)
MR_def_extern_entry(profile__lookup_csd_own_3_0)
MR_def_extern_entry(profile__lookup_csd_desc_3_0)
MR_def_extern_entry(profile__lookup_ps_own_3_0)
MR_def_extern_entry(profile__lookup_ps_desc_3_0)
MR_def_extern_entry(profile__lookup_css_own_3_0)
MR_def_extern_entry(profile__lookup_css_desc_3_0)
MR_def_extern_entry(profile__lookup_pd_comp_table_3_0)
MR_def_extern_entry(profile__lookup_csd_comp_table_3_0)
MR_def_extern_entry(profile__deep_lookup_call_site_dynamics_3_0)
MR_def_extern_entry(profile__deep_lookup_call_site_statics_3_0)
MR_def_extern_entry(profile__deep_lookup_proc_dynamics_3_0)
MR_def_extern_entry(profile__deep_lookup_proc_statics_3_0)
MR_def_extern_entry(profile__deep_lookup_clique_index_3_0)
MR_def_extern_entry(profile__deep_lookup_clique_members_3_0)
MR_def_extern_entry(profile__deep_lookup_clique_parents_3_0)
MR_def_extern_entry(profile__deep_lookup_clique_maybe_child_3_0)
MR_def_extern_entry(profile__deep_lookup_proc_callers_3_0)
MR_def_extern_entry(profile__deep_lookup_call_site_static_map_3_0)
MR_def_extern_entry(profile__deep_lookup_call_site_calls_3_0)
MR_def_extern_entry(profile__deep_lookup_proc_dynamic_sites_3_0)
MR_def_extern_entry(profile__deep_lookup_pd_comp_table_3_0)
MR_def_extern_entry(profile__deep_lookup_csd_comp_table_3_0)
MR_def_extern_entry(profile__deep_lookup_pd_own_3_0)
MR_def_extern_entry(profile__deep_lookup_pd_desc_3_0)
MR_def_extern_entry(profile__deep_lookup_csd_own_3_0)
MR_def_extern_entry(profile__deep_lookup_csd_desc_3_0)
MR_def_extern_entry(profile__deep_lookup_ps_own_3_0)
MR_def_extern_entry(profile__deep_lookup_ps_desc_3_0)
MR_def_extern_entry(profile__deep_lookup_css_own_3_0)
MR_def_extern_entry(profile__deep_lookup_css_desc_3_0)
MR_def_extern_entry(profile__update_call_site_dynamics_4_0)
MR_def_extern_entry(profile__update_call_site_statics_4_0)
MR_def_extern_entry(profile__update_proc_dynamics_4_0)
MR_def_extern_entry(profile__update_proc_statics_4_0)
MR_def_extern_entry(profile__update_proc_callers_4_0)
MR_def_extern_entry(profile__update_call_site_static_map_4_0)
MR_def_extern_entry(profile__update_ps_own_4_0)
MR_def_extern_entry(profile__update_ps_desc_4_0)
MR_def_extern_entry(profile__update_css_own_4_0)
MR_def_extern_entry(profile__update_css_desc_4_0)
MR_def_extern_entry(profile__deep_update_csd_desc_4_0)
MR_def_extern_entry(profile__deep_update_pd_desc_4_0)
MR_def_extern_entry(profile__deep_update_pd_own_4_0)
MR_def_extern_entry(profile__deep_update_pd_comp_table_4_0)
MR_def_extern_entry(profile__deep_update_csd_comp_table_4_0)
MR_def_extern_entry(profile__extract_pd_sites_2_0)
MR_def_extern_entry(profile__extract_csd_caller_2_0)
MR_def_extern_entry(profile__extract_csd_callee_2_0)
MR_def_extern_entry(profile__extract_csdptr_caller_3_0)
MR_def_extern_entry(profile__extract_csdptr_callee_3_0)
MR_def_extern_entry(profile__extract_ticks_per_sec_2_0)
MR_def_extern_entry(profile__extract_instrument_quanta_2_0)
MR_def_extern_entry(profile__extract_user_quanta_2_0)
MR_def_extern_entry(profile__extract_num_callseqs_2_0)
MR_def_extern_entry(profile__extract_max_css_2_0)
MR_def_extern_entry(profile__extract_max_ps_2_0)
MR_def_extern_entry(profile__extract_max_csd_2_0)
MR_def_extern_entry(profile__extract_max_pd_2_0)
MR_def_extern_entry(profile__extract_init_call_site_dynamics_2_0)
MR_def_extern_entry(profile__extract_init_call_site_statics_2_0)
MR_def_extern_entry(profile__extract_init_proc_dynamics_2_0)
MR_def_extern_entry(profile__extract_init_proc_statics_2_0)
MR_def_extern_entry(profile__extract_init_root_2_0)
MR_def_extern_entry(profile__deep_extract_csdptr_caller_3_0)
MR_def_extern_entry(profile__deep_extract_csdptr_callee_3_0)
MR_def_extern_entry(fn__profile__wrap_proc_static_ptr_1_0)
MR_def_extern_entry(fn__profile__root_total_info_1_0)
MR_def_extern_entry(fn__profile__root_desc_info_1_0)
MR_def_extern_entry(fn__profile__root_own_info_1_0)
MR_def_extern_entry(__Unify___profile__call_site_array_slot_0_0)
MR_def_extern_entry(__Compare___profile__call_site_array_slot_0_0)
MR_def_extern_entry(__Unify___profile__call_site_callees_0_0)
MR_def_extern_entry(__Compare___profile__call_site_callees_0_0)
MR_def_extern_entry(__Unify___profile__call_site_caller_0_0)
MR_def_extern_entry(__Compare___profile__call_site_caller_0_0)
MR_def_extern_entry(__Unify___profile__call_site_dynamic_0_0)
MR_def_extern_entry(__Compare___profile__call_site_dynamic_0_0)
MR_def_extern_entry(__Unify___profile__call_site_dynamic_ptr_0_0)
MR_def_extern_entry(__Compare___profile__call_site_dynamic_ptr_0_0)
MR_def_extern_entry(__Unify___profile__call_site_dynamics_0_0)
MR_def_extern_entry(__Compare___profile__call_site_dynamics_0_0)
MR_def_extern_entry(__Unify___profile__call_site_kind_0_0)
MR_def_extern_entry(__Compare___profile__call_site_kind_0_0)
MR_def_extern_entry(__Unify___profile__call_site_kind_and_callee_0_0)
MR_def_extern_entry(__Compare___profile__call_site_kind_and_callee_0_0)
MR_def_extern_entry(__Unify___profile__call_site_static_0_0)
MR_def_extern_entry(__Compare___profile__call_site_static_0_0)
MR_def_extern_entry(__Unify___profile__call_site_static_map_0_0)
MR_def_extern_entry(__Compare___profile__call_site_static_map_0_0)
MR_def_extern_entry(__Unify___profile__call_site_static_ptr_0_0)
MR_def_extern_entry(__Compare___profile__call_site_static_ptr_0_0)
MR_def_extern_entry(__Unify___profile__call_site_statics_0_0)
MR_def_extern_entry(__Compare___profile__call_site_statics_0_0)
MR_def_extern_entry(__Unify___profile__clique_ptr_0_0)
MR_def_extern_entry(__Compare___profile__clique_ptr_0_0)
MR_def_extern_entry(__Unify___profile__compensation_table_0_0)
MR_def_extern_entry(__Compare___profile__compensation_table_0_0)
MR_def_extern_entry(__Unify___profile__deep_0_0)
MR_def_extern_entry(__Compare___profile__deep_0_0)
MR_def_extern_entry(__Unify___profile__initial_deep_0_0)
MR_def_extern_entry(__Compare___profile__initial_deep_0_0)
MR_def_extern_entry(__Unify___profile__is_zeroed_0_0)
MR_def_extern_entry(__Compare___profile__is_zeroed_0_0)
MR_def_extern_entry(__Unify___profile__module_data_0_0)
MR_def_extern_entry(__Compare___profile__module_data_0_0)
MR_def_extern_entry(__Unify___profile__pred_or_func_0_0)
MR_def_extern_entry(__Compare___profile__pred_or_func_0_0)
MR_def_extern_entry(__Unify___profile__proc_dynamic_0_0)
MR_def_extern_entry(__Compare___profile__proc_dynamic_0_0)
MR_def_extern_entry(__Unify___profile__proc_dynamic_ptr_0_0)
MR_def_extern_entry(__Compare___profile__proc_dynamic_ptr_0_0)
MR_def_extern_entry(__Unify___profile__proc_dynamics_0_0)
MR_def_extern_entry(__Compare___profile__proc_dynamics_0_0)
MR_def_extern_entry(__Unify___profile__proc_id_0_0)
MR_def_extern_entry(__Compare___profile__proc_id_0_0)
MR_def_extern_entry(__Unify___profile__proc_static_0_0)
MR_def_extern_entry(__Compare___profile__proc_static_0_0)
MR_def_extern_entry(__Unify___profile__proc_static_ptr_0_0)
MR_def_extern_entry(__Compare___profile__proc_static_ptr_0_0)
MR_def_extern_entry(__Unify___profile__proc_statics_0_0)
MR_def_extern_entry(__Compare___profile__proc_statics_0_0)
MR_def_extern_entry(__Unify___profile__profile_stats_0_0)
MR_def_extern_entry(__Compare___profile__profile_stats_0_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
0,
{
MR_string_const("unknown", 7),
MR_string_const("unknown", 7),
MR_string_const("unknown", 7)
},
{
-1,
-1
}
},
{
0,
{
MR_string_const("mercury_runtime", 15),
MR_string_const("mercury_runtime", 15),
MR_string_const("main_parent", 11)
},
{
0,
0
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
static const struct mercury_type_1 mercury_common_1[6] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(profile, clique_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(measurements, own_prof_info)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_TAG_COMMON(0,2,1)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,1,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_profile__field_types_profile_stats_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_profile__field_names_profile_stats_0_0[] = {
	"max_csd",
	"max_css",
	"max_pd",
	"max_ps",
	"ticks_per_sec",
	"instrument_quanta",
	"user_quanta",
	"num_callseqs",
	"word_size",
	"canonical"
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_profile_stats_0_0 = {
	"profile_stats",
	10,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profile__field_types_profile_stats_0_0,
	mercury_data_profile__field_names_profile_stats_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_profile_stats_0_0[] = {
	&mercury_data_profile__du_functor_desc_profile_stats_0_0

};

const MR_DuPtagLayout mercury_data_profile__du_ptag_ordered_profile_stats_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profile__du_stag_ordered_profile_stats_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profile__du_name_ordered_profile_stats_0[] = {
	&mercury_data_profile__du_functor_desc_profile_stats_0_0
};

const MR_Integer mercury_data_profile__functor_number_map_profile_stats_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_profile_stats_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__profile_stats_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__profile_stats_0_0)),
	"profile",
	"profile_stats",
	{ (void *)mercury_data_profile__du_name_ordered_profile_stats_0 },
	{ (void *)mercury_data_profile__du_ptag_ordered_profile_stats_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_profile_stats_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1profile__type_ctor_info_proc_static_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_proc_static_0
}};

const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_statics_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__proc_statics_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__proc_statics_0_0)),
	"profile",
	"proc_statics",
	{ 0 },
	{ (void *)&mercury_data_array__ti_array_1profile__type_ctor_info_proc_static_0 },
	-1,
	0,
	NULL
};

static const MR_NotagFunctorDesc mercury_data_profile__notag_functor_desc_proc_static_ptr_0 = {
	"proc_static_ptr",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_profile__functor_number_map_proc_static_ptr_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__proc_static_ptr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__proc_static_ptr_0_0)),
	"profile",
	"proc_static_ptr",
	{ (void *)&mercury_data_profile__notag_functor_desc_proc_static_ptr_0 },
	{ (void *)&mercury_data_profile__notag_functor_desc_proc_static_ptr_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_proc_static_ptr_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_call_site_static_ptr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_is_zeroed_0;

const MR_PseudoTypeInfo mercury_data_profile__field_types_proc_static_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_is_zeroed_0
};

const MR_ConstString mercury_data_profile__field_names_proc_static_0_0[] = {
	"ps_id",
	"ps_decl_module",
	"ps_refined_id",
	"ps_raw_id",
	"ps_file_name",
	"ps_line_number",
	"ps_in_interface",
	"ps_sites",
	"ps_is_zeroed"
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_proc_static_0_0 = {
	"proc_static",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profile__field_types_proc_static_0_0,
	mercury_data_profile__field_names_proc_static_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_proc_static_0_0[] = {
	&mercury_data_profile__du_functor_desc_proc_static_0_0

};

const MR_DuPtagLayout mercury_data_profile__du_ptag_ordered_proc_static_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profile__du_stag_ordered_proc_static_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profile__du_name_ordered_proc_static_0[] = {
	&mercury_data_profile__du_functor_desc_proc_static_0_0
};

const MR_Integer mercury_data_profile__functor_number_map_proc_static_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__proc_static_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__proc_static_0_0)),
	"profile",
	"proc_static",
	{ (void *)mercury_data_profile__du_name_ordered_proc_static_0 },
	{ (void *)mercury_data_profile__du_ptag_ordered_proc_static_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_proc_static_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_pred_or_func_0;

const MR_PseudoTypeInfo mercury_data_profile__field_types_proc_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_profile__field_names_proc_id_0_0[] = {
	"user_pred_or_func",
	"user_decl_module",
	"user_def_module",
	"user_name",
	"user_arity",
	"user_mode"
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_proc_id_0_0 = {
	"user_defined",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profile__field_types_proc_id_0_0,
	mercury_data_profile__field_names_proc_id_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_profile__field_types_proc_id_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_profile__field_names_proc_id_0_1[] = {
	"uci_type_name",
	"uci_type_module",
	"uci_def_module",
	"uci_pred_name",
	"uci_arity",
	"uci_mode"
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_proc_id_0_1 = {
	"uci_pred",
	6,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_profile__field_types_proc_id_0_1,
	mercury_data_profile__field_names_proc_id_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_proc_id_0_0[] = {
	&mercury_data_profile__du_functor_desc_proc_id_0_0

};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_proc_id_0_1[] = {
	&mercury_data_profile__du_functor_desc_proc_id_0_1

};

const MR_DuPtagLayout mercury_data_profile__du_ptag_ordered_proc_id_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profile__du_stag_ordered_proc_id_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_profile__du_stag_ordered_proc_id_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_profile__du_name_ordered_proc_id_0[] = {
	&mercury_data_profile__du_functor_desc_proc_id_0_1,
	&mercury_data_profile__du_functor_desc_proc_id_0_0
};

const MR_Integer mercury_data_profile__functor_number_map_proc_id_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_id_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__proc_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__proc_id_0_0)),
	"profile",
	"proc_id",
	{ (void *)mercury_data_profile__du_name_ordered_proc_id_0 },
	{ (void *)mercury_data_profile__du_ptag_ordered_proc_id_0 },
	2,
	4,
	mercury_data_profile__functor_number_map_proc_id_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1profile__type_ctor_info_proc_dynamic_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamics_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__proc_dynamics_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__proc_dynamics_0_0)),
	"profile",
	"proc_dynamics",
	{ 0 },
	{ (void *)&mercury_data_array__ti_array_1profile__type_ctor_info_proc_dynamic_0 },
	-1,
	0,
	NULL
};

static const MR_NotagFunctorDesc mercury_data_profile__notag_functor_desc_proc_dynamic_ptr_0 = {
	"proc_dynamic_ptr",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_profile__functor_number_map_proc_dynamic_ptr_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__proc_dynamic_ptr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__proc_dynamic_ptr_0_0)),
	"profile",
	"proc_dynamic_ptr",
	{ (void *)&mercury_data_profile__notag_functor_desc_proc_dynamic_ptr_0 },
	{ (void *)&mercury_data_profile__notag_functor_desc_proc_dynamic_ptr_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_proc_dynamic_ptr_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1profile__type_ctor_info_call_site_array_slot_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_call_site_array_slot_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;

const MR_PseudoTypeInfo mercury_data_profile__field_types_proc_dynamic_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_call_site_array_slot_0
};

const MR_ConstString mercury_data_profile__field_names_proc_dynamic_0_0[] = {
	"pd_proc_static",
	"pd_sites"
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_proc_dynamic_0_0 = {
	"proc_dynamic",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profile__field_types_proc_dynamic_0_0,
	mercury_data_profile__field_names_proc_dynamic_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_proc_dynamic_0_0[] = {
	&mercury_data_profile__du_functor_desc_proc_dynamic_0_0

};

const MR_DuPtagLayout mercury_data_profile__du_ptag_ordered_proc_dynamic_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profile__du_stag_ordered_proc_dynamic_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profile__du_name_ordered_proc_dynamic_0[] = {
	&mercury_data_profile__du_functor_desc_proc_dynamic_0_0
};

const MR_Integer mercury_data_profile__functor_number_map_proc_dynamic_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__proc_dynamic_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__proc_dynamic_0_0)),
	"profile",
	"proc_dynamic",
	{ (void *)mercury_data_profile__du_name_ordered_proc_dynamic_0 },
	{ (void *)mercury_data_profile__du_ptag_ordered_proc_dynamic_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_proc_dynamic_0
};

static const MR_EnumFunctorDesc mercury_data_profile__enum_functor_desc_pred_or_func_0_0 = {
	"predicate",
	0
};

static const MR_EnumFunctorDesc mercury_data_profile__enum_functor_desc_pred_or_func_0_1 = {
	"function",
	1
};

const MR_EnumFunctorDescPtr mercury_data_profile__enum_value_ordered_pred_or_func_0[] = {
	&mercury_data_profile__enum_functor_desc_pred_or_func_0_0,
	&mercury_data_profile__enum_functor_desc_pred_or_func_0_1
};

const MR_EnumFunctorDescPtr mercury_data_profile__enum_name_ordered_pred_or_func_0[] = {
	&mercury_data_profile__enum_functor_desc_pred_or_func_0_1,
	&mercury_data_profile__enum_functor_desc_pred_or_func_0_0
};

const MR_Integer mercury_data_profile__functor_number_map_pred_or_func_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_pred_or_func_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__pred_or_func_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__pred_or_func_0_0)),
	"profile",
	"pred_or_func",
	{ (void *)mercury_data_profile__enum_name_ordered_pred_or_func_0 },
	{ (void *)mercury_data_profile__enum_value_ordered_pred_or_func_0 },
	2,
	4,
	mercury_data_profile__functor_number_map_pred_or_func_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1profile__type_ctor_info_proc_static_ptr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;

const MR_PseudoTypeInfo mercury_data_profile__field_types_module_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_own_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_inherit_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1profile__type_ctor_info_proc_static_ptr_0
};

const MR_ConstString mercury_data_profile__field_names_module_data_0_0[] = {
	"module_own",
	"module_desc",
	"module_procs"
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_module_data_0_0 = {
	"module_data",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profile__field_types_module_data_0_0,
	mercury_data_profile__field_names_module_data_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_module_data_0_0[] = {
	&mercury_data_profile__du_functor_desc_module_data_0_0

};

const MR_DuPtagLayout mercury_data_profile__du_ptag_ordered_module_data_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profile__du_stag_ordered_module_data_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profile__du_name_ordered_module_data_0[] = {
	&mercury_data_profile__du_functor_desc_module_data_0_0
};

const MR_Integer mercury_data_profile__functor_number_map_module_data_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_module_data_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__module_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__module_data_0_0)),
	"profile",
	"module_data",
	{ (void *)mercury_data_profile__du_name_ordered_module_data_0 },
	{ (void *)mercury_data_profile__du_ptag_ordered_module_data_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_module_data_0
};

static const MR_EnumFunctorDesc mercury_data_profile__enum_functor_desc_is_zeroed_0_0 = {
	"zeroed",
	0
};

static const MR_EnumFunctorDesc mercury_data_profile__enum_functor_desc_is_zeroed_0_1 = {
	"not_zeroed",
	1
};

const MR_EnumFunctorDescPtr mercury_data_profile__enum_value_ordered_is_zeroed_0[] = {
	&mercury_data_profile__enum_functor_desc_is_zeroed_0_0,
	&mercury_data_profile__enum_functor_desc_is_zeroed_0_1
};

const MR_EnumFunctorDescPtr mercury_data_profile__enum_name_ordered_is_zeroed_0[] = {
	&mercury_data_profile__enum_functor_desc_is_zeroed_0_1,
	&mercury_data_profile__enum_functor_desc_is_zeroed_0_0
};

const MR_Integer mercury_data_profile__functor_number_map_is_zeroed_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_is_zeroed_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__is_zeroed_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__is_zeroed_0_0)),
	"profile",
	"is_zeroed",
	{ (void *)mercury_data_profile__enum_name_ordered_is_zeroed_0 },
	{ (void *)mercury_data_profile__enum_value_ordered_is_zeroed_0 },
	2,
	4,
	mercury_data_profile__functor_number_map_is_zeroed_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1profile__type_ctor_info_call_site_dynamic_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_call_site_dynamic_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1profile__type_ctor_info_call_site_static_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_call_site_static_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_profile_stats_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;

const MR_PseudoTypeInfo mercury_data_profile__field_types_initial_deep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_profile_stats_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_call_site_dynamic_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_proc_dynamic_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_call_site_static_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_proc_static_0
};

const MR_ConstString mercury_data_profile__field_names_initial_deep_0_0[] = {
	"init_profile_stats",
	"init_root",
	"init_call_site_dynamics",
	"init_proc_dynamics",
	"init_call_site_statics",
	"init_proc_statics"
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_initial_deep_0_0 = {
	"initial_deep",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profile__field_types_initial_deep_0_0,
	mercury_data_profile__field_names_initial_deep_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_initial_deep_0_0[] = {
	&mercury_data_profile__du_functor_desc_initial_deep_0_0

};

const MR_DuPtagLayout mercury_data_profile__du_ptag_ordered_initial_deep_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profile__du_stag_ordered_initial_deep_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profile__du_name_ordered_initial_deep_0[] = {
	&mercury_data_profile__du_functor_desc_initial_deep_0_0
};

const MR_Integer mercury_data_profile__functor_number_map_initial_deep_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_initial_deep_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__initial_deep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__initial_deep_0_0)),
	"profile",
	"initial_deep",
	{ (void *)mercury_data_profile__du_name_ordered_initial_deep_0 },
	{ (void *)mercury_data_profile__du_ptag_ordered_initial_deep_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_initial_deep_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1profile__type_ctor_info_clique_ptr_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1measurements__type_ctor_info_own_prof_info_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_measurements__type_ctor_info_own_prof_info_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_measurements__type_ctor_info_inherit_prof_info_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_TypeInfo) &mercury_data_measurements__type_ctor_info_inherit_prof_info_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_module_data_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0profile__type_ctor_info_module_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_module_data_0
}};

const MR_PseudoTypeInfo mercury_data_profile__field_types_deep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_profile_stats_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_call_site_dynamic_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_proc_dynamic_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_call_site_static_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_proc_static_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_clique_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1measurements__type_ctor_info_own_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1measurements__type_ctor_info_own_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1measurements__type_ctor_info_own_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0profile__type_ctor_info_module_data_0
};

const MR_ConstString mercury_data_profile__field_names_deep_0_0[] = {
	"profile_stats",
	"server_name_port",
	"script_name",
	"data_file_name",
	"root",
	"call_site_dynamics",
	"proc_dynamics",
	"call_site_statics",
	"proc_statics",
	"clique_index",
	"clique_members",
	"clique_parents",
	"clique_maybe_child",
	"proc_callers",
	"call_site_static_map",
	"call_site_calls",
	"pd_own",
	"pd_desc",
	"csd_desc",
	"ps_own",
	"ps_desc",
	"css_own",
	"css_desc",
	"pd_comp_table",
	"csd_comp_table",
	"module_data"
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_deep_0_0 = {
	"deep",
	26,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profile__field_types_deep_0_0,
	mercury_data_profile__field_names_deep_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_deep_0_0[] = {
	&mercury_data_profile__du_functor_desc_deep_0_0

};

const MR_DuPtagLayout mercury_data_profile__du_ptag_ordered_deep_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profile__du_stag_ordered_deep_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profile__du_name_ordered_deep_0[] = {
	&mercury_data_profile__du_functor_desc_deep_0_0
};

const MR_Integer mercury_data_profile__functor_number_map_deep_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__deep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__deep_0_0)),
	"profile",
	"deep",
	{ (void *)mercury_data_profile__du_name_ordered_deep_0 },
	{ (void *)mercury_data_profile__du_ptag_ordered_deep_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_deep_0
};

const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_compensation_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__compensation_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__compensation_table_0_0)),
	"profile",
	"compensation_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 },
	-1,
	0,
	NULL
};

static const MR_NotagFunctorDesc mercury_data_profile__notag_functor_desc_clique_ptr_0 = {
	"clique_ptr",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_profile__functor_number_map_clique_ptr_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__clique_ptr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__clique_ptr_0_0)),
	"profile",
	"clique_ptr",
	{ (void *)&mercury_data_profile__notag_functor_desc_clique_ptr_0 },
	{ (void *)&mercury_data_profile__notag_functor_desc_clique_ptr_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_clique_ptr_0
};

const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_statics_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__call_site_statics_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__call_site_statics_0_0)),
	"profile",
	"call_site_statics",
	{ 0 },
	{ (void *)&mercury_data_array__ti_array_1profile__type_ctor_info_call_site_static_0 },
	-1,
	0,
	NULL
};

static const MR_NotagFunctorDesc mercury_data_profile__notag_functor_desc_call_site_static_ptr_0 = {
	"call_site_static_ptr",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_profile__functor_number_map_call_site_static_ptr_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__call_site_static_ptr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__call_site_static_ptr_0_0)),
	"profile",
	"call_site_static_ptr",
	{ (void *)&mercury_data_profile__notag_functor_desc_call_site_static_ptr_0 },
	{ (void *)&mercury_data_profile__notag_functor_desc_call_site_static_ptr_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_call_site_static_ptr_0
};

const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__call_site_static_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__call_site_static_map_0_0)),
	"profile",
	"call_site_static_map",
	{ 0 },
	{ (void *)&mercury_data_array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_kind_and_callee_0;

const MR_PseudoTypeInfo mercury_data_profile__field_types_call_site_static_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_call_site_kind_and_callee_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_profile__field_names_call_site_static_0_0[] = {
	"css_container",
	"css_slot_num",
	"css_kind",
	"css_line_num",
	"css_goal_path"
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_call_site_static_0_0 = {
	"call_site_static",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profile__field_types_call_site_static_0_0,
	mercury_data_profile__field_names_call_site_static_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_call_site_static_0_0[] = {
	&mercury_data_profile__du_functor_desc_call_site_static_0_0

};

const MR_DuPtagLayout mercury_data_profile__du_ptag_ordered_call_site_static_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profile__du_stag_ordered_call_site_static_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profile__du_name_ordered_call_site_static_0[] = {
	&mercury_data_profile__du_functor_desc_call_site_static_0_0
};

const MR_Integer mercury_data_profile__functor_number_map_call_site_static_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__call_site_static_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__call_site_static_0_0)),
	"profile",
	"call_site_static",
	{ (void *)mercury_data_profile__du_name_ordered_call_site_static_0 },
	{ (void *)mercury_data_profile__du_ptag_ordered_call_site_static_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_call_site_static_0
};

const MR_PseudoTypeInfo mercury_data_profile__field_types_call_site_kind_and_callee_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_0 = {
	"normal_call_and_callee",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profile__field_types_call_site_kind_and_callee_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_1 = {
	"special_call_and_no_callee",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_2 = {
	"higher_order_call_and_no_callee",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_3 = {
	"method_call_and_no_callee",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_4 = {
	"callback_and_no_callee",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_call_site_kind_and_callee_0_0[] = {
	&mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_1,
	&mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_2,
	&mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_3,
	&mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_4

};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_call_site_kind_and_callee_0_1[] = {
	&mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_0

};

const MR_DuPtagLayout mercury_data_profile__du_ptag_ordered_call_site_kind_and_callee_0[] = {
	{ 4, MR_SECTAG_LOCAL,
	mercury_data_profile__du_stag_ordered_call_site_kind_and_callee_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_profile__du_stag_ordered_call_site_kind_and_callee_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_profile__du_name_ordered_call_site_kind_and_callee_0[] = {
	&mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_4,
	&mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_2,
	&mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_3,
	&mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_0,
	&mercury_data_profile__du_functor_desc_call_site_kind_and_callee_0_1
};

const MR_Integer mercury_data_profile__functor_number_map_call_site_kind_and_callee_0[] = {
	3,
	4,
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_kind_and_callee_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__call_site_kind_and_callee_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__call_site_kind_and_callee_0_0)),
	"profile",
	"call_site_kind_and_callee",
	{ (void *)mercury_data_profile__du_name_ordered_call_site_kind_and_callee_0 },
	{ (void *)mercury_data_profile__du_ptag_ordered_call_site_kind_and_callee_0 },
	5,
	4,
	mercury_data_profile__functor_number_map_call_site_kind_and_callee_0
};

static const MR_EnumFunctorDesc mercury_data_profile__enum_functor_desc_call_site_kind_0_0 = {
	"normal_call",
	0
};

static const MR_EnumFunctorDesc mercury_data_profile__enum_functor_desc_call_site_kind_0_1 = {
	"special_call",
	1
};

static const MR_EnumFunctorDesc mercury_data_profile__enum_functor_desc_call_site_kind_0_2 = {
	"higher_order_call",
	2
};

static const MR_EnumFunctorDesc mercury_data_profile__enum_functor_desc_call_site_kind_0_3 = {
	"method_call",
	3
};

static const MR_EnumFunctorDesc mercury_data_profile__enum_functor_desc_call_site_kind_0_4 = {
	"callback",
	4
};

const MR_EnumFunctorDescPtr mercury_data_profile__enum_value_ordered_call_site_kind_0[] = {
	&mercury_data_profile__enum_functor_desc_call_site_kind_0_0,
	&mercury_data_profile__enum_functor_desc_call_site_kind_0_1,
	&mercury_data_profile__enum_functor_desc_call_site_kind_0_2,
	&mercury_data_profile__enum_functor_desc_call_site_kind_0_3,
	&mercury_data_profile__enum_functor_desc_call_site_kind_0_4
};

const MR_EnumFunctorDescPtr mercury_data_profile__enum_name_ordered_call_site_kind_0[] = {
	&mercury_data_profile__enum_functor_desc_call_site_kind_0_4,
	&mercury_data_profile__enum_functor_desc_call_site_kind_0_2,
	&mercury_data_profile__enum_functor_desc_call_site_kind_0_3,
	&mercury_data_profile__enum_functor_desc_call_site_kind_0_0,
	&mercury_data_profile__enum_functor_desc_call_site_kind_0_1
};

const MR_Integer mercury_data_profile__functor_number_map_call_site_kind_0[] = {
	3,
	4,
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__call_site_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__call_site_kind_0_0)),
	"profile",
	"call_site_kind",
	{ (void *)mercury_data_profile__enum_name_ordered_call_site_kind_0 },
	{ (void *)mercury_data_profile__enum_value_ordered_call_site_kind_0 },
	5,
	4,
	mercury_data_profile__functor_number_map_call_site_kind_0
};

const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamics_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__call_site_dynamics_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__call_site_dynamics_0_0)),
	"profile",
	"call_site_dynamics",
	{ 0 },
	{ (void *)&mercury_data_array__ti_array_1profile__type_ctor_info_call_site_dynamic_0 },
	-1,
	0,
	NULL
};

static const MR_NotagFunctorDesc mercury_data_profile__notag_functor_desc_call_site_dynamic_ptr_0 = {
	"call_site_dynamic_ptr",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_profile__functor_number_map_call_site_dynamic_ptr_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__call_site_dynamic_ptr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__call_site_dynamic_ptr_0_0)),
	"profile",
	"call_site_dynamic_ptr",
	{ (void *)&mercury_data_profile__notag_functor_desc_call_site_dynamic_ptr_0 },
	{ (void *)&mercury_data_profile__notag_functor_desc_call_site_dynamic_ptr_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_call_site_dynamic_ptr_0
};

const MR_PseudoTypeInfo mercury_data_profile__field_types_call_site_dynamic_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_own_prof_info_0
};

const MR_ConstString mercury_data_profile__field_names_call_site_dynamic_0_0[] = {
	"csd_caller",
	"csd_callee",
	"csd_own_prof"
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_call_site_dynamic_0_0 = {
	"call_site_dynamic",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profile__field_types_call_site_dynamic_0_0,
	mercury_data_profile__field_names_call_site_dynamic_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_call_site_dynamic_0_0[] = {
	&mercury_data_profile__du_functor_desc_call_site_dynamic_0_0

};

const MR_DuPtagLayout mercury_data_profile__du_ptag_ordered_call_site_dynamic_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profile__du_stag_ordered_call_site_dynamic_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profile__du_name_ordered_call_site_dynamic_0[] = {
	&mercury_data_profile__du_functor_desc_call_site_dynamic_0_0
};

const MR_Integer mercury_data_profile__functor_number_map_call_site_dynamic_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__call_site_dynamic_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__call_site_dynamic_0_0)),
	"profile",
	"call_site_dynamic",
	{ (void *)mercury_data_profile__du_name_ordered_call_site_dynamic_0 },
	{ (void *)mercury_data_profile__du_ptag_ordered_call_site_dynamic_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_call_site_dynamic_0
};

static const MR_NotagFunctorDesc mercury_data_profile__notag_functor_desc_call_site_caller_0 = {
	"call_site_caller",
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_call_site_static_ptr_0,
	NULL
};

const MR_Integer mercury_data_profile__functor_number_map_call_site_caller_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_caller_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__call_site_caller_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__call_site_caller_0_0)),
	"profile",
	"call_site_caller",
	{ (void *)&mercury_data_profile__notag_functor_desc_call_site_caller_0 },
	{ (void *)&mercury_data_profile__notag_functor_desc_call_site_caller_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_call_site_caller_0
};

static const MR_NotagFunctorDesc mercury_data_profile__notag_functor_desc_call_site_callees_0 = {
	"call_site_callees",
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0,
	NULL
};

const MR_Integer mercury_data_profile__functor_number_map_call_site_callees_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_callees_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__call_site_callees_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__call_site_callees_0_0)),
	"profile",
	"call_site_callees",
	{ (void *)&mercury_data_profile__notag_functor_desc_call_site_callees_0 },
	{ (void *)&mercury_data_profile__notag_functor_desc_call_site_callees_0 },
	1,
	4,
	mercury_data_profile__functor_number_map_call_site_callees_0
};

const MR_PseudoTypeInfo mercury_data_profile__field_types_call_site_array_slot_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_call_site_array_slot_0_0 = {
	"slot_normal",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profile__field_types_call_site_array_slot_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_profile__field_types_call_site_array_slot_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_is_zeroed_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0
};

static const MR_DuFunctorDesc mercury_data_profile__du_functor_desc_call_site_array_slot_0_1 = {
	"slot_multi",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_profile__field_types_call_site_array_slot_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_call_site_array_slot_0_0[] = {
	&mercury_data_profile__du_functor_desc_call_site_array_slot_0_0

};

const MR_DuFunctorDescPtr mercury_data_profile__du_stag_ordered_call_site_array_slot_0_1[] = {
	&mercury_data_profile__du_functor_desc_call_site_array_slot_0_1

};

const MR_DuPtagLayout mercury_data_profile__du_ptag_ordered_call_site_array_slot_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profile__du_stag_ordered_call_site_array_slot_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_profile__du_stag_ordered_call_site_array_slot_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_profile__du_name_ordered_call_site_array_slot_0[] = {
	&mercury_data_profile__du_functor_desc_call_site_array_slot_0_1,
	&mercury_data_profile__du_functor_desc_call_site_array_slot_0_0
};

const MR_Integer mercury_data_profile__functor_number_map_call_site_array_slot_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profile__call_site_array_slot_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profile__call_site_array_slot_0_0)),
	"profile",
	"call_site_array_slot",
	{ (void *)mercury_data_profile__du_name_ordered_call_site_array_slot_0 },
	{ (void *)mercury_data_profile__du_ptag_ordered_call_site_array_slot_0 },
	2,
	4,
	mercury_data_profile__functor_number_map_call_site_array_slot_0
};


MR_BEGIN_MODULE(profile_module0)
	MR_init_entry1(fn__profile__decl_module_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__profile__decl_module_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module1)
	MR_init_entry1(fn__profile__dummy_proc_id_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__profile__dummy_proc_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module2)
	MR_init_entry1(fn__profile__main_parent_proc_id_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__profile__main_parent_proc_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module3)
	MR_init_entry1(fn__profile__dummy_proc_dynamic_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__profile__dummy_proc_dynamic_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) -1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module4)
	MR_init_entry1(fn__profile__dummy_proc_static_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__profile__dummy_proc_static_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) -1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module5)
	MR_init_entry1(fn__profile__dummy_call_site_dynamic_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__profile__dummy_call_site_dynamic_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) -1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module6)
	MR_init_entry1(fn__profile__dummy_call_site_static_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__profile__dummy_call_site_static_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) -1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module7)
	MR_init_entry1(fn__profile__dummy_clique_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__profile__dummy_clique_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) -1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__in_bounds_2_0);

MR_BEGIN_MODULE(profile_module8)
	MR_init_entry1(profile__valid_clique_ptr_2_0);
	MR_init_label1(profile__valid_clique_ptr_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__valid_clique_ptr_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__valid_clique_ptr_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 10);
	MR_np_tailcall_ent(array__in_bounds_2_0);
	}
MR_def_label(profile__valid_clique_ptr_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module9)
	MR_init_entry1(profile__valid_proc_dynamic_ptr_2_0);
	MR_init_label1(profile__valid_proc_dynamic_ptr_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__valid_proc_dynamic_ptr_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__valid_proc_dynamic_ptr_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 6);
	MR_np_tailcall_ent(array__in_bounds_2_0);
	}
MR_def_label(profile__valid_proc_dynamic_ptr_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module10)
	MR_init_entry1(profile__valid_proc_static_ptr_2_0);
	MR_init_label1(profile__valid_proc_static_ptr_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__valid_proc_static_ptr_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__valid_proc_static_ptr_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 8);
	MR_np_tailcall_ent(array__in_bounds_2_0);
	}
MR_def_label(profile__valid_proc_static_ptr_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module11)
	MR_init_entry1(profile__valid_call_site_dynamic_ptr_2_0);
	MR_init_label1(profile__valid_call_site_dynamic_ptr_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__valid_call_site_dynamic_ptr_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__valid_call_site_dynamic_ptr_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 5);
	MR_np_tailcall_ent(array__in_bounds_2_0);
	}
MR_def_label(profile__valid_call_site_dynamic_ptr_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module12)
	MR_init_entry1(profile__valid_call_site_static_ptr_2_0);
	MR_init_label1(profile__valid_call_site_static_ptr_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__valid_call_site_static_ptr_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__valid_call_site_static_ptr_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 7);
	MR_np_tailcall_ent(array__in_bounds_2_0);
	}
MR_def_label(profile__valid_call_site_static_ptr_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module13)
	MR_init_entry1(profile__valid_proc_dynamic_ptr_raw_2_0);
	MR_init_label1(profile__valid_proc_dynamic_ptr_raw_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__valid_proc_dynamic_ptr_raw_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__valid_proc_dynamic_ptr_raw_2_0_i1);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_np_tailcall_ent(array__in_bounds_2_0);
MR_def_label(profile__valid_proc_dynamic_ptr_raw_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module14)
	MR_init_entry1(profile__valid_proc_static_ptr_raw_2_0);
	MR_init_label1(profile__valid_proc_static_ptr_raw_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__valid_proc_static_ptr_raw_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__valid_proc_static_ptr_raw_2_0_i1);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_np_tailcall_ent(array__in_bounds_2_0);
MR_def_label(profile__valid_proc_static_ptr_raw_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module15)
	MR_init_entry1(profile__valid_call_site_dynamic_ptr_raw_2_0);
	MR_init_label1(profile__valid_call_site_dynamic_ptr_raw_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__valid_call_site_dynamic_ptr_raw_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__valid_call_site_dynamic_ptr_raw_2_0_i1);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_np_tailcall_ent(array__in_bounds_2_0);
MR_def_label(profile__valid_call_site_dynamic_ptr_raw_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module16)
	MR_init_entry1(profile__valid_call_site_static_ptr_raw_2_0);
	MR_init_label1(profile__valid_call_site_static_ptr_raw_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__valid_call_site_static_ptr_raw_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__valid_call_site_static_ptr_raw_2_0_i1);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_np_tailcall_ent(array__in_bounds_2_0);
MR_def_label(profile__valid_call_site_static_ptr_raw_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__lookup_3_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(profile_module17)
	MR_init_entry1(profile__lookup_call_site_dynamics_3_0);
	MR_init_label2(profile__lookup_call_site_dynamics_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_call_site_dynamics_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_call_site_dynamics_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_call_site_dynamics_3_0_i3);
MR_def_label(profile__lookup_call_site_dynamics_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_call_site_dynamics_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_call_site_dynamics_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_call_site_dynamics: bounds error", 39);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module18)
	MR_init_entry1(profile__lookup_call_site_statics_3_0);
	MR_init_label2(profile__lookup_call_site_statics_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_call_site_statics_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_call_site_statics_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_call_site_statics_3_0_i3);
MR_def_label(profile__lookup_call_site_statics_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_call_site_statics_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_call_site_statics_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_call_site_statics: bounds error", 38);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module19)
	MR_init_entry1(profile__lookup_proc_dynamics_3_0);
	MR_init_label2(profile__lookup_proc_dynamics_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_proc_dynamics_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_proc_dynamics_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_proc_dynamics_3_0_i3);
MR_def_label(profile__lookup_proc_dynamics_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_proc_dynamics_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_proc_dynamics_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_proc_dynamics: bounds error", 34);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module20)
	MR_init_entry1(profile__lookup_proc_statics_3_0);
	MR_init_label2(profile__lookup_proc_statics_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_proc_statics_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_proc_statics_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_proc_statics_3_0_i3);
MR_def_label(profile__lookup_proc_statics_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_proc_statics_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_proc_statics_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_proc_statics: bounds error", 33);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module21)
	MR_init_entry1(profile__lookup_clique_index_3_0);
	MR_init_label2(profile__lookup_clique_index_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_clique_index_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_clique_index_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_clique_index_3_0_i3);
MR_def_label(profile__lookup_clique_index_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_clique_index_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_clique_index_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_clique_index: bounds error", 33);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module22)
	MR_init_entry1(profile__lookup_clique_members_3_0);
	MR_init_label2(profile__lookup_clique_members_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_clique_members_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_clique_members_3_0_i3);
MR_def_label(profile__lookup_clique_members_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_clique_members_3_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_clique_members_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_clique_members: bounds error", 35);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module23)
	MR_init_entry1(profile__lookup_clique_parents_3_0);
	MR_init_label2(profile__lookup_clique_parents_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_clique_parents_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_clique_parents_3_0_i3);
MR_def_label(profile__lookup_clique_parents_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_clique_parents_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_clique_parents_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_clique_parents: bounds error", 35);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module24)
	MR_init_entry1(profile__lookup_clique_maybe_child_3_0);
	MR_init_label2(profile__lookup_clique_maybe_child_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_clique_maybe_child_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_clique_maybe_child_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_clique_maybe_child_3_0_i3);
MR_def_label(profile__lookup_clique_maybe_child_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_clique_maybe_child_3_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_clique_maybe_child_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_clique_maybe_child: bounds error", 39);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module25)
	MR_init_entry1(profile__lookup_proc_callers_3_0);
	MR_init_label2(profile__lookup_proc_callers_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_proc_callers_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_proc_callers_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_proc_callers_3_0_i3);
MR_def_label(profile__lookup_proc_callers_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_proc_callers_3_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_proc_callers_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_proc_callers: bounds error", 33);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module26)
	MR_init_entry1(profile__lookup_call_site_static_map_3_0);
	MR_init_label2(profile__lookup_call_site_static_map_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_call_site_static_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_call_site_static_map_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_call_site_static_map_3_0_i3);
MR_def_label(profile__lookup_call_site_static_map_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_call_site_static_map_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_call_site_static_map_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_call_site_static_map: bounds error", 41);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module27)
	MR_init_entry1(profile__lookup_call_site_calls_3_0);
	MR_init_label2(profile__lookup_call_site_calls_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_call_site_calls_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_call_site_calls_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_call_site_calls_3_0_i3);
MR_def_label(profile__lookup_call_site_calls_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_call_site_calls_3_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_call_site_calls_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_call_site_static_map: bounds error", 41);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module28)
	MR_init_entry1(profile__lookup_pd_own_3_0);
	MR_init_label2(profile__lookup_pd_own_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_pd_own_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_pd_own_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_pd_own_3_0_i3);
MR_def_label(profile__lookup_pd_own_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_pd_own_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_pd_own_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_pd_own: bounds error", 27);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module29)
	MR_init_entry1(profile__lookup_pd_desc_3_0);
	MR_init_label2(profile__lookup_pd_desc_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_pd_desc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_pd_desc_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_pd_desc_3_0_i3);
MR_def_label(profile__lookup_pd_desc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_pd_desc_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_pd_desc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_pd_desc: bounds error", 28);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module30)
	MR_init_entry1(profile__lookup_csd_own_3_0);
	MR_init_label2(profile__lookup_csd_own_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_csd_own_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_csd_own_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_csd_own_3_0_i3);
MR_def_label(profile__lookup_csd_own_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_csd_own_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_csd_own_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_csd_own: bounds error", 28);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module31)
	MR_init_entry1(profile__lookup_csd_desc_3_0);
	MR_init_label2(profile__lookup_csd_desc_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_csd_desc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_csd_desc_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_csd_desc_3_0_i3);
MR_def_label(profile__lookup_csd_desc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_csd_desc_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_csd_desc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_csd_desc: bounds error", 29);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module32)
	MR_init_entry1(profile__lookup_ps_own_3_0);
	MR_init_label2(profile__lookup_ps_own_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_ps_own_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_ps_own_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_ps_own_3_0_i3);
MR_def_label(profile__lookup_ps_own_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_ps_own_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_ps_own_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_ps_own: bounds error", 27);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module33)
	MR_init_entry1(profile__lookup_ps_desc_3_0);
	MR_init_label2(profile__lookup_ps_desc_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_ps_desc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_ps_desc_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_ps_desc_3_0_i3);
MR_def_label(profile__lookup_ps_desc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_ps_desc_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_ps_desc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_ps_desc: bounds error", 28);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module34)
	MR_init_entry1(profile__lookup_css_own_3_0);
	MR_init_label2(profile__lookup_css_own_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_css_own_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_css_own_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_css_own_3_0_i3);
MR_def_label(profile__lookup_css_own_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_css_own_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_css_own_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_css_own: bounds error", 28);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module35)
	MR_init_entry1(profile__lookup_css_desc_3_0);
	MR_init_label2(profile__lookup_css_desc_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_css_desc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_css_desc_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_css_desc_3_0_i3);
MR_def_label(profile__lookup_css_desc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_css_desc_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_css_desc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_css_desc: bounds error", 29);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module36)
	MR_init_entry1(profile__lookup_pd_comp_table_3_0);
	MR_init_label2(profile__lookup_pd_comp_table_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_pd_comp_table_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_pd_comp_table_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_pd_comp_table_3_0_i3);
MR_def_label(profile__lookup_pd_comp_table_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_pd_comp_table_3_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_pd_comp_table_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_pd_comp_table: bounds error", 34);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module37)
	MR_init_entry1(profile__lookup_csd_comp_table_3_0);
	MR_init_label2(profile__lookup_csd_comp_table_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__lookup_csd_comp_table_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(profile__lookup_csd_comp_table_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		profile__lookup_csd_comp_table_3_0_i3);
MR_def_label(profile__lookup_csd_comp_table_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(profile__lookup_csd_comp_table_3_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(array__lookup_3_0);
MR_def_label(profile__lookup_csd_comp_table_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_csd_comp_table: bounds error", 35);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module38)
	MR_init_entry1(profile__deep_lookup_call_site_dynamics_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_call_site_dynamics_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_np_tailcall_ent(profile__lookup_call_site_dynamics_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module39)
	MR_init_entry1(profile__deep_lookup_call_site_statics_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_call_site_statics_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 7);
	MR_np_tailcall_ent(profile__lookup_call_site_statics_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module40)
	MR_init_entry1(profile__deep_lookup_proc_dynamics_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_proc_dynamics_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 6);
	MR_np_tailcall_ent(profile__lookup_proc_dynamics_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module41)
	MR_init_entry1(profile__deep_lookup_proc_statics_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_proc_statics_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 8);
	MR_np_tailcall_ent(profile__lookup_proc_statics_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module42)
	MR_init_entry1(profile__deep_lookup_clique_index_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_clique_index_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 9);
	MR_np_tailcall_ent(profile__lookup_clique_index_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module43)
	MR_init_entry1(profile__deep_lookup_clique_members_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_clique_members_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 10);
	MR_np_tailcall_ent(profile__lookup_clique_members_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module44)
	MR_init_entry1(profile__deep_lookup_clique_parents_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_clique_parents_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 11);
	MR_np_tailcall_ent(profile__lookup_clique_parents_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module45)
	MR_init_entry1(profile__deep_lookup_clique_maybe_child_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_clique_maybe_child_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 12);
	MR_np_tailcall_ent(profile__lookup_clique_maybe_child_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module46)
	MR_init_entry1(profile__deep_lookup_proc_callers_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_proc_callers_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 13);
	MR_np_tailcall_ent(profile__lookup_proc_callers_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module47)
	MR_init_entry1(profile__deep_lookup_call_site_static_map_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_call_site_static_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 14);
	MR_np_tailcall_ent(profile__lookup_call_site_static_map_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module48)
	MR_init_entry1(profile__deep_lookup_call_site_calls_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_call_site_calls_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 15);
	MR_np_tailcall_ent(profile__lookup_call_site_calls_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module49)
	MR_init_entry1(profile__deep_lookup_proc_dynamic_sites_3_0);
	MR_init_label1(profile__deep_lookup_proc_dynamic_sites_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_proc_dynamic_sites_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 6);
	MR_np_call_localret_ent(profile__lookup_proc_dynamics_3_0,
		profile__deep_lookup_proc_dynamic_sites_3_0_i2);
MR_def_label(profile__deep_lookup_proc_dynamic_sites_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module50)
	MR_init_entry1(profile__deep_lookup_pd_comp_table_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_pd_comp_table_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 23);
	MR_np_tailcall_ent(profile__lookup_pd_comp_table_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module51)
	MR_init_entry1(profile__deep_lookup_csd_comp_table_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_csd_comp_table_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 24);
	MR_np_tailcall_ent(profile__lookup_csd_comp_table_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module52)
	MR_init_entry1(profile__deep_lookup_pd_own_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_pd_own_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 16);
	MR_np_tailcall_ent(array__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module53)
	MR_init_entry1(profile__deep_lookup_pd_desc_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_pd_desc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 17);
	MR_np_tailcall_ent(array__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module54)
	MR_init_entry1(profile__deep_lookup_csd_own_3_0);
	MR_init_label1(profile__deep_lookup_csd_own_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_csd_own_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		profile__deep_lookup_csd_own_3_0_i2);
MR_def_label(profile__deep_lookup_csd_own_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module55)
	MR_init_entry1(profile__deep_lookup_csd_desc_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_csd_desc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 18);
	MR_np_tailcall_ent(array__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module56)
	MR_init_entry1(profile__deep_lookup_ps_own_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_ps_own_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 19);
	MR_np_tailcall_ent(array__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module57)
	MR_init_entry1(profile__deep_lookup_ps_desc_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_ps_desc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 20);
	MR_np_tailcall_ent(array__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module58)
	MR_init_entry1(profile__deep_lookup_css_own_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_css_own_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 21);
	MR_np_tailcall_ent(array__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module59)
	MR_init_entry1(profile__deep_lookup_css_desc_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_lookup_css_desc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 22);
	MR_np_tailcall_ent(array__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__set_4_0);

MR_BEGIN_MODULE(profile_module60)
	MR_init_entry1(profile__update_call_site_dynamics_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__update_call_site_dynamics_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module61)
	MR_init_entry1(profile__update_call_site_statics_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__update_call_site_statics_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module62)
	MR_init_entry1(profile__update_proc_dynamics_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__update_proc_dynamics_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module63)
	MR_init_entry1(profile__update_proc_statics_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__update_proc_statics_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module64)
	MR_init_entry1(profile__update_proc_callers_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__update_proc_callers_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module65)
	MR_init_entry1(profile__update_call_site_static_map_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__update_call_site_static_map_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module66)
	MR_init_entry1(profile__update_ps_own_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__update_ps_own_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module67)
	MR_init_entry1(profile__update_ps_desc_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__update_ps_desc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module68)
	MR_init_entry1(profile__update_css_own_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__update_css_own_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module69)
	MR_init_entry1(profile__update_css_desc_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__update_css_desc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__array_util__u_1_0);

MR_BEGIN_MODULE(profile_module70)
	MR_init_entry1(profile__deep_update_csd_desc_4_0);
	MR_init_label2(profile__deep_update_csd_desc_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_update_csd_desc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 18);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		profile__deep_update_csd_desc_4_0_i2);
MR_def_label(profile__deep_update_csd_desc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(array__set_4_0,
		profile__deep_update_csd_desc_4_0_i3);
MR_def_label(profile__deep_update_csd_desc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 26);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_r1;
	MR_tfield(0, MR_tempr1, 19) = MR_ctfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_ctfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_ctfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_ctfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_ctfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_ctfield(0, MR_tempr2, 24);
	MR_tfield(0, MR_tempr1, 25) = MR_ctfield(0, MR_tempr2, 25);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module71)
	MR_init_entry1(profile__deep_update_pd_desc_4_0);
	MR_init_label2(profile__deep_update_pd_desc_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_update_pd_desc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 17);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		profile__deep_update_pd_desc_4_0_i2);
MR_def_label(profile__deep_update_pd_desc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(array__set_4_0,
		profile__deep_update_pd_desc_4_0_i3);
MR_def_label(profile__deep_update_pd_desc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 26);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_r1;
	MR_tfield(0, MR_tempr1, 18) = MR_ctfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_ctfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_ctfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_ctfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_ctfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_ctfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_ctfield(0, MR_tempr2, 24);
	MR_tfield(0, MR_tempr1, 25) = MR_ctfield(0, MR_tempr2, 25);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module72)
	MR_init_entry1(profile__deep_update_pd_own_4_0);
	MR_init_label2(profile__deep_update_pd_own_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_update_pd_own_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 16);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		profile__deep_update_pd_own_4_0_i2);
MR_def_label(profile__deep_update_pd_own_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(array__set_4_0,
		profile__deep_update_pd_own_4_0_i3);
MR_def_label(profile__deep_update_pd_own_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 26);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_r1;
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_ctfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_ctfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_ctfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_ctfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_ctfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_ctfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_ctfield(0, MR_tempr2, 24);
	MR_tfield(0, MR_tempr1, 25) = MR_ctfield(0, MR_tempr2, 25);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module73)
	MR_init_entry1(profile__deep_update_pd_comp_table_4_0);
	MR_init_label2(profile__deep_update_pd_comp_table_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_update_pd_comp_table_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = MR_ctfield(0, MR_tempr1, 23);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		profile__deep_update_pd_comp_table_4_0_i2);
MR_def_label(profile__deep_update_pd_comp_table_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(array__set_4_0,
		profile__deep_update_pd_comp_table_4_0_i3);
MR_def_label(profile__deep_update_pd_comp_table_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 26);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_ctfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_ctfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_ctfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_ctfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_ctfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_r1;
	MR_tfield(0, MR_tempr1, 24) = MR_ctfield(0, MR_tempr2, 24);
	MR_tfield(0, MR_tempr1, 25) = MR_ctfield(0, MR_tempr2, 25);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module74)
	MR_init_entry1(profile__deep_update_csd_comp_table_4_0);
	MR_init_label2(profile__deep_update_csd_comp_table_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_update_csd_comp_table_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = MR_ctfield(0, MR_tempr1, 24);
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		profile__deep_update_csd_comp_table_4_0_i2);
MR_def_label(profile__deep_update_csd_comp_table_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(array__set_4_0,
		profile__deep_update_csd_comp_table_4_0_i3);
MR_def_label(profile__deep_update_csd_comp_table_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 26);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_ctfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_ctfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_ctfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_ctfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_ctfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_ctfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_r1;
	MR_tfield(0, MR_tempr1, 25) = MR_ctfield(0, MR_tempr2, 25);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module75)
	MR_init_entry1(profile__extract_pd_sites_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_pd_sites_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module76)
	MR_init_entry1(profile__extract_csd_caller_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_csd_caller_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module77)
	MR_init_entry1(profile__extract_csd_callee_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_csd_callee_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module78)
	MR_init_entry1(profile__extract_csdptr_caller_3_0);
	MR_init_label1(profile__extract_csdptr_caller_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_csdptr_caller_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		profile__extract_csdptr_caller_3_0_i2);
MR_def_label(profile__extract_csdptr_caller_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module79)
	MR_init_entry1(profile__extract_csdptr_callee_3_0);
	MR_init_label1(profile__extract_csdptr_callee_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_csdptr_callee_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		profile__extract_csdptr_callee_3_0_i2);
MR_def_label(profile__extract_csdptr_callee_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module80)
	MR_init_entry1(profile__extract_ticks_per_sec_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_ticks_per_sec_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module81)
	MR_init_entry1(profile__extract_instrument_quanta_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_instrument_quanta_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module82)
	MR_init_entry1(profile__extract_user_quanta_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_user_quanta_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module83)
	MR_init_entry1(profile__extract_num_callseqs_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_num_callseqs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__max_2_0);

MR_BEGIN_MODULE(profile_module84)
	MR_init_entry1(profile__extract_max_css_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_max_css_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	MR_np_tailcall_ent(array__max_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module85)
	MR_init_entry1(profile__extract_max_ps_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_max_ps_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_ctfield(0, MR_tempr1, 5);
	MR_np_tailcall_ent(array__max_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module86)
	MR_init_entry1(profile__extract_max_csd_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_max_csd_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_np_tailcall_ent(array__max_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module87)
	MR_init_entry1(profile__extract_max_pd_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_max_pd_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	MR_np_tailcall_ent(array__max_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module88)
	MR_init_entry1(profile__extract_init_call_site_dynamics_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_init_call_site_dynamics_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module89)
	MR_init_entry1(profile__extract_init_call_site_statics_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_init_call_site_statics_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module90)
	MR_init_entry1(profile__extract_init_proc_dynamics_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_init_proc_dynamics_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module91)
	MR_init_entry1(profile__extract_init_proc_statics_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_init_proc_statics_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module92)
	MR_init_entry1(profile__extract_init_root_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__extract_init_root_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module93)
	MR_init_entry1(profile__deep_extract_csdptr_caller_3_0);
	MR_init_label1(profile__deep_extract_csdptr_caller_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_extract_csdptr_caller_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		profile__deep_extract_csdptr_caller_3_0_i2);
MR_def_label(profile__deep_extract_csdptr_caller_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module94)
	MR_init_entry1(profile__deep_extract_csdptr_callee_3_0);
	MR_init_label1(profile__deep_extract_csdptr_callee_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profile__deep_extract_csdptr_callee_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		profile__deep_extract_csdptr_callee_3_0_i2);
MR_def_label(profile__deep_extract_csdptr_callee_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module95)
	MR_init_entry1(fn__profile__wrap_proc_static_ptr_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__profile__wrap_proc_static_ptr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__add_own_to_inherit_2_0);

MR_BEGIN_MODULE(profile_module96)
	MR_init_entry1(fn__profile__root_total_info_1_0);
	MR_init_label2(fn__profile__root_total_info_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__profile__root_total_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 16);
	MR_r3 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__profile__root_total_info_1_0_i2);
MR_def_label(fn__profile__root_total_info_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_r1, 4);
	}
	MR_np_call_localret_ent(profile__deep_lookup_pd_desc_3_0,
		fn__profile__root_total_info_1_0_i3);
MR_def_label(fn__profile__root_total_info_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__measurements__add_own_to_inherit_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module97)
	MR_init_entry1(fn__profile__root_desc_info_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__profile__root_desc_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 17);
	MR_r3 = MR_ctfield(0, MR_tempr1, 4);
	MR_np_tailcall_ent(array__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module98)
	MR_init_entry1(fn__profile__root_own_info_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__profile__root_own_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 16);
	MR_r3 = MR_ctfield(0, MR_tempr1, 4);
	MR_np_tailcall_ent(array__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___array__array_1_0);

MR_BEGIN_MODULE(profile_module99)
	MR_init_entry1(__Unify___profile__call_site_array_slot_0_0);
	MR_init_label2(__Unify___profile__call_site_array_slot_0_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__call_site_array_slot_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Unify___profile__call_site_array_slot_0_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Unify___profile__call_site_array_slot_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_r2, 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_proceed();
	}
MR_def_label(__Unify___profile__call_site_array_slot_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___profile__call_site_array_slot_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__call_site_array_slot_0_0_i1);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_np_tailcall_ent(__Unify___array__array_1_0);
	}
MR_def_label(__Unify___profile__call_site_array_slot_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___array__array_1_0);

MR_BEGIN_MODULE(profile_module100)
	MR_init_entry1(__Compare___profile__call_site_array_slot_0_0);
	MR_init_label5(__Compare___profile__call_site_array_slot_0_0,5,3,40,10,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__call_site_array_slot_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_array_slot_0_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_array_slot_0_0_i5);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___profile__call_site_array_slot_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___profile__call_site_array_slot_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_array_slot_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___profile__call_site_array_slot_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__call_site_array_slot_0_0_i10);
MR_def_label(__Compare___profile__call_site_array_slot_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_array_slot_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___array__array_1_0);
MR_def_label(__Compare___profile__call_site_array_slot_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(profile_module101)
	MR_init_entry1(__Unify___profile__call_site_callees_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__call_site_callees_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(profile_module102)
	MR_init_entry1(__Compare___profile__call_site_callees_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__call_site_callees_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module103)
	MR_init_entry1(__Unify___profile__call_site_caller_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__call_site_caller_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module104)
	MR_init_entry1(__Compare___profile__call_site_caller_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__call_site_caller_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___measurements__own_prof_info_0_0);

MR_BEGIN_MODULE(profile_module105)
	MR_init_entry1(__Unify___profile__call_site_dynamic_0_0);
	MR_init_label1(__Unify___profile__call_site_dynamic_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__call_site_dynamic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__call_site_dynamic_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__call_site_dynamic_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	MR_np_tailcall_ent(__Unify___measurements__own_prof_info_0_0);
	}
MR_def_label(__Unify___profile__call_site_dynamic_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___measurements__own_prof_info_0_0);

MR_BEGIN_MODULE(profile_module106)
	MR_init_entry1(__Compare___profile__call_site_dynamic_0_0);
	MR_init_label3(__Compare___profile__call_site_dynamic_0_0,3,7,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__call_site_dynamic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__call_site_dynamic_0_0_i3);
MR_def_label(__Compare___profile__call_site_dynamic_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_dynamic_0_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__call_site_dynamic_0_0_i7);
MR_def_label(__Compare___profile__call_site_dynamic_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_dynamic_0_0_i12);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___measurements__own_prof_info_0_0);
MR_def_label(__Compare___profile__call_site_dynamic_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module107)
	MR_init_entry1(__Unify___profile__call_site_dynamic_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__call_site_dynamic_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module108)
	MR_init_entry1(__Compare___profile__call_site_dynamic_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__call_site_dynamic_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module109)
	MR_init_entry1(__Unify___profile__call_site_dynamics_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__call_site_dynamics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module110)
	MR_init_entry1(__Compare___profile__call_site_dynamics_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__call_site_dynamics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module111)
	MR_init_entry1(__Unify___profile__call_site_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__call_site_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module112)
	MR_init_entry1(__Compare___profile__call_site_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__call_site_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module113)
	MR_init_entry1(__Unify___profile__call_site_kind_and_callee_0_0);
	MR_init_label2(__Unify___profile__call_site_kind_and_callee_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__call_site_kind_and_callee_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Unify___profile__call_site_kind_and_callee_0_0_i4);
	}
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
MR_def_label(__Unify___profile__call_site_kind_and_callee_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___profile__call_site_kind_and_callee_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__call_site_kind_and_callee_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_proceed();
	}
MR_def_label(__Unify___profile__call_site_kind_and_callee_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(profile_module114)
	MR_init_entry1(__Compare___profile__call_site_kind_and_callee_0_0);
	MR_init_label8(__Compare___profile__call_site_kind_and_callee_0_0,51,19,12,5,8,4,67,144)
	MR_init_label2(__Compare___profile__call_site_kind_and_callee_0_0,39,138)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__call_site_kind_and_callee_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i4);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i5);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r1),1)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i12);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r1),2)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i19);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i8);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i8);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),1)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i8);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),2)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i8);
	}
MR_def_label(__Compare___profile__call_site_kind_and_callee_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___profile__call_site_kind_and_callee_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i8);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i8);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),1)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i8);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),2)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i51);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___profile__call_site_kind_and_callee_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i8);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i8);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),1)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i51);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),2)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i67);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___profile__call_site_kind_and_callee_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i8);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i51);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),1)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i67);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),2)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i67);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___profile__call_site_kind_and_callee_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___profile__call_site_kind_and_callee_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i144);
	}
MR_def_label(__Compare___profile__call_site_kind_and_callee_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___profile__call_site_kind_and_callee_0_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__call_site_kind_and_callee_0_0_i39);
MR_def_label(__Compare___profile__call_site_kind_and_callee_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_kind_and_callee_0_0_i138);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___profile__call_site_kind_and_callee_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module115)
	MR_init_entry1(__Unify___profile__call_site_static_0_0);
	MR_init_label2(__Unify___profile__call_site_static_0_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__call_site_static_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__call_site_static_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__call_site_static_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 4);
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___profile__call_site_kind_and_callee_0_0,
		__Unify___profile__call_site_static_0_0_i2);
MR_def_label(__Unify___profile__call_site_static_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__call_site_static_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___profile__call_site_static_0_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(2), (char *)MR_sv(4)) == 0);
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___profile__call_site_static_0_0,1)
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


MR_BEGIN_MODULE(profile_module116)
	MR_init_entry1(__Compare___profile__call_site_static_0_0);
	MR_init_label5(__Compare___profile__call_site_static_0_0,3,7,11,15,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__call_site_static_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__call_site_static_0_0_i3);
MR_def_label(__Compare___profile__call_site_static_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_static_0_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__call_site_static_0_0_i7);
MR_def_label(__Compare___profile__call_site_static_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_static_0_0_i22);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___profile__call_site_kind_and_callee_0_0,
		__Compare___profile__call_site_static_0_0_i11);
MR_def_label(__Compare___profile__call_site_static_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_static_0_0_i22);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__call_site_static_0_0_i15);
MR_def_label(__Compare___profile__call_site_static_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__call_site_static_0_0_i22);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___profile__call_site_static_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module117)
	MR_init_entry1(__Unify___profile__call_site_static_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__call_site_static_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module118)
	MR_init_entry1(__Compare___profile__call_site_static_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__call_site_static_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module119)
	MR_init_entry1(__Unify___profile__call_site_static_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__call_site_static_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module120)
	MR_init_entry1(__Compare___profile__call_site_static_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__call_site_static_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module121)
	MR_init_entry1(__Unify___profile__call_site_statics_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__call_site_statics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module122)
	MR_init_entry1(__Compare___profile__call_site_statics_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__call_site_statics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module123)
	MR_init_entry1(__Unify___profile__clique_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__clique_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module124)
	MR_init_entry1(__Compare___profile__clique_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__clique_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(profile_module125)
	MR_init_entry1(__Unify___profile__compensation_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__compensation_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
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

MR_BEGIN_MODULE(profile_module126)
	MR_init_entry1(__Compare___profile__compensation_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__compensation_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

MR_BEGIN_MODULE(profile_module127)
	MR_init_entry1(__Unify___profile__deep_0_0);
	MR_init_label8(__Unify___profile__deep_0_0,2,4,6,8,10,12,14,16)
	MR_init_label8(__Unify___profile__deep_0_0,18,20,22,24,26,28,30,32)
	MR_init_label6(__Unify___profile__deep_0_0,34,36,38,40,42,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__deep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(51);
	MR_sv(51) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(6) = MR_ctfield(0, MR_r1, 6);
	MR_sv(7) = MR_ctfield(0, MR_r1, 7);
	MR_sv(8) = MR_ctfield(0, MR_r1, 8);
	MR_sv(9) = MR_ctfield(0, MR_r1, 9);
	MR_sv(10) = MR_ctfield(0, MR_r1, 10);
	MR_sv(11) = MR_ctfield(0, MR_r1, 11);
	MR_sv(12) = MR_ctfield(0, MR_r1, 12);
	MR_sv(13) = MR_ctfield(0, MR_r1, 13);
	MR_sv(14) = MR_ctfield(0, MR_r1, 14);
	MR_sv(15) = MR_ctfield(0, MR_r1, 15);
	MR_sv(16) = MR_ctfield(0, MR_r1, 16);
	MR_sv(17) = MR_ctfield(0, MR_r1, 17);
	MR_sv(18) = MR_ctfield(0, MR_r1, 18);
	MR_sv(19) = MR_ctfield(0, MR_r1, 19);
	MR_sv(20) = MR_ctfield(0, MR_r1, 20);
	MR_sv(21) = MR_ctfield(0, MR_r1, 21);
	MR_sv(22) = MR_ctfield(0, MR_r1, 22);
	MR_sv(23) = MR_ctfield(0, MR_r1, 23);
	MR_sv(24) = MR_ctfield(0, MR_r1, 24);
	MR_sv(25) = MR_ctfield(0, MR_r1, 25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(26) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(27) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(28) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(29) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(30) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(31) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(32) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(33) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(34) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(35) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(36) = MR_ctfield(0, MR_tempr1, 11);
	MR_sv(37) = MR_ctfield(0, MR_tempr1, 12);
	MR_sv(38) = MR_ctfield(0, MR_tempr1, 13);
	MR_sv(39) = MR_ctfield(0, MR_tempr1, 14);
	MR_sv(40) = MR_ctfield(0, MR_tempr1, 15);
	MR_sv(41) = MR_ctfield(0, MR_tempr1, 16);
	MR_sv(42) = MR_ctfield(0, MR_tempr1, 17);
	MR_sv(43) = MR_ctfield(0, MR_tempr1, 18);
	MR_sv(44) = MR_ctfield(0, MR_tempr1, 19);
	MR_sv(45) = MR_ctfield(0, MR_tempr1, 20);
	MR_sv(46) = MR_ctfield(0, MR_tempr1, 21);
	MR_sv(47) = MR_ctfield(0, MR_tempr1, 22);
	MR_sv(48) = MR_ctfield(0, MR_tempr1, 23);
	MR_sv(49) = MR_ctfield(0, MR_tempr1, 24);
	MR_sv(50) = MR_ctfield(0, MR_tempr1, 25);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___profile__profile_stats_0_0,
		__Unify___profile__deep_0_0_i2);
MR_def_label(__Unify___profile__deep_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(1), (char *)MR_sv(26)) != 0)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(2), (char *)MR_sv(27)) != 0)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(3), (char *)MR_sv(28)) != 0)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(29))) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(30);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i4);
MR_def_label(__Unify___profile__deep_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(31);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i6);
MR_def_label(__Unify___profile__deep_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(32);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i8);
MR_def_label(__Unify___profile__deep_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(33);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i10);
MR_def_label(__Unify___profile__deep_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(34);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i12);
MR_def_label(__Unify___profile__deep_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(35);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i14);
MR_def_label(__Unify___profile__deep_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(36);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i16);
MR_def_label(__Unify___profile__deep_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(37);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i18);
MR_def_label(__Unify___profile__deep_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(38);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i20);
MR_def_label(__Unify___profile__deep_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(39);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i22);
MR_def_label(__Unify___profile__deep_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(40);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i24);
MR_def_label(__Unify___profile__deep_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(41);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i26);
MR_def_label(__Unify___profile__deep_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(42);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i28);
MR_def_label(__Unify___profile__deep_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(43);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i30);
MR_def_label(__Unify___profile__deep_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(44);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i32);
MR_def_label(__Unify___profile__deep_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(45);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i34);
MR_def_label(__Unify___profile__deep_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(46);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i36);
MR_def_label(__Unify___profile__deep_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_sv(47);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i38);
MR_def_label(__Unify___profile__deep_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(48);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i40);
MR_def_label(__Unify___profile__deep_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(49);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__deep_0_0_i42);
MR_def_label(__Unify___profile__deep_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(50);
	MR_succip_word = MR_sv(51);
	MR_decr_sp(51);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___profile__deep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(51);
	MR_decr_sp(51);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module128)
	MR_init_entry1(__Compare___profile__deep_0_0);
	MR_init_label8(__Compare___profile__deep_0_0,3,7,11,15,19,23,27,31)
	MR_init_label8(__Compare___profile__deep_0_0,35,39,43,47,51,55,59,63)
	MR_init_label8(__Compare___profile__deep_0_0,67,71,75,79,83,87,91,95)
	MR_init_label2(__Compare___profile__deep_0_0,99,127)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__deep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(51);
	MR_sv(51) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(50) = MR_ctfield(0, MR_tempr1, 25);
	MR_sv(49) = MR_ctfield(0, MR_tempr1, 24);
	MR_sv(48) = MR_ctfield(0, MR_tempr1, 23);
	MR_sv(47) = MR_ctfield(0, MR_tempr1, 22);
	MR_sv(46) = MR_ctfield(0, MR_tempr1, 21);
	MR_sv(45) = MR_ctfield(0, MR_tempr1, 20);
	MR_sv(44) = MR_ctfield(0, MR_tempr1, 19);
	MR_sv(43) = MR_ctfield(0, MR_tempr1, 18);
	MR_sv(42) = MR_ctfield(0, MR_tempr1, 17);
	MR_sv(41) = MR_ctfield(0, MR_tempr1, 16);
	MR_sv(40) = MR_ctfield(0, MR_tempr1, 15);
	MR_sv(39) = MR_ctfield(0, MR_tempr1, 14);
	MR_sv(38) = MR_ctfield(0, MR_tempr1, 13);
	MR_sv(37) = MR_ctfield(0, MR_tempr1, 12);
	MR_sv(36) = MR_ctfield(0, MR_tempr1, 11);
	MR_sv(35) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(34) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(33) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(32) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(31) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(30) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(29) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(28) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(27) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(26) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(25) = MR_ctfield(0, MR_r1, 25);
	MR_sv(24) = MR_ctfield(0, MR_r1, 24);
	MR_sv(23) = MR_ctfield(0, MR_r1, 23);
	MR_sv(22) = MR_ctfield(0, MR_r1, 22);
	MR_sv(21) = MR_ctfield(0, MR_r1, 21);
	MR_sv(20) = MR_ctfield(0, MR_r1, 20);
	MR_sv(19) = MR_ctfield(0, MR_r1, 19);
	MR_sv(18) = MR_ctfield(0, MR_r1, 18);
	MR_sv(17) = MR_ctfield(0, MR_r1, 17);
	MR_sv(16) = MR_ctfield(0, MR_r1, 16);
	MR_sv(15) = MR_ctfield(0, MR_r1, 15);
	MR_sv(14) = MR_ctfield(0, MR_r1, 14);
	MR_sv(13) = MR_ctfield(0, MR_r1, 13);
	MR_sv(12) = MR_ctfield(0, MR_r1, 12);
	MR_sv(11) = MR_ctfield(0, MR_r1, 11);
	MR_sv(10) = MR_ctfield(0, MR_r1, 10);
	MR_sv(9) = MR_ctfield(0, MR_r1, 9);
	MR_sv(8) = MR_ctfield(0, MR_r1, 8);
	MR_sv(7) = MR_ctfield(0, MR_r1, 7);
	MR_sv(6) = MR_ctfield(0, MR_r1, 6);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Compare___profile__profile_stats_0_0,
		__Compare___profile__deep_0_0_i3);
MR_def_label(__Compare___profile__deep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__deep_0_0_i7);
MR_def_label(__Compare___profile__deep_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__deep_0_0_i11);
MR_def_label(__Compare___profile__deep_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__deep_0_0_i15);
MR_def_label(__Compare___profile__deep_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__deep_0_0_i19);
MR_def_label(__Compare___profile__deep_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(30);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i23);
MR_def_label(__Compare___profile__deep_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(31);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i27);
MR_def_label(__Compare___profile__deep_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(32);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i31);
MR_def_label(__Compare___profile__deep_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(33);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i35);
MR_def_label(__Compare___profile__deep_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(34);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i39);
MR_def_label(__Compare___profile__deep_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(35);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i43);
MR_def_label(__Compare___profile__deep_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(36);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i47);
MR_def_label(__Compare___profile__deep_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(37);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i51);
MR_def_label(__Compare___profile__deep_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(38);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i55);
MR_def_label(__Compare___profile__deep_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(39);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i59);
MR_def_label(__Compare___profile__deep_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(40);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i63);
MR_def_label(__Compare___profile__deep_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(41);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i67);
MR_def_label(__Compare___profile__deep_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(42);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i71);
MR_def_label(__Compare___profile__deep_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(43);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i75);
MR_def_label(__Compare___profile__deep_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(44);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i79);
MR_def_label(__Compare___profile__deep_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(45);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i83);
MR_def_label(__Compare___profile__deep_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(46);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i87);
MR_def_label(__Compare___profile__deep_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_sv(47);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i91);
MR_def_label(__Compare___profile__deep_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(48);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i95);
MR_def_label(__Compare___profile__deep_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(49);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__deep_0_0_i99);
MR_def_label(__Compare___profile__deep_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__deep_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(50);
	MR_succip_word = MR_sv(51);
	MR_decr_sp(51);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___profile__deep_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(51);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module129)
	MR_init_entry1(__Unify___profile__initial_deep_0_0);
	MR_init_label4(__Unify___profile__initial_deep_0_0,2,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__initial_deep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr5 = MR_r2;
	MR_tempr3 = MR_ctfield(0, MR_tempr5, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr2 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr2 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 2);
	if ((MR_tempr2 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 3);
	if ((MR_tempr2 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 4);
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 4);
	if ((MR_tempr2 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 5);
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 5);
	if ((MR_tempr2 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 6);
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 6);
	if ((MR_tempr2 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 7);
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 7);
	if ((MR_tempr2 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 8);
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 8);
	if ((MR_tempr2 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 9);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 9);
	if ((MR_tempr2 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_r1, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	if ((MR_tempr2 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_ctfield(0, MR_r1, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_tempr1 = MR_tempr5;
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__initial_deep_0_0_i2);
MR_def_label(__Unify___profile__initial_deep_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__initial_deep_0_0_i4);
MR_def_label(__Unify___profile__initial_deep_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__initial_deep_0_0_i6);
MR_def_label(__Unify___profile__initial_deep_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__initial_deep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___array__array_1_0);
MR_def_label(__Unify___profile__initial_deep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module130)
	MR_init_entry1(__Compare___profile__initial_deep_0_0);
	MR_init_label6(__Compare___profile__initial_deep_0_0,3,7,11,15,19,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__initial_deep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Compare___profile__profile_stats_0_0,
		__Compare___profile__initial_deep_0_0_i3);
MR_def_label(__Compare___profile__initial_deep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__initial_deep_0_0_i27);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__initial_deep_0_0_i7);
MR_def_label(__Compare___profile__initial_deep_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__initial_deep_0_0_i27);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__initial_deep_0_0_i11);
MR_def_label(__Compare___profile__initial_deep_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__initial_deep_0_0_i27);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__initial_deep_0_0_i15);
MR_def_label(__Compare___profile__initial_deep_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__initial_deep_0_0_i27);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__initial_deep_0_0_i19);
MR_def_label(__Compare___profile__initial_deep_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__initial_deep_0_0_i27);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___array__array_1_0);
MR_def_label(__Compare___profile__initial_deep_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module131)
	MR_init_entry1(__Unify___profile__is_zeroed_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__is_zeroed_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module132)
	MR_init_entry1(__Compare___profile__is_zeroed_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__is_zeroed_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___measurements__inherit_prof_info_0_0);

MR_BEGIN_MODULE(profile_module133)
	MR_init_entry1(__Unify___profile__module_data_0_0);
	MR_init_label3(__Unify___profile__module_data_0_0,2,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__module_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___measurements__own_prof_info_0_0,
		__Unify___profile__module_data_0_0_i2);
MR_def_label(__Unify___profile__module_data_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__module_data_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___measurements__inherit_prof_info_0_0,
		__Unify___profile__module_data_0_0_i4);
MR_def_label(__Unify___profile__module_data_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__module_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___profile__module_data_0_0,1)
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

MR_decl_entry(__Compare___measurements__inherit_prof_info_0_0);

MR_BEGIN_MODULE(profile_module134)
	MR_init_entry1(__Compare___profile__module_data_0_0);
	MR_init_label3(__Compare___profile__module_data_0_0,3,7,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__module_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Compare___measurements__own_prof_info_0_0,
		__Compare___profile__module_data_0_0_i3);
MR_def_label(__Compare___profile__module_data_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__module_data_0_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___measurements__inherit_prof_info_0_0,
		__Compare___profile__module_data_0_0_i7);
MR_def_label(__Compare___profile__module_data_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__module_data_0_0_i12);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___profile__module_data_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module135)
	MR_init_entry1(__Unify___profile__pred_or_func_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__pred_or_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module136)
	MR_init_entry1(__Compare___profile__pred_or_func_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__pred_or_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module137)
	MR_init_entry1(__Unify___profile__proc_dynamic_0_0);
	MR_init_label1(__Unify___profile__proc_dynamic_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__proc_dynamic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__proc_dynamic_0_0_i1);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(__Unify___array__array_1_0);
	}
MR_def_label(__Unify___profile__proc_dynamic_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module138)
	MR_init_entry1(__Compare___profile__proc_dynamic_0_0);
	MR_init_label2(__Compare___profile__proc_dynamic_0_0,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__proc_dynamic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__proc_dynamic_0_0_i3);
MR_def_label(__Compare___profile__proc_dynamic_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_dynamic_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___array__array_1_0);
MR_def_label(__Compare___profile__proc_dynamic_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module139)
	MR_init_entry1(__Unify___profile__proc_dynamic_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__proc_dynamic_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module140)
	MR_init_entry1(__Compare___profile__proc_dynamic_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__proc_dynamic_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module141)
	MR_init_entry1(__Unify___profile__proc_dynamics_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__proc_dynamics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module142)
	MR_init_entry1(__Compare___profile__proc_dynamics_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__proc_dynamics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module143)
	MR_init_entry1(__Unify___profile__proc_id_0_0);
	MR_init_label2(__Unify___profile__proc_id_0_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__proc_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Unify___profile__proc_id_0_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Unify___profile__proc_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__proc_id_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___profile__proc_id_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 2);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___profile__proc_id_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 3);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___profile__proc_id_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 4);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 4);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__proc_id_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 5);
	MR_r1 = MR_ctfield(0, MR_tempr3, 5);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___profile__proc_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___profile__proc_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___profile__proc_id_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___profile__proc_id_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 2);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___profile__proc_id_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 3);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 3);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___profile__proc_id_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 4);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 4);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__proc_id_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 5);
	MR_r1 = MR_ctfield(1, MR_tempr3, 5);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___profile__proc_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module144)
	MR_init_entry1(__Compare___profile__proc_id_0_0);
	MR_init_label8(__Compare___profile__proc_id_0_0,7,11,15,19,23,5,3,121)
	MR_init_label6(__Compare___profile__proc_id_0_0,35,39,43,47,51,118)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__proc_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_id_0_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_id_0_0_i5);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(10) = MR_ctfield(0, MR_r1, 1);
	MR_sv(9) = MR_ctfield(0, MR_r1, 2);
	MR_sv(8) = MR_ctfield(0, MR_r1, 3);
	MR_sv(7) = MR_ctfield(0, MR_r1, 4);
	MR_sv(6) = MR_ctfield(0, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__proc_id_0_0_i7);
MR_def_label(__Compare___profile__proc_id_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_id_0_0_i118);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__proc_id_0_0_i11);
MR_def_label(__Compare___profile__proc_id_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_id_0_0_i118);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__proc_id_0_0_i15);
MR_def_label(__Compare___profile__proc_id_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_id_0_0_i118);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__proc_id_0_0_i19);
MR_def_label(__Compare___profile__proc_id_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_id_0_0_i118);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__proc_id_0_0_i23);
MR_def_label(__Compare___profile__proc_id_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_id_0_0_i118);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___profile__proc_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___profile__proc_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_id_0_0_i121);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___profile__proc_id_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(10) = MR_ctfield(1, MR_r1, 1);
	MR_sv(9) = MR_ctfield(1, MR_r1, 2);
	MR_sv(8) = MR_ctfield(1, MR_r1, 3);
	MR_sv(7) = MR_ctfield(1, MR_r1, 4);
	MR_sv(6) = MR_ctfield(1, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 5);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 4);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__proc_id_0_0_i35);
MR_def_label(__Compare___profile__proc_id_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_id_0_0_i118);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__proc_id_0_0_i39);
MR_def_label(__Compare___profile__proc_id_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_id_0_0_i118);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__proc_id_0_0_i43);
MR_def_label(__Compare___profile__proc_id_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_id_0_0_i118);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__proc_id_0_0_i47);
MR_def_label(__Compare___profile__proc_id_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_id_0_0_i118);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__proc_id_0_0_i51);
MR_def_label(__Compare___profile__proc_id_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_id_0_0_i118);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___profile__proc_id_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module145)
	MR_init_entry1(__Unify___profile__proc_static_0_0);
	MR_init_label3(__Unify___profile__proc_static_0_0,2,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__proc_static_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(6) = MR_ctfield(0, MR_r1, 6);
	MR_sv(7) = MR_ctfield(0, MR_r1, 7);
	MR_sv(8) = MR_ctfield(0, MR_r1, 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 8);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___profile__proc_id_0_0,
		__Unify___profile__proc_static_0_0_i2);
MR_def_label(__Unify___profile__proc_static_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__proc_static_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(1), (char *)MR_sv(9)) != 0)) {
		MR_GOTO_LAB(__Unify___profile__proc_static_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(2), (char *)MR_sv(10)) != 0)) {
		MR_GOTO_LAB(__Unify___profile__proc_static_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(3), (char *)MR_sv(11)) != 0)) {
		MR_GOTO_LAB(__Unify___profile__proc_static_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(4), (char *)MR_sv(12)) != 0)) {
		MR_GOTO_LAB(__Unify___profile__proc_static_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___profile__proc_static_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(14))) {
		MR_GOTO_LAB(__Unify___profile__proc_static_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___profile__proc_static_0_0_i4);
MR_def_label(__Unify___profile__proc_static_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___profile__proc_static_0_0_i1);
	}
	MR_r1 = (MR_sv(8) == MR_sv(16));
	MR_decr_sp_and_return(17);
MR_def_label(__Unify___profile__proc_static_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module146)
	MR_init_entry1(__Compare___profile__proc_static_0_0);
	MR_init_label8(__Compare___profile__proc_static_0_0,3,7,11,15,19,23,27,31)
	MR_init_label1(__Compare___profile__proc_static_0_0,42)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__proc_static_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(0, MR_r1, 8);
	MR_sv(7) = MR_ctfield(0, MR_r1, 7);
	MR_sv(6) = MR_ctfield(0, MR_r1, 6);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Compare___profile__proc_id_0_0,
		__Compare___profile__proc_static_0_0_i3);
MR_def_label(__Compare___profile__proc_static_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_static_0_0_i42);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__proc_static_0_0_i7);
MR_def_label(__Compare___profile__proc_static_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_static_0_0_i42);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__proc_static_0_0_i11);
MR_def_label(__Compare___profile__proc_static_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_static_0_0_i42);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__proc_static_0_0_i15);
MR_def_label(__Compare___profile__proc_static_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_static_0_0_i42);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___profile__proc_static_0_0_i19);
MR_def_label(__Compare___profile__proc_static_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_static_0_0_i42);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__proc_static_0_0_i23);
MR_def_label(__Compare___profile__proc_static_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_static_0_0_i42);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__proc_static_0_0_i27);
MR_def_label(__Compare___profile__proc_static_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_static_0_0_i42);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___profile__proc_static_0_0_i31);
MR_def_label(__Compare___profile__proc_static_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__proc_static_0_0_i42);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___profile__proc_static_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module147)
	MR_init_entry1(__Unify___profile__proc_static_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__proc_static_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module148)
	MR_init_entry1(__Compare___profile__proc_static_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__proc_static_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module149)
	MR_init_entry1(__Unify___profile__proc_statics_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__proc_statics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module150)
	MR_init_entry1(__Compare___profile__proc_statics_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__proc_statics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module151)
	MR_init_entry1(__Unify___profile__profile_stats_0_0);
	MR_init_label1(__Unify___profile__profile_stats_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profile__profile_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__profile_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__profile_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__profile_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__profile_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 4);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 4);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__profile_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 5);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 5);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__profile_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 6);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 6);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__profile_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 7);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 7);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__profile_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 8);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 8);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___profile__profile_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 9);
	MR_r1 = MR_ctfield(0, MR_tempr3, 9);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___profile__profile_stats_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profile_module152)
	MR_init_entry1(__Compare___profile__profile_stats_0_0);
	MR_init_label8(__Compare___profile__profile_stats_0_0,3,7,11,15,19,23,27,31)
	MR_init_label2(__Compare___profile__profile_stats_0_0,35,47)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profile__profile_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(18) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(17) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_ctfield(0, MR_r1, 9);
	MR_sv(8) = MR_ctfield(0, MR_r1, 8);
	MR_sv(7) = MR_ctfield(0, MR_r1, 7);
	MR_sv(6) = MR_ctfield(0, MR_r1, 6);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__profile_stats_0_0_i3);
MR_def_label(__Compare___profile__profile_stats_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__profile_stats_0_0_i47);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__profile_stats_0_0_i7);
MR_def_label(__Compare___profile__profile_stats_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__profile_stats_0_0_i47);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__profile_stats_0_0_i11);
MR_def_label(__Compare___profile__profile_stats_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__profile_stats_0_0_i47);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__profile_stats_0_0_i15);
MR_def_label(__Compare___profile__profile_stats_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__profile_stats_0_0_i47);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__profile_stats_0_0_i19);
MR_def_label(__Compare___profile__profile_stats_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__profile_stats_0_0_i47);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__profile_stats_0_0_i23);
MR_def_label(__Compare___profile__profile_stats_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__profile_stats_0_0_i47);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__profile_stats_0_0_i27);
MR_def_label(__Compare___profile__profile_stats_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__profile_stats_0_0_i47);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__profile_stats_0_0_i31);
MR_def_label(__Compare___profile__profile_stats_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__profile_stats_0_0_i47);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___profile__profile_stats_0_0_i35);
MR_def_label(__Compare___profile__profile_stats_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profile__profile_stats_0_0_i47);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___profile__profile_stats_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__profile_maybe_bunch_0(void)
{
	profile_module0();
	profile_module1();
	profile_module2();
	profile_module3();
	profile_module4();
	profile_module5();
	profile_module6();
	profile_module7();
	profile_module8();
	profile_module9();
	profile_module10();
	profile_module11();
	profile_module12();
	profile_module13();
	profile_module14();
	profile_module15();
	profile_module16();
	profile_module17();
	profile_module18();
	profile_module19();
	profile_module20();
	profile_module21();
	profile_module22();
	profile_module23();
	profile_module24();
	profile_module25();
	profile_module26();
	profile_module27();
	profile_module28();
	profile_module29();
	profile_module30();
	profile_module31();
	profile_module32();
	profile_module33();
	profile_module34();
	profile_module35();
	profile_module36();
	profile_module37();
	profile_module38();
	profile_module39();
}

static void mercury__profile_maybe_bunch_1(void)
{
	profile_module40();
	profile_module41();
	profile_module42();
	profile_module43();
	profile_module44();
	profile_module45();
	profile_module46();
	profile_module47();
	profile_module48();
	profile_module49();
	profile_module50();
	profile_module51();
	profile_module52();
	profile_module53();
	profile_module54();
	profile_module55();
	profile_module56();
	profile_module57();
	profile_module58();
	profile_module59();
	profile_module60();
	profile_module61();
	profile_module62();
	profile_module63();
	profile_module64();
	profile_module65();
	profile_module66();
	profile_module67();
	profile_module68();
	profile_module69();
	profile_module70();
	profile_module71();
	profile_module72();
	profile_module73();
	profile_module74();
	profile_module75();
	profile_module76();
	profile_module77();
	profile_module78();
	profile_module79();
}

static void mercury__profile_maybe_bunch_2(void)
{
	profile_module80();
	profile_module81();
	profile_module82();
	profile_module83();
	profile_module84();
	profile_module85();
	profile_module86();
	profile_module87();
	profile_module88();
	profile_module89();
	profile_module90();
	profile_module91();
	profile_module92();
	profile_module93();
	profile_module94();
	profile_module95();
	profile_module96();
	profile_module97();
	profile_module98();
	profile_module99();
	profile_module100();
	profile_module101();
	profile_module102();
	profile_module103();
	profile_module104();
	profile_module105();
	profile_module106();
	profile_module107();
	profile_module108();
	profile_module109();
	profile_module110();
	profile_module111();
	profile_module112();
	profile_module113();
	profile_module114();
	profile_module115();
	profile_module116();
	profile_module117();
	profile_module118();
	profile_module119();
}

static void mercury__profile_maybe_bunch_3(void)
{
	profile_module120();
	profile_module121();
	profile_module122();
	profile_module123();
	profile_module124();
	profile_module125();
	profile_module126();
	profile_module127();
	profile_module128();
	profile_module129();
	profile_module130();
	profile_module131();
	profile_module132();
	profile_module133();
	profile_module134();
	profile_module135();
	profile_module136();
	profile_module137();
	profile_module138();
	profile_module139();
	profile_module140();
	profile_module141();
	profile_module142();
	profile_module143();
	profile_module144();
	profile_module145();
	profile_module146();
	profile_module147();
	profile_module148();
	profile_module149();
	profile_module150();
	profile_module151();
	profile_module152();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__profile__init(void);
void mercury__profile__init_type_tables(void);
void mercury__profile__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__profile__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__profile__init_complexity_procs(void);
#endif

void mercury__profile__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__profile_maybe_bunch_0();
	mercury__profile_maybe_bunch_1();
	mercury__profile_maybe_bunch_2();
	mercury__profile_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_profile_stats_0,
		profile__profile_stats_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_proc_statics_0,
		profile__proc_statics_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_proc_static_ptr_0,
		profile__proc_static_ptr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_proc_static_0,
		profile__proc_static_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_proc_id_0,
		profile__proc_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_proc_dynamics_0,
		profile__proc_dynamics_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0,
		profile__proc_dynamic_ptr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_proc_dynamic_0,
		profile__proc_dynamic_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_pred_or_func_0,
		profile__pred_or_func_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_module_data_0,
		profile__module_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_is_zeroed_0,
		profile__is_zeroed_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_initial_deep_0,
		profile__initial_deep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_deep_0,
		profile__deep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_compensation_table_0,
		profile__compensation_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_clique_ptr_0,
		profile__clique_ptr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_call_site_statics_0,
		profile__call_site_statics_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_call_site_static_ptr_0,
		profile__call_site_static_ptr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_call_site_static_map_0,
		profile__call_site_static_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_call_site_static_0,
		profile__call_site_static_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_call_site_kind_and_callee_0,
		profile__call_site_kind_and_callee_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_call_site_kind_0,
		profile__call_site_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_call_site_dynamics_0,
		profile__call_site_dynamics_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0,
		profile__call_site_dynamic_ptr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_call_site_dynamic_0,
		profile__call_site_dynamic_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_call_site_caller_0,
		profile__call_site_caller_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_call_site_callees_0,
		profile__call_site_callees_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profile__type_ctor_info_call_site_array_slot_0,
		profile__call_site_array_slot_0_0);
	mercury__profile__init_debugger();
}

void mercury__profile__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_profile_stats_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_proc_statics_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_proc_static_ptr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_proc_static_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_proc_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_proc_dynamics_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_proc_dynamic_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_pred_or_func_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_module_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_is_zeroed_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_initial_deep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_deep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_compensation_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_clique_ptr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_call_site_statics_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_call_site_static_ptr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_call_site_static_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_call_site_static_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_call_site_kind_and_callee_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_call_site_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_call_site_dynamics_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_call_site_dynamic_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_call_site_caller_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_call_site_callees_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profile__type_ctor_info_call_site_array_slot_0);
	}
}


void mercury__profile__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__profile__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__profile__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
