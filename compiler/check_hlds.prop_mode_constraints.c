/*
** Automatically generated from `prop_mode_constraints.m'
** by the Mercury compiler,
** version rotd-2009-06-06, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__prop_mode_constraints__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "check_hlds.prop_mode_constraints.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "check_hlds.prop_mode_constraints.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "check_hlds.prop_mode_constraints.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "check_hlds.prop_mode_constraints.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "check_hlds.prop_mode_constraints.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "check_hlds.prop_mode_constraints.c"
#line 48 "check_hlds.prop_mode_constraints.c"
#include "check_hlds.prop_mode_constraints.mh"

#line 51 "check_hlds.prop_mode_constraints.c"
#line 52 "check_hlds.prop_mode_constraints.c"
#ifndef CHECK_HLDS__PROP_MODE_CONSTRAINTS_DECL_GUARD
#define CHECK_HLDS__PROP_MODE_CONSTRAINTS_DECL_GUARD

#line 56 "check_hlds.prop_mode_constraints.c"
#line 57 "check_hlds.prop_mode_constraints.c"

#endif
#line 60 "check_hlds.prop_mode_constraints.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
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
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[11];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__prop_mode_constraints__type_ctor_info_pred_constraints_map_0;
MR_decl_label1(check_hlds__prop_mode_constraints__add_to_conjunction_3_0, 2)
MR_decl_label8(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0, 2,3,4,5,6,7,9,11)
MR_decl_label6(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0, 16,18,19,20,21,22)
MR_decl_label8(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0, 132,52,53,55,57,133,34,35)
MR_decl_label8(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0, 37,39,93,134,12,6,20,21)
MR_decl_label8(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0, 135,30,139,42,43,44,137,48)
MR_decl_label8(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0, 138,60,140,77,79,80,65,66)
MR_decl_label4(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0, 72,136,87,131)
MR_decl_label8(check_hlds__prop_mode_constraints__make_unification_11_0, 4,6,7,8,9,10,13,16)
MR_decl_label5(check_hlds__prop_mode_constraints__make_unification_11_0, 17,19,2,21,22)
MR_decl_label1(check_hlds__prop_mode_constraints__make_unifications_10_0, 8)
MR_decl_label3(check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0, 2,3,4)
MR_decl_label8(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0, 4,5,8,11,12,13,14,15)
MR_decl_label2(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0, 16,18)
MR_decl_label1(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_0, 2)
MR_decl_label5(check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0, 4,6,9,10,11)
MR_decl_label2(check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_0, 2,3)
MR_decl_label8(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0, 2,3,6,8,9,4,11,12)
MR_decl_label5(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0, 13,15,17,18,20)
MR_decl_label2(check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0, 3,4)
MR_decl_label8(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0, 2,3,5,6,8,10,11,12)
MR_def_extern_entry(check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0)
MR_def_extern_entry(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0)
MR_def_extern_entry(check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0)
MR_def_extern_entry(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_0)
MR_decl_static(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0)
MR_decl_static(check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_0)
MR_decl_static(check_hlds__prop_mode_constraints__flatten_conjunction_2_0)
MR_decl_static(check_hlds__prop_mode_constraints__make_unifications_10_0)
MR_decl_static(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0)
MR_decl_static(fn__check_hlds__prop_mode_constraints__this_file_0_0)
MR_decl_static(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0)
MR_decl_static(check_hlds__prop_mode_constraints__add_to_conjunction_3_0)
MR_decl_static(check_hlds__prop_mode_constraints__make_unification_11_0)
MR_decl_static(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0)
MR_decl_static(check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0)
MR_def_extern_entry(__Unify___check_hlds__prop_mode_constraints__pred_constraints_map_0_0)
MR_def_extern_entry(__Compare___check_hlds__prop_mode_constraints__pred_constraints_map_0_0)
MR_decl_static(fn__check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__240__1_1_0)
MR_decl_static(fn__check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__244__1_2_0)

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,4,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(4,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(4,6),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_3 mercury_common_3[9] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(fn__check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__240__1_1_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(fn__check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__244__1_2_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(check_hlds__prop_mode_constraints__add_to_conjunction_3_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0),
0
},
{
MR_COMMON(5,4),
MR_ENTRY_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0),
0
},
{
MR_COMMON(5,5),
MR_ENTRY_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_4 mercury_common_4[13] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_TAG_COMMON(0,4,0)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(4,3)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
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
MR_TAG_COMMON(1,9,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,10,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,10,1),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_4;
static const struct mercury_type_5 mercury_common_5[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(4,4),
MR_COMMON(4,4),
MR_COMMON(4,5),
MR_COMMON(4,5),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(4,4),
MR_COMMON(4,4),
MR_COMMON(4,5),
MR_COMMON(4,5),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(4,4),
MR_COMMON(4,4),
MR_COMMON(4,5),
MR_COMMON(4,5),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_3,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(4,4),
MR_COMMON(4,4),
MR_COMMON(4,5),
MR_COMMON(4,5),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_4,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(4,4),
MR_COMMON(4,4),
MR_COMMON(4,5),
MR_COMMON(4,5),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__flatten_conjunction_2_0_1;
static const struct mercury_type_6 mercury_common_6[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_clauses, clause)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__flatten_conjunction_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(4,8),
MR_COMMON(4,8)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_0_1;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(4,6),
MR_COMMON(1,1),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__make_unifications_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__prop_mode_constraints__make_unifications_10_0_1,
(MR_Word *) (MR_Integer) 0
},
11,
{
MR_CTOR0_ADDR(term, context),
MR_COMMON(4,9),
MR_COMMON(4,9),
MR_COMMON(4,8),
MR_COMMON(4,8),
MR_COMMON(4,4),
MR_COMMON(4,4),
MR_COMMON(4,5),
MR_COMMON(4,5),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
};

static const struct mercury_type_9 mercury_common_9[2] =
{
{
MR_string_const("Making call arguments unique for constraints based mode analysis", 64)
},
{
MR_string_const("", 0)
},
};

static const struct mercury_type_10 mercury_common_10[2] =
{
{
4,
MR_string_const("Constraints for", 15)
},
{
3,
MR_string_const(":", 1)
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__prop_mode_constraints__type_ctor_info_pred_constraints_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__prop_mode_constraints__pred_constraints_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__prop_mode_constraints__pred_constraints_map_0_0)),
	"check_hlds.prop_mode_constraints",
	"pred_constraints_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"module_info_pred_status_is_imported",
2,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
106,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0_2 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"prop_mode_constraints_in_pred",
7,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
116,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"lambda_prop_mode_constraints_m_240",
2,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
240,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_2 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"ensure_unique_arguments_in_goal",
8,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
241,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_3 = {
{
MR_FUNCTION,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"lambda_prop_mode_constraints_m_244",
3,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
244,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"pretty_print_pred_constraints",
6,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
507,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_pred",
"hlds.hlds_pred",
"pred_info_proc_info",
3,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
203,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_2 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"prop_mode_constraints_in_mode_declared_proc",
8,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
204,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__flatten_conjunction_2_0_1 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"add_to_conjunction",
3,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
387,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__make_unifications_10_0_1 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"make_unification",
11,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
417,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"ensure_unique_arguments_in_goal",
8,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
281,
"d1;c9;q;c2;d1;c2;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_2 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"ensure_unique_arguments_in_goal",
8,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
275,
"d1;c9;q;c2;d1;c2;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_3 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"ensure_unique_arguments_in_goal",
8,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
329,
"d1;c9;q;c2;d6;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_4 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"ensure_unique_arguments_in_goal",
8,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
362,
"d1;c9;q;c2;d11;c2;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.prop_mode_constraints",
"check_hlds.prop_mode_constraints",
"pretty_print_proc_constraints",
7,
0
},
"check_hlds.prop_mode_constraints",
"prop_mode_constraints.m",
533,
"d1;c29;"
};

MR_decl_entry(list__filter_4_0);
MR_decl_entry(check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0;
MR_decl_entry(list__foldl3_8_0);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module0)
	MR_init_entry1(check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0);
	MR_init_label2(check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(2) = MR_tempr3;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0_i3);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0_i4);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl3_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_clauses_only_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_headvars_2_0);
MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__map_foldl3_9_1);
MR_decl_entry(fn__list__map_corresponding_3_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_clauses_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_clauses_info_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module1)
	MR_init_entry1(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0);
	MR_init_label8(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,2,3,4,5,6,7,9,11)
	MR_init_label6(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,16,18,19,20,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i2);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i3);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_clauses_only_2_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i4);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_varset_2_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i5);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_vartypes_2_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i6);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvars_2_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i7);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,4,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i9);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i11);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i16);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_corresponding_3_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i18);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_varset_3_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i19);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_vartypes_3_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i20);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_clauses_3_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i21);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0_i22);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_info_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_is_imported_1_0);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module2)
	MR_init_entry1(check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0);
	MR_init_label3(check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0_i2);
MR_def_label(check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0_i3);
MR_def_label(check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_is_imported_1_0,
		check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0_i4);
MR_def_label(check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__keys_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module3)
	MR_init_entry1(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_0);
	MR_init_label1(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_np_call_localret_ent(fn__map__keys_1_0,
		check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_0_i2);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_infer_modes_1_0);
MR_decl_entry(fn__check_hlds__abstract_mode_constraints__init_pred_p_c_constraints_0_0);
MR_decl_entry(check_hlds__build_mode_constraints__add_clauses_constraints_7_0);
MR_decl_entry(svmap__set_4_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_all_procids_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_proc_info_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(list__foldl2_corresponding_7_0);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module4)
	MR_init_entry1(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0);
	MR_init_label8(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,2,3,6,8,9,4,11,12)
	MR_init_label5(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,13,15,17,18,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i2);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i3);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_infer_modes_1_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i6);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i4);
	}
	MR_np_call_localret_ent(fn__check_hlds__abstract_mode_constraints__init_pred_p_c_constraints_0_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i8);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__add_clauses_constraints_7_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i9);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i18);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i11);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__abstract_mode_constraints__init_pred_p_c_constraints_0_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i12);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__add_clauses_constraints_7_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i13);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_pred__pred_info_proc_info_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i15);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl2_corresponding_7_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i17);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i18);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0_i20);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module5)
	MR_init_entry1(check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_0);
	MR_init_label2(check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_0_i2);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_0_i3);
MR_def_label(check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldr_4_0);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module6)
	MR_init_entry1(check_hlds__prop_mode_constraints__flatten_conjunction_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__prop_mode_constraints__flatten_conjunction_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(list__foldr_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl4_11_1);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module7)
	MR_init_entry1(check_hlds__prop_mode_constraints__make_unifications_10_0);
	MR_init_label1(check_hlds__prop_mode_constraints__make_unifications_10_0,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__prop_mode_constraints__make_unifications_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__prop_mode_constraints__make_unification_11_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,7);
	MR_tempr4 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_tempr5 = MR_r5;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r8 = MR_tempr2;
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_r12 = MR_tempr5;
	}
	MR_np_call_localret_ent(list__map_foldl4_11_1,
		check_hlds__prop_mode_constraints__make_unifications_10_0_i8);
MR_def_label(check_hlds__prop_mode_constraints__make_unifications_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
MR_decl_entry(fn__list__cons_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_context_3_0);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module8)
	MR_init_entry1(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0);
	MR_init_label8(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0,2,3,5,6,8,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0_i2);
MR_def_label(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0_i3);
MR_def_label(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0_i5);
MR_def_label(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0_i6);
MR_def_label(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__cons_2_0,
		check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0_i8);
MR_def_label(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0_i10);
MR_def_label(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0_i11);
MR_def_label(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0_i12);
MR_def_label(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module9)
	MR_init_entry1(fn__check_hlds__prop_mode_constraints__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__prop_mode_constraints__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prop_mode_constraints.m", 23);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module10)
	MR_init_entry1(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0);
	MR_init_label8(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,132,52,53,55,57,133,34,35)
	MR_init_label8(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,37,39,93,134,12,6,20,21)
	MR_init_label8(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,135,30,139,42,43,44,137,48)
	MR_init_label8(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,138,60,140,77,79,80,65,66)
	MR_init_label4(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,72,136,87,131)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i131) MR_AND
		MR_LABEL_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i132) MR_AND
		MR_LABEL_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i133) MR_AND
		MR_LABEL_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i93));
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 5);
	MR_tempr2 = MR_r1;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i52);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__prop_mode_constraints__make_unifications_10_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i53);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i55);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(6);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(1, MR_r1, 2);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i57);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 3);
	MR_tempr2 = MR_r1;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i34);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__prop_mode_constraints__make_unifications_10_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i35);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i37);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(3);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(2, MR_r1, 1);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i39);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r5, 0),
		MR_LABEL_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i131) MR_AND
		MR_LABEL_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i134) MR_AND
		MR_LABEL_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i135) MR_AND
		MR_LABEL_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i136) MR_AND
		MR_LABEL_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i137) MR_AND
		MR_LABEL_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i138) MR_AND
		MR_LABEL_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i139) MR_AND
		MR_LABEL_AP(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i140));
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i6);
	}
	MR_sv(11) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_tempr3 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_tempr4 = MR_tempr5;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r7 = MR_ctfield(3, MR_tempr4, 2);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i12);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(11);
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_tempr3 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_tempr4 = MR_r5;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r7 = MR_ctfield(3, MR_tempr4, 2);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i20);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(check_hlds__prop_mode_constraints__flatten_conjunction_2_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i21);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(11) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_tempr3 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_tempr4 = MR_r5;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r7 = MR_ctfield(3, MR_tempr4, 1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i30);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(11);
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(11) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i42);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i43);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i44);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(11);
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(11) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r5, 1);
	MR_np_localcall_lab(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i48);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(11);
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(11) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i60);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(11);
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_r6 = MR_ctfield(3, MR_r5, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r6);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i65);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i79);
	}
	}
	MR_np_call_localret_ent(fn__check_hlds__prop_mode_constraints__this_file_0_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i77);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(11) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(2, MR_tempr1, 2);
	}
	MR_np_localcall_lab(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i80);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 6);
	MR_sv(11) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i66);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_tempr4 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i72);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(11);
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__check_hlds__prop_mode_constraints__this_file_0_0,
		check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0_i87);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);
MR_decl_entry(list__cons_3_0);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module11)
	MR_init_entry1(check_hlds__prop_mode_constraints__add_to_conjunction_3_0);
	MR_init_label1(check_hlds__prop_mode_constraints__add_to_conjunction_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__prop_mode_constraints__add_to_conjunction_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__prop_mode_constraints__add_to_conjunction_3_0_i2);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__prop_mode_constraints__add_to_conjunction_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__append_3_1);
	}
MR_def_label(check_hlds__prop_mode_constraints__add_to_conjunction_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__cons_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__varset__lookup_name_2_0);
MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(svvarset__new_uniquely_named_var_4_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(hlds__hlds_goal__create_atomic_complicated_unification_7_0);
MR_decl_entry(fn__set__from_list_1_0);
MR_decl_entry(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module12)
	MR_init_entry1(check_hlds__prop_mode_constraints__make_unification_11_0);
	MR_init_label8(check_hlds__prop_mode_constraints__make_unification_11_0,4,6,7,8,9,10,13,16)
	MR_init_label5(check_hlds__prop_mode_constraints__make_unification_11_0,17,19,2,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__prop_mode_constraints__make_unification_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__prop_mode_constraints__make_unification_11_0_i4);
MR_def_label(check_hlds__prop_mode_constraints__make_unification_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__prop_mode_constraints__make_unification_11_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		check_hlds__prop_mode_constraints__make_unification_11_0_i6);
MR_def_label(check_hlds__prop_mode_constraints__make_unification_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__prop_mode_constraints__make_unification_11_0_i7);
MR_def_label(check_hlds__prop_mode_constraints__make_unification_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Arg_", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__prop_mode_constraints__make_unification_11_0_i8);
MR_def_label(check_hlds__prop_mode_constraints__make_unification_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(svvarset__new_uniquely_named_var_4_0,
		check_hlds__prop_mode_constraints__make_unification_11_0_i9);
MR_def_label(check_hlds__prop_mode_constraints__make_unification_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__prop_mode_constraints__make_unification_11_0_i10);
MR_def_label(check_hlds__prop_mode_constraints__make_unification_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_goal__create_atomic_complicated_unification_7_0,
		check_hlds__prop_mode_constraints__make_unification_11_0_i13);
MR_def_label(check_hlds__prop_mode_constraints__make_unification_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		check_hlds__prop_mode_constraints__make_unification_11_0_i16);
MR_def_label(check_hlds__prop_mode_constraints__make_unification_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__prop_mode_constraints__make_unification_11_0_i17);
MR_def_label(check_hlds__prop_mode_constraints__make_unification_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		check_hlds__prop_mode_constraints__make_unification_11_0_i19);
MR_def_label(check_hlds__prop_mode_constraints__make_unification_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__prop_mode_constraints__make_unification_11_0_i21);
MR_def_label(check_hlds__prop_mode_constraints__make_unification_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
MR_def_label(check_hlds__prop_mode_constraints__make_unification_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__prop_mode_constraints__make_unification_11_0_i22);
MR_def_label(check_hlds__prop_mode_constraints__make_unification_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__error_util__write_error_pieces_plain_3_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(fn__check_hlds__abstract_mode_constraints__allproc_annotated_constraints_1_0);
MR_decl_entry(check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_4_0);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module13)
	MR_init_entry1(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0);
	MR_init_label8(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0,4,5,8,11,12,13,14,15)
	MR_init_label2(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0,16,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,10);
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_3_0,
		check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0_i4);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0_i5);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,4,11);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,
		check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0_i8);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,12);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0_i11);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0_i12);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_3_0,
		check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0_i13);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0_i14);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__abstract_mode_constraints__allproc_annotated_constraints_1_0,
		check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0_i15);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_4_0,
		check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0_i16);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0_i18);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_error_util__describe_one_proc_name_3_0);
MR_decl_entry(fn__check_hlds__abstract_mode_constraints__proc_specific_annotated_constraints_2_0);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module14)
	MR_init_entry1(check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0);
	MR_init_label5(check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0,4,6,9,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,10);
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_3_0,
		check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0_i4);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0_i6);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,12);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0_i9);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_3_0,
		check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0_i10);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__abstract_mode_constraints__proc_specific_annotated_constraints_2_0,
		check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0_i11);
MR_def_label(check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module15)
	MR_init_entry1(__Unify___check_hlds__prop_mode_constraints__pred_constraints_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__prop_mode_constraints__pred_constraints_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
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

MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module16)
	MR_init_entry1(__Compare___check_hlds__prop_mode_constraints__pred_constraints_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__prop_mode_constraints__pred_constraints_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module17)
	MR_init_entry1(fn__check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__240__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__240__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__prop_mode_constraints_module18)
	MR_init_entry1(fn__check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__244__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__244__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__prop_mode_constraints_maybe_bunch_0(void)
{
	check_hlds__prop_mode_constraints_module0();
	check_hlds__prop_mode_constraints_module1();
	check_hlds__prop_mode_constraints_module2();
	check_hlds__prop_mode_constraints_module3();
	check_hlds__prop_mode_constraints_module4();
	check_hlds__prop_mode_constraints_module5();
	check_hlds__prop_mode_constraints_module6();
	check_hlds__prop_mode_constraints_module7();
	check_hlds__prop_mode_constraints_module8();
	check_hlds__prop_mode_constraints_module9();
	check_hlds__prop_mode_constraints_module10();
	check_hlds__prop_mode_constraints_module11();
	check_hlds__prop_mode_constraints_module12();
	check_hlds__prop_mode_constraints_module13();
	check_hlds__prop_mode_constraints_module14();
	check_hlds__prop_mode_constraints_module15();
	check_hlds__prop_mode_constraints_module16();
	check_hlds__prop_mode_constraints_module17();
	check_hlds__prop_mode_constraints_module18();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__prop_mode_constraints__init(void);
void mercury__check_hlds__prop_mode_constraints__init_type_tables(void);
void mercury__check_hlds__prop_mode_constraints__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__prop_mode_constraints__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__prop_mode_constraints__init_complexity_procs(void);
#endif

void mercury__check_hlds__prop_mode_constraints__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__prop_mode_constraints_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__prop_mode_constraints__type_ctor_info_pred_constraints_map_0,
		check_hlds__prop_mode_constraints__pred_constraints_map_0_0);
	mercury__check_hlds__prop_mode_constraints__init_debugger();
}

void mercury__check_hlds__prop_mode_constraints__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__prop_mode_constraints__type_ctor_info_pred_constraints_map_0);
	}
}


void mercury__check_hlds__prop_mode_constraints__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__prop_mode_constraints__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__prop_mode_constraints);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__prop_mode_constraints__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
