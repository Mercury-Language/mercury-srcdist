/*
** Automatically generated from `lco.m'
** by the Mercury compiler,
** version rotd-2011-07-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__lco__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.lco.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.lco.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "transform_hlds.lco.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "transform_hlds.lco.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "transform_hlds.lco.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.lco.c"
#line 49 "transform_hlds.lco.c"
#include "transform_hlds.lco.mh"

#line 52 "transform_hlds.lco.c"
#line 53 "transform_hlds.lco.c"
#ifndef TRANSFORM_HLDS__LCO_DECL_GUARD
#define TRANSFORM_HLDS__LCO_DECL_GUARD

#line 57 "transform_hlds.lco.c"
#line 58 "transform_hlds.lco.c"

#endif
#line 61 "transform_hlds.lco.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[11];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__lco__type_ctor_info_allow_float_addr_0,
	mercury_data_transform_hlds__lco__type_ctor_info_field_id_0,
	mercury_data_transform_hlds__lco__type_ctor_info_lco_const_info_0,
	mercury_data_transform_hlds__lco__type_ctor_info_lco_info_0,
	mercury_data_transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0,
	mercury_data_transform_hlds__lco__type_ctor_info_proc_changed_0,
	mercury_data_transform_hlds__lco__type_ctor_info_store_target_0,
	mercury_data_transform_hlds__lco__type_ctor_info_var_to_target_0,
	mercury_data_transform_hlds__lco__type_ctor_info_variant_arg_0,
	mercury_data_transform_hlds__lco__type_ctor_info_variant_id_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__lco__type_ctor_info_variant_map_0;
MR_decl_label4(transform_hlds__lco__acceptable_construct_mode_2_0, 2,4,6,1)
MR_decl_label7(transform_hlds__lco__classify_proc_call_args_7_0, 3,9,11,12,14,16,8)
MR_decl_label4(transform_hlds__lco__create_variant_name_4_0, 3,4,5,6)
MR_decl_label10(transform_hlds__lco__ensure_variant_exists_8_0, 4,6,9,3,12,13,14,15,16,20)
MR_decl_label8(transform_hlds__lco__ensure_variant_exists_8_0, 22,19,23,26,25,29,32,1)
MR_decl_label10(transform_hlds__lco__find_args_to_pass_by_addr_10_0, 89,4,9,10,5,6,16,18,22,20)
MR_decl_label3(transform_hlds__lco__find_args_to_pass_by_addr_10_0, 17,28,32)
MR_decl_label6(transform_hlds__lco__grounding_to_variant_args_5_0, 5,3,6,9,11,7)
MR_decl_label5(transform_hlds__lco__is_grounding_4_0, 2,5,7,9,1)
MR_decl_label3(transform_hlds__lco__lco_in_cases_5_0, 18,4,6)
MR_decl_label10(transform_hlds__lco__lco_in_conj_7_0, 170,3,4,10,14,16,18,19,17,22)
MR_decl_label10(transform_hlds__lco__lco_in_conj_7_0, 23,5,6,30,32,33,34,35,38,39)
MR_decl_label10(transform_hlds__lco__lco_in_conj_7_0, 40,41,42,44,46,49,51,52,53,55)
MR_decl_label5(transform_hlds__lco__lco_in_conj_7_0, 56,59,61,62,27)
MR_decl_label10(transform_hlds__lco__lco_in_goal_5_0, 134,8,10,11,16,18,20,14,13,4)
MR_decl_label10(transform_hlds__lco__lco_in_goal_5_0, 28,30,32,27,26,37,38,36,42,45)
MR_decl_label5(transform_hlds__lco__lco_in_goal_5_0, 41,50,49,133,132)
MR_decl_label4(transform_hlds__lco__lco_modulo_constructors_2_0, 2,3,5,9)
MR_decl_label10(transform_hlds__lco__lco_proc_11_0, 104,4,5,6,7,50,11,15,16,17)
MR_decl_label10(transform_hlds__lco__lco_proc_11_0, 14,10,9,19,20,21,22,25,26,27)
MR_decl_label10(transform_hlds__lco__lco_proc_11_0, 28,29,30,32,34,33,37,38,42,43)
MR_decl_label4(transform_hlds__lco__lco_proc_11_0, 44,45,46,39)
MR_decl_label6(transform_hlds__lco__lco_process_proc_update_3_0, 2,3,4,5,6,7)
MR_decl_label10(transform_hlds__lco__lco_process_proc_variant_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__lco__lco_process_proc_variant_4_0, 12,13,14,15,16,17,18,20,21,19)
MR_decl_label10(transform_hlds__lco__lco_process_proc_variant_4_0, 22,23,25,26,27,28,29,30,31,32)
MR_decl_label5(transform_hlds__lco__lco_process_proc_variant_4_0, 34,37,38,39,40)
MR_decl_label8(transform_hlds__lco__lco_scc_5_0, 4,5,8,9,10,16,19,11)
MR_decl_label4(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0, 3,7,9,11)
MR_decl_label1(transform_hlds__lco__lco_transform_variant_case_9_0, 2)
MR_decl_label7(transform_hlds__lco__lco_transform_variant_conj_9_0, 37,4,5,6,7,11,8)
MR_decl_label10(transform_hlds__lco__lco_transform_variant_goal_9_0, 3,8,7,5,13,14,11,16,19,20)
MR_decl_label10(transform_hlds__lco__lco_transform_variant_goal_9_0, 21,22,18,24,26,25,28,31,27,36)
MR_decl_label7(transform_hlds__lco__lco_transform_variant_goal_9_0, 37,34,40,39,2,44,42)
MR_decl_label10(transform_hlds__lco__lco_transform_variant_plain_call_11_0, 3,7,9,11,12,13,15,17,18,19)
MR_decl_label10(transform_hlds__lco__lco_transform_variant_plain_call_11_0, 21,23,28,29,31,33,34,35,36,37)
MR_decl_label3(transform_hlds__lco__lco_transform_variant_plain_call_11_0, 38,14,39)
MR_decl_label10(transform_hlds__lco__make_addr_vars_12_0, 7,3,12,13,16,15,22,23,24,25)
MR_decl_label10(transform_hlds__lco__make_addr_vars_12_0, 28,29,30,27,31,32,35,37,20,43)
MR_decl_label2(transform_hlds__lco__make_addr_vars_12_0, 19,10)
MR_decl_label8(transform_hlds__lco__make_address_var_5_0, 2,3,4,8,9,13,6,5)
MR_decl_label10(transform_hlds__lco__make_store_goal_6_0, 4,7,8,9,3,10,11,13,14,15)
MR_decl_label6(transform_hlds__lco__make_store_goal_6_0, 17,18,25,26,27,28)
MR_decl_label10(transform_hlds__lco__make_unification_args_8_0, 43,4,6,7,9,10,5,15,16,17)
MR_decl_label2(transform_hlds__lco__make_unification_args_8_0, 19,20)
MR_decl_label1(transform_hlds__lco__make_variant_args_4_0, 3)
MR_decl_label4(transform_hlds__lco__match_existing_variant_3_0, 19,4,3,1)
MR_decl_label1(transform_hlds__lco__occurs_once_2_0, 3)
MR_decl_label10(transform_hlds__lco__update_call_args_6_0, 7,3,12,13,16,15,20,19,22,18)
MR_decl_label1(transform_hlds__lco__update_call_args_6_0, 10)
MR_decl_label10(transform_hlds__lco__update_construct_8_0, 6,5,9,10,11,14,21,22,19,25)
MR_decl_label3(transform_hlds__lco__update_construct_8_0, 18,28,2)
MR_decl_label10(transform_hlds__lco__update_construct_args_14_0, 51,4,7,11,10,12,13,14,15,16)
MR_decl_label5(transform_hlds__lco__update_construct_args_14_0, 20,9,21,23,5)
MR_decl_label1(fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__911__1_2_0, 3)
MR_decl_label5(fn__transform_hlds__lco__bound_inst_with_free_arg_2_0, 2,3,4,5,6)
MR_decl_label1(fn__transform_hlds__lco__make_ref_type_1_0, 2)
MR_decl_label4(__Unify___transform_hlds__lco__field_id_0_0, 4,6,8,1)
MR_decl_label8(__Unify___transform_hlds__lco__lco_const_info_0_0, 5,7,9,11,13,16,18,1)
MR_decl_label6(__Unify___transform_hlds__lco__lco_info_0_0, 4,7,9,12,14,1)
MR_decl_label3(__Unify___transform_hlds__lco__store_target_0_0, 4,8,1)
MR_decl_label2(__Unify___transform_hlds__lco__variant_arg_0_0, 6,1)
MR_decl_label4(__Unify___transform_hlds__lco__variant_id_0_0, 4,6,8,1)
MR_decl_label5(__Compare___transform_hlds__lco__field_id_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___transform_hlds__lco__lco_const_info_0_0, 3,2,6,10,14,18,22,27,31,95)
MR_decl_label9(__Compare___transform_hlds__lco__lco_info_0_0, 3,2,5,10,14,19,23,27,84)
MR_decl_label4(__Compare___transform_hlds__lco__store_target_0_0, 3,2,5,21)
MR_decl_label4(__Compare___transform_hlds__lco__variant_arg_0_0, 3,2,5,21)
MR_decl_label5(__Compare___transform_hlds__lco__variant_id_0_0, 3,2,5,9,29)
MR_def_extern_entry(transform_hlds__lco__lco_modulo_constructors_2_0)
MR_decl_static(transform_hlds__lco__lco_scc_5_0)
MR_decl_static(transform_hlds__lco__lco_process_proc_update_3_0)
MR_decl_static(fn__transform_hlds__lco__make_ref_type_1_0)
MR_decl_static(fn__transform_hlds__lco__bound_inst_with_free_arg_2_0)
MR_decl_static(transform_hlds__lco__make_addr_vars_12_0)
MR_decl_static(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0)
MR_decl_static(transform_hlds__lco__classify_proc_call_args_7_0)
MR_decl_static(transform_hlds__lco__match_existing_variant_3_0)
MR_decl_static(transform_hlds__lco__grounding_to_variant_args_5_0)
MR_decl_static(transform_hlds__lco__lco_transform_variant_plain_call_11_0)
MR_decl_static(transform_hlds__lco__lco_transform_variant_goal_9_0)
MR_decl_static(transform_hlds__lco__lco_transform_variant_conj_9_0)
MR_decl_static(transform_hlds__lco__lco_process_proc_variant_4_0)
MR_decl_static(fn__transform_hlds__lco__va_pos_1_0)
MR_decl_static(transform_hlds__lco__update_call_args_6_0)
MR_decl_static(transform_hlds__lco__make_address_var_5_0)
MR_decl_static(transform_hlds__lco__find_args_to_pass_by_addr_10_0)
MR_decl_static(transform_hlds__lco__make_variant_args_4_0)
MR_decl_static(transform_hlds__lco__create_variant_name_4_0)
MR_decl_static(transform_hlds__lco__ensure_variant_exists_8_0)
MR_decl_static(transform_hlds__lco__lco_in_conj_7_0)
MR_decl_static(transform_hlds__lco__lco_in_goal_5_0)
MR_decl_static(transform_hlds__lco__lco_in_cases_5_0)
MR_decl_static(transform_hlds__lco__lco_proc_11_0)
MR_decl_static(transform_hlds__lco__update_construct_args_14_0)
MR_decl_static(transform_hlds__lco__update_construct_8_0)
MR_decl_static(transform_hlds__lco__acceptable_construct_mode_2_0)
MR_decl_static(transform_hlds__lco__occurs_once_2_0)
MR_decl_static(transform_hlds__lco__lco_transform_variant_case_9_0)
MR_decl_static(transform_hlds__lco__is_grounding_4_0)
MR_decl_static(transform_hlds__lco__make_unification_args_8_0)
MR_decl_static(transform_hlds__lco__make_store_goal_6_0)
MR_decl_static(__Unify___transform_hlds__lco__allow_float_addr_0_0)
MR_decl_static(__Compare___transform_hlds__lco__allow_float_addr_0_0)
MR_decl_static(__Unify___transform_hlds__lco__field_id_0_0)
MR_decl_static(__Compare___transform_hlds__lco__field_id_0_0)
MR_decl_static(__Unify___transform_hlds__lco__lco_const_info_0_0)
MR_decl_static(__Compare___transform_hlds__lco__lco_const_info_0_0)
MR_decl_static(__Unify___transform_hlds__lco__lco_info_0_0)
MR_decl_static(__Compare___transform_hlds__lco__lco_info_0_0)
MR_decl_static(__Unify___transform_hlds__lco__lco_is_permitted_on_scc_0_0)
MR_decl_static(__Compare___transform_hlds__lco__lco_is_permitted_on_scc_0_0)
MR_decl_static(__Unify___transform_hlds__lco__proc_changed_0_0)
MR_decl_static(__Compare___transform_hlds__lco__proc_changed_0_0)
MR_decl_static(__Unify___transform_hlds__lco__store_target_0_0)
MR_decl_static(__Compare___transform_hlds__lco__store_target_0_0)
MR_decl_static(__Unify___transform_hlds__lco__var_to_target_0_0)
MR_decl_static(__Compare___transform_hlds__lco__var_to_target_0_0)
MR_decl_static(__Unify___transform_hlds__lco__variant_arg_0_0)
MR_decl_static(__Compare___transform_hlds__lco__variant_arg_0_0)
MR_decl_static(__Unify___transform_hlds__lco__variant_id_0_0)
MR_decl_static(__Compare___transform_hlds__lco__variant_id_0_0)
MR_decl_static(__Unify___transform_hlds__lco__variant_map_0_0)
MR_decl_static(__Compare___transform_hlds__lco__variant_map_0_0)
MR_decl_static(transform_hlds__lco__IntroducedFrom__pred__lco_proc__404__1_3_0)
MR_decl_static(transform_hlds__lco__IntroducedFrom__pred__update_call_args__750__1_2_0)
MR_decl_static(fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__908__1_1_0)
MR_decl_static(fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__911__1_2_0)
MR_decl_static(transform_hlds__lco__IntroducedFrom__pred__update_construct__1055__1_2_0)
MR_decl_static(transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1181__1_2_0)
MR_decl_static(transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1446__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_variant_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_variant_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bag__type_ctor_info_bag_1;
static const struct mercury_type_0 mercury_common_0[12] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__lco, variant_id)
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__lco, variant_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__lco, variant_arg)
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
MR_COMMON(1,10)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,6)
}
},
{
{
MR_CTOR1_ADDR(bag, bag),
MR_COMMON(0,6)
}
},
{
{
MR_TAG_COMMON(3,11,0),
MR_tbmkword(0, 0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_store_target_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_field_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_1 mercury_common_1[17] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__lco, variant_id)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__lco, variant_id)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,6),
MR_CTOR0_ADDR(transform_hlds__lco, store_target)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,5),
MR_CTOR0_ADDR(transform_hlds__lco, store_target)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,6),
MR_CTOR0_ADDR(transform_hlds__lco, store_target)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(0,6)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_TAG_COMMON(0,0,5)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,6),
MR_CTOR0_ADDR(transform_hlds__lco, field_id)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,5),
MR_CTOR0_ADDR(transform_hlds__lco, field_id)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_modulo_constructors_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_modulo_constructors_2_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,2),
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const struct mercury_type_3 mercury_common_3[5] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(transform_hlds__lco__lco_scc_5_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(transform_hlds__lco__lco_process_proc_update_3_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1446__1_2_0),
0
},
{
MR_COMMON(7,2),
MR_ENTRY_AP(fn__transform_hlds__lco__va_pos_1_0),
0
},
{
MR_COMMON(7,4),
MR_ENTRY_AP(fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__908__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_1,
(MR_Word *) (MR_Integer) 0
},
11,
{
MR_COMMON(1,1),
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_CTOR0_ADDR(transform_hlds__lco, lco_is_permitted_on_scc),
MR_CTOR0_ADDR(transform_hlds__lco, lco_is_permitted_on_scc)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__make_variant_args_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_variant_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_proc_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,5),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__make_variant_args_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,13),
MR_COMMON(1,11),
MR_CTOR0_ADDR(transform_hlds__lco, variant_arg)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_proc_11_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,16),
MR_COMMON(0,7),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_atomic_goal_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_plain_call_11_0_1;
static const struct mercury_type_6 mercury_common_6[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,1),
MR_COMMON(1,6),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_atomic_goal_9_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(1,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_plain_call_11_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(1,8)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__make_addr_vars_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_plain_call_11_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_process_proc_variant_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__update_call_args_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__make_variant_args_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__update_construct_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
static const struct mercury_type_7 mercury_common_7[9] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__make_addr_vars_12_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,4),
MR_COMMON(0,4)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_plain_call_11_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,8),
MR_COMMON(0,7)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_process_proc_variant_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__lco, variant_arg),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__update_call_args_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,9),
MR_COMMON(0,9)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__make_variant_args_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,11),
MR_CTOR0_ADDR(transform_hlds__lco, variant_arg)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,10),
MR_COMMON(0,7)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__update_construct_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_atomic_goal_9_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_atomic_goal_9_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(1,8),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_goal_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_goal_9_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_goal_9_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,1),
MR_COMMON(0,8),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_goal_9_0_2,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,1),
MR_COMMON(0,8),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_lco_const_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_lco_info_0;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_4,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(transform_hlds__lco, lco_const_info),
MR_COMMON(1,14),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,13),
MR_COMMON(1,13),
MR_CTOR0_ADDR(transform_hlds__lco, lco_info),
MR_CTOR0_ADDR(transform_hlds__lco, lco_info)
}
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
MR_string_const("lcmc", 4)
},
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0 = {
	"do_not_allow_float_addr",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1 = {
	"allow_float_addr",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__lco__enum_value_ordered_allow_float_addr_0[] = {
	&mercury_data_transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0,
	&mercury_data_transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__lco__enum_name_ordered_allow_float_addr_0[] = {
	&mercury_data_transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1,
	&mercury_data_transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0
};

const MR_Integer mercury_data_transform_hlds__lco__functor_number_map_allow_float_addr_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_allow_float_addr_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__allow_float_addr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__allow_float_addr_0_0)),
	"transform_hlds.lco",
	"allow_float_addr",
	{ (void *)mercury_data_transform_hlds__lco__enum_name_ordered_allow_float_addr_0 },
	{ (void *)mercury_data_transform_hlds__lco__enum_value_ordered_allow_float_addr_0 },
	2,
	4,
	mercury_data_transform_hlds__lco__functor_number_map_allow_float_addr_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__lco__field_types_field_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_transform_hlds__lco__field_names_field_id_0_0[] = {
	"fi_type",
	"fi_cons_id",
	"fi_arg"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__lco__du_functor_desc_field_id_0_0 = {
	"field_id",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__lco__field_types_field_id_0_0,
	mercury_data_transform_hlds__lco__field_names_field_id_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lco__du_stag_ordered_field_id_0_0[] = {
	&mercury_data_transform_hlds__lco__du_functor_desc_field_id_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__lco__du_ptag_ordered_field_id_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__lco__du_stag_ordered_field_id_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lco__du_name_ordered_field_id_0[] = {
	&mercury_data_transform_hlds__lco__du_functor_desc_field_id_0_0
};

const MR_Integer mercury_data_transform_hlds__lco__functor_number_map_field_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_field_id_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__field_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__field_id_0_0)),
	"transform_hlds.lco",
	"field_id",
	{ (void *)mercury_data_transform_hlds__lco__du_name_ordered_field_id_0 },
	{ (void *)mercury_data_transform_hlds__lco__du_ptag_ordered_field_id_0 },
	1,
	4,
	mercury_data_transform_hlds__lco__functor_number_map_field_id_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__lco__type_ctor_info_variant_id_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__lco__field_types_lco_const_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_transform_hlds__lco__field_names_lco_const_info_0_0[] = {
	"lci_lower_scc_variants",
	"lci_cur_scc",
	"lci_cur_proc_id",
	"lci_cur_proc_pred",
	"lci_cur_proc_proc",
	"lci_cur_proc_outputs",
	"lci_cur_proc_detism",
	"lci_highlevel_data"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__lco__du_functor_desc_lco_const_info_0_0 = {
	"lco_const_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__lco__field_types_lco_const_info_0_0,
	mercury_data_transform_hlds__lco__field_names_lco_const_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[] = {
	&mercury_data_transform_hlds__lco__du_functor_desc_lco_const_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__lco__du_ptag_ordered_lco_const_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__lco__du_stag_ordered_lco_const_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lco__du_name_ordered_lco_const_info_0[] = {
	&mercury_data_transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

const MR_Integer mercury_data_transform_hlds__lco__functor_number_map_lco_const_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_lco_const_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__lco_const_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__lco_const_info_0_0)),
	"transform_hlds.lco",
	"lco_const_info",
	{ (void *)mercury_data_transform_hlds__lco__du_name_ordered_lco_const_info_0 },
	{ (void *)mercury_data_transform_hlds__lco__du_ptag_ordered_lco_const_info_0 },
	1,
	4,
	mercury_data_transform_hlds__lco__functor_number_map_lco_const_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_allow_float_addr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_proc_changed_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__lco__field_types_lco_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__lco__type_ctor_info_allow_float_addr_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__lco__type_ctor_info_proc_changed_0
};

const MR_ConstString mercury_data_transform_hlds__lco__field_names_lco_info_0_0[] = {
	"lco_module_info",
	"lco_cur_scc_variants",
	"lco_var_set",
	"lco_var_types",
	"lco_allow_float_addr",
	"lco_permitted",
	"lco_changed"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__lco__du_functor_desc_lco_info_0_0 = {
	"lco_info",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__lco__field_types_lco_info_0_0,
	mercury_data_transform_hlds__lco__field_names_lco_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lco__du_stag_ordered_lco_info_0_0[] = {
	&mercury_data_transform_hlds__lco__du_functor_desc_lco_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__lco__du_ptag_ordered_lco_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__lco__du_stag_ordered_lco_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lco__du_name_ordered_lco_info_0[] = {
	&mercury_data_transform_hlds__lco__du_functor_desc_lco_info_0_0
};

const MR_Integer mercury_data_transform_hlds__lco__functor_number_map_lco_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_lco_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__lco_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__lco_info_0_0)),
	"transform_hlds.lco",
	"lco_info",
	{ (void *)mercury_data_transform_hlds__lco__du_name_ordered_lco_info_0 },
	{ (void *)mercury_data_transform_hlds__lco__du_ptag_ordered_lco_info_0 },
	1,
	4,
	mercury_data_transform_hlds__lco__functor_number_map_lco_info_0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0 = {
	"lco_is_not_permitted_on_scc",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1 = {
	"lco_is_permitted_on_scc",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0[] = {
	&mercury_data_transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
	&mercury_data_transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[] = {
	&mercury_data_transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
	&mercury_data_transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

const MR_Integer mercury_data_transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__lco_is_permitted_on_scc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__lco_is_permitted_on_scc_0_0)),
	"transform_hlds.lco",
	"lco_is_permitted_on_scc",
	{ (void *)mercury_data_transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0 },
	{ (void *)mercury_data_transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0 },
	2,
	4,
	mercury_data_transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__lco__enum_functor_desc_proc_changed_0_0 = {
	"proc_not_changed",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__lco__enum_functor_desc_proc_changed_0_1 = {
	"proc_changed",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__lco__enum_value_ordered_proc_changed_0[] = {
	&mercury_data_transform_hlds__lco__enum_functor_desc_proc_changed_0_0,
	&mercury_data_transform_hlds__lco__enum_functor_desc_proc_changed_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__lco__enum_name_ordered_proc_changed_0[] = {
	&mercury_data_transform_hlds__lco__enum_functor_desc_proc_changed_0_1,
	&mercury_data_transform_hlds__lco__enum_functor_desc_proc_changed_0_0
};

const MR_Integer mercury_data_transform_hlds__lco__functor_number_map_proc_changed_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_proc_changed_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__proc_changed_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__proc_changed_0_0)),
	"transform_hlds.lco",
	"proc_changed",
	{ (void *)mercury_data_transform_hlds__lco__enum_name_ordered_proc_changed_0 },
	{ (void *)mercury_data_transform_hlds__lco__enum_value_ordered_proc_changed_0 },
	2,
	4,
	mercury_data_transform_hlds__lco__functor_number_map_proc_changed_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__lco__type_ctor_info_field_id_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__lco__field_types_store_target_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__lco__du_functor_desc_store_target_0_0 = {
	"store_target",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__lco__field_types_store_target_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lco__du_stag_ordered_store_target_0_0[] = {
	&mercury_data_transform_hlds__lco__du_functor_desc_store_target_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__lco__du_ptag_ordered_store_target_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__lco__du_stag_ordered_store_target_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lco__du_name_ordered_store_target_0[] = {
	&mercury_data_transform_hlds__lco__du_functor_desc_store_target_0_0
};

const MR_Integer mercury_data_transform_hlds__lco__functor_number_map_store_target_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_store_target_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__store_target_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__store_target_0_0)),
	"transform_hlds.lco",
	"store_target",
	{ (void *)mercury_data_transform_hlds__lco__du_name_ordered_store_target_0 },
	{ (void *)mercury_data_transform_hlds__lco__du_ptag_ordered_store_target_0 },
	1,
	4,
	mercury_data_transform_hlds__lco__functor_number_map_store_target_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__lco__type_ctor_info_store_target_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_var_to_target_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__var_to_target_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__var_to_target_0_0)),
	"transform_hlds.lco",
	"var_to_target",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__lco__field_types_variant_arg_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

const MR_ConstString mercury_data_transform_hlds__lco__field_names_variant_arg_0_0[] = {
	"va_pos",
	"va_field"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__lco__du_functor_desc_variant_arg_0_0 = {
	"variant_arg",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__lco__field_types_variant_arg_0_0,
	mercury_data_transform_hlds__lco__field_names_variant_arg_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lco__du_stag_ordered_variant_arg_0_0[] = {
	&mercury_data_transform_hlds__lco__du_functor_desc_variant_arg_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__lco__du_ptag_ordered_variant_arg_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__lco__du_stag_ordered_variant_arg_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lco__du_name_ordered_variant_arg_0[] = {
	&mercury_data_transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

const MR_Integer mercury_data_transform_hlds__lco__functor_number_map_variant_arg_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_variant_arg_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__variant_arg_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__variant_arg_0_0)),
	"transform_hlds.lco",
	"variant_arg",
	{ (void *)mercury_data_transform_hlds__lco__du_name_ordered_variant_arg_0 },
	{ (void *)mercury_data_transform_hlds__lco__du_ptag_ordered_variant_arg_0 },
	1,
	4,
	mercury_data_transform_hlds__lco__functor_number_map_variant_arg_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__lco__type_ctor_info_variant_arg_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__lco__field_types_variant_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__lco__du_functor_desc_variant_id_0_0 = {
	"variant_id",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__lco__field_types_variant_id_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lco__du_stag_ordered_variant_id_0_0[] = {
	&mercury_data_transform_hlds__lco__du_functor_desc_variant_id_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__lco__du_ptag_ordered_variant_id_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__lco__du_stag_ordered_variant_id_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lco__du_name_ordered_variant_id_0[] = {
	&mercury_data_transform_hlds__lco__du_functor_desc_variant_id_0_0
};

const MR_Integer mercury_data_transform_hlds__lco__functor_number_map_variant_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_variant_id_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__variant_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__variant_id_0_0)),
	"transform_hlds.lco",
	"variant_id",
	{ (void *)mercury_data_transform_hlds__lco__du_name_ordered_variant_id_0 },
	{ (void *)mercury_data_transform_hlds__lco__du_ptag_ordered_variant_id_0 },
	1,
	4,
	mercury_data_transform_hlds__lco__functor_number_map_variant_id_0
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_variant_map_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__variant_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__variant_map_0_0)),
	"transform_hlds.lco",
	"variant_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__update_construct_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lambda_lco_m_1055",
2,
0
},
"transform_hlds.lco",
"lco.m",
1055,
"48"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_proc_11_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lambda_lco_m_404",
3,
0
},
"transform_hlds.lco",
"lco.m",
404,
"42"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_4 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"update_construct",
8,
0
},
"transform_hlds.lco",
"lco.m",
707,
"130"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_3 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"occurs_once",
2,
0
},
"transform_hlds.lco",
"lco.m",
705,
"128"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"acceptable_construct_mode",
2,
0
},
"transform_hlds.lco",
"lco.m",
619,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"acceptable_construct_mode",
2,
0
},
"transform_hlds.lco",
"lco.m",
619,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__make_variant_args_4_0_2 = {
{
MR_FUNCTION,
"transform_hlds.lco",
"transform_hlds.lco",
"lambda_lco_m_911",
3,
0
},
"transform_hlds.lco",
"lco.m",
911,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__make_variant_args_4_0_1 = {
{
MR_FUNCTION,
"transform_hlds.lco",
"transform_hlds.lco",
"lambda_lco_m_908",
2,
0
},
"transform_hlds.lco",
"lco.m",
908,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__update_call_args_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lambda_lco_m_750",
2,
0
},
"transform_hlds.lco",
"lco.m",
750,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_process_proc_variant_4_0_1 = {
{
MR_FUNCTION,
"transform_hlds.lco",
"transform_hlds.lco",
"va_pos",
2,
0
},
"transform_hlds.lco",
"lco.m",
358,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_goal_9_0_2 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lco_transform_variant_case",
9,
0
},
"transform_hlds.lco",
"lco.m",
1272,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_goal_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lco_transform_variant_goal",
9,
0
},
"transform_hlds.lco",
"lco.m",
1263,
"30"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_plain_call_11_0_2 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lambda_lco_m_1446",
2,
0
},
"transform_hlds.lco",
"lco.m",
1446,
"53"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_plain_call_11_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"is_grounding",
4,
0
},
"transform_hlds.lco",
"lco.m",
1403,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_atomic_goal_9_0_2 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"make_store_goal",
6,
0
},
"transform_hlds.lco",
"lco.m",
1387,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_transform_variant_atomic_goal_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"is_grounding",
4,
0
},
"transform_hlds.lco",
"lco.m",
1379,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__make_addr_vars_12_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lambda_lco_m_1181",
2,
0
},
"transform_hlds.lco",
"lco.m",
1181,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_3 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lco_process_proc_variant",
4,
0
},
"transform_hlds.lco",
"lco.m",
306,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lco_process_proc_update",
3,
0
},
"transform_hlds.lco",
"lco.m",
305,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lco_proc",
11,
0
},
"transform_hlds.lco",
"lco.m",
296,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_modulo_constructors_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lco_scc",
5,
0
},
"transform_hlds.lco",
"lco.m",
288,
"6"
};


MR_decl_entry(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(transform_hlds__lco_module0)
	MR_init_entry1(transform_hlds__lco__lco_modulo_constructors_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__lco_modulo_constructors_2_0);
	MR_init_label4(transform_hlds__lco__lco_modulo_constructors_2_0,2,3,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lco_modulo_constructors'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lco__lco_modulo_constructors_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,
		transform_hlds__lco__lco_modulo_constructors_2_0_i2);
MR_def_label(transform_hlds__lco__lco_modulo_constructors_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__lco__lco_modulo_constructors_2_0_i3);
MR_def_label(transform_hlds__lco__lco_modulo_constructors_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__lco__lco_modulo_constructors_2_0_i5);
MR_def_label(transform_hlds__lco__lco_modulo_constructors_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__lco__lco_modulo_constructors_2_0_i9);
MR_def_label(transform_hlds__lco__lco_modulo_constructors_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_0);
MR_decl_entry(multi_map__to_flat_assoc_list_2_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__lco_module1)
	MR_init_entry1(transform_hlds__lco__lco_scc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__lco_scc_5_0);
	MR_init_label8(transform_hlds__lco__lco_scc_5_0,4,5,8,9,10,16,19,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lco_scc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_scc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__lco_proc_11_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__lco__lco_scc_5_0_i4);
MR_def_label(transform_hlds__lco__lco_scc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__lco__lco_scc_5_0_i5);
MR_def_label(transform_hlds__lco__lco_scc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r5 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, lco_is_permitted_on_scc);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_tempr1;
	MR_r11 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(list__foldl4_10_0,
		transform_hlds__lco__lco_scc_5_0_i8);
MR_def_label(transform_hlds__lco__lco_scc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(multi_map__to_flat_assoc_list_2_0,
		transform_hlds__lco__lco_scc_5_0_i9);
MR_def_label(transform_hlds__lco__lco_scc_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		transform_hlds__lco__lco_scc_5_0_i10);
MR_def_label(transform_hlds__lco__lco_scc_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_scc_5_0_i11);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_scc_5_0_i11);
	}
	MR_sv(3) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__lco__lco_scc_5_0_i16);
MR_def_label(transform_hlds__lco__lco_scc_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__lco_process_proc_variant_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__lco__lco_scc_5_0_i19);
MR_def_label(transform_hlds__lco__lco_scc_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__lco__lco_scc_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module2)
	MR_init_entry1(transform_hlds__lco__lco_process_proc_update_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__lco_process_proc_update_3_0);
	MR_init_label6(transform_hlds__lco__lco_process_proc_update_3_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lco_process_proc_update'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_process_proc_update_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		transform_hlds__lco__lco_process_proc_update_3_0_i2);
MR_def_label(transform_hlds__lco__lco_process_proc_update_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__lco__lco_process_proc_update_3_0_i3);
MR_def_label(transform_hlds__lco__lco_process_proc_update_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__lco__lco_process_proc_update_3_0_i4);
MR_def_label(transform_hlds__lco__lco_process_proc_update_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__lco__lco_process_proc_update_3_0_i5);
MR_def_label(transform_hlds__lco__lco_process_proc_update_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__lco__lco_process_proc_update_3_0_i6);
MR_def_label(transform_hlds__lco__lco_process_proc_update_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__lco__lco_process_proc_update_3_0_i7);
MR_def_label(transform_hlds__lco__lco_process_proc_update_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);

MR_BEGIN_MODULE(transform_hlds__lco_module3)
	MR_init_entry1(fn__transform_hlds__lco__make_ref_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__lco__make_ref_type_1_0);
	MR_init_label1(fn__transform_hlds__lco__make_ref_type_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_ref_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__lco__make_ref_type_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__transform_hlds__lco__make_ref_type_1_0_i2);
MR_def_label(fn__transform_hlds__lco__make_ref_type_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_string_const("store_at_ref_type", 17);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_util__cons_id_arity_1_0);
MR_decl_entry(fn__parse_tree__prog_mode__ground_inst_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(fn__parse_tree__prog_mode__free_inst_0_0);
MR_decl_entry(list__det_replace_nth_4_0);

MR_BEGIN_MODULE(transform_hlds__lco_module4)
	MR_init_entry1(fn__transform_hlds__lco__bound_inst_with_free_arg_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__lco__bound_inst_with_free_arg_2_0);
	MR_init_label5(fn__transform_hlds__lco__bound_inst_with_free_arg_2_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bound_inst_with_free_arg'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__lco__bound_inst_with_free_arg_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_util__cons_id_arity_1_0,
		fn__transform_hlds__lco__bound_inst_with_free_arg_2_0_i2);
MR_def_label(fn__transform_hlds__lco__bound_inst_with_free_arg_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		fn__transform_hlds__lco__bound_inst_with_free_arg_2_0_i3);
MR_def_label(fn__transform_hlds__lco__bound_inst_with_free_arg_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		fn__transform_hlds__lco__bound_inst_with_free_arg_2_0_i4);
MR_def_label(fn__transform_hlds__lco__bound_inst_with_free_arg_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__free_inst_0_0,
		fn__transform_hlds__lco__bound_inst_with_free_arg_2_0_i5);
MR_def_label(fn__transform_hlds__lco__bound_inst_with_free_arg_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__det_replace_nth_4_0,
		fn__transform_hlds__lco__bound_inst_with_free_arg_2_0_i6);
MR_def_label(fn__transform_hlds__lco__bound_inst_with_free_arg_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__expect_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);
MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module5)
	MR_init_entry1(transform_hlds__lco__make_addr_vars_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__make_addr_vars_12_0);
	MR_init_label10(transform_hlds__lco__make_addr_vars_12_0,7,3,12,13,16,15,22,23,24,25)
	MR_init_label10(transform_hlds__lco__make_addr_vars_12_0,28,29,30,27,31,32,35,37,20,43)
	MR_init_label2(transform_hlds__lco__make_addr_vars_12_0,19,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_addr_vars'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__make_addr_vars_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i10);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1181__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_r3;
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r3 = (MR_Word) MR_string_const("make_addr_vars: AddrOutArgs != []", 33);
	MR_np_call_localret_ent(require__expect_3_0,
		transform_hlds__lco__make_addr_vars_12_0_i7);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_decr_sp_and_return(15);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i10);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_tfield(1, MR_r2, 1);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_sv(12) = MR_tfield(1, MR_r1, 1);
	MR_sv(13) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(13);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__make_addr_vars_12_0_i12);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		transform_hlds__lco__make_addr_vars_12_0_i13);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i15);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_np_localcall_lab(transform_hlds__lco__make_addr_vars_12_0,
		transform_hlds__lco__make_addr_vars_12_0_i16);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i19);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((MR_sv(2) != MR_tempr2)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i20);
	}
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		transform_hlds__lco__make_addr_vars_12_0_i22);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("AddrOf", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__lco__make_addr_vars_12_0_i23);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		transform_hlds__lco__make_addr_vars_12_0_i24);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(13);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__make_addr_vars_12_0_i25);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i27);
	}
	MR_np_call_localret_ent(fn__transform_hlds__lco__make_ref_type_1_0,
		transform_hlds__lco__make_addr_vars_12_0_i28);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__lco__make_addr_vars_12_0_i29);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__lco__make_addr_vars_12_0_i30);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(5);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_localcall_lab(transform_hlds__lco__make_addr_vars_12_0,
		transform_hlds__lco__make_addr_vars_12_0_i37);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__lco__make_addr_vars_12_0_i31);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__lco__bound_inst_with_free_arg_2_0,
		transform_hlds__lco__make_addr_vars_12_0_i32);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		transform_hlds__lco__make_addr_vars_12_0_i35);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r5 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(5);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = MR_sv(12);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lco__make_addr_vars_12_0,
		transform_hlds__lco__make_addr_vars_12_0_i37);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr4 = MR_sv(14);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr3;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_np_localcall_lab(transform_hlds__lco__make_addr_vars_12_0,
		transform_hlds__lco__make_addr_vars_12_0_i43);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lco.make_addr_vars\'/12", 48);
	MR_r3 = (MR_Word) MR_string_const("top_unused", 10);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lco.make_addr_vars\'/12", 48);
	MR_r3 = (MR_Word) MR_string_const("mismatched lists", 16);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__update_instmap_3_0);
MR_decl_entry(list__filter_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(transform_hlds__lco_module6)
	MR_init_entry1(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__lco_transform_variant_atomic_goal_9_0);
	MR_init_label4(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0,3,7,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lco_transform_variant_atomic_goal'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__lco__lco_transform_variant_atomic_goal_9_0_i3);
MR_def_label(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__is_grounding_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(3);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__lco__lco_transform_variant_atomic_goal_9_0_i7);
MR_def_label(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0_i9);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__make_store_goal_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		transform_hlds__lco__lco_transform_variant_atomic_goal_9_0_i11);
MR_def_label(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module7)
	MR_init_entry1(transform_hlds__lco__classify_proc_call_args_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__classify_proc_call_args_7_0);
	MR_init_label7(transform_hlds__lco__classify_proc_call_args_7_0,3,9,11,12,14,16,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'classify_proc_call_args'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__classify_proc_call_args_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__classify_proc_call_args_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__classify_proc_call_args_7_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__lco__classify_proc_call_args_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__classify_proc_call_args_7_0_i8);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r4, 0);
	MR_sv(6) = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_np_localcall_lab(transform_hlds__lco__classify_proc_call_args_7_0,
		transform_hlds__lco__classify_proc_call_args_7_0_i9);
MR_def_label(transform_hlds__lco__classify_proc_call_args_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__classify_proc_call_args_7_0_i11);
MR_def_label(transform_hlds__lco__classify_proc_call_args_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		transform_hlds__lco__classify_proc_call_args_7_0_i12);
MR_def_label(transform_hlds__lco__classify_proc_call_args_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__classify_proc_call_args_7_0_i14);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__lco__classify_proc_call_args_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__lco__classify_proc_call_args_7_0_i16);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__lco__classify_proc_call_args_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__lco__classify_proc_call_args_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lco.classify_proc_call_args\'/7", 56);
	MR_r3 = (MR_Word) MR_string_const("mismatched lists", 16);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module8)
	MR_init_entry1(transform_hlds__lco__match_existing_variant_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__match_existing_variant_3_0);
	MR_init_label4(transform_hlds__lco__match_existing_variant_3_0,19,4,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_existing_variant'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__match_existing_variant_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__lco__match_existing_variant_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__match_existing_variant_3_0_i1);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_arg);
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__lco__match_existing_variant_3_0_i4);
MR_def_label(transform_hlds__lco__match_existing_variant_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__match_existing_variant_3_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__lco__match_existing_variant_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__lco__match_existing_variant_3_0_i19);
MR_def_label(transform_hlds__lco__match_existing_variant_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__search_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module9)
	MR_init_entry1(transform_hlds__lco__grounding_to_variant_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__grounding_to_variant_args_5_0);
	MR_init_label6(transform_hlds__lco__grounding_to_variant_args_5_0,5,3,6,9,11,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'grounding_to_variant_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__grounding_to_variant_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__grounding_to_variant_args_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__lco__grounding_to_variant_args_5_0_i5);
MR_def_label(transform_hlds__lco__grounding_to_variant_args_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__lco__grounding_to_variant_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r3, 0);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__lco__grounding_to_variant_args_5_0,
		transform_hlds__lco__grounding_to_variant_args_5_0_i6);
MR_def_label(transform_hlds__lco__grounding_to_variant_args_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, store_target);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(assoc_list__search_3_0,
		transform_hlds__lco__grounding_to_variant_args_5_0_i9);
MR_def_label(transform_hlds__lco__grounding_to_variant_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__grounding_to_variant_args_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__lco__grounding_to_variant_args_5_0_i11);
MR_def_label(transform_hlds__lco__grounding_to_variant_args_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__lco__grounding_to_variant_args_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(multi_map__search_3_0);
MR_decl_entry(parse_tree__prog_data__rename_var_list_4_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_set_vars_same_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module10)
	MR_init_entry1(transform_hlds__lco__lco_transform_variant_plain_call_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__lco_transform_variant_plain_call_11_0);
	MR_init_label10(transform_hlds__lco__lco_transform_variant_plain_call_11_0,3,7,9,11,12,13,15,17,18,19)
	MR_init_label10(transform_hlds__lco__lco_transform_variant_plain_call_11_0,21,23,28,29,31,33,34,35,36,37)
	MR_init_label3(transform_hlds__lco__lco_transform_variant_plain_call_11_0,38,14,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lco_transform_variant_plain_call'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_transform_variant_plain_call_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r6;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_tempr4 = MR_r4;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tempr3;
	MR_sv(14) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i3);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__is_grounding_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(4);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r1 = MR_sv(17);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i7);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_plain_call_11_0_i9);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(14);
	MR_decr_sp_and_return(18);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(12) = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(2, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(2, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(2, MR_tempr2, 5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_4_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i11);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i12);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i13);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(multi_map__search_3_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i15);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_plain_call_11_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lco__classify_proc_call_args_7_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i17);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lco__grounding_to_variant_args_5_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i18);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lco__match_existing_variant_3_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i19);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_plain_call_11_0_i14);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i21);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(11),1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_plain_call_11_0_i23);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_sv(11), 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tfield(0, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tempr2 = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i28);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tempr2 = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i28);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 235;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i29);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_plain_call_11_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(14);
	MR_decr_sp_and_return(18);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(16);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i33);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i34);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i35);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i36);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_set_vars_same_4_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i37);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i38);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(14);
	MR_decr_sp_and_return(18);
	}
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(14);
	MR_np_call_localret_ent(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0,
		transform_hlds__lco__lco_transform_variant_plain_call_11_0_i39);
MR_def_label(transform_hlds__lco__lco_transform_variant_plain_call_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map2_foldl_6_0);
MR_decl_entry(fn__bool__or_list_1_0);
MR_decl_entry(fn__bool__or_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module11)
	MR_init_entry1(transform_hlds__lco__lco_transform_variant_goal_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__lco_transform_variant_goal_9_0);
	MR_init_label10(transform_hlds__lco__lco_transform_variant_goal_9_0,3,8,7,5,13,14,11,16,19,20)
	MR_init_label10(transform_hlds__lco__lco_transform_variant_goal_9_0,21,22,18,24,26,25,28,31,27,36)
	MR_init_label7(transform_hlds__lco__lco_transform_variant_goal_9_0,37,34,40,39,2,44,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lco_transform_variant_goal'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_transform_variant_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_r7 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i3);
	}
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i40);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,2)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r7;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i7);
	}
	MR_tempr3 = MR_r5;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(transform_hlds__lco__lco_transform_variant_conj_9_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i8);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i2);
	}
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", 59);
	MR_r3 = (MR_Word) MR_string_const("parallel_conj", 13);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i2);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,3)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__lco_transform_variant_goal_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tfield(3, MR_r7, 1);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map2_foldl_6_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i13);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__bool__or_list_1_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i14);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r5;
	MR_r4 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i2);
	}
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i40);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,6)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_r7;
	MR_sv(7) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(8) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(9) = MR_tfield(3, MR_tempr3, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr3, 4);
	MR_sv(11) = MR_r6;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i19);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(11);
	}
	MR_np_localcall_lab(transform_hlds__lco__lco_transform_variant_goal_9_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i20);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_tempr3;
	}
	MR_np_localcall_lab(transform_hlds__lco__lco_transform_variant_goal_9_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i21);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__or_2_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i22);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r7 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i2);
	}
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i24);
	}
	MR_r1 = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_sv(2) = MR_r7;
	MR_r4 = MR_tfield(0, MR_r1, 1);
	MR_r3 = MR_r6;
	MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i2);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,2)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i25);
	}
	MR_sv(5) = MR_r5;
	MR_r5 = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_tfield(0, MR_sv(5), 1);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lco__lco_transform_variant_plain_call_11_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i26);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r5 = MR_r2;
	MR_r2 = MR_r3;
	MR_r6 = MR_r4;
	MR_r4 = MR_r5;
	MR_r3 = MR_r6;
	MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i2);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,5)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r7;
	MR_r8 = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_sv(6) = MR_tfield(0, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i28);
	}
	MR_r9 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r9,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i28);
	}
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_sv(2) = MR_tempr2;
	MR_r4 = MR_sv(6);
	MR_r3 = MR_r6;
	MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i2);
	}
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r5;
	MR_r5 = MR_r8;
	MR_np_localcall_lab(transform_hlds__lco__lco_transform_variant_goal_9_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i31);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i2);
	}
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,4)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__lco_transform_variant_case_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_r7;
	MR_sv(1) = MR_tfield(3, MR_tempr4, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tfield(3, MR_tempr4, 3);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map2_foldl_6_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i36);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__bool__or_list_1_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i37);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i2);
	}
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__lco__lco_transform_variant_atomic_goal_9_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i40);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i2);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", 59);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i2);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_goal_9_0_i42);
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__lco__lco_transform_variant_goal_9_0_i44);
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	}
MR_def_label(transform_hlds__lco__lco_transform_variant_goal_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__lco_module12)
	MR_init_entry1(transform_hlds__lco__lco_transform_variant_conj_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__lco_transform_variant_conj_9_0);
	MR_init_label7(transform_hlds__lco__lco_transform_variant_conj_9_0,37,4,5,6,7,11,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lco_transform_variant_conj'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_transform_variant_conj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_conj_9_0_i37);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(transform_hlds__lco__lco_transform_variant_conj_9_0,37)
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
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__lco__lco_transform_variant_goal_9_0,
		transform_hlds__lco__lco_transform_variant_conj_9_0_i4);
MR_def_label(transform_hlds__lco__lco_transform_variant_conj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__lco__lco_transform_variant_conj_9_0_i5);
MR_def_label(transform_hlds__lco__lco_transform_variant_conj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	}
	MR_np_localcall_lab(transform_hlds__lco__lco_transform_variant_conj_9_0,
		transform_hlds__lco__lco_transform_variant_conj_9_0_i6);
MR_def_label(transform_hlds__lco__lco_transform_variant_conj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__bool__or_2_0,
		transform_hlds__lco__lco_transform_variant_conj_9_0_i7);
MR_def_label(transform_hlds__lco__lco_transform_variant_conj_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_conj_9_0_i8);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_transform_variant_conj_9_0_i8);
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__lco__lco_transform_variant_conj_9_0_i11);
MR_def_label(transform_hlds__lco__lco_transform_variant_conj_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__lco__lco_transform_variant_conj_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_headvars_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_argmodes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_name_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_is_pred_or_func_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_arg_types_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_origin_3_0);
MR_decl_entry(fn__map__singleton_2_0);

MR_BEGIN_MODULE(transform_hlds__lco_module13)
	MR_init_entry1(transform_hlds__lco__lco_process_proc_variant_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__lco_process_proc_variant_4_0);
	MR_init_label10(transform_hlds__lco__lco_process_proc_variant_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(transform_hlds__lco__lco_process_proc_variant_4_0,12,13,14,15,16,17,18,20,21,19)
	MR_init_label10(transform_hlds__lco__lco_process_proc_variant_4_0,22,23,25,26,27,28,29,30,31,32)
	MR_init_label5(transform_hlds__lco__lco_process_proc_variant_4_0,34,37,38,39,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lco_process_proc_variant'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_process_proc_variant_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_r3;
	MR_sv(9) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i2);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i3);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i4);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i5);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i6);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	}
	MR_np_call_localret_ent(transform_hlds__lco__make_addr_vars_12_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i7);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_sv(13) = MR_r5;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_headvars_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i8);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_argmodes_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i9);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i10);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i11);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i12);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i13);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__lco__lco_transform_variant_goal_9_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i14);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i15);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i16);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i17);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 235;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i18);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_process_proc_variant_4_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(transform_hlds__lco__lco_process_proc_variant_4_0_i19);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i21);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i22);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i23);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i25);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i26);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i27);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_name_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i28);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_is_pred_or_func_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i29);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i30);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_arg_types_5_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i31);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i32);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_arg);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i34);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = MR_sv(6);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_origin_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i37);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__singleton_2_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i38);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i39);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__lco__lco_process_proc_variant_4_0_i40);
MR_def_label(transform_hlds__lco__lco_process_proc_variant_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module14)
	MR_init_entry1(fn__transform_hlds__lco__va_pos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__lco__va_pos_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'va_pos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__lco__va_pos_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module15)
	MR_init_entry1(transform_hlds__lco__update_call_args_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__update_call_args_6_0);
	MR_init_label10(transform_hlds__lco__update_call_args_6_0,7,3,12,13,16,15,20,19,22,18)
	MR_init_label1(transform_hlds__lco__update_call_args_6_0,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_call_args'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__update_call_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_call_args_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_call_args_6_0_i10);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__IntroducedFrom__pred__update_call_args__750__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_r5;
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r3 = (MR_Word) MR_string_const("update_call_args: updating nonexistent arg", 42);
	MR_np_call_localret_ent(require__expect_3_0,
		transform_hlds__lco__update_call_args_6_0_i7);
MR_def_label(transform_hlds__lco__update_call_args_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__lco__update_call_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_call_args_6_0_i10);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__update_call_args_6_0_i12);
MR_def_label(transform_hlds__lco__update_call_args_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		transform_hlds__lco__update_call_args_6_0_i13);
MR_def_label(transform_hlds__lco__update_call_args_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_call_args_6_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_np_localcall_lab(transform_hlds__lco__update_call_args_6_0,
		transform_hlds__lco__update_call_args_6_0_i16);
MR_def_label(transform_hlds__lco__update_call_args_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lco__update_call_args_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__lco__update_call_args_6_0_i18);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_call_args_6_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_sv(6);
	}
	MR_np_localcall_lab(transform_hlds__lco__update_call_args_6_0,
		transform_hlds__lco__update_call_args_6_0_i22);
MR_def_label(transform_hlds__lco__update_call_args_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lco.update_call_args\'/6", 49);
	MR_r3 = (MR_Word) MR_string_const("no UpdatedCallOutArgs", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__lco__update_call_args_6_0_i19);
MR_def_label(transform_hlds__lco__update_call_args_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(transform_hlds__lco__update_call_args_6_0,
		transform_hlds__lco__update_call_args_6_0_i22);
MR_def_label(transform_hlds__lco__update_call_args_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lco__update_call_args_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lco.update_call_args\'/6", 49);
	MR_r3 = (MR_Word) MR_string_const("top_unused", 10);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__lco__update_call_args_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lco.update_call_args\'/6", 49);
	MR_r3 = (MR_Word) MR_string_const("mismatched lists", 16);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_4_0);

MR_BEGIN_MODULE(transform_hlds__lco_module16)
	MR_init_entry1(transform_hlds__lco__make_address_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__make_address_var_5_0);
	MR_init_label8(transform_hlds__lco__make_address_var_5_0,2,3,4,8,9,13,6,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_address_var'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__make_address_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("SCCcallarg", 10);
	}
	MR_np_call_localret_ent(varset__lookup_name_4_0,
		transform_hlds__lco__make_address_var_5_0_i2);
MR_def_label(transform_hlds__lco__make_address_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Addr", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__lco__make_address_var_5_0_i3);
MR_def_label(transform_hlds__lco__make_address_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		transform_hlds__lco__make_address_var_5_0_i4);
MR_def_label(transform_hlds__lco__make_address_var_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 7);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_address_var_5_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__make_address_var_5_0_i8);
MR_def_label(transform_hlds__lco__make_address_var_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		transform_hlds__lco__make_address_var_5_0_i9);
MR_def_label(transform_hlds__lco__make_address_var_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("store_at_ref_type", 17);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__lco__make_address_var_5_0_i13);
MR_def_label(transform_hlds__lco__make_address_var_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(transform_hlds__lco__make_address_var_5_0_i5);
MR_def_label(transform_hlds__lco__make_address_var_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(4);
MR_def_label(transform_hlds__lco__make_address_var_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_2_0);
MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(bag__member_2_0);

MR_BEGIN_MODULE(transform_hlds__lco_module17)
	MR_init_entry1(transform_hlds__lco__find_args_to_pass_by_addr_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__find_args_to_pass_by_addr_10_0);
	MR_init_label10(transform_hlds__lco__find_args_to_pass_by_addr_10_0,89,4,9,10,5,6,16,18,22,20)
	MR_init_label3(transform_hlds__lco__find_args_to_pass_by_addr_10_0,17,28,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_args_to_pass_by_addr'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__find_args_to_pass_by_addr_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__find_args_to_pass_by_addr_10_0_i89);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_proceed();
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_10_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(transform_hlds__lco__find_args_to_pass_by_addr_10_0,
		transform_hlds__lco__find_args_to_pass_by_addr_10_0_i4);
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__find_args_to_pass_by_addr_10_0_i6);
	}
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tfield(0, MR_r4, 3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__find_args_to_pass_by_addr_10_0_i9);
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_2_0,
		transform_hlds__lco__find_args_to_pass_by_addr_10_0_i10);
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__find_args_to_pass_by_addr_10_0_i5);
	}
	MR_r4 = MR_tfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__lco__find_args_to_pass_by_addr_10_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__find_args_to_pass_by_addr_10_0_i5);
	}
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("float", 5)) != 0)) {
		MR_GOTO_LAB(transform_hlds__lco__find_args_to_pass_by_addr_10_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr2;
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_sv(9) = MR_tempr2;
	MR_GOTO_LAB(transform_hlds__lco__find_args_to_pass_by_addr_10_0_i16);
	}
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(8) = MR_r3;
	MR_r3 = MR_sv(5);
	MR_sv(7) = MR_r1;
	MR_sv(9) = MR_r4;
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__lco__find_args_to_pass_by_addr_10_0_i18);
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__find_args_to_pass_by_addr_10_0_i17);
	}
	MR_sv(1) = MR_sv(7);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(bag__member_2_0,
		transform_hlds__lco__find_args_to_pass_by_addr_10_0_i22);
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__find_args_to_pass_by_addr_10_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__lco__make_address_var_5_0,
		transform_hlds__lco__find_args_to_pass_by_addr_10_0_i28);
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(7);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__lco__find_args_to_pass_by_addr_10_0_i32);
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module18)
	MR_init_entry1(transform_hlds__lco__make_variant_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__make_variant_args_4_0);
	MR_init_label1(transform_hlds__lco__make_variant_args_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_variant_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__make_variant_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_variant_args_4_0_i3);
	}
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_arg);
	MR_np_tailcall_ent(fn__list__map_2_0);
MR_def_label(transform_hlds__lco__make_variant_args_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__911__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_arg);
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module19)
	MR_init_entry1(transform_hlds__lco__create_variant_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__create_variant_name_4_0);
	MR_init_label4(transform_hlds__lco__create_variant_name_4_0,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_variant_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__create_variant_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__lco__create_variant_name_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = (MR_Word) MR_string_const("LCMCfn_", 7);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__lco__create_variant_name_4_0_i4);
MR_def_label(transform_hlds__lco__create_variant_name_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = (MR_Word) MR_string_const("LCMCpr_", 7);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__lco__create_variant_name_4_0_i4);
MR_def_label(transform_hlds__lco__create_variant_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__lco__create_variant_name_4_0_i5);
MR_def_label(transform_hlds__lco__create_variant_name_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__lco__create_variant_name_4_0_i6);
MR_def_label(transform_hlds__lco__create_variant_name_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(multi_map__set_4_0);

MR_BEGIN_MODULE(transform_hlds__lco_module20)
	MR_init_entry1(transform_hlds__lco__ensure_variant_exists_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__ensure_variant_exists_8_0);
	MR_init_label10(transform_hlds__lco__ensure_variant_exists_8_0,4,6,9,3,12,13,14,15,16,20)
	MR_init_label8(transform_hlds__lco__ensure_variant_exists_8_0,22,19,23,26,25,29,32,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_variant_exists'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__ensure_variant_exists_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr3 = MR_r5;
	MR_tempr2 = MR_tfield(0, MR_tempr3, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tempr2;
	MR_sv(8) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(multi_map__search_3_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i4);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__ensure_variant_exists_8_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__lco__match_existing_variant_3_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i6);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__ensure_variant_exists_8_0_i3);
	}
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(transform_hlds__lco__ensure_variant_exists_8_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_sv(4), 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_sv(8), 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i12);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i13);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i14);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_4_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i15);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i16);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tempr3 = MR_sv(8);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(1) = MR_tempr1;
	MR_sv(8) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(multi_map__search_3_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i20);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__ensure_variant_exists_8_0_i19);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i22);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_GOTO_LAB(transform_hlds__lco__ensure_variant_exists_8_0_i23);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 1;
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r2,4)) {
		MR_GOTO_LAB(transform_hlds__lco__ensure_variant_exists_8_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(transform_hlds__lco__ensure_variant_exists_8_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__lco__create_variant_name_4_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i26);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	}
	MR_np_call_localret_ent(multi_map__set_4_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i32);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(transform_hlds__lco__create_variant_name_4_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i29);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(2), 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	}
	MR_np_call_localret_ent(multi_map__set_4_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i32);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
MR_decl_entry(list__all_true_2_0);
MR_decl_entry(fn__hlds__hlds_code_util__cons_id_to_tag_2_0);
MR_decl_entry(bag__delete_3_0);
MR_decl_entry(f_98_97_103_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__member_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(assoc_list__values_2_0);
MR_decl_entry(list__map_foldl2_7_0);
MR_decl_entry(fn__list__reverse_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module21)
	MR_init_entry1(transform_hlds__lco__lco_in_conj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__lco_in_conj_7_0);
	MR_init_label10(transform_hlds__lco__lco_in_conj_7_0,170,3,4,10,14,16,18,19,17,22)
	MR_init_label10(transform_hlds__lco__lco_in_conj_7_0,23,5,6,30,32,33,34,35,38,39)
	MR_init_label10(transform_hlds__lco__lco_in_conj_7_0,40,41,42,44,46,49,51,52,53,55)
	MR_init_label5(transform_hlds__lco__lco_in_conj_7_0,56,59,61,62,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lco_in_conj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_in_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(21);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(4) = MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = MR_tfield(0, MR_tempr3, 4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i4);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(7), 3);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i6);
	}
	MR_r5 = MR_tfield(0, MR_tempr1, 6);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,5);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__acceptable_construct_mode_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(9);
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	}
	MR_np_call_localret_ent(list__all_true_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i14);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r5, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i6);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,6);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__acceptable_construct_mode_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(9);
	MR_sv(10) = MR_r1;
	MR_tempr2 = MR_r4;
	MR_sv(11) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	}
	MR_np_call_localret_ent(list__all_true_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i14);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i5);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i16);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i18);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i17);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i19);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i17);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i5);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(11);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(bag__delete_3_0,
		transform_hlds__lco__lco_in_conj_7_0_i22);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_98_97_103_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__lco_in_conj_7_0_i23);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(21);
	MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i170);
	}
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),2)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i27);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_r2, 0) = MR_tfield(2, MR_tempr2, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(10) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_r2, 0);
	MR_tempr1 = MR_tempr2;
	MR_sv(7) = MR_tfield(0, MR_r2, 1);
	MR_sv(11) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(12) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(13) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(14) = MR_tfield(2, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_tfield(0, MR_sv(4), 1);
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i30);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i27);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__lco__lco_in_conj_7_0_i32);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 6);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i27);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__lco__lco_in_conj_7_0_i33);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i34);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lco__classify_proc_call_args_7_0,
		transform_hlds__lco__lco_in_conj_7_0_i35);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i27);
	}
	MR_sv(16) = MR_r2;
	MR_sv(20) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i38);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_sv(18) = MR_tfield(0, MR_sv(4), 5);
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i39);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(17) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i27);
	}
	MR_r1 = MR_sv(20);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		transform_hlds__lco__lco_in_conj_7_0_i40);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__lco__lco_in_conj_7_0_i41);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(16);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__lco__find_args_to_pass_by_addr_10_0,
		transform_hlds__lco__lco_in_conj_7_0_i42);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i27);
	}
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(18) = MR_r3;
	MR_sv(19) = MR_r4;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(assoc_list__values_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i44);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,7);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__occurs_once_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__all_true_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i46);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__update_construct_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(18);
	MR_r1 = MR_sv(20);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, field_id);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__lco__lco_in_conj_7_0_i49);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, lco_info);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(19);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		transform_hlds__lco__lco_in_conj_7_0_i51);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tfield(0, MR_sv(4), 7);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(transform_hlds__lco__make_variant_args_4_0,
		transform_hlds__lco__lco_in_conj_7_0_i52);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__lco__ensure_variant_exists_8_0,
		transform_hlds__lco__lco_in_conj_7_0_i53);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i27);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i55);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(17);
	}
	MR_np_call_localret_ent(transform_hlds__lco__update_call_args_6_0,
		transform_hlds__lco__lco_in_conj_7_0_i56);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tempr3 = MR_sv(2);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(13);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(8);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		transform_hlds__lco__lco_in_conj_7_0_i59);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i61);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i62);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_r2, 6) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(21);
	}
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bag__init_0_0);
MR_decl_entry(list__split_last_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module22)
	MR_init_entry1(transform_hlds__lco__lco_in_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__lco_in_goal_5_0);
	MR_init_label10(transform_hlds__lco__lco_in_goal_5_0,134,8,10,11,16,18,20,14,13,4)
	MR_init_label10(transform_hlds__lco__lco_in_goal_5_0,28,30,32,27,26,37,38,36,42,45)
	MR_init_label5(transform_hlds__lco__lco_in_goal_5_0,41,50,49,133,132)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lco_in_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_in_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (((((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 1)) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 0))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1)))) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i133);
	}
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i4);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i134);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr3, 5) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr3, 6) = MR_tfield(0, MR_r2, 6);
	MR_r2 = MR_tempr3;
	MR_proceed();
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_r4, 2);
	MR_sv(5) = MR_r2;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		transform_hlds__lco__lco_in_goal_5_0_i8);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_np_call_localret_ent(fn__bag__init_0_0,
		transform_hlds__lco__lco_in_goal_5_0_i10);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__lco__lco_in_conj_7_0,
		transform_hlds__lco__lco_in_goal_5_0_i11);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__split_last_3_0,
		transform_hlds__lco__lco_in_goal_5_0_i16);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i14);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_in_goal_5_0_i18);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__lco__lco_in_goal_5_0_i20);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i26);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(list__split_last_3_0,
		transform_hlds__lco__lco_in_goal_5_0_i28);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i27);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_in_goal_5_0_i30);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__lco__lco_in_goal_5_0_i32);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i36);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_localcall_lab(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_in_goal_5_0_i37);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_in_goal_5_0_i38);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i41);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_r5 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i42);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i132);
	}
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_np_localcall_lab(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_in_goal_5_0_i45);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,45)
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
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i49);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__lco__lco_in_cases_5_0,
		transform_hlds__lco__lco_in_goal_5_0_i50);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lco.lco_in_goal\'/5", 44);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module23)
	MR_init_entry1(transform_hlds__lco__lco_in_cases_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__lco_in_cases_5_0);
	MR_init_label3(transform_hlds__lco__lco_in_cases_5_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lco_in_cases'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_in_cases_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_cases_5_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__lco__lco_in_cases_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_in_cases_5_0_i4);
MR_def_label(transform_hlds__lco__lco_in_cases_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__lco__lco_in_cases_5_0,
		transform_hlds__lco__lco_in_cases_5_0_i6);
MR_def_label(transform_hlds__lco__lco_in_cases_5_0,6)
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

MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0);
MR_decl_entry(hlds__arg_info__compute_in_and_out_vars_6_0);
MR_decl_entry(fn__set__list_to_set_1_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__lco_module24)
	MR_init_entry1(transform_hlds__lco__lco_proc_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__lco_proc_11_0);
	MR_init_label10(transform_hlds__lco__lco_proc_11_0,104,4,5,6,7,50,11,15,16,17)
	MR_init_label10(transform_hlds__lco__lco_proc_11_0,14,10,9,19,20,21,22,25,26,27)
	MR_init_label10(transform_hlds__lco__lco_proc_11_0,28,29,30,32,34,33,37,38,42,43)
	MR_init_label4(transform_hlds__lco__lco_proc_11_0,44,45,46,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lco_proc'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_proc_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i104);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_proceed();
MR_def_label(transform_hlds__lco__lco_proc_11_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(10) = MR_tempr2;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_r3, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__lco__lco_proc_11_0_i4);
MR_def_label(transform_hlds__lco__lco_proc_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__lco__lco_proc_11_0_i5);
MR_def_label(transform_hlds__lco__lco_proc_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		transform_hlds__lco__lco_proc_11_0_i6);
MR_def_label(transform_hlds__lco__lco_proc_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		transform_hlds__lco__lco_proc_11_0_i7);
MR_def_label(transform_hlds__lco__lco_proc_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i11);
	}
MR_def_label(transform_hlds__lco__lco_proc_11_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i10);
MR_def_label(transform_hlds__lco__lco_proc_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i15);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i14);
MR_def_label(transform_hlds__lco__lco_proc_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i16);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i14);
MR_def_label(transform_hlds__lco__lco_proc_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i17);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i14);
MR_def_label(transform_hlds__lco__lco_proc_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i50);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
MR_def_label(transform_hlds__lco__lco_proc_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i9);
MR_def_label(transform_hlds__lco__lco_proc_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 0;
	MR_decr_sp_and_return(15);
MR_def_label(transform_hlds__lco__lco_proc_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__lco__lco_proc_11_0_i19);
MR_def_label(transform_hlds__lco__lco_proc_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__lco__lco_proc_11_0_i20);
MR_def_label(transform_hlds__lco__lco_proc_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__lco__lco_proc_11_0_i21);
MR_def_label(transform_hlds__lco__lco_proc_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__lco__lco_proc_11_0_i22);
MR_def_label(transform_hlds__lco__lco_proc_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__IntroducedFrom__pred__lco_proc__404__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__lco__lco_proc_11_0_i25);
MR_def_label(transform_hlds__lco__lco_proc_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__arg_info__compute_in_and_out_vars_6_0,
		transform_hlds__lco__lco_proc_11_0_i26);
MR_def_label(transform_hlds__lco__lco_proc_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		transform_hlds__lco__lco_proc_11_0_i27);
MR_def_label(transform_hlds__lco__lco_proc_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		transform_hlds__lco__lco_proc_11_0_i28);
MR_def_label(transform_hlds__lco__lco_proc_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__lco__lco_proc_11_0_i29);
MR_def_label(transform_hlds__lco__lco_proc_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 235;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__lco__lco_proc_11_0_i30);
MR_def_label(transform_hlds__lco__lco_proc_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 234;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__lco__lco_proc_11_0_i32);
MR_def_label(transform_hlds__lco__lco_proc_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 0;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i33);
	}
MR_def_label(transform_hlds__lco__lco_proc_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 0;
	MR_r1 = MR_sv(5);
	}
MR_def_label(transform_hlds__lco__lco_proc_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__lco__lco_proc_11_0_i37);
MR_def_label(transform_hlds__lco__lco_proc_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_proc_11_0_i38);
MR_def_label(transform_hlds__lco__lco_proc_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_r2, 5);
	MR_r3 = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 6);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i39);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 3);
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__lco__lco_proc_11_0_i42);
MR_def_label(transform_hlds__lco__lco_proc_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__lco__lco_proc_11_0_i43);
MR_def_label(transform_hlds__lco__lco_proc_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__lco__lco_proc_11_0_i44);
MR_def_label(transform_hlds__lco__lco_proc_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__lco__lco_proc_11_0_i45);
MR_def_label(transform_hlds__lco__lco_proc_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__lco__lco_proc_11_0_i46);
MR_def_label(transform_hlds__lco__lco_proc_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__lco__lco_proc_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_set_var_4_0);

MR_BEGIN_MODULE(transform_hlds__lco_module25)
	MR_init_entry1(transform_hlds__lco__update_construct_args_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__update_construct_args_14_0);
	MR_init_label10(transform_hlds__lco__update_construct_args_14_0,51,4,7,11,10,12,13,14,15,16)
	MR_init_label5(transform_hlds__lco__update_construct_args_14_0,20,9,21,23,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_construct_args'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__update_construct_args_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_args_14_0_i51);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	MR_proceed();
MR_def_label(transform_hlds__lco__update_construct_args_14_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_r6, 0);
	MR_r5 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r6 = MR_tfield(1, MR_r6, 1);
	MR_np_localcall_lab(transform_hlds__lco__update_construct_args_14_0,
		transform_hlds__lco__update_construct_args_14_0_i4);
MR_def_label(transform_hlds__lco__update_construct_args_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r5;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__update_construct_args_14_0_i7);
MR_def_label(transform_hlds__lco__update_construct_args_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_args_14_0_i5);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_args_14_0_i10);
	}
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		transform_hlds__lco__update_construct_args_14_0_i11);
MR_def_label(transform_hlds__lco__update_construct_args_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__lco__update_construct_args_14_0_i9);
MR_def_label(transform_hlds__lco__update_construct_args_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_util__cons_id_arity_1_0,
		transform_hlds__lco__update_construct_args_14_0_i12);
MR_def_label(transform_hlds__lco__update_construct_args_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		transform_hlds__lco__update_construct_args_14_0_i13);
MR_def_label(transform_hlds__lco__update_construct_args_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__lco__update_construct_args_14_0_i14);
MR_def_label(transform_hlds__lco__update_construct_args_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__free_inst_0_0,
		transform_hlds__lco__update_construct_args_14_0_i15);
MR_def_label(transform_hlds__lco__update_construct_args_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__det_replace_nth_4_0,
		transform_hlds__lco__update_construct_args_14_0_i16);
MR_def_label(transform_hlds__lco__update_construct_args_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__lco__update_construct_args_14_0_i20);
MR_def_label(transform_hlds__lco__update_construct_args_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(10);
MR_def_label(transform_hlds__lco__update_construct_args_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_set_var_4_0,
		transform_hlds__lco__update_construct_args_14_0_i21);
MR_def_label(transform_hlds__lco__update_construct_args_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, field_id);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(11);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__lco__update_construct_args_14_0_i23);
MR_def_label(transform_hlds__lco__update_construct_args_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__lco__update_construct_args_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module26)
	MR_init_entry1(transform_hlds__lco__update_construct_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__update_construct_8_0);
	MR_init_label10(transform_hlds__lco__update_construct_8_0,6,5,9,10,11,14,21,22,19,25)
	MR_init_label3(transform_hlds__lco__update_construct_8_0,18,28,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_construct'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__update_construct_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_8_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 3);
	MR_r7 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_8_0_i2);
	}
	MR_r8 = MR_tfield(0, MR_tempr2, 6);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_8_0_i6);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_r6;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr4, 2);
	MR_sv(7) = MR_tfield(1, MR_tempr4, 4);
	MR_sv(19) = MR_r5;
	MR_tempr5 = MR_r7;
	MR_r5 = MR_tfield(0, MR_tempr5, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(14) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(18) = MR_r4;
	MR_GOTO_LAB(transform_hlds__lco__update_construct_8_0_i5);
	}
MR_def_label(transform_hlds__lco__update_construct_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r8, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_8_0_i2);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_r6;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(7) = MR_tfield(1, MR_tempr3, 4);
	MR_sv(19) = MR_r5;
	MR_tempr4 = MR_r7;
	MR_r5 = MR_tfield(0, MR_tempr4, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(14) = MR_tfield(1, MR_r8, 1);
	MR_sv(18) = MR_r4;
	}
MR_def_label(transform_hlds__lco__update_construct_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r5;
	MR_sv(15) = MR_tfield(0, MR_r1, 7);
	MR_sv(16) = MR_tfield(0, MR_sv(19), 3);
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(20);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(16);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__update_construct_8_0_i9);
MR_def_label(transform_hlds__lco__update_construct_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__lco__update_construct_8_0_i10);
MR_def_label(transform_hlds__lco__update_construct_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(9);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(10);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(18);
	MR_r9 = MR_sv(16);
	}
	MR_np_call_localret_ent(transform_hlds__lco__update_construct_args_14_0,
		transform_hlds__lco__update_construct_8_0_i11);
MR_def_label(transform_hlds__lco__update_construct_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_sv(19);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r5;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_8_0_i14);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(21);
	}
MR_def_label(transform_hlds__lco__update_construct_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 6) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_8_0_i19);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(7,8);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__IntroducedFrom__pred__update_construct__1055__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_tempr3;
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_tempr4;
	MR_sv(5) = MR_tempr1;
	MR_sv(8) = MR_tfield(0, MR_r1, 4);
	MR_sv(9) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(10) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r6;
	MR_r2 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r3 = (MR_Word) MR_string_const("update_construct: cons_id mismatch", 34);
	}
	MR_np_call_localret_ent(require__expect_3_0,
		transform_hlds__lco__update_construct_8_0_i21);
MR_def_label(transform_hlds__lco__update_construct_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(20);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		transform_hlds__lco__update_construct_8_0_i22);
MR_def_label(transform_hlds__lco__update_construct_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 5);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 4) = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__lco__update_construct_8_0_i28);
MR_def_label(transform_hlds__lco__update_construct_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),2)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_8_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lco.update_construct\'/8", 49);
	MR_sv(2) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("lambda RHS", 10);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__lco__update_construct_8_0_i18);
MR_def_label(transform_hlds__lco__update_construct_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lco.update_construct\'/8", 49);
	MR_sv(2) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("var RHS", 7);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__lco__update_construct_8_0_i18);
MR_def_label(transform_hlds__lco__update_construct_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__lco__update_construct_8_0_i28);
MR_def_label(transform_hlds__lco__update_construct_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_decr_sp_and_return(21);
	}
MR_def_label(transform_hlds__lco__update_construct_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lco", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lco.update_construct\'/8", 49);
	MR_r3 = (MR_Word) MR_string_const("not construct", 13);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);

MR_BEGIN_MODULE(transform_hlds__lco_module27)
	MR_init_entry1(transform_hlds__lco__acceptable_construct_mode_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__acceptable_construct_mode_2_0);
	MR_init_label4(transform_hlds__lco__acceptable_construct_mode_2_0,2,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'acceptable_construct_mode'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__acceptable_construct_mode_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		transform_hlds__lco__acceptable_construct_mode_2_0_i2);
MR_def_label(transform_hlds__lco__acceptable_construct_mode_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__acceptable_construct_mode_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		transform_hlds__lco__acceptable_construct_mode_2_0_i4);
MR_def_label(transform_hlds__lco__acceptable_construct_mode_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__acceptable_construct_mode_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		transform_hlds__lco__acceptable_construct_mode_2_0_i6);
MR_def_label(transform_hlds__lco__acceptable_construct_mode_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__acceptable_construct_mode_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_ground_2_0);
MR_def_label(transform_hlds__lco__acceptable_construct_mode_2_0,1)
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

MR_decl_entry(bag__count_value_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module28)
	MR_init_entry1(transform_hlds__lco__occurs_once_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__occurs_once_2_0);
	MR_init_label1(transform_hlds__lco__occurs_once_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'occurs_once'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__occurs_once_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(bag__count_value_3_0,
		transform_hlds__lco__occurs_once_2_0_i3);
MR_def_label(transform_hlds__lco__occurs_once_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) MR_r1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module29)
	MR_init_entry1(transform_hlds__lco__lco_transform_variant_case_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__lco_transform_variant_case_9_0);
	MR_init_label1(transform_hlds__lco__lco_transform_variant_case_9_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lco_transform_variant_case'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_transform_variant_case_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tfield(0, MR_r5, 2);
	}
	MR_np_call_localret_ent(transform_hlds__lco__lco_transform_variant_goal_9_0,
		transform_hlds__lco__lco_transform_variant_case_9_0_i2);
MR_def_label(transform_hlds__lco__lco_transform_variant_case_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(hlds__instmap__instmap_is_reachable_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module30)
	MR_init_entry1(transform_hlds__lco__is_grounding_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__is_grounding_4_0);
	MR_init_label5(transform_hlds__lco__is_grounding_4_0,2,5,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_grounding'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__is_grounding_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r4, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		transform_hlds__lco__is_grounding_4_0_i2);
MR_def_label(transform_hlds__lco__is_grounding_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		transform_hlds__lco__is_grounding_4_0_i5);
MR_def_label(transform_hlds__lco__is_grounding_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__lco__is_grounding_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		transform_hlds__lco__is_grounding_4_0_i7);
MR_def_label(transform_hlds__lco__is_grounding_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__is_grounding_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		transform_hlds__lco__is_grounding_4_0_i9);
MR_def_label(transform_hlds__lco__is_grounding_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_ground_2_0);
	}
MR_def_label(transform_hlds__lco__is_grounding_4_0,1)
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

MR_decl_entry(hlds__hlds_pred__proc_info_create_var_from_type_5_0);

MR_BEGIN_MODULE(transform_hlds__lco_module31)
	MR_init_entry1(transform_hlds__lco__make_unification_args_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__make_unification_args_8_0);
	MR_init_label10(transform_hlds__lco__make_unification_args_8_0,43,4,6,7,9,10,5,15,16,17)
	MR_init_label2(transform_hlds__lco__make_unification_args_8_0,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_unification_args'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__make_unification_args_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_unification_args_8_0_i43);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(transform_hlds__lco__make_unification_args_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r4, 0);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_np_localcall_lab(transform_hlds__lco__make_unification_args_8_0,
		transform_hlds__lco__make_unification_args_8_0_i4);
MR_def_label(transform_hlds__lco__make_unification_args_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(2))) {
		MR_GOTO_LAB(transform_hlds__lco__make_unification_args_8_0_i5);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		transform_hlds__lco__make_unification_args_8_0_i6);
MR_def_label(transform_hlds__lco__make_unification_args_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		transform_hlds__lco__make_unification_args_8_0_i7);
MR_def_label(transform_hlds__lco__make_unification_args_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		transform_hlds__lco__make_unification_args_8_0_i9);
MR_def_label(transform_hlds__lco__make_unification_args_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__free_inst_0_0,
		transform_hlds__lco__make_unification_args_8_0_i10);
MR_def_label(transform_hlds__lco__make_unification_args_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__lco__make_unification_args_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		transform_hlds__lco__make_unification_args_8_0_i15);
MR_def_label(transform_hlds__lco__make_unification_args_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		transform_hlds__lco__make_unification_args_8_0_i16);
MR_def_label(transform_hlds__lco__make_unification_args_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		transform_hlds__lco__make_unification_args_8_0_i17);
MR_def_label(transform_hlds__lco__make_unification_args_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__free_inst_0_0,
		transform_hlds__lco__make_unification_args_8_0_i19);
MR_def_label(transform_hlds__lco__make_unification_args_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		transform_hlds__lco__make_unification_args_8_0_i20);
MR_def_label(transform_hlds__lco__make_unification_args_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_vars_1_0);
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);
MR_decl_entry(check_hlds__type_util__get_cons_id_arg_types_4_0);
MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_var_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module32)
	MR_init_entry1(transform_hlds__lco__make_store_goal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__make_store_goal_6_0);
	MR_init_label10(transform_hlds__lco__make_store_goal_6_0,4,7,8,9,3,10,11,13,14,15)
	MR_init_label6(transform_hlds__lco__make_store_goal_6_0,17,18,25,26,27,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_store_goal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__make_store_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	MR_r6 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_store_goal_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_r4;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		transform_hlds__lco__make_store_goal_6_0_i4);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_vars_1_0,
		transform_hlds__lco__make_store_goal_6_0_i7);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		transform_hlds__lco__make_store_goal_6_0_i8);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("store_at_ref_impure", 19);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__lco__make_store_goal_6_0_i9);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r3, 0);
	MR_sv(4) = MR_tfield(0, MR_r6, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r5, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_r4;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_arg_types_4_0,
		transform_hlds__lco__make_store_goal_6_0_i10);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__lco__make_unification_args_8_0,
		transform_hlds__lco__make_store_goal_6_0_i11);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		transform_hlds__lco__make_store_goal_6_0_i13);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		transform_hlds__lco__make_store_goal_6_0_i14);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		transform_hlds__lco__make_store_goal_6_0_i15);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		transform_hlds__lco__make_store_goal_6_0_i17);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		transform_hlds__lco__make_store_goal_6_0_i18);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
	MR_tfield(1, MR_r2, 2) = MR_sv(2);
	MR_tfield(1, MR_r2, 3) = MR_sv(3);
	MR_tfield(1, MR_r2, 4) = (MR_Integer) 1;
	MR_tfield(1, MR_r2, 5) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_r2;
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(0,0,11);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		transform_hlds__lco__make_store_goal_6_0_i25);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__lco__make_store_goal_6_0_i26);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_var_1_0,
		transform_hlds__lco__make_store_goal_6_0_i27);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__lco__make_store_goal_6_0_i28);
MR_def_label(transform_hlds__lco__make_store_goal_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module33)
	MR_init_entry1(__Unify___transform_hlds__lco__allow_float_addr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lco__allow_float_addr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__allow_float_addr_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module34)
	MR_init_entry1(__Compare___transform_hlds__lco__allow_float_addr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lco__allow_float_addr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__allow_float_addr_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(transform_hlds__lco_module35)
	MR_init_entry1(__Unify___transform_hlds__lco__field_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lco__field_id_0_0);
	MR_init_label4(__Unify___transform_hlds__lco__field_id_0_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__field_id_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__field_id_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___transform_hlds__lco__field_id_0_0_i4);
MR_def_label(__Unify___transform_hlds__lco__field_id_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__field_id_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		__Unify___transform_hlds__lco__field_id_0_0_i6);
MR_def_label(__Unify___transform_hlds__lco__field_id_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__field_id_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___transform_hlds__lco__field_id_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__lco__field_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(transform_hlds__lco_module36)
	MR_init_entry1(__Compare___transform_hlds__lco__field_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lco__field_id_0_0);
	MR_init_label5(__Compare___transform_hlds__lco__field_id_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__field_id_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__field_id_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__lco__field_id_0_0_i2);
MR_def_label(__Compare___transform_hlds__lco__field_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__lco__field_id_0_0,2)
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___transform_hlds__lco__field_id_0_0_i5);
MR_def_label(__Compare___transform_hlds__lco__field_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__field_id_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		__Compare___transform_hlds__lco__field_id_0_0_i9);
MR_def_label(__Compare___transform_hlds__lco__field_id_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__field_id_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__lco__field_id_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__proc_info_0_0);

MR_BEGIN_MODULE(transform_hlds__lco_module37)
	MR_init_entry1(__Unify___transform_hlds__lco__lco_const_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lco__lco_const_info_0_0);
	MR_init_label8(__Unify___transform_hlds__lco__lco_const_info_0_0,5,7,9,11,13,16,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__lco_const_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i18);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__lco__lco_const_info_0_0_i5);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__lco__lco_const_info_0_0_i7);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__lco__lco_const_info_0_0_i9);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_info_0_0,
		__Unify___transform_hlds__lco__lco_const_info_0_0_i11);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__proc_info_0_0,
		__Unify___transform_hlds__lco__lco_const_info_0_0_i13);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__lco__lco_const_info_0_0_i16);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i1);
	}
	MR_r1 = (MR_sv(7) == MR_sv(14));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__proc_info_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module38)
	MR_init_entry1(__Compare___transform_hlds__lco__lco_const_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lco__lco_const_info_0_0);
	MR_init_label10(__Compare___transform_hlds__lco__lco_const_info_0_0,3,2,6,10,14,18,22,27,31,95)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__lco_const_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__lco__lco_const_info_0_0_i6);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i95);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__lco__lco_const_info_0_0_i10);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i95);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__lco__lco_const_info_0_0_i14);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i95);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_info_0_0,
		__Compare___transform_hlds__lco__lco_const_info_0_0_i18);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i95);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__proc_info_0_0,
		__Compare___transform_hlds__lco__lco_const_info_0_0_i22);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i95);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__lco__lco_const_info_0_0_i27);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i95);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__lco__lco_const_info_0_0_i31);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i95);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module39)
	MR_init_entry1(__Unify___transform_hlds__lco__lco_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lco__lco_info_0_0);
	MR_init_label6(__Unify___transform_hlds__lco__lco_info_0_0,4,7,9,12,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__lco_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_info_0_0_i14);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
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
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__lco__lco_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__lco__lco_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__lco__lco_info_0_0_i7);
MR_def_label(__Unify___transform_hlds__lco__lco_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__lco__lco_info_0_0_i9);
MR_def_label(__Unify___transform_hlds__lco__lco_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__lco__lco_info_0_0_i12);
MR_def_label(__Unify___transform_hlds__lco__lco_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_info_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(10))) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_info_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(11))) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_info_0_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(12));
	MR_decr_sp_and_return(13);
MR_def_label(__Unify___transform_hlds__lco__lco_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__lco__lco_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module40)
	MR_init_entry1(__Compare___transform_hlds__lco__lco_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lco__lco_info_0_0);
	MR_init_label9(__Compare___transform_hlds__lco__lco_info_0_0,3,2,5,10,14,19,23,27,84)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__lco_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___transform_hlds__lco__lco_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i84);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__lco__lco_info_0_0_i10);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i84);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__lco__lco_info_0_0_i14);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i84);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__lco__lco_info_0_0_i19);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i84);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__lco__lco_info_0_0_i23);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i84);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__lco__lco_info_0_0_i27);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i84);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module41)
	MR_init_entry1(__Unify___transform_hlds__lco__lco_is_permitted_on_scc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lco__lco_is_permitted_on_scc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__lco_is_permitted_on_scc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module42)
	MR_init_entry1(__Compare___transform_hlds__lco__lco_is_permitted_on_scc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lco__lco_is_permitted_on_scc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__lco_is_permitted_on_scc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module43)
	MR_init_entry1(__Unify___transform_hlds__lco__proc_changed_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lco__proc_changed_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__proc_changed_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module44)
	MR_init_entry1(__Compare___transform_hlds__lco__proc_changed_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lco__proc_changed_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__proc_changed_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module45)
	MR_init_entry1(__Unify___transform_hlds__lco__store_target_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lco__store_target_0_0);
	MR_init_label3(__Unify___transform_hlds__lco__store_target_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__store_target_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__store_target_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___transform_hlds__lco__store_target_0_0_i4);
MR_def_label(__Unify___transform_hlds__lco__store_target_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__store_target_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, field_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___transform_hlds__lco__store_target_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__lco__store_target_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module46)
	MR_init_entry1(__Compare___transform_hlds__lco__store_target_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lco__store_target_0_0);
	MR_init_label4(__Compare___transform_hlds__lco__store_target_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__store_target_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__store_target_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__lco__store_target_0_0_i2);
MR_def_label(__Compare___transform_hlds__lco__store_target_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__lco__store_target_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___transform_hlds__lco__store_target_0_0_i5);
MR_def_label(__Compare___transform_hlds__lco__store_target_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__store_target_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, field_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___transform_hlds__lco__store_target_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module47)
	MR_init_entry1(__Unify___transform_hlds__lco__var_to_target_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lco__var_to_target_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__var_to_target_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module48)
	MR_init_entry1(__Compare___transform_hlds__lco__var_to_target_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lco__var_to_target_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__var_to_target_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module49)
	MR_init_entry1(__Unify___transform_hlds__lco__variant_arg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lco__variant_arg_0_0);
	MR_init_label2(__Unify___transform_hlds__lco__variant_arg_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__variant_arg_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__variant_arg_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__variant_arg_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, field_id);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___transform_hlds__lco__variant_arg_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__lco__variant_arg_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module50)
	MR_init_entry1(__Compare___transform_hlds__lco__variant_arg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lco__variant_arg_0_0);
	MR_init_label4(__Compare___transform_hlds__lco__variant_arg_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__variant_arg_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__variant_arg_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__lco__variant_arg_0_0_i2);
MR_def_label(__Compare___transform_hlds__lco__variant_arg_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__lco__variant_arg_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__lco__variant_arg_0_0_i5);
MR_def_label(__Compare___transform_hlds__lco__variant_arg_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__variant_arg_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, field_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___transform_hlds__lco__variant_arg_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module51)
	MR_init_entry1(__Unify___transform_hlds__lco__variant_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lco__variant_id_0_0);
	MR_init_label4(__Unify___transform_hlds__lco__variant_id_0_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__variant_id_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__variant_id_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_arg);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__lco__variant_id_0_0_i4);
MR_def_label(__Unify___transform_hlds__lco__variant_id_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__variant_id_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__lco__variant_id_0_0_i6);
MR_def_label(__Unify___transform_hlds__lco__variant_id_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__variant_id_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(4)) == 0);
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___transform_hlds__lco__variant_id_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__lco__variant_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module52)
	MR_init_entry1(__Compare___transform_hlds__lco__variant_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lco__variant_id_0_0);
	MR_init_label5(__Compare___transform_hlds__lco__variant_id_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__variant_id_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__variant_id_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__lco__variant_id_0_0_i2);
MR_def_label(__Compare___transform_hlds__lco__variant_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__lco__variant_id_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_arg);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__lco__variant_id_0_0_i5);
MR_def_label(__Compare___transform_hlds__lco__variant_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__variant_id_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__lco__variant_id_0_0_i9);
MR_def_label(__Compare___transform_hlds__lco__variant_id_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__variant_id_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___transform_hlds__lco__variant_id_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module53)
	MR_init_entry1(__Unify___transform_hlds__lco__variant_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lco__variant_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__variant_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module54)
	MR_init_entry1(__Compare___transform_hlds__lco__variant_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lco__variant_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__variant_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module55)
	MR_init_entry1(transform_hlds__lco__IntroducedFrom__pred__lco_proc__404__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__IntroducedFrom__pred__lco_proc__404__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__lco_proc__404__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__IntroducedFrom__pred__lco_proc__404__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module56)
	MR_init_entry1(transform_hlds__lco__IntroducedFrom__pred__update_call_args__750__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__IntroducedFrom__pred__update_call_args__750__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__update_call_args__750__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__IntroducedFrom__pred__update_call_args__750__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module57)
	MR_init_entry1(fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__908__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__908__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_variant_args__908__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__908__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module58)
	MR_init_entry1(fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__911__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__911__1_2_0);
	MR_init_label1(fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__911__1_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_variant_args__911__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__911__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, field_id);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__911__1_2_0_i3);
MR_def_label(fn__transform_hlds__lco__IntroducedFrom__func__make_variant_args__911__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module59)
	MR_init_entry1(transform_hlds__lco__IntroducedFrom__pred__update_construct__1055__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__IntroducedFrom__pred__update_construct__1055__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__update_construct__1055__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__IntroducedFrom__pred__update_construct__1055__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__cons_id_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module60)
	MR_init_entry1(transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1181__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1181__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__make_addr_vars__1181__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1181__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_arg);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(pair__fst_2_0);

MR_BEGIN_MODULE(transform_hlds__lco_module61)
	MR_init_entry1(transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1446__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1446__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__lco_transform_variant_plain_call__1446__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1446__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, store_target);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(pair__fst_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__lco_maybe_bunch_0(void)
{
	transform_hlds__lco_module0();
	transform_hlds__lco_module1();
	transform_hlds__lco_module2();
	transform_hlds__lco_module3();
	transform_hlds__lco_module4();
	transform_hlds__lco_module5();
	transform_hlds__lco_module6();
	transform_hlds__lco_module7();
	transform_hlds__lco_module8();
	transform_hlds__lco_module9();
	transform_hlds__lco_module10();
	transform_hlds__lco_module11();
	transform_hlds__lco_module12();
	transform_hlds__lco_module13();
	transform_hlds__lco_module14();
	transform_hlds__lco_module15();
	transform_hlds__lco_module16();
	transform_hlds__lco_module17();
	transform_hlds__lco_module18();
	transform_hlds__lco_module19();
	transform_hlds__lco_module20();
	transform_hlds__lco_module21();
	transform_hlds__lco_module22();
	transform_hlds__lco_module23();
	transform_hlds__lco_module24();
	transform_hlds__lco_module25();
	transform_hlds__lco_module26();
	transform_hlds__lco_module27();
	transform_hlds__lco_module28();
	transform_hlds__lco_module29();
	transform_hlds__lco_module30();
	transform_hlds__lco_module31();
	transform_hlds__lco_module32();
	transform_hlds__lco_module33();
	transform_hlds__lco_module34();
	transform_hlds__lco_module35();
	transform_hlds__lco_module36();
	transform_hlds__lco_module37();
	transform_hlds__lco_module38();
	transform_hlds__lco_module39();
}

static void mercury__transform_hlds__lco_maybe_bunch_1(void)
{
	transform_hlds__lco_module40();
	transform_hlds__lco_module41();
	transform_hlds__lco_module42();
	transform_hlds__lco_module43();
	transform_hlds__lco_module44();
	transform_hlds__lco_module45();
	transform_hlds__lco_module46();
	transform_hlds__lco_module47();
	transform_hlds__lco_module48();
	transform_hlds__lco_module49();
	transform_hlds__lco_module50();
	transform_hlds__lco_module51();
	transform_hlds__lco_module52();
	transform_hlds__lco_module53();
	transform_hlds__lco_module54();
	transform_hlds__lco_module55();
	transform_hlds__lco_module56();
	transform_hlds__lco_module57();
	transform_hlds__lco_module58();
	transform_hlds__lco_module59();
	transform_hlds__lco_module60();
	transform_hlds__lco_module61();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__lco__init(void);
void mercury__transform_hlds__lco__init_type_tables(void);
void mercury__transform_hlds__lco__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__lco__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__lco__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__lco__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__lco__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__lco_maybe_bunch_0();
	mercury__transform_hlds__lco_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_allow_float_addr_0,
		transform_hlds__lco__allow_float_addr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_field_id_0,
		transform_hlds__lco__field_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_lco_const_info_0,
		transform_hlds__lco__lco_const_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_lco_info_0,
		transform_hlds__lco__lco_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0,
		transform_hlds__lco__lco_is_permitted_on_scc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_proc_changed_0,
		transform_hlds__lco__proc_changed_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_store_target_0,
		transform_hlds__lco__store_target_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_var_to_target_0,
		transform_hlds__lco__var_to_target_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_variant_arg_0,
		transform_hlds__lco__variant_arg_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_variant_id_0,
		transform_hlds__lco__variant_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_variant_map_0,
		transform_hlds__lco__variant_map_0_0);
	mercury__transform_hlds__lco__init_debugger();
}

void mercury__transform_hlds__lco__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_allow_float_addr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_field_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_lco_const_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_lco_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_proc_changed_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_store_target_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_var_to_target_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_variant_arg_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_variant_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_variant_map_0);
	}
}


void mercury__transform_hlds__lco__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__lco__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__lco);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__lco__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__lco__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
