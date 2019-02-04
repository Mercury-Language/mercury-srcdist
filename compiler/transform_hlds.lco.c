/*
** Automatically generated from `lco.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__lco__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "transform_hlds.lco.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "transform_hlds.lco.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.lco.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.lco.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.lco.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "transform_hlds.lco.c"
#line 48 "transform_hlds.lco.c"
#include "transform_hlds.lco.mh"

#line 51 "transform_hlds.lco.c"
#line 52 "transform_hlds.lco.c"
#ifndef TRANSFORM_HLDS__LCO_DECL_GUARD
#define TRANSFORM_HLDS__LCO_DECL_GUARD

#line 56 "transform_hlds.lco.c"
#line 57 "transform_hlds.lco.c"

#endif
#line 60 "transform_hlds.lco.c"

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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__lco__type_ctor_info_variant_map_0,
	mercury_data_transform_hlds__lco__type_ctor_info_variant_id_0,
	mercury_data_transform_hlds__lco__type_ctor_info_permitted_0,
	mercury_data_transform_hlds__lco__type_ctor_info_lco_info_0,
	mercury_data_transform_hlds__lco__type_ctor_info_lco_const_info_0,
	mercury_data_transform_hlds__lco__type_ctor_info_changed_0;
MR_decl_label4(transform_hlds__lco__acceptable_construct_mode_2_0, 2,4,6,1)
MR_decl_label7(transform_hlds__lco__classify_proc_call_args_7_0, 3,9,10,11,13,14,8)
MR_decl_label7(transform_hlds__lco__create_variant_name_4_0, 2,3,6,7,5,9,10)
MR_decl_label8(transform_hlds__lco__ensure_variant_exists_8_0, 3,6,7,2,9,10,11,12)
MR_decl_label6(transform_hlds__lco__ensure_variant_exists_8_0, 13,16,15,17,18,1)
MR_decl_label6(transform_hlds__lco__find_args_to_pass_by_addr_8_0, 4,6,5,8,9,3)
MR_decl_label4(transform_hlds__lco__is_grounding_4_0, 2,5,7,1)
MR_decl_label3(transform_hlds__lco__lco_in_cases_5_0, 4,5,3)
MR_decl_label8(transform_hlds__lco__lco_in_conj_7_0, 117,3,4,10,12,14,15,17)
MR_decl_label8(transform_hlds__lco__lco_in_conj_7_0, 16,19,20,5,6,25,27,28)
MR_decl_label8(transform_hlds__lco__lco_in_conj_7_0, 29,30,32,33,34,35,36,38)
MR_decl_label8(transform_hlds__lco__lco_in_conj_7_0, 39,41,42,44,45,46,47,48)
MR_decl_label2(transform_hlds__lco__lco_in_conj_7_0, 49,23)
MR_decl_label8(transform_hlds__lco__lco_in_goal_5_0, 9,12,13,14,18,20,21,17)
MR_decl_label8(transform_hlds__lco__lco_in_goal_5_0, 16,11,75,25,27,28,24,76)
MR_decl_label8(transform_hlds__lco__lco_in_goal_5_0, 31,77,34,78,36,37,79,39)
MR_decl_label1(transform_hlds__lco__lco_in_goal_5_0, 74)
MR_decl_label4(transform_hlds__lco__lco_modulo_constructors_2_0, 2,3,4,5)
MR_decl_label8(transform_hlds__lco__lco_proc_11_0, 4,5,6,7,36,11,10,9)
MR_decl_label8(transform_hlds__lco__lco_proc_11_0, 15,16,17,18,19,20,21,22)
MR_decl_label8(transform_hlds__lco__lco_proc_11_0, 23,24,28,29,30,31,32,25)
MR_decl_label1(transform_hlds__lco__lco_proc_11_0, 3)
MR_decl_label8(transform_hlds__lco__lco_scc_5_0, 2,3,4,5,6,10,11,7)
MR_decl_label8(transform_hlds__lco__make_addr_vars_12_0, 6,7,5,3,12,11,14,15)
MR_decl_label8(transform_hlds__lco__make_addr_vars_12_0, 18,17,22,23,24,25,26,27)
MR_decl_label6(transform_hlds__lco__make_addr_vars_12_0, 28,29,20,30,19,32)
MR_decl_label6(transform_hlds__lco__make_address_var_4_0, 2,3,4,5,6,7)
MR_decl_label4(transform_hlds__lco__make_store_goal_3_0, 2,3,4,5)
MR_decl_label1(transform_hlds__lco__occurs_once_2_0, 2)
MR_decl_label6(transform_hlds__lco__process_proc_update_3_0, 2,3,4,5,6,7)
MR_decl_label8(transform_hlds__lco__process_proc_variant_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__lco__process_proc_variant_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(transform_hlds__lco__process_proc_variant_3_0, 18,19,20,21,22,23,24,25)
MR_decl_label1(transform_hlds__lco__process_proc_variant_3_0, 26)
MR_decl_label4(transform_hlds__lco__transform_variant_atomic_goal_7_0, 2,3,5,6)
MR_decl_label1(transform_hlds__lco__transform_variant_case_6_0, 2)
MR_decl_label7(transform_hlds__lco__transform_variant_conj_6_0, 4,5,6,7,11,8,3)
MR_decl_label8(transform_hlds__lco__transform_variant_goal_6_0, 4,6,8,10,11,12,13,14)
MR_decl_label8(transform_hlds__lco__transform_variant_goal_6_0, 17,19,20,21,22,23,24,25)
MR_decl_label8(transform_hlds__lco__transform_variant_goal_6_0, 26,27,28,29,30,31,32,33)
MR_decl_label3(transform_hlds__lco__transform_variant_goal_6_0, 2,37,35)
MR_decl_label8(transform_hlds__lco__update_call_args_6_0, 6,3,30,57,11,12,15,14)
MR_decl_label4(transform_hlds__lco__update_call_args_6_0, 18,17,20,16)
MR_decl_label8(transform_hlds__lco__update_construct_3_0, 6,5,8,9,11,17,14,15)
MR_decl_label4(transform_hlds__lco__update_construct_3_0, 16,12,20,2)
MR_decl_label5(transform_hlds__lco__update_construct_args_7_0, 4,6,8,5,3)
MR_decl_label1(fn__transform_hlds__lco__make_ref_type_1_0, 2)
MR_decl_label8(__Unify___transform_hlds__lco__lco_const_info_0_0, 4,6,8,10,12,14,16,1)
MR_decl_label6(__Unify___transform_hlds__lco__lco_info_0_0, 4,6,8,10,12,1)
MR_decl_label4(__Unify___transform_hlds__lco__variant_id_0_0, 4,6,8,1)
MR_decl_label8(__Compare___transform_hlds__lco__lco_const_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label1(__Compare___transform_hlds__lco__lco_const_info_0_0, 61)
MR_decl_label8(__Compare___transform_hlds__lco__lco_info_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label5(__Compare___transform_hlds__lco__variant_id_0_0, 3,2,5,9,29)
MR_def_extern_entry(transform_hlds__lco__lco_modulo_constructors_2_0)
MR_decl_static(transform_hlds__lco__lco_scc_5_0)
MR_decl_static(transform_hlds__lco__process_proc_update_3_0)
MR_decl_static(fn__transform_hlds__lco__make_ref_type_1_0)
MR_decl_static(fn__transform_hlds__lco__this_file_0_0)
MR_decl_static(transform_hlds__lco__make_addr_vars_12_0)
MR_decl_static(transform_hlds__lco__transform_variant_atomic_goal_7_0)
MR_decl_static(transform_hlds__lco__transform_variant_goal_6_0)
MR_decl_static(transform_hlds__lco__transform_variant_conj_6_0)
MR_decl_static(transform_hlds__lco__process_proc_variant_3_0)
MR_decl_static(transform_hlds__lco__update_call_args_6_0)
MR_decl_static(transform_hlds__lco__classify_proc_call_args_7_0)
MR_decl_static(transform_hlds__lco__make_address_var_4_0)
MR_decl_static(transform_hlds__lco__find_args_to_pass_by_addr_8_0)
MR_decl_static(transform_hlds__lco__create_variant_name_4_0)
MR_decl_static(transform_hlds__lco__ensure_variant_exists_8_0)
MR_decl_static(transform_hlds__lco__lco_in_conj_7_0)
MR_decl_static(transform_hlds__lco__lco_in_goal_5_0)
MR_decl_static(transform_hlds__lco__lco_in_cases_5_0)
MR_decl_static(transform_hlds__lco__lco_proc_11_0)
MR_decl_static(transform_hlds__lco__update_construct_args_7_0)
MR_decl_static(transform_hlds__lco__update_construct_3_0)
MR_decl_static(transform_hlds__lco__acceptable_construct_mode_2_0)
MR_decl_static(transform_hlds__lco__occurs_once_2_0)
MR_decl_static(transform_hlds__lco__transform_variant_case_6_0)
MR_decl_static(transform_hlds__lco__is_grounding_4_0)
MR_decl_static(transform_hlds__lco__make_store_goal_3_0)
MR_decl_static(__Unify___transform_hlds__lco__changed_0_0)
MR_decl_static(__Compare___transform_hlds__lco__changed_0_0)
MR_decl_static(__Unify___transform_hlds__lco__lco_const_info_0_0)
MR_decl_static(__Compare___transform_hlds__lco__lco_const_info_0_0)
MR_decl_static(__Unify___transform_hlds__lco__lco_info_0_0)
MR_decl_static(__Compare___transform_hlds__lco__lco_info_0_0)
MR_decl_static(__Unify___transform_hlds__lco__permitted_0_0)
MR_decl_static(__Compare___transform_hlds__lco__permitted_0_0)
MR_decl_static(__Unify___transform_hlds__lco__variant_id_0_0)
MR_decl_static(__Compare___transform_hlds__lco__variant_id_0_0)
MR_decl_static(__Unify___transform_hlds__lco__variant_map_0_0)
MR_decl_static(__Compare___transform_hlds__lco__variant_map_0_0)
MR_decl_static(transform_hlds__lco__IntroducedFrom__pred__lco_proc__298__1_3_0)
MR_decl_static(transform_hlds__lco__IntroducedFrom__pred__update_call_args__540__1_2_0)
MR_decl_static(transform_hlds__lco__IntroducedFrom__pred__update_construct__743__1_2_0)
MR_decl_static(transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__828__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[8] =
{
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
MR_INT_CTOR_ADDR
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
MR_COMMON(0,4)
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
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_variant_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_1 mercury_common_1[14] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__lco, variant_id)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__lco, variant_id)
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
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,3),
MR_TAG_COMMON(0,0,3)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,4),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,4),
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
MR_COMMON(0,1),
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

MR_decl_entry(string__int_to_string_2_0);
static const struct mercury_type_3 mercury_common_3[4] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(transform_hlds__lco__lco_scc_5_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(transform_hlds__lco__process_proc_update_3_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(transform_hlds__lco__process_proc_variant_3_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(string__int_to_string_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_permitted_0;
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
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_CTOR0_ADDR(transform_hlds__lco, permitted),
MR_CTOR0_ADDR(transform_hlds__lco, permitted)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__transform_variant_atomic_goal_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_proc_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_5 mercury_common_5[5] =
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
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,7),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__transform_variant_atomic_goal_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,8),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,12),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__lco_proc_11_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,13),
MR_COMMON(0,7),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__make_addr_vars_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__update_call_args_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__create_variant_name_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__update_construct_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
static const struct mercury_type_6 mercury_common_6[7] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__make_addr_vars_12_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,2),
MR_COMMON(0,2)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__update_call_args_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,6),
MR_COMMON(0,6)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__create_variant_name_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
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
MR_COMMON(1,11),
MR_COMMON(0,7)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__update_construct_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__transform_variant_atomic_goal_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__transform_variant_atomic_goal_7_0_1,
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
mercury_data__closure_layout__transform_hlds__lco__transform_variant_goal_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__transform_variant_goal_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__transform_variant_goal_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,5),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_BOOL_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lco__transform_variant_goal_6_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,5),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_BOOL_CTOR_ADDR
}
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
51
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__lco__type_ctor_info_variant_id_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__lco__type_ctor_info_variant_id_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_variant_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__variant_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__variant_map_0_0)),
	"transform_hlds.lco",
	"variant_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__lco__type_ctor_info_variant_id_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__lco__field_types_variant_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
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
	13,
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

static const MR_EnumFunctorDesc mercury_data_transform_hlds__lco__enum_functor_desc_permitted_0_0 = {
	"permitted",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__lco__enum_functor_desc_permitted_0_1 = {
	"not_permitted",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__lco__enum_value_ordered_permitted_0[] = {
	&mercury_data_transform_hlds__lco__enum_functor_desc_permitted_0_0,
	&mercury_data_transform_hlds__lco__enum_functor_desc_permitted_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__lco__enum_name_ordered_permitted_0[] = {
	&mercury_data_transform_hlds__lco__enum_functor_desc_permitted_0_1,
	&mercury_data_transform_hlds__lco__enum_functor_desc_permitted_0_0
};

const MR_Integer mercury_data_transform_hlds__lco__functor_number_map_permitted_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_permitted_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__permitted_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__permitted_0_0)),
	"transform_hlds.lco",
	"permitted",
	{ (void *)mercury_data_transform_hlds__lco__enum_name_ordered_permitted_0 },
	{ (void *)mercury_data_transform_hlds__lco__enum_value_ordered_permitted_0 },
	2,
	4,
	mercury_data_transform_hlds__lco__functor_number_map_permitted_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_permitted_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_changed_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__lco__field_types_lco_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__lco__type_ctor_info_variant_id_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__lco__type_ctor_info_permitted_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__lco__type_ctor_info_changed_0
};

const MR_ConstString mercury_data_transform_hlds__lco__field_names_lco_info_0_0[] = {
	"module_info",
	"cur_scc_variants",
	"var_set",
	"var_types",
	"permitted",
	"changed"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__lco__du_functor_desc_lco_info_0_0 = {
	"lco_info",
	6,
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
	13,
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

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__lco__field_types_lco_const_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__lco__type_ctor_info_variant_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0
};

const MR_ConstString mercury_data_transform_hlds__lco__field_names_lco_const_info_0_0[] = {
	"lower_scc_variants",
	"cur_scc",
	"cur_proc_id",
	"cur_proc_pred",
	"cur_proc_proc",
	"cur_proc_outputs",
	"cur_proc_detism"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__lco__du_functor_desc_lco_const_info_0_0 = {
	"lco_const_info",
	7,
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
	13,
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

static const MR_EnumFunctorDesc mercury_data_transform_hlds__lco__enum_functor_desc_changed_0_0 = {
	"changed",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__lco__enum_functor_desc_changed_0_1 = {
	"not_changed",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__lco__enum_value_ordered_changed_0[] = {
	&mercury_data_transform_hlds__lco__enum_functor_desc_changed_0_0,
	&mercury_data_transform_hlds__lco__enum_functor_desc_changed_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__lco__enum_name_ordered_changed_0[] = {
	&mercury_data_transform_hlds__lco__enum_functor_desc_changed_0_0,
	&mercury_data_transform_hlds__lco__enum_functor_desc_changed_0_1
};

const MR_Integer mercury_data_transform_hlds__lco__functor_number_map_changed_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lco__type_ctor_info_changed_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lco__changed_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lco__changed_0_0)),
	"transform_hlds.lco",
	"changed",
	{ (void *)mercury_data_transform_hlds__lco__enum_name_ordered_changed_0 },
	{ (void *)mercury_data_transform_hlds__lco__enum_value_ordered_changed_0 },
	2,
	4,
	mercury_data_transform_hlds__lco__functor_number_map_changed_0
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
198,
"d1;c5;"
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
205,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"process_proc_update",
3,
0
},
"transform_hlds.lco",
"lco.m",
214,
"d1;c14;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_scc_5_0_3 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"process_proc_variant",
3,
0
},
"transform_hlds.lco",
"lco.m",
215,
"d1;c14;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__make_addr_vars_12_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lambda_lco_m_828",
2,
0
},
"transform_hlds.lco",
"lco.m",
828,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__transform_variant_atomic_goal_7_0_1 = {
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
979,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__transform_variant_atomic_goal_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"make_store_goal",
3,
0
},
"transform_hlds.lco",
"lco.m",
987,
"d1;c12;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__transform_variant_goal_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"transform_variant_goal",
6,
0
},
"transform_hlds.lco",
"lco.m",
888,
"d1;c8;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__transform_variant_goal_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"transform_variant_case",
6,
0
},
"transform_hlds.lco",
"lco.m",
894,
"d1;c8;d3;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__update_call_args_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lambda_lco_m_540",
2,
0
},
"transform_hlds.lco",
"lco.m",
540,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__create_variant_name_4_0_1 = {
{
MR_PREDICATE,
"string",
"string",
"int_to_string",
2,
0
},
"transform_hlds.lco",
"lco.m",
697,
"d1;c5;"
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
469,
"d2;c12;?;c4;"
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
469,
"d2;c12;?;c4;"
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
514,
"d2;c12;e;c1;?;c21;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_in_conj_7_0_4 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"update_construct",
3,
0
},
"transform_hlds.lco",
"lco.m",
518,
"d2;c12;e;c1;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__lco_proc_11_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lambda_lco_m_298",
3,
0
},
"transform_hlds.lco",
"lco.m",
298,
"d1;c12;d2;c7;e;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lco__update_construct_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lco",
"transform_hlds.lco",
"lambda_lco_m_743",
2,
0
},
"transform_hlds.lco",
"lco.m",
743,
"d1;c5;t;c4;d2;c5;d2;c2;"
};

MR_decl_entry(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(transform_hlds__lco_module0)
	MR_init_entry1(transform_hlds__lco__lco_modulo_constructors_2_0);
	MR_init_label4(transform_hlds__lco__lco_modulo_constructors_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lco__lco_modulo_constructors_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,
		transform_hlds__lco__lco_modulo_constructors_2_0_i2);
MR_def_label(transform_hlds__lco__lco_modulo_constructors_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__lco__lco_modulo_constructors_2_0_i3);
MR_def_label(transform_hlds__lco__lco_modulo_constructors_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__lco__lco_modulo_constructors_2_0_i4);
MR_def_label(transform_hlds__lco__lco_modulo_constructors_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r5 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__lco__lco_modulo_constructors_2_0_i5);
MR_def_label(transform_hlds__lco__lco_modulo_constructors_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(transform_hlds__lco_module1)
	MR_init_entry1(transform_hlds__lco__lco_scc_5_0);
	MR_init_label8(transform_hlds__lco__lco_scc_5_0,2,3,4,5,6,10,11,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_scc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__lco_proc_11_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__lco__lco_scc_5_0_i2);
MR_def_label(transform_hlds__lco__lco_scc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__lco__lco_scc_5_0_i3);
MR_def_label(transform_hlds__lco__lco_scc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r5 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, permitted);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_r11 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__foldl4_10_0,
		transform_hlds__lco__lco_scc_5_0_i4);
MR_def_label(transform_hlds__lco__lco_scc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		transform_hlds__lco__lco_scc_5_0_i5);
MR_def_label(transform_hlds__lco__lco_scc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		transform_hlds__lco__lco_scc_5_0_i6);
MR_def_label(transform_hlds__lco__lco_scc_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_scc_5_0_i7);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_scc_5_0_i7);
	}
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__lco__lco_scc_5_0_i10);
MR_def_label(transform_hlds__lco__lco_scc_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__lco__lco_scc_5_0_i11);
MR_def_label(transform_hlds__lco__lco_scc_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__lco__lco_scc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module2)
	MR_init_entry1(transform_hlds__lco__process_proc_update_3_0);
	MR_init_label6(transform_hlds__lco__process_proc_update_3_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__process_proc_update_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__lco__process_proc_update_3_0_i2);
MR_def_label(transform_hlds__lco__process_proc_update_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__lco__process_proc_update_3_0_i3);
MR_def_label(transform_hlds__lco__process_proc_update_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__lco__process_proc_update_3_0_i4);
MR_def_label(transform_hlds__lco__process_proc_update_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__lco__process_proc_update_3_0_i5);
MR_def_label(transform_hlds__lco__process_proc_update_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__lco__process_proc_update_3_0_i6);
MR_def_label(transform_hlds__lco__process_proc_update_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__lco__process_proc_update_3_0_i7);
MR_def_label(transform_hlds__lco__process_proc_update_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);

MR_BEGIN_MODULE(transform_hlds__lco_module3)
	MR_init_entry1(fn__transform_hlds__lco__make_ref_type_1_0);
	MR_init_label1(fn__transform_hlds__lco__make_ref_type_1_0,2)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("store_by_ref_type", 17);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module4)
	MR_init_entry1(fn__transform_hlds__lco__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__lco__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lco.m", 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);
MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(svvarset__new_named_var_4_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);

MR_BEGIN_MODULE(transform_hlds__lco_module5)
	MR_init_entry1(transform_hlds__lco__make_addr_vars_12_0);
	MR_init_label8(transform_hlds__lco__make_addr_vars_12_0,6,7,5,3,12,11,14,15)
	MR_init_label8(transform_hlds__lco__make_addr_vars_12_0,18,17,22,23,24,25,26,27)
	MR_init_label6(transform_hlds__lco__make_addr_vars_12_0,28,29,20,30,19,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__make_addr_vars_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__828__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	}
	MR_np_call_localret_ent(fn__transform_hlds__lco__this_file_0_0,
		transform_hlds__lco__make_addr_vars_12_0_i6);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("make_addr_vars: AddrOutArgPosns != []", 37);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__lco__make_addr_vars_12_0_i7);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__lco__this_file_0_0,
		transform_hlds__lco__make_addr_vars_12_0_i12);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i11);
	}
	MR_np_call_localret_ent(fn__transform_hlds__lco__this_file_0_0,
		transform_hlds__lco__make_addr_vars_12_0_i12);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("make_addr_vars: mismatched lists", 32);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_sv(10) = MR_ctfield(1, MR_r1, 1);
	MR_sv(11) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__make_addr_vars_12_0_i14);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		transform_hlds__lco__make_addr_vars_12_0_i15);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i17);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_np_localcall_lab(transform_hlds__lco__make_addr_vars_12_0,
		transform_hlds__lco__make_addr_vars_12_0_i18);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i19);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(1), 0);
	if ((MR_sv(2) != MR_tempr1)) {
		MR_GOTO_LAB(transform_hlds__lco__make_addr_vars_12_0_i20);
	}
	MR_sv(1) = MR_ctfield(1, MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		transform_hlds__lco__make_addr_vars_12_0_i22);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("AddrOf", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__lco__make_addr_vars_12_0_i23);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__lco__make_addr_vars_12_0_i24);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(11);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__make_addr_vars_12_0_i25);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__lco__make_ref_type_1_0,
		transform_hlds__lco__make_addr_vars_12_0_i26);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__lco__make_addr_vars_12_0_i27);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__lco__make_addr_vars_12_0_i28);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_np_localcall_lab(transform_hlds__lco__make_addr_vars_12_0,
		transform_hlds__lco__make_addr_vars_12_0_i29);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_np_localcall_lab(transform_hlds__lco__make_addr_vars_12_0,
		transform_hlds__lco__make_addr_vars_12_0_i30);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__lco__this_file_0_0,
		transform_hlds__lco__make_addr_vars_12_0_i32);
MR_def_label(transform_hlds__lco__make_addr_vars_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("make_addr_vars: top_unused", 26);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__update_instmap_3_0);
MR_decl_entry(list__filter_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module6)
	MR_init_entry1(transform_hlds__lco__transform_variant_atomic_goal_7_0);
	MR_init_label4(transform_hlds__lco__transform_variant_atomic_goal_7_0,2,3,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__transform_variant_atomic_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__lco__transform_variant_atomic_goal_7_0_i2);
MR_def_label(transform_hlds__lco__transform_variant_atomic_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__is_grounding_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__lco__transform_variant_atomic_goal_7_0_i3);
MR_def_label(transform_hlds__lco__transform_variant_atomic_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__transform_variant_atomic_goal_7_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__lco__transform_variant_atomic_goal_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__make_store_goal_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__lco__transform_variant_atomic_goal_7_0_i6);
MR_def_label(transform_hlds__lco__transform_variant_atomic_goal_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(list__map2_4_0);
MR_decl_entry(fn__bool__or_list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(fn__bool__or_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module7)
	MR_init_entry1(transform_hlds__lco__transform_variant_goal_6_0);
	MR_init_label8(transform_hlds__lco__transform_variant_goal_6_0,4,6,8,10,11,12,13,14)
	MR_init_label8(transform_hlds__lco__transform_variant_goal_6_0,17,19,20,21,22,23,24,25)
	MR_init_label8(transform_hlds__lco__transform_variant_goal_6_0,26,27,28,29,30,31,32,33)
	MR_init_label3(transform_hlds__lco__transform_variant_goal_6_0,2,37,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__transform_variant_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r5 = MR_ctfield(0, MR_r4, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(transform_hlds__lco__transform_variant_goal_6_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__lco__transform_variant_goal_6_0_i6) MR_AND
		MR_LABEL_AP(transform_hlds__lco__transform_variant_goal_6_0_i8) MR_AND
		MR_LABEL_AP(transform_hlds__lco__transform_variant_goal_6_0_i10));
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__lco__transform_variant_atomic_goal_7_0,
		transform_hlds__lco__transform_variant_goal_6_0_i12);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__lco__transform_variant_atomic_goal_7_0,
		transform_hlds__lco__transform_variant_goal_6_0_i12);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__lco__transform_variant_atomic_goal_7_0,
		transform_hlds__lco__transform_variant_goal_6_0_i12);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r5, 0),
		MR_LABEL_AP(transform_hlds__lco__transform_variant_goal_6_0_i11) MR_AND
		MR_LABEL_AP(transform_hlds__lco__transform_variant_goal_6_0_i13) MR_AND
		MR_LABEL_AP(transform_hlds__lco__transform_variant_goal_6_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__lco__transform_variant_goal_6_0_i22) MR_AND
		MR_LABEL_AP(transform_hlds__lco__transform_variant_goal_6_0_i25) MR_AND
		MR_LABEL_AP(transform_hlds__lco__transform_variant_goal_6_0_i26) MR_AND
		MR_LABEL_AP(transform_hlds__lco__transform_variant_goal_6_0_i28) MR_AND
		MR_LABEL_AP(transform_hlds__lco__transform_variant_goal_6_0_i33));
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__lco__transform_variant_atomic_goal_7_0,
		transform_hlds__lco__transform_variant_goal_6_0_i12);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__lco__transform_variant_goal_6_0_i2);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r6 = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_r4, 1);
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__lco__transform_variant_goal_6_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("lco.m", 5);
	MR_r2 = (MR_Word) MR_string_const("transform_variant_goal: parallel_conj", 37);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__lco__transform_variant_goal_6_0_i2);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_r4 = MR_r6;
	MR_np_call_localret_ent(transform_hlds__lco__transform_variant_conj_6_0,
		transform_hlds__lco__transform_variant_goal_6_0_i17);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__lco__transform_variant_goal_6_0_i2);
	}
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__transform_variant_goal_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_r5, 1);
	}
	MR_np_call_localret_ent(list__map2_4_0,
		transform_hlds__lco__transform_variant_goal_6_0_i20);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__bool__or_list_1_0,
		transform_hlds__lco__transform_variant_goal_6_0_i21);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__lco__transform_variant_goal_6_0_i2);
	}
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__transform_variant_case_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_r5, 3);
	}
	MR_np_call_localret_ent(list__map2_4_0,
		transform_hlds__lco__transform_variant_goal_6_0_i23);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__bool__or_list_1_0,
		transform_hlds__lco__transform_variant_goal_6_0_i24);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(2) = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__lco__transform_variant_goal_6_0_i2);
	}
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 0;
	MR_sv(5) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_r5;
	MR_GOTO_LAB(transform_hlds__lco__transform_variant_goal_6_0_i2);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_r4 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_localcall_lab(transform_hlds__lco__transform_variant_goal_6_0,
		transform_hlds__lco__transform_variant_goal_6_0_i27);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__lco__transform_variant_goal_6_0_i2);
	}
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_r5;
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(8) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(9) = MR_ctfield(3, MR_tempr3, 4);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__lco__transform_variant_goal_6_0_i29);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_np_localcall_lab(transform_hlds__lco__transform_variant_goal_6_0,
		transform_hlds__lco__transform_variant_goal_6_0_i30);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	}
	MR_np_localcall_lab(transform_hlds__lco__transform_variant_goal_6_0,
		transform_hlds__lco__transform_variant_goal_6_0_i31);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__or_2_0,
		transform_hlds__lco__transform_variant_goal_6_0_i32);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(2) = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__lco__transform_variant_goal_6_0_i2);
	}
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lco.m", 5);
	MR_r2 = (MR_Word) MR_string_const("transform_variant_goal: shorthand", 33);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__lco__transform_variant_goal_6_0_i2);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__lco__transform_variant_goal_6_0_i35);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__lco__transform_variant_goal_6_0_i37);
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
MR_def_label(transform_hlds__lco__transform_variant_goal_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__lco_module8)
	MR_init_entry1(transform_hlds__lco__transform_variant_conj_6_0);
	MR_init_label7(transform_hlds__lco__transform_variant_conj_6_0,4,5,6,7,11,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__transform_variant_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__transform_variant_conj_6_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__lco__transform_variant_goal_6_0,
		transform_hlds__lco__transform_variant_conj_6_0_i4);
MR_def_label(transform_hlds__lco__transform_variant_conj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__lco__transform_variant_conj_6_0_i5);
MR_def_label(transform_hlds__lco__transform_variant_conj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(transform_hlds__lco__transform_variant_conj_6_0,
		transform_hlds__lco__transform_variant_conj_6_0_i6);
MR_def_label(transform_hlds__lco__transform_variant_conj_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__bool__or_2_0,
		transform_hlds__lco__transform_variant_conj_6_0_i7);
MR_def_label(transform_hlds__lco__transform_variant_conj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__lco__transform_variant_conj_6_0_i8);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__lco__transform_variant_conj_6_0_i8);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__lco__transform_variant_conj_6_0_i11);
MR_def_label(transform_hlds__lco__transform_variant_conj_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__lco__transform_variant_conj_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__lco__transform_variant_conj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_headvars_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_argmodes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_name_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_is_pred_or_func_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_origin_3_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(svmap__det_update_4_0);

MR_BEGIN_MODULE(transform_hlds__lco_module9)
	MR_init_entry1(transform_hlds__lco__process_proc_variant_3_0);
	MR_init_label8(transform_hlds__lco__process_proc_variant_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__lco__process_proc_variant_3_0,10,11,12,13,14,15,16,17)
	MR_init_label8(transform_hlds__lco__process_proc_variant_3_0,18,19,20,21,22,23,24,25)
	MR_init_label1(transform_hlds__lco__process_proc_variant_3_0,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__process_proc_variant_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_r2;
	MR_sv(8) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__lco__process_proc_variant_3_0_i2);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__lco__process_proc_variant_3_0_i3);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__lco__process_proc_variant_3_0_i4);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__lco__process_proc_variant_3_0_i5);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__lco__process_proc_variant_3_0_i6);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__lco__make_addr_vars_12_0,
		transform_hlds__lco__process_proc_variant_3_0_i7);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_headvars_3_0,
		transform_hlds__lco__process_proc_variant_3_0_i8);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_argmodes_3_0,
		transform_hlds__lco__process_proc_variant_3_0_i9);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__lco__process_proc_variant_3_0_i10);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__lco__process_proc_variant_3_0_i11);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__lco__process_proc_variant_3_0_i12);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__lco__process_proc_variant_3_0_i13);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__lco__transform_variant_goal_6_0,
		transform_hlds__lco__process_proc_variant_3_0_i14);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__lco__process_proc_variant_3_0_i15);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_2_0,
		transform_hlds__lco__process_proc_variant_3_0_i16);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__lco__process_proc_variant_3_0_i17);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__lco__process_proc_variant_3_0_i18);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_name_3_0,
		transform_hlds__lco__process_proc_variant_3_0_i19);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_is_pred_or_func_3_0,
		transform_hlds__lco__process_proc_variant_3_0_i20);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__lco__process_proc_variant_3_0_i21);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 1) = MR_r1;
	MR_tfield(2, MR_tempr2, 2) = MR_sv(5);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_origin_3_0,
		transform_hlds__lco__process_proc_variant_3_0_i22);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__lco__process_proc_variant_3_0_i23);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__lco__process_proc_variant_3_0_i24);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__lco__process_proc_variant_3_0_i25);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__lco__process_proc_variant_3_0_i26);
MR_def_label(transform_hlds__lco__process_proc_variant_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module10)
	MR_init_entry1(transform_hlds__lco__update_call_args_6_0);
	MR_init_label8(transform_hlds__lco__update_call_args_6_0,6,3,30,57,11,12,15,14)
	MR_init_label4(transform_hlds__lco__update_call_args_6_0,18,17,20,16)
MR_BEGIN_CODE

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
		MR_GOTO_LAB(transform_hlds__lco__update_call_args_6_0_i30);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__IntroducedFrom__pred__update_call_args__540__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_r5;
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_string_const("lco.m", 5);
	MR_r3 = (MR_Word) MR_string_const("update_call_args: updating nonexistent arg", 42);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__lco__update_call_args_6_0_i6);
MR_def_label(transform_hlds__lco__update_call_args_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__lco__update_call_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_call_args_6_0_i57);
	}
MR_def_label(transform_hlds__lco__update_call_args_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lco.m", 5);
	MR_r2 = (MR_Word) MR_string_const("update_call_args: mismatches lists", 34);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__lco__update_call_args_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__update_call_args_6_0_i11);
MR_def_label(transform_hlds__lco__update_call_args_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		transform_hlds__lco__update_call_args_6_0_i12);
MR_def_label(transform_hlds__lco__update_call_args_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_call_args_6_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_np_localcall_lab(transform_hlds__lco__update_call_args_6_0,
		transform_hlds__lco__update_call_args_6_0_i15);
MR_def_label(transform_hlds__lco__update_call_args_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lco__update_call_args_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__lco__update_call_args_6_0_i16);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_call_args_6_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("lco.m", 5);
	MR_r2 = (MR_Word) MR_string_const("update_call_args: no UpdatedCallOutArgs", 39);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__lco__update_call_args_6_0_i17);
MR_def_label(transform_hlds__lco__update_call_args_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_sv(6);
	}
MR_def_label(transform_hlds__lco__update_call_args_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(transform_hlds__lco__update_call_args_6_0,
		transform_hlds__lco__update_call_args_6_0_i20);
MR_def_label(transform_hlds__lco__update_call_args_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lco__update_call_args_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lco.m", 5);
	MR_r2 = (MR_Word) MR_string_const("update_call_args: top_unused", 28);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module11)
	MR_init_entry1(transform_hlds__lco__classify_proc_call_args_7_0);
	MR_init_label7(transform_hlds__lco__classify_proc_call_args_7_0,3,9,10,11,13,14,8)
MR_BEGIN_CODE

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
	MR_sv(3) = MR_ctfield(1, MR_r4, 0);
	MR_sv(6) = MR_ctfield(1, MR_r3, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	MR_np_localcall_lab(transform_hlds__lco__classify_proc_call_args_7_0,
		transform_hlds__lco__classify_proc_call_args_7_0_i9);
MR_def_label(transform_hlds__lco__classify_proc_call_args_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__classify_proc_call_args_7_0_i10);
MR_def_label(transform_hlds__lco__classify_proc_call_args_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		transform_hlds__lco__classify_proc_call_args_7_0_i11);
MR_def_label(transform_hlds__lco__classify_proc_call_args_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__classify_proc_call_args_7_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__lco__classify_proc_call_args_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__lco__classify_proc_call_args_7_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__lco__classify_proc_call_args_7_0,14)
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
	MR_r1 = (MR_Word) MR_string_const("lco.m", 5);
	MR_r2 = (MR_Word) MR_string_const("classify_proc_call_args: mismatches lists", 41);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_4_0);
MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__lco_module12)
	MR_init_entry1(transform_hlds__lco__make_address_var_4_0);
	MR_init_label6(transform_hlds__lco__make_address_var_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__make_address_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("SCCcallarg", 10);
	}
	MR_np_call_localret_ent(varset__lookup_name_4_0,
		transform_hlds__lco__make_address_var_4_0_i2);
MR_def_label(transform_hlds__lco__make_address_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Addr", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__lco__make_address_var_4_0_i3);
MR_def_label(transform_hlds__lco__make_address_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		transform_hlds__lco__make_address_var_4_0_i4);
MR_def_label(transform_hlds__lco__make_address_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__make_address_var_4_0_i5);
MR_def_label(transform_hlds__lco__make_address_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		transform_hlds__lco__make_address_var_4_0_i6);
MR_def_label(transform_hlds__lco__make_address_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("store_by_ref_type", 17);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__lco__make_address_var_4_0_i7);
MR_def_label(transform_hlds__lco__make_address_var_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module13)
	MR_init_entry1(transform_hlds__lco__find_args_to_pass_by_addr_8_0);
	MR_init_label6(transform_hlds__lco__find_args_to_pass_by_addr_8_0,4,6,5,8,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__find_args_to_pass_by_addr_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__find_args_to_pass_by_addr_8_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(transform_hlds__lco__find_args_to_pass_by_addr_8_0,
		transform_hlds__lco__find_args_to_pass_by_addr_8_0_i4);
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__lco__find_args_to_pass_by_addr_8_0_i6);
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__find_args_to_pass_by_addr_8_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__lco__make_address_var_4_0,
		transform_hlds__lco__find_args_to_pass_by_addr_8_0_i8);
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_r2;
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__lco__find_args_to_pass_by_addr_8_0_i9);
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__lco__find_args_to_pass_by_addr_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(transform_hlds__lco_module14)
	MR_init_entry1(transform_hlds__lco__create_variant_name_4_0);
	MR_init_label7(transform_hlds__lco__create_variant_name_4_0,2,3,6,7,5,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__create_variant_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__lco__create_variant_name_4_0_i2);
MR_def_label(transform_hlds__lco__create_variant_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		transform_hlds__lco__create_variant_name_4_0_i3);
MR_def_label(transform_hlds__lco__create_variant_name_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__lco__create_variant_name_4_0_i5);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__lco__create_variant_name_4_0_i6);
MR_def_label(transform_hlds__lco__create_variant_name_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__lco__create_variant_name_4_0_i7);
MR_def_label(transform_hlds__lco__create_variant_name_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("LCMCpr_", 7);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(transform_hlds__lco__create_variant_name_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__lco__create_variant_name_4_0_i9);
MR_def_label(transform_hlds__lco__create_variant_name_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__lco__create_variant_name_4_0_i10);
MR_def_label(transform_hlds__lco__create_variant_name_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("LCMCfn_", 7);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module15)
	MR_init_entry1(transform_hlds__lco__ensure_variant_exists_8_0);
	MR_init_label8(transform_hlds__lco__ensure_variant_exists_8_0,3,6,7,2,9,10,11,12)
	MR_init_label6(transform_hlds__lco__ensure_variant_exists_8_0,13,16,15,17,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__ensure_variant_exists_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr4;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_sv(8) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i3);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__ensure_variant_exists_8_0_i2);
	}
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(transform_hlds__lco__ensure_variant_exists_8_0_i6);
	}
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_sv(1), 0) = MR_ctfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i7);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_sv(4), 0);
	MR_tempr3 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_sv(3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i7);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__ensure_variant_exists_8_0_i1);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(0, MR_sv(8), 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i9);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i10);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i11);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_4_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i12);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i13);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_sv(6) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tempr4 = MR_sv(8);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_ctfield(0, MR_tempr4, 5);
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(transform_hlds__lco__ensure_variant_exists_8_0_i15);
	}
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(transform_hlds__lco__create_variant_name_4_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i16);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i18);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__lco__create_variant_name_4_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i17);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__lco__ensure_variant_exists_8_0_i18);
MR_def_label(transform_hlds__lco__ensure_variant_exists_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
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
MR_decl_entry(fn__hlds__hlds_code_util__cons_id_to_tag_3_0);
MR_decl_entry(svbag__delete_3_0);
MR_decl_entry(svbag__insert_list_3_0);
MR_decl_entry(set__member_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_determinism_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(assoc_list__values_2_0);
MR_decl_entry(fn__assoc_list__keys_1_0);
MR_decl_entry(fn__list__reverse_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module16)
	MR_init_entry1(transform_hlds__lco__lco_in_conj_7_0);
	MR_init_label8(transform_hlds__lco__lco_in_conj_7_0,117,3,4,10,12,14,15,17)
	MR_init_label8(transform_hlds__lco__lco_in_conj_7_0,16,19,20,5,6,25,27,28)
	MR_init_label8(transform_hlds__lco__lco_in_conj_7_0,29,30,32,33,34,35,36,38)
	MR_init_label8(transform_hlds__lco__lco_in_conj_7_0,39,41,42,44,45,46,47,48)
	MR_init_label2(transform_hlds__lco__lco_in_conj_7_0,49,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_in_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(20);
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
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_ctfield(0, MR_tempr3, 4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i4);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(7), 3);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i6);
	}
	MR_r5 = MR_ctfield(0, MR_tempr1, 6);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__acceptable_construct_mode_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(9);
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	}
	MR_np_call_localret_ent(list__all_true_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i12);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r5, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__acceptable_construct_mode_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(9);
	MR_sv(10) = MR_r1;
	MR_tempr3 = MR_r4;
	MR_sv(11) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(12) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(13) = MR_ctfield(0, MR_tempr3, 2);
	MR_r3 = MR_ctfield(0, MR_tempr3, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	}
	MR_np_call_localret_ent(list__all_true_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i12);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i5);
	}
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__lco_in_conj_7_0_i14);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,
		transform_hlds__lco__lco_in_conj_7_0_i15);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i17);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(14);
	MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i16);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i5);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(14);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(svbag__delete_3_0,
		transform_hlds__lco__lco_in_conj_7_0_i19);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(svbag__insert_list_3_0,
		transform_hlds__lco__lco_in_conj_7_0_i20);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(20);
	MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i117);
	}
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(10) = MR_r1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_tempr3;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(12) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(13) = MR_ctfield(1, MR_tempr2, 4);
	MR_sv(14) = MR_ctfield(1, MR_tempr2, 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_ctfield(0, MR_sv(4), 1);
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i25);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i23);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i27);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 6);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i23);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__lco__lco_in_conj_7_0_i28);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(15) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i29);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(transform_hlds__lco__classify_proc_call_args_7_0,
		transform_hlds__lco__lco_in_conj_7_0_i30);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i23);
	}
	MR_sv(16) = MR_r2;
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i32);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(17) = MR_ctfield(0, MR_tempr1, 5);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(17);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i33);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i23);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		transform_hlds__lco__lco_in_conj_7_0_i34);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__lco__lco_in_conj_7_0_i35);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__lco__find_args_to_pass_by_addr_8_0,
		transform_hlds__lco__lco_in_conj_7_0_i36);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i23);
	}
	MR_sv(4) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_sv(17) = MR_r3;
	MR_sv(18) = MR_r4;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(assoc_list__values_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i38);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__occurs_once_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(19);
	}
	MR_np_call_localret_ent(list__all_true_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i39);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i23);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__assoc_list__keys_1_0,
		transform_hlds__lco__lco_in_conj_7_0_i41);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(18);
	MR_np_call_localret_ent(transform_hlds__lco__ensure_variant_exists_8_0,
		transform_hlds__lco__lco_in_conj_7_0_i42);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_conj_7_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__update_construct_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(17);
	MR_sv(4) = MR_r4;
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__lco__lco_in_conj_7_0_i44);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i45);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(16);
	MR_np_call_localret_ent(transform_hlds__lco__update_call_args_6_0,
		transform_hlds__lco__lco_in_conj_7_0_i46);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tempr3 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		transform_hlds__lco__lco_in_conj_7_0_i47);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i48);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__lco__lco_in_conj_7_0_i49);
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(20);
	}
MR_def_label(transform_hlds__lco__lco_in_conj_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bag__init_0_0);
MR_decl_entry(list__split_last_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module17)
	MR_init_entry1(transform_hlds__lco__lco_in_goal_5_0);
	MR_init_label8(transform_hlds__lco__lco_in_goal_5_0,9,12,13,14,18,20,21,17)
	MR_init_label8(transform_hlds__lco__lco_in_goal_5_0,16,11,75,25,27,28,24,76)
	MR_init_label8(transform_hlds__lco__lco_in_goal_5_0,31,77,34,78,36,37,79,39)
	MR_init_label1(transform_hlds__lco__lco_in_goal_5_0,74)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_in_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i74);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__lco__lco_in_goal_5_0_i74) MR_AND
		MR_LABEL_AP(transform_hlds__lco__lco_in_goal_5_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__lco__lco_in_goal_5_0_i75) MR_AND
		MR_LABEL_AP(transform_hlds__lco__lco_in_goal_5_0_i76) MR_AND
		MR_LABEL_AP(transform_hlds__lco__lco_in_goal_5_0_i74) MR_AND
		MR_LABEL_AP(transform_hlds__lco__lco_in_goal_5_0_i77) MR_AND
		MR_LABEL_AP(transform_hlds__lco__lco_in_goal_5_0_i78) MR_AND
		MR_LABEL_AP(transform_hlds__lco__lco_in_goal_5_0_i79));
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i11);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_r4, 2);
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		transform_hlds__lco__lco_in_goal_5_0_i12);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_np_call_localret_ent(fn__bag__init_0_0,
		transform_hlds__lco__lco_in_goal_5_0_i13);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__lco__lco_in_conj_7_0,
		transform_hlds__lco__lco_in_goal_5_0_i14);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__split_last_3_0,
		transform_hlds__lco__lco_in_goal_5_0_i18);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i17);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_in_goal_5_0_i20);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__lco__lco_in_goal_5_0_i21);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(list__split_last_3_0,
		transform_hlds__lco__lco_in_goal_5_0_i25);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_goal_5_0_i24);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_in_goal_5_0_i27);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__lco__lco_in_goal_5_0_i28);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__lco__lco_in_cases_5_0,
		transform_hlds__lco__lco_in_goal_5_0_i31);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_in_goal_5_0_i34);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_localcall_lab(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_in_goal_5_0_i36);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_localcall_lab(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_in_goal_5_0_i37);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__lco__this_file_0_0,
		transform_hlds__lco__lco_in_goal_5_0_i39);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("lco_in_goal: shorthand", 22);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__lco__lco_in_goal_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module18)
	MR_init_entry1(transform_hlds__lco__lco_in_cases_5_0);
	MR_init_label3(transform_hlds__lco__lco_in_cases_5_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_in_cases_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_in_cases_5_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_in_cases_5_0_i4);
MR_def_label(transform_hlds__lco__lco_in_cases_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_localcall_lab(transform_hlds__lco__lco_in_cases_5_0,
		transform_hlds__lco__lco_in_cases_5_0_i5);
MR_def_label(transform_hlds__lco__lco_in_cases_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(transform_hlds__lco__lco_in_cases_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
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
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__lco_module19)
	MR_init_entry1(transform_hlds__lco__lco_proc_11_0);
	MR_init_label8(transform_hlds__lco__lco_proc_11_0,4,5,6,7,36,11,10,9)
	MR_init_label8(transform_hlds__lco__lco_proc_11_0,15,16,17,18,19,20,21,22)
	MR_init_label8(transform_hlds__lco__lco_proc_11_0,23,24,28,29,30,31,32,25)
	MR_init_label1(transform_hlds__lco__lco_proc_11_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__lco_proc_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
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
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_r3, 1);
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
MR_def_label(transform_hlds__lco__lco_proc_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i10);
MR_def_label(transform_hlds__lco__lco_proc_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) 1 << (MR_Integer) MR_r1) & (MR_Integer) 51))) {
		MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i36);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i9);
MR_def_label(transform_hlds__lco__lco_proc_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 1;
	MR_decr_sp_and_return(13);
MR_def_label(transform_hlds__lco__lco_proc_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__lco__lco_proc_11_0_i15);
MR_def_label(transform_hlds__lco__lco_proc_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__lco__lco_proc_11_0_i16);
MR_def_label(transform_hlds__lco__lco_proc_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__lco__lco_proc_11_0_i17);
MR_def_label(transform_hlds__lco__lco_proc_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__lco__lco_proc_11_0_i18);
MR_def_label(transform_hlds__lco__lco_proc_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__IntroducedFrom__pred__lco_proc__298__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__lco__lco_proc_11_0_i19);
MR_def_label(transform_hlds__lco__lco_proc_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(hlds__arg_info__compute_in_and_out_vars_6_0,
		transform_hlds__lco__lco_proc_11_0_i20);
MR_def_label(transform_hlds__lco__lco_proc_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		transform_hlds__lco__lco_proc_11_0_i21);
MR_def_label(transform_hlds__lco__lco_proc_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		transform_hlds__lco__lco_proc_11_0_i22);
MR_def_label(transform_hlds__lco__lco_proc_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_sv(2) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 5) = (MR_Integer) 1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__lco__lco_proc_11_0_i23);
MR_def_label(transform_hlds__lco__lco_proc_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__lco__lco_in_goal_5_0,
		transform_hlds__lco__lco_proc_11_0_i24);
MR_def_label(transform_hlds__lco__lco_proc_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 4);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i25);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 5);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__lco_proc_11_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 3);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__lco__lco_proc_11_0_i28);
MR_def_label(transform_hlds__lco__lco_proc_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__lco__lco_proc_11_0_i29);
MR_def_label(transform_hlds__lco__lco_proc_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__lco__lco_proc_11_0_i30);
MR_def_label(transform_hlds__lco__lco_proc_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_2_0,
		transform_hlds__lco__lco_proc_11_0_i31);
MR_def_label(transform_hlds__lco__lco_proc_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(12);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		transform_hlds__lco__lco_proc_11_0_i32);
MR_def_label(transform_hlds__lco__lco_proc_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(13);
MR_def_label(transform_hlds__lco__lco_proc_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(13);
MR_def_label(transform_hlds__lco__lco_proc_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_set_4_0);

MR_BEGIN_MODULE(transform_hlds__lco_module20)
	MR_init_entry1(transform_hlds__lco__update_construct_args_7_0);
	MR_init_label5(transform_hlds__lco__update_construct_args_7_0,4,6,8,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__update_construct_args_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_args_7_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r3, 0);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__lco__update_construct_args_7_0,
		transform_hlds__lco__update_construct_args_7_0_i4);
MR_def_label(transform_hlds__lco__update_construct_args_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_r2;
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__lco__update_construct_args_7_0_i6);
MR_def_label(transform_hlds__lco__update_construct_args_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_args_7_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,10,0);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_set_4_0,
		transform_hlds__lco__update_construct_args_7_0_i8);
MR_def_label(transform_hlds__lco__update_construct_args_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__lco__update_construct_args_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__lco__update_construct_args_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_instmap_delta_2_0);
MR_decl_entry(hlds__goal_util__rename_var_list_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module21)
	MR_init_entry1(transform_hlds__lco__update_construct_3_0);
	MR_init_label8(transform_hlds__lco__update_construct_3_0,6,5,8,9,11,17,14,15)
	MR_init_label4(transform_hlds__lco__update_construct_3_0,16,12,20,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__update_construct_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_3_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_3_0_i2);
	}
	MR_r5 = MR_ctfield(0, MR_tempr2, 6);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_3_0_i6);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr4, 4);
	MR_tempr5 = MR_r4;
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(14) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(transform_hlds__lco__update_construct_3_0_i5);
	}
MR_def_label(transform_hlds__lco__update_construct_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r5, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_3_0_i2);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 4);
	MR_tempr4 = MR_r4;
	MR_sv(8) = MR_ctfield(0, MR_tempr4, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(12) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(13) = MR_ctfield(0, MR_tempr4, 5);
	MR_sv(14) = MR_ctfield(1, MR_r5, 1);
	}
MR_def_label(transform_hlds__lco__update_construct_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		transform_hlds__lco__update_construct_3_0_i8);
MR_def_label(transform_hlds__lco__update_construct_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__lco__update_construct_args_7_0,
		transform_hlds__lco__update_construct_3_0_i9);
MR_def_label(transform_hlds__lco__update_construct_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_3_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(15);
MR_def_label(transform_hlds__lco__update_construct_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr3, 2) = MR_r1;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr3, 4) = MR_sv(12);
	MR_tfield(0, MR_tempr3, 5) = MR_sv(13);
	MR_tfield(0, MR_tempr3, 6) = MR_tempr2;
	MR_tempr4 = MR_sv(5);
	MR_r5 = MR_tempr4;
	if (MR_PTAG_TEST(MR_tempr4,1)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_3_0_i14);
	}
	if (MR_PTAG_TEST(MR_tempr4,2)) {
		MR_GOTO_LAB(transform_hlds__lco__update_construct_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("lco.m", 5);
	MR_r2 = (MR_Word) MR_string_const("update_construct: var RHS", 25);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__lco__update_construct_3_0_i12);
MR_def_label(transform_hlds__lco__update_construct_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lco.m", 5);
	MR_r2 = (MR_Word) MR_string_const("update_construct: lambda RHS", 28);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__lco__update_construct_3_0_i12);
MR_def_label(transform_hlds__lco__update_construct_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(6,6);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lco__IntroducedFrom__pred__update_construct__743__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_tfield(0, MR_r1, 4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(8) = MR_ctfield(0, MR_r1, 4);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("lco.m", 5);
	MR_r3 = (MR_Word) MR_string_const("update_construct: cons_id mismatch", 34);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__lco__update_construct_3_0_i15);
MR_def_label(transform_hlds__lco__update_construct_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(hlds__goal_util__rename_var_list_4_0,
		transform_hlds__lco__update_construct_3_0_i16);
MR_def_label(transform_hlds__lco__update_construct_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__lco__update_construct_3_0_i20);
MR_def_label(transform_hlds__lco__update_construct_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__lco__update_construct_3_0_i20);
MR_def_label(transform_hlds__lco__update_construct_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__lco__update_construct_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lco.m", 5);
	MR_r2 = (MR_Word) MR_string_const("update_construct: not construct", 31);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);

MR_BEGIN_MODULE(transform_hlds__lco_module22)
	MR_init_entry1(transform_hlds__lco__acceptable_construct_mode_2_0);
	MR_init_label4(transform_hlds__lco__acceptable_construct_mode_2_0,2,4,6,1)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
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

MR_BEGIN_MODULE(transform_hlds__lco_module23)
	MR_init_entry1(transform_hlds__lco__occurs_once_2_0);
	MR_init_label1(transform_hlds__lco__occurs_once_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__occurs_once_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_np_call_localret_ent(bag__count_value_3_0,
		transform_hlds__lco__occurs_once_2_0_i2);
MR_def_label(transform_hlds__lco__occurs_once_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) MR_r1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module24)
	MR_init_entry1(transform_hlds__lco__transform_variant_case_6_0);
	MR_init_label1(transform_hlds__lco__transform_variant_case_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__transform_variant_case_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r4, 0);
	MR_r4 = MR_ctfield(0, MR_r4, 1);
	MR_np_call_localret_ent(transform_hlds__lco__transform_variant_goal_6_0,
		transform_hlds__lco__transform_variant_case_6_0_i2);
MR_def_label(transform_hlds__lco__transform_variant_case_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__lookup_var_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module25)
	MR_init_entry1(transform_hlds__lco__is_grounding_4_0);
	MR_init_label4(transform_hlds__lco__is_grounding_4_0,2,5,7,1)
MR_BEGIN_CODE

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
	MR_sv(3) = MR_ctfield(0, MR_r4, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		transform_hlds__lco__is_grounding_4_0_i2);
MR_def_label(transform_hlds__lco__is_grounding_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		transform_hlds__lco__is_grounding_4_0_i5);
MR_def_label(transform_hlds__lco__is_grounding_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__lco__is_grounding_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		transform_hlds__lco__is_grounding_4_0_i7);
MR_def_label(transform_hlds__lco__is_grounding_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_ground_2_0);
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

MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);

MR_BEGIN_MODULE(transform_hlds__lco_module26)
	MR_init_entry1(transform_hlds__lco__make_store_goal_3_0);
	MR_init_label4(transform_hlds__lco__make_store_goal_3_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__make_store_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		transform_hlds__lco__make_store_goal_3_0_i2);
MR_def_label(transform_hlds__lco__make_store_goal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		transform_hlds__lco__make_store_goal_3_0_i3);
MR_def_label(transform_hlds__lco__make_store_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("store_at_ref", 12);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__lco__make_store_goal_3_0_i4);
MR_def_label(transform_hlds__lco__make_store_goal_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__lco__make_store_goal_3_0_i5);
MR_def_label(transform_hlds__lco__make_store_goal_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module27)
	MR_init_entry1(__Unify___transform_hlds__lco__changed_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__changed_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__lco_module28)
	MR_init_entry1(__Compare___transform_hlds__lco__changed_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__changed_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__proc_info_0_0);

MR_BEGIN_MODULE(transform_hlds__lco_module29)
	MR_init_entry1(__Unify___transform_hlds__lco__lco_const_info_0_0);
	MR_init_label8(__Unify___transform_hlds__lco__lco_const_info_0_0,4,6,8,10,12,14,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__lco_const_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i16);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
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
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__lco__lco_const_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__lco__lco_const_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__lco__lco_const_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_info_0_0,
		__Unify___transform_hlds__lco__lco_const_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__proc_info_0_0,
		__Unify___transform_hlds__lco__lco_const_info_0_0_i12);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__lco__lco_const_info_0_0_i14);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_const_info_0_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(12));
	MR_decr_sp_and_return(13);
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__lco__lco_const_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__proc_info_0_0);

MR_BEGIN_MODULE(transform_hlds__lco_module30)
	MR_init_entry1(__Compare___transform_hlds__lco__lco_const_info_0_0);
	MR_init_label8(__Compare___transform_hlds__lco__lco_const_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label1(__Compare___transform_hlds__lco__lco_const_info_0_0,61)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__lco_const_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
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
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__lco__lco_const_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__lco__lco_const_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__lco__lco_const_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i61);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_info_0_0,
		__Compare___transform_hlds__lco__lco_const_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__proc_info_0_0,
		__Compare___transform_hlds__lco__lco_const_info_0_0_i21);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__lco__lco_const_info_0_0_i25);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_const_info_0_0_i61);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__lco__lco_const_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module31)
	MR_init_entry1(__Unify___transform_hlds__lco__lco_info_0_0);
	MR_init_label6(__Unify___transform_hlds__lco__lco_info_0_0,4,6,8,10,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__lco_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_info_0_0_i12);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
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
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 5);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__lco__lco_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__lco__lco_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__lco__lco_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__lco__lco_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__lco__lco_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__lco__lco_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__lco__lco_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__lco__lco_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_info_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___transform_hlds__lco__lco_info_0_0_i1);
	}
	MR_r1 = (MR_sv(5) == MR_sv(10));
	MR_decr_sp_and_return(11);
MR_def_label(__Unify___transform_hlds__lco__lco_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__lco__lco_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(transform_hlds__lco_module32)
	MR_init_entry1(__Compare___transform_hlds__lco__lco_info_0_0);
	MR_init_label8(__Compare___transform_hlds__lco__lco_info_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__lco_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
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
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__lco__lco_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__lco__lco_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__lco__lco_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__lco__lco_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i53);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__lco__lco_info_0_0_i21);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lco__lco_info_0_0_i53);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__lco__lco_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module33)
	MR_init_entry1(__Unify___transform_hlds__lco__permitted_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lco__permitted_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module34)
	MR_init_entry1(__Compare___transform_hlds__lco__permitted_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lco__permitted_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module35)
	MR_init_entry1(__Unify___transform_hlds__lco__variant_id_0_0);
	MR_init_label4(__Unify___transform_hlds__lco__variant_id_0_0,4,6,8,1)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
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
	MR_r1 = (strcmp((char *)MR_sv(2), (char *)MR_sv(4)) == 0);
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

MR_BEGIN_MODULE(transform_hlds__lco_module36)
	MR_init_entry1(__Compare___transform_hlds__lco__variant_id_0_0);
	MR_init_label5(__Compare___transform_hlds__lco__variant_id_0_0,3,2,5,9,29)
MR_BEGIN_CODE

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
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
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


MR_BEGIN_MODULE(transform_hlds__lco_module37)
	MR_init_entry1(__Unify___transform_hlds__lco__variant_map_0_0);
MR_BEGIN_CODE

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
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module38)
	MR_init_entry1(__Compare___transform_hlds__lco__variant_map_0_0);
MR_BEGIN_CODE

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
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__lco, variant_id);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module39)
	MR_init_entry1(transform_hlds__lco__IntroducedFrom__pred__lco_proc__298__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__IntroducedFrom__pred__lco_proc__298__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module40)
	MR_init_entry1(transform_hlds__lco__IntroducedFrom__pred__update_call_args__540__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__IntroducedFrom__pred__update_call_args__540__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(transform_hlds__lco_module41)
	MR_init_entry1(transform_hlds__lco__IntroducedFrom__pred__update_construct__743__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__IntroducedFrom__pred__update_construct__743__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__cons_id_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lco_module42)
	MR_init_entry1(transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__828__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__828__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__lco__init(void);
void mercury__transform_hlds__lco__init_type_tables(void);
void mercury__transform_hlds__lco__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__lco__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__lco__init_complexity_procs(void);
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
		mercury_data_transform_hlds__lco__type_ctor_info_variant_map_0,
		transform_hlds__lco__variant_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_variant_id_0,
		transform_hlds__lco__variant_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_permitted_0,
		transform_hlds__lco__permitted_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_lco_info_0,
		transform_hlds__lco__lco_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_lco_const_info_0,
		transform_hlds__lco__lco_const_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lco__type_ctor_info_changed_0,
		transform_hlds__lco__changed_0_0);
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
		&mercury_data_transform_hlds__lco__type_ctor_info_variant_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_variant_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_permitted_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_lco_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_lco_const_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lco__type_ctor_info_changed_0);
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

void mercury__transform_hlds__lco__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__lco__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
