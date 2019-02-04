/*
** Automatically generated from `build_mode_constraints.m'
** by the Mercury compiler,
** version rotd-2011-05-29, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__build_mode_constraints__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "check_hlds.build_mode_constraints.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "check_hlds.build_mode_constraints.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "check_hlds.build_mode_constraints.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "check_hlds.build_mode_constraints.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "check_hlds.build_mode_constraints.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "check_hlds.build_mode_constraints.c"
#line 49 "check_hlds.build_mode_constraints.c"
#include "check_hlds.build_mode_constraints.mh"

#line 52 "check_hlds.build_mode_constraints.c"
#line 53 "check_hlds.build_mode_constraints.c"
#ifndef CHECK_HLDS__BUILD_MODE_CONSTRAINTS_DECL_GUARD
#define CHECK_HLDS__BUILD_MODE_CONSTRAINTS_DECL_GUARD

#line 57 "check_hlds.build_mode_constraints.c"
#line 58 "check_hlds.build_mode_constraints.c"

#endif
#line 61 "check_hlds.build_mode_constraints.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[3];
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
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[10];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__build_mode_constraints__type_ctor_info_args_0,
	mercury_data_check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0,
	mercury_data_check_hlds__build_mode_constraints__type_ctor_info_conjunct_production_map_0,
	mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_prog_var_0,
	mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0,
	mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0,
	mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_var_map_0,
	mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mode_constraints_0,
	mercury_data_check_hlds__build_mode_constraints__type_ctor_info_nonlocals_0;
MR_decl_label4(check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0, 2,3,7,9)
MR_decl_label5(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0, 2,6,7,8,15)
MR_decl_label9(check_hlds__build_mode_constraints__add_clauses_constraints_7_0, 2,3,4,5,6,8,10,12,15)
MR_decl_label3(check_hlds__build_mode_constraints__add_goal_constraints_8_0, 2,3,4)
MR_decl_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0, 6,7,10,12,14,8,3,22,24,26)
MR_decl_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0, 31,21,19,37,39,40,42,46,35,51)
MR_decl_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0, 52,54,49,58,59,60,62,63,64,65)
MR_decl_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0, 66,67,68,70,72,73,74,75,76,77)
MR_decl_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0, 81,83,85,57,89,94,96,97,88,101)
MR_decl_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0, 104,106,107,108,102,110,111,114,100,118)
MR_decl_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0, 120,121,122,126,128,117,131,134,136,138)
MR_decl_label9(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0, 140,133,143,144,142,130,148,150,146)
MR_decl_label6(check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0, 2,3,5,6,11,12)
MR_decl_label1(check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_0, 2)
MR_decl_label10(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0, 120,2,3,5,6,8,11,9,14,17)
MR_decl_label9(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0, 18,24,26,27,31,29,34,36,38)
MR_decl_label4(check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0, 2,3,4,5)
MR_decl_label6(check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0, 2,3,4,5,6,8)
MR_decl_label3(check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_0, 2,3,4)
MR_decl_label1(check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_0, 5)
MR_decl_label4(check_hlds__build_mode_constraints__mode_decls_constraints_6_0, 8,12,13,14)
MR_decl_label3(check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0, 6,7,8)
MR_decl_label7(check_hlds__build_mode_constraints__prog_var_at_path_7_0, 6,4,8,9,11,12,13)
MR_decl_label2(fn__check_hlds__build_mode_constraints__conj_constraints_info_init_0_0, 4,5)
MR_decl_label1(fn__check_hlds__build_mode_constraints__cons_prog_var_at_path_5_0, 5)
MR_decl_label1(fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0, 4)
MR_decl_label3(fn__check_hlds__build_mode_constraints__rep_var_to_string_2_0, 2,3,4)
MR_decl_label5(fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0, 2,7,3,15,12)
MR_decl_label2(fn__check_hlds__build_mode_constraints__var_info_init_0_0, 2,4)
MR_decl_label1(__Unify___check_hlds__build_mode_constraints__maybe__maybe_1_1, 1)
MR_decl_label3(__Unify___check_hlds__build_mode_constraints__conj_constraints_info_0_0, 7,11,1)
MR_decl_label3(__Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0, 4,6,1)
MR_decl_label3(__Unify___check_hlds__build_mode_constraints__mc_rep_var_0_0, 4,6,1)
MR_decl_label3(__Unify___check_hlds__build_mode_constraints__mc_var_info_0_0, 4,9,1)
MR_decl_label4(__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0, 3,2,8,33)
MR_decl_label4(__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0, 3,2,5,21)
MR_decl_label4(__Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0, 3,2,5,21)
MR_decl_label4(__Compare___check_hlds__build_mode_constraints__mc_var_info_0_0, 3,2,5,28)
MR_def_extern_entry(check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_0)
MR_decl_static(check_hlds__build_mode_constraints__prog_vars_at_path_7_0)
MR_def_extern_entry(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0)
MR_decl_static(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0)
MR_decl_static(check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0)
MR_decl_static(fn__check_hlds__build_mode_constraints__conj_constraints_info_init_0_0)
MR_def_extern_entry(fn__check_hlds__build_mode_constraints__rep_var_to_string_2_0)
MR_decl_static(fn__check_hlds__build_mode_constraints__lookup_prog_var_at_path_4_0)
MR_decl_static(check_hlds__build_mode_constraints__prog_var_at_path_7_0)
MR_decl_static(check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0)
MR_decl_static(check_hlds__build_mode_constraints__add_goal_constraints_8_0)
MR_decl_static(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0)
MR_def_extern_entry(check_hlds__build_mode_constraints__add_clauses_constraints_7_0)
MR_def_extern_entry(check_hlds__build_mode_constraints__mode_decls_constraints_6_0)
MR_decl_static(fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0)
MR_def_extern_entry(check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0)
MR_def_extern_entry(fn__check_hlds__build_mode_constraints__var_info_init_0_0)
MR_decl_static(check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0)
MR_decl_static(check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_0)
MR_decl_static(fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0)
MR_decl_static(check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0)
MR_decl_static(check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_0)
MR_decl_static(check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_0)
MR_decl_static(check_hlds__build_mode_constraints__add_local_var_conj_constraints_6_0)
MR_decl_static(fn__check_hlds__build_mode_constraints__cons_prog_var_at_path_5_0)
MR_def_extern_entry(__Unify___check_hlds__build_mode_constraints__args_0_0)
MR_def_extern_entry(__Compare___check_hlds__build_mode_constraints__args_0_0)
MR_decl_static(__Unify___check_hlds__build_mode_constraints__conj_constraints_info_0_0)
MR_decl_static(__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0)
MR_decl_static(__Unify___check_hlds__build_mode_constraints__conjunct_production_map_0_0)
MR_decl_static(__Compare___check_hlds__build_mode_constraints__conjunct_production_map_0_0)
MR_def_extern_entry(__Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0)
MR_def_extern_entry(__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0)
MR_def_extern_entry(__Unify___check_hlds__build_mode_constraints__mc_rep_var_0_0)
MR_def_extern_entry(__Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0)
MR_def_extern_entry(__Unify___check_hlds__build_mode_constraints__mc_var_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__build_mode_constraints__mc_var_info_0_0)
MR_def_extern_entry(__Unify___check_hlds__build_mode_constraints__mc_var_map_0_0)
MR_def_extern_entry(__Compare___check_hlds__build_mode_constraints__mc_var_map_0_0)
MR_def_extern_entry(__Unify___check_hlds__build_mode_constraints__mode_constraints_0_0)
MR_def_extern_entry(__Compare___check_hlds__build_mode_constraints__mode_constraints_0_0)
MR_def_extern_entry(__Unify___check_hlds__build_mode_constraints__nonlocals_0_0)
MR_def_extern_entry(__Compare___check_hlds__build_mode_constraints__nonlocals_0_0)
MR_decl_static(__Unify___check_hlds__build_mode_constraints__maybe__maybe_1_1)
MR_decl_static(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_mc_vars_for_goal__298__1_1_0)
MR_decl_static(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__mode_decls_constraints__689__1_2_0)
MR_decl_static(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__540__1_2_0)
MR_decl_static(check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__610__1_2_0)
MR_decl_static(check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__611__1_2_0)
MR_decl_static(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__629__1_3_0)
MR_decl_static(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__578__1_2_0)
MR_decl_static(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_call_headvar_constraints__794__1_2_0)
MR_decl_static(check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1008__1_7_0)
MR_decl_static(check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1095__1_7_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_98_117_105_108_100_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_108_111_99_97_108_95_118_97_114_95_99_111_110_106_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0)

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_13;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__mode_decls_constraints_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,8),
MR_COMMON(1,9),
MR_COMMON(1,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_13,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_COMMON(1,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__mode_decls_constraints_6_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,8),
MR_COMMON(1,9),
MR_COMMON(1,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_1 mercury_common_1[19] =
{
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type)
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
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,7)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint)
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
MR_TAG_COMMON(0,1,4)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id)
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
MR_COMMON(1,14)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,3)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,14)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,7)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__prog_vars_at_path_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1095__1_7_0_1;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__prog_vars_at_path_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_COMMON(1,1),
MR_COMMON(1,2),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,0),
MR_INT_CTOR_ADDR,
MR_COMMON(1,13),
MR_COMMON(1,1),
MR_COMMON(1,8),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1095__1_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,0),
MR_INT_CTOR_ADDR,
MR_COMMON(1,1),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_COMMON(1,2),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_14;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_15;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_19;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_22;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_clauses_constraints_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__mode_decls_constraints_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0_1;
static const struct mercury_type_3 mercury_common_3[14] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_COMMON(1,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_COMMON(1,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_COMMON(1,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_5,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_COMMON(1,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,11),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,11),
MR_CTOR0_ADDR(term, context),
MR_COMMON(1,8),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_10,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,11),
MR_CTOR0_ADDR(term, context),
MR_COMMON(1,8),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_14,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,11),
MR_CTOR0_ADDR(term, context),
MR_COMMON(1,8),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_15,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,11),
MR_CTOR0_ADDR(term, context),
MR_COMMON(1,2),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_19,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,11),
MR_CTOR0_ADDR(term, context),
MR_COMMON(1,2),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_22,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,11),
MR_CTOR0_ADDR(term, context),
MR_COMMON(1,8),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_clauses_constraints_7_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_COMMON(1,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__mode_decls_constraints_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(7,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_COMMON(1,1),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,0),
MR_INT_CTOR_ADDR,
MR_COMMON(1,1),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_6;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_11;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_12;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_20;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_clauses_constraints_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
static const struct mercury_type_4 mercury_common_4[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(1,1)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_7,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_11,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,15),
MR_COMMON(1,1)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_12,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,15),
MR_COMMON(1,1)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_20,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_COMMON(1,9)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_clauses_constraints_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
MR_decl_entry(fn__hlds__hlds_goal__get_hlds_goal_info_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(fn__hlds__hlds_clauses__clause_body_1_0);
static const struct mercury_type_5 mercury_common_5[10] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_mc_vars_for_goal__298__1_1_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_call_headvar_constraints__794__1_2_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(fn__hlds__hlds_goal__get_hlds_goal_info_1_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__540__1_2_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__629__1_3_0),
0
},
{
MR_COMMON(4,6),
MR_ENTRY_AP(hlds__hlds_pred__proc_info_get_argmodes_2_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__578__1_2_0),
0
},
{
MR_COMMON(4,7),
MR_ENTRY_AP(fn__hlds__hlds_clauses__clause_body_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_21;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__mode_decls_constraints_6_0_2;
static const struct mercury_type_6 mercury_common_6[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_COMMON(1,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_9,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_COMMON(1,8),
MR_COMMON(1,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_21,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_COMMON(1,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__mode_decls_constraints_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(11,0),
MR_COMMON(1,17),
MR_COMMON(1,8)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_bimap__type_ctor_info_bimap_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_7 mercury_common_7[3] =
{
{
{
MR_CTOR_ADDR(bimap, bimap, 2),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var),
MR_COMMON(1,7)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,14),
MR_COMMON(1,18)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,1,3),
MR_TAG_COMMON(0,1,12)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_16;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_17;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_18;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0_1;
static const struct mercury_type_8 mercury_common_8[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(7,0),
MR_INT_CTOR_ADDR,
MR_COMMON(1,15),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, conj_constraints_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, conj_constraints_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_4,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(1,11),
MR_CTOR0_ADDR(term, context),
MR_COMMON(1,1),
MR_COMMON(1,8),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_16,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(1,11),
MR_CTOR0_ADDR(term, context),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_17,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(7,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_COMMON(1,1),
MR_COMMON(1,8),
MR_COMMON(1,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_18,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(7,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_COMMON(1,1),
MR_COMMON(1,8),
MR_COMMON(1,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(1,11),
MR_CTOR0_ADDR(term, context),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(7,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_COMMON(1,1),
MR_COMMON(7,1),
MR_COMMON(7,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_8;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_3,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_8,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_5;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_5,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_COMMON(1,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_COMMON(1,1),
MR_COMMON(1,8),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
MR_CTOR0_ADDR(builtin, func),
2,
MR_COMMON(1,14),
MR_COMMON(1,7)
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

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_args_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__build_mode_constraints__args_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__build_mode_constraints__args_0_0)),
	"check_hlds.build_mode_constraints",
	"args",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__build_mode_constraints__field_types_conj_constraints_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

const MR_ConstString mercury_data_check_hlds__build_mode_constraints__field_names_conj_constraints_info_0_0[] = {
	"locals_positions",
	"nonlocals_positions"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__build_mode_constraints__du_functor_desc_conj_constraints_info_0_0 = {
	"conj_constraints_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__build_mode_constraints__field_types_conj_constraints_info_0_0,
	mercury_data_check_hlds__build_mode_constraints__field_names_conj_constraints_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__build_mode_constraints__du_stag_ordered_conj_constraints_info_0_0[] = {
	&mercury_data_check_hlds__build_mode_constraints__du_functor_desc_conj_constraints_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__build_mode_constraints__du_ptag_ordered_conj_constraints_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__build_mode_constraints__du_stag_ordered_conj_constraints_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__build_mode_constraints__du_name_ordered_conj_constraints_info_0[] = {
	&mercury_data_check_hlds__build_mode_constraints__du_functor_desc_conj_constraints_info_0_0
};

const MR_Integer mercury_data_check_hlds__build_mode_constraints__functor_number_map_conj_constraints_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__build_mode_constraints__conj_constraints_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0)),
	"check_hlds.build_mode_constraints",
	"conj_constraints_info",
	{ (void *)mercury_data_check_hlds__build_mode_constraints__du_name_ordered_conj_constraints_info_0 },
	{ (void *)mercury_data_check_hlds__build_mode_constraints__du_ptag_ordered_conj_constraints_info_0 },
	1,
	4,
	mercury_data_check_hlds__build_mode_constraints__functor_number_map_conj_constraints_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_conjunct_production_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__build_mode_constraints__conjunct_production_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__build_mode_constraints__conjunct_production_map_0_0)),
	"check_hlds.build_mode_constraints",
	"conjunct_production_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__build_mode_constraints__field_types_mc_prog_var_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__build_mode_constraints__du_functor_desc_mc_prog_var_0_0 = {
	"in",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__build_mode_constraints__field_types_mc_prog_var_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__build_mode_constraints__du_stag_ordered_mc_prog_var_0_0[] = {
	&mercury_data_check_hlds__build_mode_constraints__du_functor_desc_mc_prog_var_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__build_mode_constraints__du_ptag_ordered_mc_prog_var_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__build_mode_constraints__du_stag_ordered_mc_prog_var_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__build_mode_constraints__du_name_ordered_mc_prog_var_0[] = {
	&mercury_data_check_hlds__build_mode_constraints__du_functor_desc_mc_prog_var_0_0
};

const MR_Integer mercury_data_check_hlds__build_mode_constraints__functor_number_map_mc_prog_var_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_prog_var_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0)),
	"check_hlds.build_mode_constraints",
	"mc_prog_var",
	{ (void *)mercury_data_check_hlds__build_mode_constraints__du_name_ordered_mc_prog_var_0 },
	{ (void *)mercury_data_check_hlds__build_mode_constraints__du_ptag_ordered_mc_prog_var_0 },
	1,
	4,
	mercury_data_check_hlds__build_mode_constraints__functor_number_map_mc_prog_var_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_prog_var_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__build_mode_constraints__field_types_mc_rep_var_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_prog_var_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__build_mode_constraints__du_functor_desc_mc_rep_var_0_0 = {
	"at",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__build_mode_constraints__field_types_mc_rep_var_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__build_mode_constraints__du_stag_ordered_mc_rep_var_0_0[] = {
	&mercury_data_check_hlds__build_mode_constraints__du_functor_desc_mc_rep_var_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__build_mode_constraints__du_ptag_ordered_mc_rep_var_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__build_mode_constraints__du_stag_ordered_mc_rep_var_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__build_mode_constraints__du_name_ordered_mc_rep_var_0[] = {
	&mercury_data_check_hlds__build_mode_constraints__du_functor_desc_mc_rep_var_0_0
};

const MR_Integer mercury_data_check_hlds__build_mode_constraints__functor_number_map_mc_rep_var_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__build_mode_constraints__mc_rep_var_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0)),
	"check_hlds.build_mode_constraints",
	"mc_rep_var",
	{ (void *)mercury_data_check_hlds__build_mode_constraints__du_name_ordered_mc_rep_var_0 },
	{ (void *)mercury_data_check_hlds__build_mode_constraints__du_ptag_ordered_mc_rep_var_0 },
	1,
	4,
	mercury_data_check_hlds__build_mode_constraints__functor_number_map_mc_rep_var_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_bimap__ti_bimap_2check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
	&mercury_data_bimap__type_ctor_info_bimap_2,
{	(MR_TypeInfo) &mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__build_mode_constraints__field_types_mc_var_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bimap__ti_bimap_2check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

const MR_ConstString mercury_data_check_hlds__build_mode_constraints__field_names_mc_var_info_0_0[] = {
	"mc_varset",
	"rep_var_map"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__build_mode_constraints__du_functor_desc_mc_var_info_0_0 = {
	"mc_var_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__build_mode_constraints__field_types_mc_var_info_0_0,
	mercury_data_check_hlds__build_mode_constraints__field_names_mc_var_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__build_mode_constraints__du_stag_ordered_mc_var_info_0_0[] = {
	&mercury_data_check_hlds__build_mode_constraints__du_functor_desc_mc_var_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__build_mode_constraints__du_ptag_ordered_mc_var_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__build_mode_constraints__du_stag_ordered_mc_var_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__build_mode_constraints__du_name_ordered_mc_var_info_0[] = {
	&mercury_data_check_hlds__build_mode_constraints__du_functor_desc_mc_var_info_0_0
};

const MR_Integer mercury_data_check_hlds__build_mode_constraints__functor_number_map_mc_var_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__build_mode_constraints__mc_var_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__build_mode_constraints__mc_var_info_0_0)),
	"check_hlds.build_mode_constraints",
	"mc_var_info",
	{ (void *)mercury_data_check_hlds__build_mode_constraints__du_name_ordered_mc_var_info_0 },
	{ (void *)mercury_data_check_hlds__build_mode_constraints__du_ptag_ordered_mc_var_info_0 },
	1,
	4,
	mercury_data_check_hlds__build_mode_constraints__functor_number_map_mc_var_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_var_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__build_mode_constraints__mc_var_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__build_mode_constraints__mc_var_map_0_0)),
	"check_hlds.build_mode_constraints",
	"mc_var_map",
	{ 0 },
	{ (void *)&mercury_data_bimap__ti_bimap_2check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mode_constraints_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__build_mode_constraints__mode_constraints_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__build_mode_constraints__mode_constraints_0_0)),
	"check_hlds.build_mode_constraints",
	"mode_constraints",
	{ 0 },
	{ (void *)&mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__build_mode_constraints__type_ctor_info_nonlocals_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__build_mode_constraints__nonlocals_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__build_mode_constraints__nonlocals_0_0)),
	"check_hlds.build_mode_constraints",
	"nonlocals",
	{ 0 },
	{ (void *)&mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1095__1_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"prog_var_at_path",
7,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
989,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"add_variable_to_conjunct_production_map",
6,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
872,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"add_mc_var_for_pred_head",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
257,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0_1 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"add_proc_specific_constraint",
6,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
715,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"single_mode_constraints",
4,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
808,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__mode_decls_constraints_6_0_3 = {
{
MR_FUNCTION,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"mode_decl_constraints",
4,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
694,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__mode_decls_constraints_6_0_2 = {
{
MR_FUNCTION,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"lambda_build_mode_constraints_m_689",
3,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
689,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__mode_decls_constraints_6_0_1 = {
{
MR_FUNCTION,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"lookup_prog_var_at_path",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
689,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_clauses_constraints_7_0_2 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"add_mc_vars_for_goal",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
358,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_clauses_constraints_7_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_clauses",
"hlds.hlds_clauses",
"clause_body",
2,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
357,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_22 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"equivalent",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
581,
"169"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_21 = {
{
MR_FUNCTION,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"lambda_build_mode_constraints_m_578",
3,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
578,
"161"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_20 = {
{
MR_PREDICATE,
"hlds.hlds_pred",
"hlds.hlds_pred",
"proc_info_get_argmodes",
2,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
455,
"54"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_19 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"equiv_no",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
562,
"150"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_18 = {
{
MR_FUNCTION,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"cons_prog_var_at_path",
6,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
552,
"148"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_17 = {
{
MR_FUNCTION,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"cons_prog_var_at_path",
6,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
549,
"145"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_16 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"xor",
6,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
642,
"214"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_15 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"equiv_no",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
635,
"211"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_14 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"equivalent",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
631,
"208"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_13 = {
{
MR_FUNCTION,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"lambda_build_mode_constraints_m_629",
4,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
629,
"198"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_12 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"lambda_build_mode_constraints_m_611",
2,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
611,
"190"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_11 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"lambda_build_mode_constraints_m_610",
2,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
610,
"188"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_10 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"equivalent",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
542,
"136"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_9 = {
{
MR_FUNCTION,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"lambda_build_mode_constraints_m_540",
3,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
540,
"135"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_8 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"add_goal_constraints",
8,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
534,
"132"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_7 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"goal_info_get_goal_id",
2,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
532,
"131"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_6 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"get_hlds_goal_info",
2,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
531,
"129"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_5 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"add_nonlocal_var_conj_constraints",
10,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
428,
"29"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_4 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"add_local_var_conj_constraints",
6,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
425,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_3 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"add_goal_constraints",
8,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
423,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_2 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"add_goal_nonlocals_to_conjunct_production_maps",
6,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
418,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
647,
"220"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0_1 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"lambda_build_mode_constraints_m_1095",
7,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
1093,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0_2 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"equivalent",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
796,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0_1 = {
{
MR_FUNCTION,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"lambda_build_mode_constraints_m_794",
3,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
794,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_2 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"add_constraint",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
759,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_1 = {
{
MR_FUNCTION,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"mode_decl_constraints",
4,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
755,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_5 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"add_mc_vars_for_goal",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
299,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_4 = {
{
MR_FUNCTION,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"lambda_build_mode_constraints_m_298",
2,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
298,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_3 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"add_mc_vars_for_goal",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
312,
"49"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_2 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"add_mc_vars_for_goal",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
302,
"35"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"add_mc_vars_for_goal",
5,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
290,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__prog_vars_at_path_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"lambda_build_mode_constraints_m_1008",
7,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
1006,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.build_mode_constraints",
"check_hlds.build_mode_constraints",
"add_mc_vars_for_pred_head",
4,
0
},
"check_hlds.build_mode_constraints",
"build_mode_constraints.m",
239,
"6"
};


extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module0)
	MR_init_entry1(check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_mc_vars_for_scc_heads'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module1)
	MR_init_entry1(check_hlds__build_mode_constraints__prog_vars_at_path_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__prog_vars_at_path_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prog_vars_at_path'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__prog_vars_at_path_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1008__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(list__map_foldl_5_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(set__to_sorted_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(require__sorry_3_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module2)
	MR_init_entry1(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0);
	MR_init_label10(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,120,2,3,5,6,8,11,9,14,17)
	MR_init_label9(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,18,24,26,27,31,29,34,36,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_mc_vars_for_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i2);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i3);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i5);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i6);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i8);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,1)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(3), 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i11);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_r4 = MR_tfield(3, MR_sv(3), 2);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,2)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_r4 = MR_tfield(3, MR_sv(3), 1);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i17);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,6)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr5, 4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_tempr5, 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(3, MR_tempr5, 2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0);
	MR_tfield(0, MR_tempr4, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr4, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr4, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,4)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i24);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(3, MR_sv(3), 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i120);
	}
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i26);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,5)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i27);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(3, MR_sv(3), 2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i120);
	}
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,3)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i31);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i34);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(3, MR_sv(3), 1);
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.build_mode_constraints", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.build_mode_constraints.add_mc_vars_for_goal\'/5", 68);
	MR_r3 = (MR_Word) MR_string_const("NYI: atomic_goal", 16);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.build_mode_constraints", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.build_mode_constraints.add_mc_vars_for_goal\'/5", 68);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.build_mode_constraints", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.build_mode_constraints.add_mc_vars_for_goal\'/5", 68);
	MR_r3 = (MR_Word) MR_string_const("try_goal", 8);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(check_hlds__abstract_mode_constraints__add_constraint_5_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module3)
	MR_init_entry1(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0);
	MR_init_label5(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0,2,6,7,8,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_call_mode_decls_constraints'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r9;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r7;
	MR_r4 = MR_r6;
	MR_r5 = MR_r8;
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_i2);
MR_def_label(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_i6);
MR_def_label(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_i7);
MR_def_label(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(0, MR_sv(1), 0);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_i8);
	}
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_i8);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__abstract_mode_constraints__add_constraint_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_r6;
	MR_tfield(0, MR_tempr2, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_i15);
MR_def_label(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_r6;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__add_constraint_5_0,
		check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0_i15);
MR_def_label(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_corresponding_3_0);
MR_decl_entry(check_hlds__abstract_mode_constraints__equivalent_5_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module4)
	MR_init_entry1(check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0);
	MR_init_label4(check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0,2,3,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_call_headvar_constraints'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r9;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_r8;
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0_i2);
MR_def_label(check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0_i3);
MR_def_label(check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_corresponding_3_0,
		check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0_i7);
MR_def_label(check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__abstract_mode_constraints__equivalent_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0_i9);
MR_def_label(check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__multi_map__init_0_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module5)
	MR_init_entry1(fn__check_hlds__build_mode_constraints__conj_constraints_info_init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__build_mode_constraints__conj_constraints_info_init_0_0);
	MR_init_label2(fn__check_hlds__build_mode_constraints__conj_constraints_info_init_0_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_constraints_info_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__build_mode_constraints__conj_constraints_info_init_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		fn__check_hlds__build_mode_constraints__conj_constraints_info_init_0_0_i4);
MR_def_label(fn__check_hlds__build_mode_constraints__conj_constraints_info_init_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		fn__check_hlds__build_mode_constraints__conj_constraints_info_init_0_0_i5);
MR_def_label(fn__check_hlds__build_mode_constraints__conj_constraints_info_init_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module6)
	MR_init_entry1(fn__check_hlds__build_mode_constraints__rep_var_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__build_mode_constraints__rep_var_to_string_2_0);
	MR_init_label3(fn__check_hlds__build_mode_constraints__rep_var_to_string_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rep_var_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__build_mode_constraints__rep_var_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tfield(0, MR_r2, 0), 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__check_hlds__build_mode_constraints__rep_var_to_string_2_0_i2);
MR_def_label(fn__check_hlds__build_mode_constraints__rep_var_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		fn__check_hlds__build_mode_constraints__rep_var_to_string_2_0_i3);
MR_def_label(fn__check_hlds__build_mode_constraints__rep_var_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__build_mode_constraints__rep_var_to_string_2_0_i4);
MR_def_label(fn__check_hlds__build_mode_constraints__rep_var_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
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

MR_decl_entry(fn__bimap__lookup_2_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module7)
	MR_init_entry1(fn__check_hlds__build_mode_constraints__lookup_prog_var_at_path_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__build_mode_constraints__lookup_prog_var_at_path_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_prog_var_at_path'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__build_mode_constraints__lookup_prog_var_at_path_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(fn__bimap__lookup_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bimap__search_3_0);
MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(bimap__det_insert_4_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module8)
	MR_init_entry1(check_hlds__build_mode_constraints__prog_var_at_path_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__prog_var_at_path_7_0);
	MR_init_label7(check_hlds__build_mode_constraints__prog_var_at_path_7_0,6,4,8,9,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prog_var_at_path'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__prog_var_at_path_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_r3 = MR_tfield(0, MR_tempr3, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(bimap__search_3_0,
		check_hlds__build_mode_constraints__prog_var_at_path_7_0_i6);
MR_def_label(check_hlds__build_mode_constraints__prog_var_at_path_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__prog_var_at_path_7_0_i4);
	}
	MR_sv(1) = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_GOTO_LAB(check_hlds__build_mode_constraints__prog_var_at_path_7_0_i12);
MR_def_label(check_hlds__build_mode_constraints__prog_var_at_path_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__build_mode_constraints__rep_var_to_string_2_0,
		check_hlds__build_mode_constraints__prog_var_at_path_7_0_i8);
MR_def_label(check_hlds__build_mode_constraints__prog_var_at_path_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		check_hlds__build_mode_constraints__prog_var_at_path_7_0_i9);
MR_def_label(check_hlds__build_mode_constraints__prog_var_at_path_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(bimap__det_insert_4_0,
		check_hlds__build_mode_constraints__prog_var_at_path_7_0_i11);
MR_def_label(check_hlds__build_mode_constraints__prog_var_at_path_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
MR_def_label(check_hlds__build_mode_constraints__prog_var_at_path_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__bimap__lookup_2_0,
		check_hlds__build_mode_constraints__prog_var_at_path_7_0_i13);
MR_def_label(check_hlds__build_mode_constraints__prog_var_at_path_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module9)
	MR_init_entry1(check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0);
	MR_init_label3(check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nonlocals_at_path_and_subpaths'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1095__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0_i6);
MR_def_label(check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(5), 3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0_i7);
MR_def_label(check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0_i8);
MR_def_label(check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module10)
	MR_init_entry1(check_hlds__build_mode_constraints__add_goal_constraints_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_goal_constraints_8_0);
	MR_init_label3(check_hlds__build_mode_constraints__add_goal_constraints_8_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_goal_constraints'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__add_goal_constraints_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__build_mode_constraints__add_goal_constraints_8_0_i2);
MR_def_label(check_hlds__build_mode_constraints__add_goal_constraints_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		check_hlds__build_mode_constraints__add_goal_constraints_8_0_i3);
MR_def_label(check_hlds__build_mode_constraints__add_goal_constraints_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__build_mode_constraints__add_goal_constraints_8_0_i4);
MR_def_label(check_hlds__build_mode_constraints__add_goal_constraints_8_0,4)
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
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_0);
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(map__foldl_4_0);
MR_decl_entry(map__foldl2_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
MR_decl_entry(list__filter_3_0);
MR_decl_entry(fn__list__map_corresponding3_4_0);
MR_decl_entry(check_hlds__abstract_mode_constraints__equiv_no_5_0);
MR_decl_entry(check_hlds__abstract_mode_constraints__xor_6_0);
MR_decl_entry(list__foldl_corresponding_5_0);
MR_decl_entry(fn__set__fold_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_infer_modes_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0);
MR_decl_entry(check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(map__values_2_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(check_hlds__abstract_mode_constraints__not_both_6_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module11)
	MR_init_entry1(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0);
	MR_init_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,6,7,10,12,14,8,3,22,24,26)
	MR_init_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,31,21,19,37,39,40,42,46,35,51)
	MR_init_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,52,54,49,58,59,60,62,63,64,65)
	MR_init_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,66,67,68,70,72,73,74,75,76,77)
	MR_init_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,81,83,85,57,89,94,96,97,88,101)
	MR_init_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,104,106,107,108,102,110,111,114,100,118)
	MR_init_label10(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,120,121,122,126,128,117,131,134,136,138)
	MR_init_label9(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,140,133,143,144,142,130,148,150,146)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_goal_expr_constraints'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i3);
	}
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(15) = MR_r8;
	MR_sv(16) = MR_r9;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r4 = MR_tfield(3, MR_r4, 4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i6);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i7);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(8), 1, (MR_Integer) 1);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i10);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___check_hlds__build_mode_constraints__maybe__maybe_1_1,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i12);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i8);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i14);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(16);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0);
	}
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.build_mode_constraints", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", 74);
	MR_r3 = (MR_Word) MR_string_const("no mode declaration for foreign proc", 36);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i21);
	}
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_tfield(3, MR_r4, 2);
	MR_sv(15) = MR_r8;
	MR_sv(16) = MR_r9;
	}
	MR_np_call_localret_ent(fn__check_hlds__build_mode_constraints__conj_constraints_info_init_0_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i22);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(15), 1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, conj_constraints_info);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i24);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__add_goal_constraints_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(16);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i26);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__add_local_var_conj_constraints_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r1 = MR_sv(9);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r5 = MR_tfield(0, MR_sv(1), 0);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i31);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r6 = MR_tfield(0, MR_sv(1), 1);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr2;
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(map__foldl2_6_0);
	}
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.build_mode_constraints", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", 74);
	MR_r3 = (MR_Word) MR_string_const("par_conj", 8);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i35);
	}
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(15) = MR_r8;
	MR_sv(16) = MR_r9;
	MR_sv(7) = MR_tfield(3, MR_r4, 1);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i37);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i39);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(15);
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i40);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__add_goal_constraints_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(16);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i42);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_corresponding_3_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i46);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__abstract_mode_constraints__equivalent_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(2), 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i144);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i49);
	}
	MR_r5 = MR_tfield(2, MR_r4, 0);
	if (MR_PTAG_TESTR(MR_r5,3)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i51);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_proceed();
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i52);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.build_mode_constraints", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", 74);
	MR_r3 = (MR_Word) MR_string_const("class_method generic_call", 25);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i54);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.build_mode_constraints", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", 74);
	MR_r3 = (MR_Word) MR_string_const("event_call generic_call", 23);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.build_mode_constraints", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", 74);
	MR_r3 = (MR_Word) MR_string_const("higher_order generic_call", 25);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i57);
	}
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(11) = MR_tfield(0, MR_sv(8), 1);
	MR_sv(12) = MR_tfield(0, MR_sv(9), 1);
	MR_sv(13) = MR_tfield(0, MR_sv(10), 1);
	MR_sv(15) = MR_r8;
	MR_sv(16) = MR_r9;
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i58);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i59);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i60);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(18) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i62);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i63);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i64);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i65);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i66);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i67);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i68);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__610__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(12);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i70);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__611__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i72);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i73);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(13);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i74);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(16);
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__add_goal_constraints_8_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i75);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__add_goal_constraints_8_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i76);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__add_goal_constraints_8_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i77);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,5,6);
	MR_r6 = MR_sv(17);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__list__map_corresponding3_4_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i81);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__abstract_mode_constraints__equivalent_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(2), 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i83);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__abstract_mode_constraints__equiv_no_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(2), 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i85);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__abstract_mode_constraints__xor_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(2), 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_corresponding_5_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i144);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i88);
	}
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_tfield(3, MR_r4, 1);
	MR_sv(15) = MR_r8;
	MR_sv(16) = MR_r9;
	MR_r1 = MR_tfield(0, MR_sv(7), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i89);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__build_mode_constraints__cons_prog_var_at_path_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(15), 1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__set__fold_3_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i94);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__build_mode_constraints__cons_prog_var_at_path_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__fold_3_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i96);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(16);
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__add_goal_constraints_8_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i97);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__abstract_mode_constraints__equiv_no_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i144);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i100);
	}
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(15) = MR_r8;
	MR_sv(16) = MR_r9;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i101);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_infer_modes_1_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i104);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i102);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i106);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i107);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i108);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_tempr1;
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(check_hlds__build_mode_constraints__add_call_headvar_constraints_11_0);
	}
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i110);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__values_2_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i111);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i114);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(16);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_0);
	}
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i117);
	}
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(15) = MR_r8;
	MR_sv(16) = MR_r9;
	MR_sv(7) = MR_tfield(3, MR_r4, 2);
	MR_r1 = MR_tfield(0, MR_sv(7), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i118);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i120);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(15);
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i121);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i122);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,8);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_corresponding_3_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i126);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__abstract_mode_constraints__equivalent_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(5), 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(16);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i128);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(check_hlds__build_mode_constraints__add_goal_constraints_8_0);
	}
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i130);
	}
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(16) = MR_r9;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r8;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_var_at_path_7_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i131);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i133);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i134);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i136);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(16);
	MR_decr_sp_and_return(20);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i138);
	}
	MR_sv(2) = MR_r2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(16);
	}
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__not_both_6_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i144);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(16);
	}
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__equivalent_5_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i140);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__not_both_6_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i144);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i142);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_var_at_path_7_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i143);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(16);
	}
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__not_both_6_0,
		check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i144);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.build_mode_constraints", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", 74);
	MR_r3 = (MR_Word) MR_string_const("unify with lambda goal", 22);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,7)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i146);
	}
	MR_r5 = MR_tfield(3, MR_r4, 1);
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i148);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.build_mode_constraints", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", 74);
	MR_r3 = (MR_Word) MR_string_const("NYI: atomic_goal", 16);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0_i150);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.build_mode_constraints", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", 74);
	MR_r3 = (MR_Word) MR_string_const("shorthand goal", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.build_mode_constraints", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", 74);
	MR_r3 = (MR_Word) MR_string_const("NYI: try_goal", 13);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.build_mode_constraints", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", 74);
	MR_r3 = (MR_Word) MR_string_const("switch", 6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_clauses__clauses_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_varset_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module12)
	MR_init_entry1(check_hlds__build_mode_constraints__add_clauses_constraints_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_clauses_constraints_7_0);
	MR_init_label9(check_hlds__build_mode_constraints__add_clauses_constraints_7_0,2,3,4,5,6,8,10,12,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_clauses_constraints'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__build_mode_constraints__add_clauses_constraints_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__build_mode_constraints__add_clauses_constraints_7_0_i2);
MR_def_label(check_hlds__build_mode_constraints__add_clauses_constraints_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvars_2_0,
		check_hlds__build_mode_constraints__add_clauses_constraints_7_0_i3);
MR_def_label(check_hlds__build_mode_constraints__add_clauses_constraints_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0,
		check_hlds__build_mode_constraints__add_clauses_constraints_7_0_i4);
MR_def_label(check_hlds__build_mode_constraints__add_clauses_constraints_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_2_0,
		check_hlds__build_mode_constraints__add_clauses_constraints_7_0_i5);
MR_def_label(check_hlds__build_mode_constraints__add_clauses_constraints_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_varset_2_0,
		check_hlds__build_mode_constraints__add_clauses_constraints_7_0_i6);
MR_def_label(check_hlds__build_mode_constraints__add_clauses_constraints_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__add_clauses_constraints_7_0_i8);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__build_mode_constraints__add_clauses_constraints_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 3);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__build_mode_constraints__add_clauses_constraints_7_0_i10);
MR_def_label(check_hlds__build_mode_constraints__add_clauses_constraints_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__build_mode_constraints__add_clauses_constraints_7_0_i12);
MR_def_label(check_hlds__build_mode_constraints__add_clauses_constraints_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0,
		check_hlds__build_mode_constraints__add_clauses_constraints_7_0_i15);
MR_def_label(check_hlds__build_mode_constraints__add_clauses_constraints_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__build_mode_constraints__add_goal_expr_constraints_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module13)
	MR_init_entry1(check_hlds__build_mode_constraints__mode_decls_constraints_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__mode_decls_constraints_6_0);
	MR_init_label4(check_hlds__build_mode_constraints__mode_decls_constraints_6_0,8,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_decls_constraints'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__build_mode_constraints__mode_decls_constraints_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__build_mode_constraints__lookup_prog_var_at_path_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__mode_decls_constraints__689__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,16);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__build_mode_constraints__mode_decls_constraints_6_0_i8);
MR_def_label(check_hlds__build_mode_constraints__mode_decls_constraints_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__map_corresponding_3_0,
		check_hlds__build_mode_constraints__mode_decls_constraints_6_0_i12);
MR_def_label(check_hlds__build_mode_constraints__mode_decls_constraints_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		check_hlds__build_mode_constraints__mode_decls_constraints_6_0_i13);
MR_def_label(check_hlds__build_mode_constraints__mode_decls_constraints_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__mode_decls_constraints_6_0_i14);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__mode_decls_constraints_6_0_i14);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__build_mode_constraints__mode_decls_constraints_6_0_i14);
	}
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__build_mode_constraints__mode_decls_constraints_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module14)
	MR_init_entry1(fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0);
	MR_init_label1(fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_decl_constraints'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__list__map_corresponding_3_0,
		fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0_i4);
MR_def_label(fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(check_hlds__abstract_mode_constraints__add_proc_specific_constraint_6_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module15)
	MR_init_entry1(check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0);
	MR_init_label6(check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0,2,3,4,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_mode_decl_constraints'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_4_0,
		check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0_i2);
MR_def_label(check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0_i3);
MR_def_label(check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0_i4);
MR_def_label(check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_vars_at_path_7_0,
		check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0_i5);
MR_def_label(check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__check_hlds__build_mode_constraints__mode_decl_constraints_3_0,
		check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0_i6);
MR_def_label(check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__abstract_mode_constraints__add_proc_specific_constraint_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, pred_p_c_constraints);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0_i8);
MR_def_label(check_hlds__build_mode_constraints__add_mode_decl_constraints_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__init_0_0);
MR_decl_entry(fn__bimap__init_0_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module16)
	MR_init_entry1(fn__check_hlds__build_mode_constraints__var_info_init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__build_mode_constraints__var_info_init_0_0);
	MR_init_label2(fn__check_hlds__build_mode_constraints__var_info_init_0_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_info_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__build_mode_constraints__var_info_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__check_hlds__build_mode_constraints__var_info_init_0_0_i2);
MR_def_label(fn__check_hlds__build_mode_constraints__var_info_init_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_np_call_localret_ent(fn__bimap__init_0_0,
		fn__check_hlds__build_mode_constraints__var_info_init_0_0_i4);
MR_def_label(fn__check_hlds__build_mode_constraints__var_info_init_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module17)
	MR_init_entry1(check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0);
	MR_init_label4(check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_mc_vars_for_pred_head'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0_i2);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0_i3);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0,
		check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0_i4);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_varset_2_0,
		check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0_i5);
MR_def_label(check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module18)
	MR_init_entry1(check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_0);
	MR_init_label1(check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_mc_var_for_pred_head'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_var_at_path_7_0,
		check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_0_i2);
MR_def_label(check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_get_insts_4_0);
MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module19)
	MR_init_entry1(fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0);
	MR_init_label5(fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0,2,7,3,15,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'single_mode_constraints'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0_i2);
MR_def_label(fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0_i7);
MR_def_label(fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0_i3);
	}
	MR_r2 = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0_i15);
MR_def_label(fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0_i12);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__build_mode_constraints__single_mode_constraints_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(set__fold_4_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module20)
	MR_init_entry1(check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0);
	MR_init_label6(check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0,2,3,5,6,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_goal_nonlocals_to_conjunct_production_maps'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r4, 1);
	MR_sv(6) = MR_r5;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0_i2);
MR_def_label(check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0_i3);
MR_def_label(check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0_i5);
MR_def_label(check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0_i6);
MR_def_label(check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,7,2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(set__fold_4_0,
		check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0_i11);
MR_def_label(check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0_i12);
MR_def_label(check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(multi_map__set_4_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module21)
	MR_init_entry1(check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_0);
	MR_init_label1(check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_variable_to_conjunct_production_map'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr4 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r3;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__bimap__lookup_2_0,
		check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_0_i5);
MR_def_label(check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(multi_map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__abstract_mode_constraints__equiv_disj_6_0);
MR_decl_entry(check_hlds__abstract_mode_constraints__at_most_one_5_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module22)
	MR_init_entry1(check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_0);
	MR_init_label3(check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_nonlocal_var_conj_constraints'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_r5;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__build_mode_constraints__prog_var_at_path_7_0,
		check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_0_i2);
MR_def_label(check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__equiv_disj_6_0,
		check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_0_i3);
MR_def_label(check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__at_most_one_5_0,
		check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_0_i4);
MR_def_label(check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module23)
	MR_init_entry1(check_hlds__build_mode_constraints__add_local_var_conj_constraints_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__add_local_var_conj_constraints_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_local_var_conj_constraints'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__add_local_var_conj_constraints_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_98_117_105_108_100_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_108_111_99_97_108_95_118_97_114_95_99_111_110_106_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module24)
	MR_init_entry1(fn__check_hlds__build_mode_constraints__cons_prog_var_at_path_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__build_mode_constraints__cons_prog_var_at_path_5_0);
	MR_init_label1(fn__check_hlds__build_mode_constraints__cons_prog_var_at_path_5_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons_prog_var_at_path'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__build_mode_constraints__cons_prog_var_at_path_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r3;
	MR_sv(1) = MR_r5;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bimap__lookup_2_0,
		fn__check_hlds__build_mode_constraints__cons_prog_var_at_path_5_0_i5);
MR_def_label(fn__check_hlds__build_mode_constraints__cons_prog_var_at_path_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module25)
	MR_init_entry1(__Unify___check_hlds__build_mode_constraints__args_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__build_mode_constraints__args_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__build_mode_constraints__args_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
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

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module26)
	MR_init_entry1(__Compare___check_hlds__build_mode_constraints__args_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__build_mode_constraints__args_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__build_mode_constraints__args_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
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

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module27)
	MR_init_entry1(__Unify___check_hlds__build_mode_constraints__conj_constraints_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__build_mode_constraints__conj_constraints_info_0_0);
	MR_init_label3(__Unify___check_hlds__build_mode_constraints__conj_constraints_info_0_0,7,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__build_mode_constraints__conj_constraints_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__build_mode_constraints__conj_constraints_info_0_0_i11);
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
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__build_mode_constraints__conj_constraints_info_0_0_i7);
MR_def_label(__Unify___check_hlds__build_mode_constraints__conj_constraints_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__build_mode_constraints__conj_constraints_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___check_hlds__build_mode_constraints__conj_constraints_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__build_mode_constraints__conj_constraints_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module28)
	MR_init_entry1(__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0);
	MR_init_label4(__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0,3,2,8,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0_i2);
MR_def_label(__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0_i8);
MR_def_label(__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0_i33);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___check_hlds__build_mode_constraints__conj_constraints_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module29)
	MR_init_entry1(__Unify___check_hlds__build_mode_constraints__conjunct_production_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__build_mode_constraints__conjunct_production_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__build_mode_constraints__conjunct_production_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module30)
	MR_init_entry1(__Compare___check_hlds__build_mode_constraints__conjunct_production_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__build_mode_constraints__conjunct_production_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__build_mode_constraints__conjunct_production_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module31)
	MR_init_entry1(__Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0);
	MR_init_label3(__Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0_i6);
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
		__Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0_i4);
MR_def_label(__Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module32)
	MR_init_entry1(__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0);
	MR_init_label4(__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0_i2);
MR_def_label(__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0,2)
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
		__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0_i5);
MR_def_label(__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module33)
	MR_init_entry1(__Unify___check_hlds__build_mode_constraints__mc_rep_var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__build_mode_constraints__mc_rep_var_0_0);
	MR_init_label3(__Unify___check_hlds__build_mode_constraints__mc_rep_var_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__build_mode_constraints__mc_rep_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__build_mode_constraints__mc_rep_var_0_0_i6);
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___check_hlds__build_mode_constraints__mc_prog_var_0_0,
		__Unify___check_hlds__build_mode_constraints__mc_rep_var_0_0_i4);
MR_def_label(__Unify___check_hlds__build_mode_constraints__mc_rep_var_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__build_mode_constraints__mc_rep_var_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___check_hlds__build_mode_constraints__mc_rep_var_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__build_mode_constraints__mc_rep_var_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module34)
	MR_init_entry1(__Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0);
	MR_init_label4(__Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0_i2);
MR_def_label(__Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0,2)
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
	MR_np_call_localret_ent(__Compare___check_hlds__build_mode_constraints__mc_prog_var_0_0,
		__Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0_i5);
MR_def_label(__Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__build_mode_constraints__mc_rep_var_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___bimap__bimap_2_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module35)
	MR_init_entry1(__Unify___check_hlds__build_mode_constraints__mc_var_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__build_mode_constraints__mc_var_info_0_0);
	MR_init_label3(__Unify___check_hlds__build_mode_constraints__mc_var_info_0_0,4,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__build_mode_constraints__mc_var_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__build_mode_constraints__mc_var_info_0_0_i9);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__build_mode_constraints__mc_var_info_0_0_i4);
MR_def_label(__Unify___check_hlds__build_mode_constraints__mc_var_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__build_mode_constraints__mc_var_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___bimap__bimap_2_0);
MR_def_label(__Unify___check_hlds__build_mode_constraints__mc_var_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__build_mode_constraints__mc_var_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___bimap__bimap_2_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module36)
	MR_init_entry1(__Compare___check_hlds__build_mode_constraints__mc_var_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__build_mode_constraints__mc_var_info_0_0);
	MR_init_label4(__Compare___check_hlds__build_mode_constraints__mc_var_info_0_0,3,2,5,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__build_mode_constraints__mc_var_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__build_mode_constraints__mc_var_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__build_mode_constraints__mc_var_info_0_0_i2);
MR_def_label(__Compare___check_hlds__build_mode_constraints__mc_var_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__build_mode_constraints__mc_var_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__build_mode_constraints__mc_var_info_0_0_i5);
MR_def_label(__Compare___check_hlds__build_mode_constraints__mc_var_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__build_mode_constraints__mc_var_info_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___bimap__bimap_2_0);
MR_def_label(__Compare___check_hlds__build_mode_constraints__mc_var_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module37)
	MR_init_entry1(__Unify___check_hlds__build_mode_constraints__mc_var_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__build_mode_constraints__mc_var_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__build_mode_constraints__mc_var_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___bimap__bimap_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module38)
	MR_init_entry1(__Compare___check_hlds__build_mode_constraints__mc_var_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__build_mode_constraints__mc_var_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__build_mode_constraints__mc_var_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_rep_var);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___bimap__bimap_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module39)
	MR_init_entry1(__Unify___check_hlds__build_mode_constraints__mode_constraints_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__build_mode_constraints__mode_constraints_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__build_mode_constraints__mode_constraints_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module40)
	MR_init_entry1(__Compare___check_hlds__build_mode_constraints__mode_constraints_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__build_mode_constraints__mode_constraints_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__build_mode_constraints__mode_constraints_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module41)
	MR_init_entry1(__Unify___check_hlds__build_mode_constraints__nonlocals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__build_mode_constraints__nonlocals_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__build_mode_constraints__nonlocals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module42)
	MR_init_entry1(__Compare___check_hlds__build_mode_constraints__nonlocals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__build_mode_constraints__nonlocals_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__build_mode_constraints__nonlocals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module43)
	MR_init_entry1(__Unify___check_hlds__build_mode_constraints__maybe__maybe_1_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__build_mode_constraints__maybe__maybe_1_1);
	MR_init_label1(__Unify___check_hlds__build_mode_constraints__maybe__maybe_1_1,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__build_mode_constraints__maybe__maybe_1_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__build_mode_constraints__maybe__maybe_1_1_i1);
	}
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__build_mode_constraints__maybe__maybe_1_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module44)
	MR_init_entry1(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_mc_vars_for_goal__298__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_mc_vars_for_goal__298__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__add_mc_vars_for_goal__298__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_mc_vars_for_goal__298__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module45)
	MR_init_entry1(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__mode_decls_constraints__689__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__build_mode_constraints__IntroducedFrom__func__mode_decls_constraints__689__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__mode_decls_constraints__689__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__mode_decls_constraints__689__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__cons_2_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module46)
	MR_init_entry1(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__540__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__540__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__add_goal_expr_constraints__540__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__540__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__cons_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module47)
	MR_init_entry1(check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__610__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__610__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__add_goal_expr_constraints__610__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__610__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module48)
	MR_init_entry1(check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__611__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__611__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__add_goal_expr_constraints__611__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__611__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module49)
	MR_init_entry1(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__629__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__629__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__add_goal_expr_constraints__629__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__629__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module50)
	MR_init_entry1(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__578__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__578__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__add_goal_expr_constraints__578__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__578__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module51)
	MR_init_entry1(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_call_headvar_constraints__794__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_call_headvar_constraints__794__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__add_call_headvar_constraints__794__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__build_mode_constraints__IntroducedFrom__func__add_call_headvar_constraints__794__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module52)
	MR_init_entry1(check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1008__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1008__1_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__prog_vars_at_path__1008__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1008__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(check_hlds__build_mode_constraints__prog_var_at_path_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module53)
	MR_init_entry1(check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1095__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1095__1_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1095__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1095__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__build_mode_constraints__prog_var_at_path_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__build_mode_constraints, mc_var_info);
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(list__map_foldl_5_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__abstract_mode_constraints__exactly_one_5_0);

MR_BEGIN_MODULE(check_hlds__build_mode_constraints_module54)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_98_117_105_108_100_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_108_111_99_97_108_95_118_97_114_95_99_111_110_106_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_98_117_105_108_100_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_108_111_99_97_108_95_118_97_114_95_99_111_110_106_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__add_local_var_conj_constraints__[3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_98_117_105_108_100_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_108_111_99_97_108_95_118_97_114_95_99_111_110_106_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(check_hlds__abstract_mode_constraints__exactly_one_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__build_mode_constraints_maybe_bunch_0(void)
{
	check_hlds__build_mode_constraints_module0();
	check_hlds__build_mode_constraints_module1();
	check_hlds__build_mode_constraints_module2();
	check_hlds__build_mode_constraints_module3();
	check_hlds__build_mode_constraints_module4();
	check_hlds__build_mode_constraints_module5();
	check_hlds__build_mode_constraints_module6();
	check_hlds__build_mode_constraints_module7();
	check_hlds__build_mode_constraints_module8();
	check_hlds__build_mode_constraints_module9();
	check_hlds__build_mode_constraints_module10();
	check_hlds__build_mode_constraints_module11();
	check_hlds__build_mode_constraints_module12();
	check_hlds__build_mode_constraints_module13();
	check_hlds__build_mode_constraints_module14();
	check_hlds__build_mode_constraints_module15();
	check_hlds__build_mode_constraints_module16();
	check_hlds__build_mode_constraints_module17();
	check_hlds__build_mode_constraints_module18();
	check_hlds__build_mode_constraints_module19();
	check_hlds__build_mode_constraints_module20();
	check_hlds__build_mode_constraints_module21();
	check_hlds__build_mode_constraints_module22();
	check_hlds__build_mode_constraints_module23();
	check_hlds__build_mode_constraints_module24();
	check_hlds__build_mode_constraints_module25();
	check_hlds__build_mode_constraints_module26();
	check_hlds__build_mode_constraints_module27();
	check_hlds__build_mode_constraints_module28();
	check_hlds__build_mode_constraints_module29();
	check_hlds__build_mode_constraints_module30();
	check_hlds__build_mode_constraints_module31();
	check_hlds__build_mode_constraints_module32();
	check_hlds__build_mode_constraints_module33();
	check_hlds__build_mode_constraints_module34();
	check_hlds__build_mode_constraints_module35();
	check_hlds__build_mode_constraints_module36();
	check_hlds__build_mode_constraints_module37();
	check_hlds__build_mode_constraints_module38();
	check_hlds__build_mode_constraints_module39();
}

static void mercury__check_hlds__build_mode_constraints_maybe_bunch_1(void)
{
	check_hlds__build_mode_constraints_module40();
	check_hlds__build_mode_constraints_module41();
	check_hlds__build_mode_constraints_module42();
	check_hlds__build_mode_constraints_module43();
	check_hlds__build_mode_constraints_module44();
	check_hlds__build_mode_constraints_module45();
	check_hlds__build_mode_constraints_module46();
	check_hlds__build_mode_constraints_module47();
	check_hlds__build_mode_constraints_module48();
	check_hlds__build_mode_constraints_module49();
	check_hlds__build_mode_constraints_module50();
	check_hlds__build_mode_constraints_module51();
	check_hlds__build_mode_constraints_module52();
	check_hlds__build_mode_constraints_module53();
	check_hlds__build_mode_constraints_module54();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__build_mode_constraints__init(void);
void mercury__check_hlds__build_mode_constraints__init_type_tables(void);
void mercury__check_hlds__build_mode_constraints__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__build_mode_constraints__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__build_mode_constraints__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__build_mode_constraints__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__build_mode_constraints__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__build_mode_constraints_maybe_bunch_0();
	mercury__check_hlds__build_mode_constraints_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__build_mode_constraints__type_ctor_info_args_0,
		check_hlds__build_mode_constraints__args_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0,
		check_hlds__build_mode_constraints__conj_constraints_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__build_mode_constraints__type_ctor_info_conjunct_production_map_0,
		check_hlds__build_mode_constraints__conjunct_production_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_prog_var_0,
		check_hlds__build_mode_constraints__mc_prog_var_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0,
		check_hlds__build_mode_constraints__mc_rep_var_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0,
		check_hlds__build_mode_constraints__mc_var_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_var_map_0,
		check_hlds__build_mode_constraints__mc_var_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mode_constraints_0,
		check_hlds__build_mode_constraints__mode_constraints_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__build_mode_constraints__type_ctor_info_nonlocals_0,
		check_hlds__build_mode_constraints__nonlocals_0_0);
	mercury__check_hlds__build_mode_constraints__init_debugger();
}

void mercury__check_hlds__build_mode_constraints__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__build_mode_constraints__type_ctor_info_args_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__build_mode_constraints__type_ctor_info_conjunct_production_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_prog_var_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mc_var_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__build_mode_constraints__type_ctor_info_mode_constraints_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__build_mode_constraints__type_ctor_info_nonlocals_0);
	}
}


void mercury__check_hlds__build_mode_constraints__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__build_mode_constraints__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__build_mode_constraints);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__build_mode_constraints__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__build_mode_constraints__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
