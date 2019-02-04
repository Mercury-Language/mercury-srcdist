/*
** Automatically generated from `lp.m'
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
INIT mercury__libs__lp__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "libs.lp.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "libs.lp.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "libs.lp.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "libs.lp.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "libs.lp.c"
#line 45 "libs.lp.c"
#include "libs.lp.mh"

#line 48 "libs.lp.c"
#line 49 "libs.lp.c"
#ifndef LIBS__LP_DECL_GUARD
#define LIBS__LP_DECL_GUARD

#line 53 "libs.lp.c"
#line 54 "libs.lp.c"

#endif
#line 57 "libs.lp.c"

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
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
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
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__lp__type_ctor_info_cell_0,
	mercury_data_libs__lp__type_ctor_info_coeff_0,
	mercury_data_libs__lp__type_ctor_info_direction_0,
	mercury_data_libs__lp__type_ctor_info_equation_0,
	mercury_data_libs__lp__type_ctor_info_equations_0,
	mercury_data_libs__lp__type_ctor_info_lp_info_0,
	mercury_data_libs__lp__type_ctor_info_objective_0,
	mercury_data_libs__lp__type_ctor_info_operator_0,
	mercury_data_libs__lp__type_ctor_info_result_0,
	mercury_data_libs__lp__type_ctor_info_tableau_0;
MR_decl_label3(libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0, 3,2,9)
MR_decl_label3(libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_0, 1,3,5)
MR_decl_label4(libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0, 1,3,5,6)
MR_decl_label2(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_0, 2,3)
MR_decl_label2(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_0, 1,3)
MR_decl_label2(libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0, 1,4)
MR_decl_label3(libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_0, 1,3,5)
MR_decl_label2(libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_0, 1,3)
MR_decl_label3(libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_0, 2,3,7)
MR_decl_label3(libs__lp__IntroducedFrom__pred__pivot__635__1_4_0, 1,3,6)
MR_decl_label4(libs__lp__IntroducedFrom__pred__pivot__642__1_6_0, 2,3,4,5)
MR_decl_label2(libs__lp__IntroducedFrom__pred__pivot__651__1_3_0, 1,3)
MR_decl_label2(libs__lp__IntroducedFrom__pred__pivot__661__1_5_0, 2,3)
MR_decl_label2(libs__lp__IntroducedFrom__pred__row_op__674__1_6_0, 2,3)
MR_decl_label5(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0, 4,5,3,9,10)
MR_decl_label9(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0, 4,6,7,5,3,11,12,15,14)
MR_decl_label2(libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_0, 4,2)
MR_decl_label2(libs__lp__all_cols_2_0, 1,3)
MR_decl_label2(libs__lp__all_cols0_2_0, 1,3)
MR_decl_label2(libs__lp__all_rows_2_0, 1,3)
MR_decl_label2(libs__lp__between_3_0, 4,2)
MR_decl_label1(libs__lp__collect_vars_3_0, 4)
MR_decl_label3(libs__lp__construct_art_objective_2_0, 6,7,2)
MR_decl_label9(libs__lp__ensure_zero_obj_coeffs_3_0, 41,3,5,6,7,12,15,18,14)
MR_decl_label1(libs__lp__expand_urs_vars_3_0, 2)
MR_decl_label4(libs__lp__expand_urs_vars_4_0, 29,3,7,4)
MR_decl_label2(libs__lp__expand_urs_vars_e_3_0, 2,5)
MR_decl_label10(libs__lp__extract_obj_var_4_0, 5,7,9,10,13,14,16,17,2,21)
MR_decl_label3(libs__lp__extract_obj_var2_3_0, 3,5,6)
MR_decl_label10(libs__lp__fix_basis_and_rem_cols_3_0, 58,3,5,10,16,18,22,23,11,25)
MR_decl_label1(libs__lp__get_basis_vars_2_0, 3)
MR_decl_label3(libs__lp__get_vars_from_coeffs_2_3_0, 14,3,5)
MR_decl_label7(libs__lp__index_4_0, 6,8,4,2,11,15,12)
MR_decl_label1(libs__lp__init_tableau_5_0, 3)
MR_decl_label4(libs__lp__insert_coeffs_5_0, 15,3,5,6)
MR_decl_label4(libs__lp__insert_equations_6_0, 11,3,4,5)
MR_decl_label2(libs__lp__lp_solve_8_0, 4,10)
MR_decl_label10(libs__lp__lp_solve_2_8_0, 3,4,10,11,12,13,14,15,16,17)
MR_decl_label10(libs__lp__lp_solve_2_8_0, 18,19,21,23,7,24,25,26,27,28)
MR_decl_label7(libs__lp__lp_solve_2_8_0, 29,30,31,32,34,36,6)
MR_decl_label4(libs__lp__negate_equation_2_0, 3,7,2,14)
MR_decl_label1(libs__lp__new_art_var_3_0, 2)
MR_decl_label1(libs__lp__new_slack_var_3_0, 2)
MR_decl_label3(libs__lp__number_vars_4_0, 14,3,5)
MR_decl_label9(libs__lp__one_phase_5_0, 2,4,5,6,7,9,10,12,14)
MR_decl_label5(libs__lp__optimize_4_0, 2,4,5,8,10)
MR_decl_label4(libs__lp__pivot_4_0, 2,5,8,11)
MR_decl_label8(libs__lp__set_index_5_0, 6,8,4,2,11,16,12,20)
MR_decl_label6(libs__lp__simplex_3_0, 29,6,8,11,13,32)
MR_decl_label2(libs__lp__simplify_coeffs_2_0, 3,7)
MR_decl_label3(libs__lp__simplify_eq_2_0, 3,7,8)
MR_decl_label10(libs__lp__standardize_equation_4_0, 96,6,10,5,17,4,20,24,3,28)
MR_decl_label10(libs__lp__standardize_equation_4_0, 31,35,36,27,40,39,42,43,49,50)
MR_decl_label1(libs__lp__standardize_equation_4_0, 51)
MR_decl_label10(libs__lp__two_phase_6_0, 2,3,4,5,7,8,11,13,14,17)
MR_decl_label7(libs__lp__two_phase_6_0, 18,19,20,21,22,23,24)
MR_decl_label2(__Unify___libs__lp__cell_0_0, 4,1)
MR_decl_label3(__Unify___libs__lp__equation_0_0, 6,8,1)
MR_decl_label5(__Unify___libs__lp__lp_info_0_0, 4,8,10,14,1)
MR_decl_label3(__Unify___libs__lp__result_0_0, 13,5,1)
MR_decl_label6(__Unify___libs__lp__tableau_0_0, 5,8,10,12,17,1)
MR_decl_label4(__Compare___libs__lp__cell_0_0, 3,2,5,21)
MR_decl_label5(__Compare___libs__lp__equation_0_0, 3,2,7,11,40)
MR_decl_label6(__Compare___libs__lp__lp_info_0_0, 3,2,5,11,16,53)
MR_decl_label6(__Compare___libs__lp__result_0_0, 25,7,5,9,11,17)
MR_decl_label9(__Compare___libs__lp__tableau_0_0, 3,2,5,9,14,20,24,28,86)
MR_decl_static(libs__lp__get_vars_from_coeffs_2_3_0)
MR_decl_static(libs__lp__set_index_5_0)
MR_decl_static(libs__lp__insert_coeffs_5_0)
MR_decl_static(libs__lp__index_4_0)
MR_decl_static(libs__lp__pivot_4_0)
MR_decl_static(libs__lp__simplex_3_0)
MR_decl_static(libs__lp__optimize_4_0)
MR_decl_static(libs__lp__one_phase_5_0)
MR_decl_static(libs__lp__construct_art_objective_2_0)
MR_decl_static(libs__lp__ensure_zero_obj_coeffs_3_0)
MR_decl_static(libs__lp__remove_col_3_0)
MR_decl_static(libs__lp__fix_basis_and_rem_cols_3_0)
MR_decl_static(libs__lp__get_basis_vars_2_0)
MR_decl_static(libs__lp__two_phase_6_0)
MR_decl_static(libs__lp__negate_equation_2_0)
MR_decl_static(libs__lp__simplify_coeffs_2_0)
MR_decl_static(libs__lp__expand_urs_vars_4_0)
MR_decl_static(libs__lp__expand_urs_vars_3_0)
MR_decl_static(libs__lp__collect_vars_3_0)
MR_decl_static(libs__lp__number_vars_4_0)
MR_decl_static(libs__lp__insert_equations_6_0)
MR_decl_static(libs__lp__init_tableau_5_0)
MR_decl_static(libs__lp__get_urs_vars_2_0)
MR_decl_static(libs__lp__lp_solve_2_8_0)
MR_def_extern_entry(libs__lp__lp_solve_8_0)
MR_decl_static(libs__lp__simplify_eq_2_0)
MR_decl_static(libs__lp__expand_urs_vars_e_3_0)
MR_decl_static(libs__lp__new_slack_var_3_0)
MR_decl_static(libs__lp__new_art_var_3_0)
MR_decl_static(libs__lp__standardize_equation_4_0)
MR_decl_static(libs__lp__extract_obj_var2_3_0)
MR_decl_static(libs__lp__extract_obj_var_4_0)
MR_decl_static(libs__lp__between_3_0)
MR_decl_static(libs__lp__all_rows_2_0)
MR_decl_static(libs__lp__all_cols0_2_0)
MR_decl_static(libs__lp__all_cols_2_0)
MR_decl_static(__Unify___libs__lp__cell_0_0)
MR_decl_static(__Compare___libs__lp__cell_0_0)
MR_def_extern_entry(__Unify___libs__lp__coeff_0_0)
MR_def_extern_entry(__Compare___libs__lp__coeff_0_0)
MR_def_extern_entry(__Unify___libs__lp__direction_0_0)
MR_def_extern_entry(__Compare___libs__lp__direction_0_0)
MR_def_extern_entry(__Unify___libs__lp__equation_0_0)
MR_def_extern_entry(__Compare___libs__lp__equation_0_0)
MR_def_extern_entry(__Unify___libs__lp__equations_0_0)
MR_def_extern_entry(__Compare___libs__lp__equations_0_0)
MR_decl_static(__Unify___libs__lp__lp_info_0_0)
MR_decl_static(__Compare___libs__lp__lp_info_0_0)
MR_def_extern_entry(__Unify___libs__lp__objective_0_0)
MR_def_extern_entry(__Compare___libs__lp__objective_0_0)
MR_def_extern_entry(__Unify___libs__lp__operator_0_0)
MR_def_extern_entry(__Compare___libs__lp__operator_0_0)
MR_def_extern_entry(__Unify___libs__lp__result_0_0)
MR_def_extern_entry(__Compare___libs__lp__result_0_0)
MR_decl_static(__Unify___libs__lp__tableau_0_0)
MR_decl_static(__Compare___libs__lp__tableau_0_0)
MR_decl_static(fn__libs__lp__IntroducedFrom__func__negate_equation__328__1_1_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__pivot__635__1_4_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__pivot__642__1_6_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__pivot__651__1_3_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__pivot__655__1_3_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__pivot__661__1_5_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__row_op__674__1_6_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_0)
MR_decl_static(libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_equation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
static const struct mercury_type_0 mercury_common_0[12] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_COMMON(1,1)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_TAG_COMMON(0,1,2)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,6)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,7)
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(libs__lp, equation)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,11)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(term, generic)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_1 mercury_common_1[17] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,4),
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,0),
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,4),
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,0),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,4),
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_TAG_COMMON(0,1,10)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,10),
MR_TAG_COMMON(0,1,12)
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
MR_COMMON(1,14)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,11),
MR_COMMON(1,15)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__pivot_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_tableau_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_cell_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__simplex_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__optimize_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__one_phase_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__fix_basis_and_rem_cols_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__two_phase_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__lp_solve_2_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_equation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_lp_info_0;
static const struct mercury_type_2 mercury_common_2[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__pivot_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(libs__lp, tableau),
MR_CTOR0_ADDR(libs__lp, cell)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__simplex_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR,
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__optimize_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__lp, tableau),
MR_COMMON(0,3),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__one_phase_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__lp, tableau),
MR_COMMON(0,3),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__fix_basis_and_rem_cols_3_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__two_phase_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__lp, tableau),
MR_COMMON(0,3),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__lp_solve_2_8_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__lp, equation),
MR_CTOR0_ADDR(libs__lp, equation),
MR_CTOR0_ADDR(libs__lp, lp_info),
MR_CTOR0_ADDR(libs__lp, lp_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__pivot_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__ensure_zero_obj_coeffs_3_0_3;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__pivot_4_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(libs__lp, cell),
MR_CTOR0_ADDR(libs__lp, tableau),
MR_CTOR0_ADDR(libs__lp, tableau)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__ensure_zero_obj_coeffs_3_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(libs__lp, tableau),
MR_CTOR0_ADDR(libs__lp, tableau)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__pivot_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__pivot_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__ensure_zero_obj_coeffs_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__get_basis_vars_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__simplify_coeffs_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__collect_vars_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__lp_solve_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__simplify_eq_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__extract_obj_var2_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__extract_obj_var_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__extract_obj_var_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0_1;
static const struct mercury_type_4 mercury_common_4[12] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__pivot_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(libs__lp, tableau),
MR_CTOR0_ADDR(libs__lp, cell)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__pivot_4_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(libs__lp, cell),
MR_CTOR0_ADDR(libs__lp, tableau),
MR_CTOR0_ADDR(libs__lp, tableau)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__ensure_zero_obj_coeffs_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR,
MR_COMMON(1,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__get_basis_vars_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(libs__lp, tableau),
MR_COMMON(0,7),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__simplify_coeffs_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,9),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__collect_vars_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,8),
MR_COMMON(0,9),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__lp_solve_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,3),
MR_COMMON(1,16),
MR_COMMON(1,16)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__simplify_eq_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,9),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__extract_obj_var2_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__extract_obj_var_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__extract_obj_var_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR,
MR_COMMON(1,5)
}
},
};

static const struct mercury_type_5 mercury_common_5[12] =
{
{
MR_COMMON(4,1),
MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__pivot__655__1_3_0),
0
},
{
MR_COMMON(6,6),
MR_ENTRY_AP(fn__libs__lp__IntroducedFrom__func__negate_equation__328__1_1_0),
0
},
{
MR_COMMON(6,7),
MR_ENTRY_AP(fn__libs__lp__IntroducedFrom__func__negate_equation__328__1_1_0),
0
},
{
MR_COMMON(6,8),
MR_ENTRY_AP(fn__libs__lp__IntroducedFrom__func__negate_equation__328__1_1_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_0),
0
},
{
MR_COMMON(2,6),
MR_ENTRY_AP(libs__lp__standardize_equation_4_0),
0
},
{
MR_COMMON(6,9),
MR_ENTRY_AP(fn__libs__lp__IntroducedFrom__func__negate_equation__328__1_1_0),
0
},
{
MR_COMMON(4,6),
MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_0),
0
},
{
MR_COMMON(4,7),
MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_0),
0
},
{
MR_COMMON(6,10),
MR_ENTRY_AP(fn__libs__lp__IntroducedFrom__func__negate_equation__328__1_1_0),
0
},
{
MR_COMMON(6,11),
MR_ENTRY_AP(fn__libs__lp__IntroducedFrom__func__negate_equation__328__1_1_0),
0
},
{
MR_COMMON(6,12),
MR_ENTRY_AP(fn__libs__lp__IntroducedFrom__func__negate_equation__328__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__pivot_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__simplex_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__simplex_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__ensure_zero_obj_coeffs_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__fix_basis_and_rem_cols_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__get_basis_vars_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__negate_equation_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__negate_equation_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__negate_equation_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__lp_solve_2_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__standardize_equation_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__standardize_equation_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__standardize_equation_4_0_3;
static const struct mercury_type_6 mercury_common_6[13] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__pivot_4_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__simplex_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__simplex_3_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__ensure_zero_obj_coeffs_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__fix_basis_and_rem_cols_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__get_basis_vars_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__negate_equation_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,9),
MR_COMMON(1,9)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__negate_equation_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,9),
MR_COMMON(1,9)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__negate_equation_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,9),
MR_COMMON(1,9)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__lp_solve_2_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,9),
MR_COMMON(1,9)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__standardize_equation_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,9),
MR_COMMON(1,9)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__standardize_equation_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,9),
MR_COMMON(1,9)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__standardize_equation_4_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,9),
MR_COMMON(1,9)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__pivot_4_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__simplex_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__fix_basis_and_rem_cols_3_0_1;
static const struct mercury_type_7 mercury_common_7[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__pivot_4_0_6,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(libs__lp, tableau),
MR_CTOR0_ADDR(libs__lp, tableau)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__simplex_3_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__lp__fix_basis_and_rem_cols_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__lp, tableau),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(0,5),
MR_COMMON(0,5)
}
},
};

const MR_PseudoTypeInfo mercury_data_libs__lp__field_types_cell_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_libs__lp__du_functor_desc_cell_0_0 = {
	"cell",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_libs__lp__field_types_cell_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_libs__lp__du_stag_ordered_cell_0_0[] = {
	&mercury_data_libs__lp__du_functor_desc_cell_0_0

};

const MR_DuPtagLayout mercury_data_libs__lp__du_ptag_ordered_cell_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__lp__du_stag_ordered_cell_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_libs__lp__du_name_ordered_cell_0[] = {
	&mercury_data_libs__lp__du_functor_desc_cell_0_0
};

const MR_Integer mercury_data_libs__lp__functor_number_map_cell_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_cell_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__lp__cell_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__lp__cell_0_0)),
	"libs.lp",
	"cell",
	{ (void *)mercury_data_libs__lp__du_name_ordered_cell_0 },
	{ (void *)mercury_data_libs__lp__du_ptag_ordered_cell_0 },
	1,
	4,
	mercury_data_libs__lp__functor_number_map_cell_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_float_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_coeff_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__lp__coeff_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__lp__coeff_0_0)),
	"libs.lp",
	"coeff",
	{ 0 },
	{ (void *)&mercury_data_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_libs__lp__enum_functor_desc_direction_0_0 = {
	"max",
	0
};

static const MR_EnumFunctorDesc mercury_data_libs__lp__enum_functor_desc_direction_0_1 = {
	"min",
	1
};

const MR_EnumFunctorDescPtr mercury_data_libs__lp__enum_value_ordered_direction_0[] = {
	&mercury_data_libs__lp__enum_functor_desc_direction_0_0,
	&mercury_data_libs__lp__enum_functor_desc_direction_0_1
};

const MR_EnumFunctorDescPtr mercury_data_libs__lp__enum_name_ordered_direction_0[] = {
	&mercury_data_libs__lp__enum_functor_desc_direction_0_0,
	&mercury_data_libs__lp__enum_functor_desc_direction_0_1
};

const MR_Integer mercury_data_libs__lp__functor_number_map_direction_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_direction_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__lp__direction_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__lp__direction_0_0)),
	"libs.lp",
	"direction",
	{ (void *)mercury_data_libs__lp__enum_name_ordered_direction_0 },
	{ (void *)mercury_data_libs__lp__enum_value_ordered_direction_0 },
	2,
	4,
	mercury_data_libs__lp__functor_number_map_direction_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_operator_0;

const MR_PseudoTypeInfo mercury_data_libs__lp__field_types_equation_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__lp__type_ctor_info_operator_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_libs__lp__du_functor_desc_equation_0_0 = {
	"eqn",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_libs__lp__field_types_equation_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_libs__lp__du_stag_ordered_equation_0_0[] = {
	&mercury_data_libs__lp__du_functor_desc_equation_0_0

};

const MR_DuPtagLayout mercury_data_libs__lp__du_ptag_ordered_equation_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__lp__du_stag_ordered_equation_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_libs__lp__du_name_ordered_equation_0[] = {
	&mercury_data_libs__lp__du_functor_desc_equation_0_0
};

const MR_Integer mercury_data_libs__lp__functor_number_map_equation_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_equation_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__lp__equation_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__lp__equation_0_0)),
	"libs.lp",
	"equation",
	{ (void *)mercury_data_libs__lp__du_name_ordered_equation_0 },
	{ (void *)mercury_data_libs__lp__du_ptag_ordered_equation_0 },
	1,
	4,
	mercury_data_libs__lp__functor_number_map_equation_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1libs__lp__type_ctor_info_equation_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_libs__lp__type_ctor_info_equation_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_equations_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__lp__equations_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__lp__equations_0_0)),
	"libs.lp",
	"equations",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1libs__lp__type_ctor_info_equation_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1term__type_ctor_info_generic_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0,
	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};

const MR_PseudoTypeInfo mercury_data_libs__lp__field_types_lp_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

const MR_ConstString mercury_data_libs__lp__field_names_lp_info_0_0[] = {
	"lpi_varset",
	"lpi_urs_map",
	"lpi_slack_vars",
	"lpi_art_vars"
};

static const MR_DuFunctorDesc mercury_data_libs__lp__du_functor_desc_lp_info_0_0 = {
	"lp_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_libs__lp__field_types_lp_info_0_0,
	mercury_data_libs__lp__field_names_lp_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_libs__lp__du_stag_ordered_lp_info_0_0[] = {
	&mercury_data_libs__lp__du_functor_desc_lp_info_0_0

};

const MR_DuPtagLayout mercury_data_libs__lp__du_ptag_ordered_lp_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__lp__du_stag_ordered_lp_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_libs__lp__du_name_ordered_lp_info_0[] = {
	&mercury_data_libs__lp__du_functor_desc_lp_info_0_0
};

const MR_Integer mercury_data_libs__lp__functor_number_map_lp_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_lp_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__lp__lp_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__lp__lp_info_0_0)),
	"libs.lp",
	"lp_info",
	{ (void *)mercury_data_libs__lp__du_name_ordered_lp_info_0 },
	{ (void *)mercury_data_libs__lp__du_ptag_ordered_lp_info_0 },
	1,
	4,
	mercury_data_libs__lp__functor_number_map_lp_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_objective_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__lp__objective_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__lp__objective_0_0)),
	"libs.lp",
	"objective",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_libs__lp__enum_functor_desc_operator_0_0 = {
	"=<",
	0
};

static const MR_EnumFunctorDesc mercury_data_libs__lp__enum_functor_desc_operator_0_1 = {
	"=",
	1
};

static const MR_EnumFunctorDesc mercury_data_libs__lp__enum_functor_desc_operator_0_2 = {
	">=",
	2
};

const MR_EnumFunctorDescPtr mercury_data_libs__lp__enum_value_ordered_operator_0[] = {
	&mercury_data_libs__lp__enum_functor_desc_operator_0_0,
	&mercury_data_libs__lp__enum_functor_desc_operator_0_1,
	&mercury_data_libs__lp__enum_functor_desc_operator_0_2
};

const MR_EnumFunctorDescPtr mercury_data_libs__lp__enum_name_ordered_operator_0[] = {
	&mercury_data_libs__lp__enum_functor_desc_operator_0_1,
	&mercury_data_libs__lp__enum_functor_desc_operator_0_0,
	&mercury_data_libs__lp__enum_functor_desc_operator_0_2
};

const MR_Integer mercury_data_libs__lp__functor_number_map_operator_0[] = {
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_operator_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__lp__operator_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__lp__operator_0_0)),
	"libs.lp",
	"operator",
	{ (void *)mercury_data_libs__lp__enum_name_ordered_operator_0 },
	{ (void *)mercury_data_libs__lp__enum_value_ordered_operator_0 },
	3,
	4,
	mercury_data_libs__lp__functor_number_map_operator_0
};

static const MR_DuFunctorDesc mercury_data_libs__lp__du_functor_desc_result_0_0 = {
	"unsatisfiable",
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

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_float_0
}};

const MR_PseudoTypeInfo mercury_data_libs__lp__field_types_result_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_libs__lp__du_functor_desc_result_0_1 = {
	"satisfiable",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_libs__lp__field_types_result_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_libs__lp__du_stag_ordered_result_0_0[] = {
	&mercury_data_libs__lp__du_functor_desc_result_0_0

};

const MR_DuFunctorDescPtr mercury_data_libs__lp__du_stag_ordered_result_0_1[] = {
	&mercury_data_libs__lp__du_functor_desc_result_0_1

};

const MR_DuPtagLayout mercury_data_libs__lp__du_ptag_ordered_result_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_libs__lp__du_stag_ordered_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__lp__du_stag_ordered_result_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_libs__lp__du_name_ordered_result_0[] = {
	&mercury_data_libs__lp__du_functor_desc_result_0_1,
	&mercury_data_libs__lp__du_functor_desc_result_0_0
};

const MR_Integer mercury_data_libs__lp__functor_number_map_result_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_result_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__lp__result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__lp__result_0_0)),
	"libs.lp",
	"result",
	{ (void *)mercury_data_libs__lp__du_name_ordered_result_0 },
	{ (void *)mercury_data_libs__lp__du_ptag_ordered_result_0 },
	2,
	4,
	mercury_data_libs__lp__functor_number_map_result_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_float_0
}};

const MR_PseudoTypeInfo mercury_data_libs__lp__field_types_tableau_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0
};

const MR_ConstString mercury_data_libs__lp__field_names_tableau_0_0[] = {
	"rows",
	"cols",
	"var_nums",
	"urs_vars",
	"shunned_rows",
	"shunned_cols",
	"cells"
};

static const MR_DuFunctorDesc mercury_data_libs__lp__du_functor_desc_tableau_0_0 = {
	"tableau",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_libs__lp__field_types_tableau_0_0,
	mercury_data_libs__lp__field_names_tableau_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_libs__lp__du_stag_ordered_tableau_0_0[] = {
	&mercury_data_libs__lp__du_functor_desc_tableau_0_0

};

const MR_DuPtagLayout mercury_data_libs__lp__du_ptag_ordered_tableau_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__lp__du_stag_ordered_tableau_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_libs__lp__du_name_ordered_tableau_0[] = {
	&mercury_data_libs__lp__du_functor_desc_tableau_0_0
};

const MR_Integer mercury_data_libs__lp__functor_number_map_tableau_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_tableau_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__lp__tableau_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__lp__tableau_0_0)),
	"libs.lp",
	"tableau",
	{ (void *)mercury_data_libs__lp__du_name_ordered_tableau_0 },
	{ (void *)mercury_data_libs__lp__du_ptag_ordered_tableau_0 },
	1,
	4,
	mercury_data_libs__lp__functor_number_map_tableau_0
};


static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_800",
3,
0
},
"libs.lp",
"lp.m",
800,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__extract_obj_var_4_0_2 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_474",
3,
0
},
"libs.lp",
"lp.m",
474,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__extract_obj_var_4_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_474",
3,
0
},
"libs.lp",
"lp.m",
474,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__extract_obj_var2_3_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_474",
3,
0
},
"libs.lp",
"lp.m",
474,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__standardize_equation_4_0_3 = {
{
MR_FUNCTION,
"libs.lp",
"libs.lp",
"lambda_lp_m_328",
2,
0
},
"libs.lp",
"lp.m",
328,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__standardize_equation_4_0_2 = {
{
MR_FUNCTION,
"libs.lp",
"libs.lp",
"lambda_lp_m_328",
2,
0
},
"libs.lp",
"lp.m",
328,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__standardize_equation_4_0_1 = {
{
MR_FUNCTION,
"libs.lp",
"libs.lp",
"lambda_lp_m_328",
2,
0
},
"libs.lp",
"lp.m",
328,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__simplify_eq_2_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_340",
3,
0
},
"libs.lp",
"lp.m",
340,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__lp_solve_8_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_822",
3,
0
},
"libs.lp",
"lp.m",
822,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__lp_solve_2_8_0_2 = {
{
MR_FUNCTION,
"libs.lp",
"libs.lp",
"lambda_lp_m_328",
2,
0
},
"libs.lp",
"lp.m",
328,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__lp_solve_2_8_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"standardize_equation",
4,
0
},
"libs.lp",
"lp.m",
265,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__collect_vars_3_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_396",
3,
0
},
"libs.lp",
"lp.m",
390,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__simplify_coeffs_2_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_340",
3,
0
},
"libs.lp",
"lp.m",
340,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__negate_equation_2_0_3 = {
{
MR_FUNCTION,
"libs.lp",
"libs.lp",
"lambda_lp_m_328",
2,
0
},
"libs.lp",
"lp.m",
328,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__negate_equation_2_0_2 = {
{
MR_FUNCTION,
"libs.lp",
"libs.lp",
"lambda_lp_m_328",
2,
0
},
"libs.lp",
"lp.m",
328,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__negate_equation_2_0_1 = {
{
MR_FUNCTION,
"libs.lp",
"libs.lp",
"lambda_lp_m_328",
2,
0
},
"libs.lp",
"lp.m",
328,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__two_phase_6_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"extract_obj_var",
4,
0
},
"libs.lp",
"lp.m",
454,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__get_basis_vars_2_0_2 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_810",
3,
0
},
"libs.lp",
"lp.m",
810,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__get_basis_vars_2_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_798",
2,
0
},
"libs.lp",
"lp.m",
798,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__fix_basis_and_rem_cols_3_0_3 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_604",
4,
0
},
"libs.lp",
"lp.m",
604,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__fix_basis_and_rem_cols_3_0_2 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"all_rows",
2,
0
},
"libs.lp",
"lp.m",
602,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__fix_basis_and_rem_cols_3_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_594",
5,
0
},
"libs.lp",
"lp.m",
594,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__ensure_zero_obj_coeffs_3_0_3 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_674",
6,
0
},
"libs.lp",
"lp.m",
674,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__ensure_zero_obj_coeffs_3_0_2 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"all_cols0",
2,
0
},
"libs.lp",
"lp.m",
673,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__ensure_zero_obj_coeffs_3_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_570",
3,
0
},
"libs.lp",
"lp.m",
570,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__one_phase_5_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"extract_obj_var",
4,
0
},
"libs.lp",
"lp.m",
454,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__optimize_4_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"extract_obj_var",
4,
0
},
"libs.lp",
"lp.m",
454,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__simplex_3_0_4 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_530",
5,
0
},
"libs.lp",
"lp.m",
518,
"47"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__simplex_3_0_3 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"all_rows",
2,
0
},
"libs.lp",
"lp.m",
517,
"46"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__simplex_3_0_2 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_500",
4,
0
},
"libs.lp",
"lp.m",
491,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__simplex_3_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"all_cols",
2,
0
},
"libs.lp",
"lp.m",
490,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__pivot_4_0_6 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_661",
5,
0
},
"libs.lp",
"lp.m",
661,
"50"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__pivot_4_0_5 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"all_cols0",
2,
0
},
"libs.lp",
"lp.m",
660,
"49"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__pivot_4_0_4 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_655",
3,
0
},
"libs.lp",
"lp.m",
655,
"39"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__pivot_4_0_3 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_651",
3,
0
},
"libs.lp",
"lp.m",
651,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__pivot_4_0_2 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_642",
6,
0
},
"libs.lp",
"lp.m",
642,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__lp__pivot_4_0_1 = {
{
MR_PREDICATE,
"libs.lp",
"libs.lp",
"lambda_lp_m_635",
4,
0
},
"libs.lp",
"lp.m",
635,
"7"
};


MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(libs__lp_module0)
	MR_init_entry1(libs__lp__get_vars_from_coeffs_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__get_vars_from_coeffs_2_3_0);
	MR_init_label3(libs__lp__get_vars_from_coeffs_2_3_0,14,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_vars_from_coeffs_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__get_vars_from_coeffs_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(libs__lp__get_vars_from_coeffs_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__get_vars_from_coeffs_2_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(libs__lp__get_vars_from_coeffs_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		libs__lp__get_vars_from_coeffs_2_3_0_i5);
MR_def_label(libs__lp__get_vars_from_coeffs_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(libs__lp__get_vars_from_coeffs_2_3_0_i14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);
MR_decl_entry(require__unexpected_3_0);
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
MR_decl_entry(map__delete_3_0);
MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(libs__lp_module1)
	MR_init_entry1(libs__lp__set_index_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__set_index_5_0);
	MR_init_label8(libs__lp__set_index_5_0,6,8,4,2,11,16,12,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_index'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__set_index_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(10) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 5);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		libs__lp__set_index_5_0_i6);
MR_def_label(libs__lp__set_index_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(libs__lp__set_index_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(list__member_2_0,
		libs__lp__set_index_5_0_i8);
MR_def_label(libs__lp__set_index_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__lp__set_index_5_0_i2);
	}
MR_def_label(libs__lp__set_index_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("libs.lp", 7);
	MR_r2 = (MR_Word) MR_string_const("predicate \140libs.lp.set_index\'/5", 31);
	MR_r3 = (MR_Word) MR_string_const("attempt to write shunned row/col", 32);
	MR_np_call_localret_ent(require__unexpected_3_0,
		libs__lp__set_index_5_0_i11);
MR_def_label(libs__lp__set_index_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(8);
	MR_r4 = MR_sv(10);
	}
MR_def_label(libs__lp__set_index_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(3)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(libs__lp__set_index_5_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(map__delete_3_0,
		libs__lp__set_index_5_0_i16);
MR_def_label(libs__lp__set_index_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_sv(8);
	MR_tfield(0, MR_r2, 5) = MR_sv(9);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(libs__lp__set_index_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__lp__set_index_5_0_i20);
MR_def_label(libs__lp__set_index_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_sv(8);
	MR_tfield(0, MR_r2, 5) = MR_sv(9);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(libs__lp_module2)
	MR_init_entry1(libs__lp__insert_coeffs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__insert_coeffs_5_0);
	MR_init_label4(libs__lp__insert_coeffs_5_0,15,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_coeffs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__insert_coeffs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(libs__lp__insert_coeffs_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__insert_coeffs_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(libs__lp__insert_coeffs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		libs__lp__insert_coeffs_5_0_i5);
MR_def_label(libs__lp__insert_coeffs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(libs__lp__set_index_5_0,
		libs__lp__insert_coeffs_5_0_i6);
MR_def_label(libs__lp__insert_coeffs_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(libs__lp__insert_coeffs_5_0_i15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(libs__lp_module3)
	MR_init_entry1(libs__lp__index_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__index_4_0);
	MR_init_label7(libs__lp__index_4_0,6,8,4,2,11,15,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'index'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__index_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(0, MR_r1, 6);
	MR_sv(3) = MR_tfield(0, MR_r1, 5);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(list__member_2_0,
		libs__lp__index_4_0_i6);
MR_def_label(libs__lp__index_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(libs__lp__index_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_0,
		libs__lp__index_4_0_i8);
MR_def_label(libs__lp__index_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__lp__index_4_0_i2);
	}
MR_def_label(libs__lp__index_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("libs.lp", 7);
	MR_r2 = (MR_Word) MR_string_const("predicate \140libs.lp.index\'/4", 27);
	MR_r3 = (MR_Word) MR_string_const("attempt to address shunned row/col", 34);
	MR_np_call_localret_ent(require__unexpected_3_0,
		libs__lp__index_4_0_i11);
MR_def_label(libs__lp__index_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r3 = MR_sv(4);
MR_def_label(libs__lp__index_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(map__search_3_0,
		libs__lp__index_4_0_i15);
MR_def_label(libs__lp__index_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__lp__index_4_0_i12);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(libs__lp__index_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(solutions__aggregate_4_3);
static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;

MR_BEGIN_MODULE(libs__lp_module4)
	MR_init_entry1(libs__lp__pivot_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__pivot_4_0);
	MR_init_label4(libs__lp__pivot_4_0,2,5,8,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pivot'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__pivot_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__pivot_4_0_i2);
MR_def_label(libs__lp__pivot_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__pivot__635__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr4 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__pivot__642__1_6_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 5) = MR_r1;
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(libs__lp, cell);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(libs__lp, tableau);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r5 = MR_tfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(solutions__aggregate_4_3,
		libs__lp__pivot_4_0_i5);
MR_def_label(libs__lp__pivot_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__pivot__651__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r5 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(solutions__aggregate_4_3,
		libs__lp__pivot_4_0_i8);
MR_def_label(libs__lp__pivot_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__all_cols0_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__pivot__661__1_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(3);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r5 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(solutions__aggregate_4_3,
		libs__lp__pivot_4_0_i11);
MR_def_label(libs__lp__pivot_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__lp__set_index_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module5)
	MR_init_entry1(libs__lp__simplex_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__simplex_3_0);
	MR_init_label6(libs__lp__simplex_3_0,29,6,8,11,13,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplex'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__simplex_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(libs__lp__simplex_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__all_cols_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(solutions__aggregate_4_3,
		libs__lp__simplex_3_0_i6);
MR_def_label(libs__lp__simplex_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__simplex_3_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(libs__lp__simplex_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__all_rows_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(solutions__aggregate_4_3,
		libs__lp__simplex_3_0_i11);
MR_def_label(libs__lp__simplex_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__simplex_3_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(libs__lp__simplex_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(libs__lp__pivot_4_0,
		libs__lp__simplex_3_0_i32);
MR_def_label(libs__lp__simplex_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(libs__lp__simplex_3_0_i29);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(libs__lp_module6)
	MR_init_entry1(libs__lp__optimize_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__optimize_4_0);
	MR_init_label5(libs__lp__optimize_4_0,2,4,5,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__optimize_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(libs__lp__simplex_3_0,
		libs__lp__optimize_4_0_i2);
MR_def_label(libs__lp__optimize_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(libs__lp__optimize_4_0_i4);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(libs__lp__optimize_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__optimize_4_0_i5);
MR_def_label(libs__lp__optimize_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__extract_obj_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(6) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		libs__lp__optimize_4_0_i8);
MR_def_label(libs__lp__optimize_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		libs__lp__optimize_4_0_i10);
MR_def_label(libs__lp__optimize_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(libs__lp_module7)
	MR_init_entry1(libs__lp__one_phase_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__one_phase_5_0);
	MR_init_label9(libs__lp__one_phase_5_0,2,4,5,6,7,9,10,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'one_phase'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__one_phase_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(libs__lp__insert_coeffs_5_0,
		libs__lp__one_phase_5_0_i2);
MR_def_label(libs__lp__one_phase_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__set__init_0_0,
		libs__lp__one_phase_5_0_i4);
MR_def_label(libs__lp__one_phase_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__get_vars_from_coeffs_2_3_0,
		libs__lp__one_phase_5_0_i5);
MR_def_label(libs__lp__one_phase_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		libs__lp__one_phase_5_0_i6);
MR_def_label(libs__lp__one_phase_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__lp__simplex_3_0,
		libs__lp__one_phase_5_0_i7);
MR_def_label(libs__lp__one_phase_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(libs__lp__one_phase_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(libs__lp__one_phase_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__one_phase_5_0_i10);
MR_def_label(libs__lp__one_phase_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__extract_obj_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		libs__lp__one_phase_5_0_i12);
MR_def_label(libs__lp__one_phase_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		libs__lp__one_phase_5_0_i14);
MR_def_label(libs__lp__one_phase_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module8)
	MR_init_entry1(libs__lp__construct_art_objective_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__construct_art_objective_2_0);
	MR_init_label3(libs__lp__construct_art_objective_2_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_art_objective'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__construct_art_objective_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__construct_art_objective_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(libs__lp__construct_art_objective_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break;
	} /* end while */
MR_def_label(libs__lp__construct_art_objective_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(libs__lp__construct_art_objective_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);

MR_BEGIN_MODULE(libs__lp_module9)
	MR_init_entry1(libs__lp__ensure_zero_obj_coeffs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__ensure_zero_obj_coeffs_3_0);
	MR_init_label9(libs__lp__ensure_zero_obj_coeffs_3_0,41,3,5,6,7,12,15,18,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_zero_obj_coeffs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__ensure_zero_obj_coeffs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(libs__lp__ensure_zero_obj_coeffs_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__ensure_zero_obj_coeffs_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(libs__lp__ensure_zero_obj_coeffs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tfield(0, MR_sv(1), 2);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		libs__lp__ensure_zero_obj_coeffs_3_0_i5);
MR_def_label(libs__lp__ensure_zero_obj_coeffs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__ensure_zero_obj_coeffs_3_0_i6);
MR_def_label(libs__lp__ensure_zero_obj_coeffs_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(libs__lp__ensure_zero_obj_coeffs_3_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(libs__lp__ensure_zero_obj_coeffs_3_0_i41);
MR_def_label(libs__lp__ensure_zero_obj_coeffs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(solutions__solutions_2_1,
		libs__lp__ensure_zero_obj_coeffs_3_0_i12);
MR_def_label(libs__lp__ensure_zero_obj_coeffs_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__ensure_zero_obj_coeffs_3_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = MR_float_to_word(((MR_Float) 0.0000000000000000 - MR_word_to_float(MR_tempr1)));
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		libs__lp__ensure_zero_obj_coeffs_3_0_i15);
MR_def_label(libs__lp__ensure_zero_obj_coeffs_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__all_cols0_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__row_op__674__1_6_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 5) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__lp, tableau);
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(solutions__aggregate_4_3,
		libs__lp__ensure_zero_obj_coeffs_3_0_i18);
MR_def_label(libs__lp__ensure_zero_obj_coeffs_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(libs__lp__ensure_zero_obj_coeffs_3_0_i41);
	}
MR_def_label(libs__lp__ensure_zero_obj_coeffs_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("libs.lp", 7);
	MR_r2 = (MR_Word) MR_string_const("predicate \140libs.lp.ensure_zero_obj_coeffs\'/3", 44);
	MR_r3 = (MR_Word) MR_string_const("problem with artificial variable", 32);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module10)
	MR_init_entry1(libs__lp__remove_col_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__remove_col_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_col'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__remove_col_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tempr1;
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module11)
	MR_init_entry1(libs__lp__fix_basis_and_rem_cols_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__fix_basis_and_rem_cols_3_0);
	MR_init_label10(libs__lp__fix_basis_and_rem_cols_3_0,58,3,5,10,16,18,22,23,11,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_basis_and_rem_cols'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__fix_basis_and_rem_cols_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(libs__lp__fix_basis_and_rem_cols_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__fix_basis_and_rem_cols_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(libs__lp__fix_basis_and_rem_cols_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tfield(0, MR_sv(1), 2);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		libs__lp__fix_basis_and_rem_cols_3_0_i5);
MR_def_label(libs__lp__fix_basis_and_rem_cols_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__all_rows_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(solutions__aggregate_4_3,
		libs__lp__fix_basis_and_rem_cols_3_0_i10);
MR_def_label(libs__lp__fix_basis_and_rem_cols_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__fix_basis_and_rem_cols_3_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(libs__lp__fix_basis_and_rem_cols_3_0_i11);
	}
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_tempr1) != (MR_Float) 1.0000000000000000)) {
		MR_GOTO_LAB(libs__lp__fix_basis_and_rem_cols_3_0_i11);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(3);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 5);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		libs__lp__fix_basis_and_rem_cols_3_0_i16);
MR_def_label(libs__lp__fix_basis_and_rem_cols_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__fix_basis_and_rem_cols_3_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tempr4 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr4, 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_r2, 4) = MR_tempr2;
	MR_tfield(0, MR_r2, 5) = MR_tempr1;
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr4, 6);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(libs__lp__remove_col_3_0,
		libs__lp__fix_basis_and_rem_cols_3_0_i25);
MR_def_label(libs__lp__fix_basis_and_rem_cols_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(libs__lp__pivot_4_0,
		libs__lp__fix_basis_and_rem_cols_3_0_i22);
MR_def_label(libs__lp__fix_basis_and_rem_cols_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__remove_col_3_0,
		libs__lp__fix_basis_and_rem_cols_3_0_i23);
MR_def_label(libs__lp__fix_basis_and_rem_cols_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__remove_col_3_0,
		libs__lp__fix_basis_and_rem_cols_3_0_i25);
MR_def_label(libs__lp__fix_basis_and_rem_cols_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(libs__lp__remove_col_3_0,
		libs__lp__fix_basis_and_rem_cols_3_0_i25);
MR_def_label(libs__lp__fix_basis_and_rem_cols_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(libs__lp__fix_basis_and_rem_cols_3_0_i58);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module12)
	MR_init_entry1(libs__lp__get_basis_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__get_basis_vars_2_0);
	MR_init_label1(libs__lp__get_basis_vars_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_basis_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__get_basis_vars_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(solutions__solutions_2_1,
		libs__lp__get_basis_vars_2_0_i3);
MR_def_label(libs__lp__get_basis_vars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(solutions__solutions_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module13)
	MR_init_entry1(libs__lp__two_phase_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__two_phase_6_0);
	MR_init_label10(libs__lp__two_phase_6_0,2,3,4,5,7,8,11,13,14,17)
	MR_init_label7(libs__lp__two_phase_6_0,18,19,20,21,22,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'two_phase'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__two_phase_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__construct_art_objective_2_0,
		libs__lp__two_phase_6_0_i2);
MR_def_label(libs__lp__two_phase_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(libs__lp__insert_coeffs_5_0,
		libs__lp__two_phase_6_0_i3);
MR_def_label(libs__lp__two_phase_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__ensure_zero_obj_coeffs_3_0,
		libs__lp__two_phase_6_0_i4);
MR_def_label(libs__lp__two_phase_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__lp__simplex_3_0,
		libs__lp__two_phase_6_0_i5);
MR_def_label(libs__lp__two_phase_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(libs__lp__two_phase_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(libs__lp__two_phase_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__two_phase_6_0_i8);
MR_def_label(libs__lp__two_phase_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__extract_obj_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(4) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(9) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		libs__lp__two_phase_6_0_i11);
MR_def_label(libs__lp__two_phase_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		libs__lp__two_phase_6_0_i13);
MR_def_label(libs__lp__two_phase_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(4)) == (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(libs__lp__two_phase_6_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(libs__lp__two_phase_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(libs__lp__fix_basis_and_rem_cols_3_0,
		libs__lp__two_phase_6_0_i17);
MR_def_label(libs__lp__two_phase_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__insert_coeffs_5_0,
		libs__lp__two_phase_6_0_i18);
MR_def_label(libs__lp__two_phase_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(libs__lp__get_basis_vars_2_0,
		libs__lp__two_phase_6_0_i19);
MR_def_label(libs__lp__two_phase_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__lp__ensure_zero_obj_coeffs_3_0,
		libs__lp__two_phase_6_0_i20);
MR_def_label(libs__lp__two_phase_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__init_0_0,
		libs__lp__two_phase_6_0_i21);
MR_def_label(libs__lp__two_phase_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__get_vars_from_coeffs_2_3_0,
		libs__lp__two_phase_6_0_i22);
MR_def_label(libs__lp__two_phase_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		libs__lp__two_phase_6_0_i23);
MR_def_label(libs__lp__two_phase_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__lp__optimize_4_0,
		libs__lp__two_phase_6_0_i24);
MR_def_label(libs__lp__two_phase_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(libs__lp_module14)
	MR_init_entry1(libs__lp__negate_equation_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__negate_equation_2_0);
	MR_init_label4(libs__lp__negate_equation_2_0,3,7,2,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'negate_equation'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__negate_equation_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(libs__lp__negate_equation_2_0_i3);
	}
	MR_r4 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_GOTO_LAB(libs__lp__negate_equation_2_0_i2);
MR_def_label(libs__lp__negate_equation_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(libs__lp__negate_equation_2_0_i7);
	}
	MR_r4 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_GOTO_LAB(libs__lp__negate_equation_2_0_i2);
MR_def_label(libs__lp__negate_equation_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
MR_def_label(libs__lp__negate_equation_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__lp__negate_equation_2_0_i14);
MR_def_label(libs__lp__negate_equation_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_float_to_word(((MR_Float) 0.0000000000000000 - MR_word_to_float(MR_sv(1))));
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(map__to_assoc_list_2_0);

MR_BEGIN_MODULE(libs__lp_module15)
	MR_init_entry1(libs__lp__simplify_coeffs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__simplify_coeffs_2_0);
	MR_init_label2(libs__lp__simplify_coeffs_2_0,3,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_coeffs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__simplify_coeffs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(3) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(map__init_1_0,
		libs__lp__simplify_coeffs_2_0_i3);
MR_def_label(libs__lp__simplify_coeffs_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		libs__lp__simplify_coeffs_2_0_i7);
MR_def_label(libs__lp__simplify_coeffs_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__to_assoc_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(libs__lp_module16)
	MR_init_entry1(libs__lp__expand_urs_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__expand_urs_vars_4_0);
	MR_init_label4(libs__lp__expand_urs_vars_4_0,29,3,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_urs_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__expand_urs_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(libs__lp__expand_urs_vars_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__expand_urs_vars_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
MR_def_label(libs__lp__expand_urs_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tempr1;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		libs__lp__expand_urs_vars_4_0_i7);
MR_def_label(libs__lp__expand_urs_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__lp__expand_urs_vars_4_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 1);
	MR_tempr5 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_float_to_word(((MR_Float) 0.0000000000000000 - MR_word_to_float(MR_tempr5)));
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(libs__lp__expand_urs_vars_4_0_i29);
	}
MR_def_label(libs__lp__expand_urs_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(libs__lp__expand_urs_vars_4_0_i29);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(libs__lp_module17)
	MR_init_entry1(libs__lp__expand_urs_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__expand_urs_vars_3_0);
	MR_init_label1(libs__lp__expand_urs_vars_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_urs_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__expand_urs_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(libs__lp__expand_urs_vars_4_0,
		libs__lp__expand_urs_vars_3_0_i2);
MR_def_label(libs__lp__expand_urs_vars_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(list__reverse_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(libs__lp_module18)
	MR_init_entry1(libs__lp__collect_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__collect_vars_3_0);
	MR_init_label1(libs__lp__collect_vars_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'collect_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__collect_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		libs__lp__collect_vars_3_0_i4);
MR_def_label(libs__lp__collect_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(libs__lp_module19)
	MR_init_entry1(libs__lp__number_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__number_vars_4_0);
	MR_init_label3(libs__lp__number_vars_4_0,14,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'number_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__number_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(libs__lp__number_vars_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__number_vars_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(libs__lp__number_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		libs__lp__number_vars_4_0_i5);
MR_def_label(libs__lp__number_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(libs__lp__number_vars_4_0_i14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module20)
	MR_init_entry1(libs__lp__insert_equations_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__insert_equations_6_0);
	MR_init_label4(libs__lp__insert_equations_6_0,11,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_equations'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__insert_equations_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(libs__lp__insert_equations_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__insert_equations_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
MR_def_label(libs__lp__insert_equations_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(libs__lp__insert_coeffs_5_0,
		libs__lp__insert_equations_6_0_i4);
MR_def_label(libs__lp__insert_equations_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__set_index_5_0,
		libs__lp__insert_equations_6_0_i5);
MR_def_label(libs__lp__insert_equations_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(libs__lp__insert_equations_6_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module21)
	MR_init_entry1(libs__lp__init_tableau_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__init_tableau_5_0);
	MR_init_label1(libs__lp__init_tableau_5_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_tableau'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__init_tableau_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		libs__lp__init_tableau_5_0_i3);
MR_def_label(libs__lp__init_tableau_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module22)
	MR_init_entry1(libs__lp__get_urs_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__get_urs_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_urs_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__get_urs_vars_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(list__length_2_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(libs__lp_module23)
	MR_init_entry1(libs__lp__lp_solve_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__lp_solve_2_8_0);
	MR_init_label10(libs__lp__lp_solve_2_8_0,3,4,10,11,12,13,14,15,16,17)
	MR_init_label10(libs__lp__lp_solve_2_8_0,18,19,21,23,7,24,25,26,27,28)
	MR_init_label7(libs__lp__lp_solve_2_8_0,29,30,31,32,34,36,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lp_solve_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__lp_solve_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp, equation);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(libs__lp, lp_info);
	MR_tempr2 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		libs__lp__lp_solve_2_8_0_i3);
MR_def_label(libs__lp__lp_solve_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_r2, 1);
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp, equation);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		libs__lp__lp_solve_2_8_0_i4);
MR_def_label(libs__lp__lp_solve_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(libs__lp__lp_solve_2_8_0_i7);
	}
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_sv(8), 3);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__lp__lp_solve_2_8_0_i10);
MR_def_label(libs__lp__lp_solve_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__lp__simplify_coeffs_2_0,
		libs__lp__lp_solve_2_8_0_i11);
MR_def_label(libs__lp__lp_solve_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__lp__expand_urs_vars_3_0,
		libs__lp__lp_solve_2_8_0_i12);
MR_def_label(libs__lp__lp_solve_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(libs__lp__collect_vars_3_0,
		libs__lp__lp_solve_2_8_0_i13);
MR_def_label(libs__lp__lp_solve_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		libs__lp__lp_solve_2_8_0_i14);
MR_def_label(libs__lp__lp_solve_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		libs__lp__lp_solve_2_8_0_i15);
MR_def_label(libs__lp__lp_solve_2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		libs__lp__lp_solve_2_8_0_i16);
MR_def_label(libs__lp__lp_solve_2_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__number_vars_4_0,
		libs__lp__lp_solve_2_8_0_i17);
MR_def_label(libs__lp__lp_solve_2_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__init_tableau_5_0,
		libs__lp__lp_solve_2_8_0_i18);
MR_def_label(libs__lp__lp_solve_2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__insert_equations_6_0,
		libs__lp__lp_solve_2_8_0_i19);
MR_def_label(libs__lp__lp_solve_2_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(libs__lp__lp_solve_2_8_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__one_phase_5_0,
		libs__lp__lp_solve_2_8_0_i23);
MR_def_label(libs__lp__lp_solve_2_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__two_phase_6_0,
		libs__lp__lp_solve_2_8_0_i23);
MR_def_label(libs__lp__lp_solve_2_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(libs__lp__lp_solve_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_sv(8), 3);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__lp__simplify_coeffs_2_0,
		libs__lp__lp_solve_2_8_0_i24);
MR_def_label(libs__lp__lp_solve_2_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__lp__expand_urs_vars_3_0,
		libs__lp__lp_solve_2_8_0_i25);
MR_def_label(libs__lp__lp_solve_2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(libs__lp__collect_vars_3_0,
		libs__lp__lp_solve_2_8_0_i26);
MR_def_label(libs__lp__lp_solve_2_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		libs__lp__lp_solve_2_8_0_i27);
MR_def_label(libs__lp__lp_solve_2_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		libs__lp__lp_solve_2_8_0_i28);
MR_def_label(libs__lp__lp_solve_2_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		libs__lp__lp_solve_2_8_0_i29);
MR_def_label(libs__lp__lp_solve_2_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__number_vars_4_0,
		libs__lp__lp_solve_2_8_0_i30);
MR_def_label(libs__lp__lp_solve_2_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__init_tableau_5_0,
		libs__lp__lp_solve_2_8_0_i31);
MR_def_label(libs__lp__lp_solve_2_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__insert_equations_6_0,
		libs__lp__lp_solve_2_8_0_i32);
MR_def_label(libs__lp__lp_solve_2_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(libs__lp__lp_solve_2_8_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__one_phase_5_0,
		libs__lp__lp_solve_2_8_0_i36);
MR_def_label(libs__lp__lp_solve_2_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__two_phase_6_0,
		libs__lp__lp_solve_2_8_0_i36);
MR_def_label(libs__lp__lp_solve_2_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__lp_solve_2_8_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_float_to_word(((MR_Float) 0.0000000000000000 - MR_word_to_float(MR_tfield(1, MR_r1, 0))));
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
MR_def_label(libs__lp__lp_solve_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module24)
	MR_init_entry1(libs__lp__lp_solve_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__lp_solve_8_0);
	MR_init_label2(libs__lp__lp_solve_8_0,4,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lp_solve'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__lp__lp_solve_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(8) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(map__init_1_0,
		libs__lp__lp_solve_8_0_i4);
MR_def_label(libs__lp__lp_solve_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,13);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,7);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		libs__lp__lp_solve_8_0_i10);
MR_def_label(libs__lp__lp_solve_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__lp__lp_solve_2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module25)
	MR_init_entry1(libs__lp__simplify_eq_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__simplify_eq_2_0);
	MR_init_label3(libs__lp__simplify_eq_2_0,3,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_eq'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__simplify_eq_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(5) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(map__init_1_0,
		libs__lp__simplify_eq_2_0_i3);
MR_def_label(libs__lp__simplify_eq_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		libs__lp__simplify_eq_2_0_i7);
MR_def_label(libs__lp__simplify_eq_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		libs__lp__simplify_eq_2_0_i8);
MR_def_label(libs__lp__simplify_eq_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module26)
	MR_init_entry1(libs__lp__expand_urs_vars_e_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__expand_urs_vars_e_3_0);
	MR_init_label2(libs__lp__expand_urs_vars_e_3_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_urs_vars_e'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__expand_urs_vars_e_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(libs__lp__expand_urs_vars_4_0,
		libs__lp__expand_urs_vars_e_3_0_i2);
MR_def_label(libs__lp__expand_urs_vars_e_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		libs__lp__expand_urs_vars_e_3_0_i5);
MR_def_label(libs__lp__expand_urs_vars_e_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_var_3_0);

MR_BEGIN_MODULE(libs__lp_module27)
	MR_init_entry1(libs__lp__new_slack_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__new_slack_var_3_0);
	MR_init_label1(libs__lp__new_slack_var_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_slack_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__new_slack_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(varset__new_var_3_0,
		libs__lp__new_slack_var_3_0_i2);
MR_def_label(libs__lp__new_slack_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr3 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module28)
	MR_init_entry1(libs__lp__new_art_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__new_art_var_3_0);
	MR_init_label1(libs__lp__new_art_var_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_art_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__new_art_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(varset__new_var_3_0,
		libs__lp__new_art_var_3_0_i2);
MR_def_label(libs__lp__new_art_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr3 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_neg1pt0000000000000000 = -1.0000000000000000;

MR_BEGIN_MODULE(libs__lp_module29)
	MR_init_entry1(libs__lp__standardize_equation_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__standardize_equation_4_0);
	MR_init_label10(libs__lp__standardize_equation_4_0,96,6,10,5,17,4,20,24,3,28)
	MR_init_label10(libs__lp__standardize_equation_4_0,31,35,36,27,40,39,42,43,49,50)
	MR_init_label1(libs__lp__standardize_equation_4_0,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'standardize_equation'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__standardize_equation_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(libs__lp__standardize_equation_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(libs__lp__standardize_equation_4_0_i3);
	}
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	if ((MR_word_to_float(MR_sv(1)) >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(libs__lp__standardize_equation_4_0_i4);
	}
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(libs__lp__standardize_equation_4_0_i6);
	}
	MR_sv(2) = MR_r2;
	MR_r4 = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,9);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_GOTO_LAB(libs__lp__standardize_equation_4_0_i5);
MR_def_label(libs__lp__standardize_equation_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(libs__lp__standardize_equation_4_0_i10);
	}
	MR_sv(2) = MR_r2;
	MR_r4 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,10);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_GOTO_LAB(libs__lp__standardize_equation_4_0_i5);
MR_def_label(libs__lp__standardize_equation_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r4 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,11);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
MR_def_label(libs__lp__standardize_equation_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__lp__standardize_equation_4_0_i17);
MR_def_label(libs__lp__standardize_equation_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_float_to_word(((MR_Float) 0.0000000000000000 - MR_word_to_float(MR_sv(1))));
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(libs__lp__standardize_equation_4_0_i96);
	}
MR_def_label(libs__lp__standardize_equation_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(libs__lp__new_art_var_3_0,
		libs__lp__standardize_equation_4_0_i20);
MR_def_label(libs__lp__standardize_equation_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r1, 2) = MR_sv(1);
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(libs__lp__simplify_eq_2_0,
		libs__lp__standardize_equation_4_0_i24);
MR_def_label(libs__lp__standardize_equation_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(libs__lp__expand_urs_vars_e_3_0,
		libs__lp__standardize_equation_4_0_i51);
MR_def_label(libs__lp__standardize_equation_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(libs__lp__standardize_equation_4_0_i27);
	}
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	if ((MR_word_to_float(MR_sv(1)) >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(libs__lp__standardize_equation_4_0_i28);
	}
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(libs__lp__negate_equation_2_0,
		libs__lp__standardize_equation_4_0_i40);
MR_def_label(libs__lp__standardize_equation_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(libs__lp__new_slack_var_3_0,
		libs__lp__standardize_equation_4_0_i31);
MR_def_label(libs__lp__standardize_equation_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r1, 2) = MR_sv(1);
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(libs__lp__simplify_eq_2_0,
		libs__lp__standardize_equation_4_0_i35);
MR_def_label(libs__lp__standardize_equation_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__lp__get_urs_vars_2_0,
		libs__lp__standardize_equation_4_0_i36);
MR_def_label(libs__lp__standardize_equation_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__expand_urs_vars_e_3_0,
		libs__lp__standardize_equation_4_0_i51);
MR_def_label(libs__lp__standardize_equation_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	if ((MR_word_to_float(MR_sv(1)) >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(libs__lp__standardize_equation_4_0_i39);
	}
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(libs__lp__negate_equation_2_0,
		libs__lp__standardize_equation_4_0_i40);
MR_def_label(libs__lp__standardize_equation_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(libs__lp__standardize_equation_4_0_i96);
MR_def_label(libs__lp__standardize_equation_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(libs__lp__new_slack_var_3_0,
		libs__lp__standardize_equation_4_0_i42);
MR_def_label(libs__lp__standardize_equation_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(libs__lp__new_art_var_3_0,
		libs__lp__standardize_equation_4_0_i43);
MR_def_label(libs__lp__standardize_equation_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_neg1pt0000000000000000;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 2) = MR_sv(1);
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(libs__lp__simplify_eq_2_0,
		libs__lp__standardize_equation_4_0_i49);
MR_def_label(libs__lp__standardize_equation_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__lp__get_urs_vars_2_0,
		libs__lp__standardize_equation_4_0_i50);
MR_def_label(libs__lp__standardize_equation_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__expand_urs_vars_e_3_0,
		libs__lp__standardize_equation_4_0_i51);
MR_def_label(libs__lp__standardize_equation_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module30)
	MR_init_entry1(libs__lp__extract_obj_var2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__extract_obj_var2_3_0);
	MR_init_label3(libs__lp__extract_obj_var2_3_0,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extract_obj_var2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__extract_obj_var2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tfield(0, MR_sv(1), 2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		libs__lp__extract_obj_var2_3_0_i3);
MR_def_label(libs__lp__extract_obj_var2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,8);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_np_call_localret_ent(solutions__solutions_2_1,
		libs__lp__extract_obj_var2_3_0_i5);
MR_def_label(libs__lp__extract_obj_var2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__extract_obj_var2_3_0_i6);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__lp__extract_obj_var2_3_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(2);
MR_def_label(libs__lp__extract_obj_var2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(libs__lp_module31)
	MR_init_entry1(libs__lp__extract_obj_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__extract_obj_var_4_0);
	MR_init_label10(libs__lp__extract_obj_var_4_0,5,7,9,10,13,14,16,17,2,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extract_obj_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__extract_obj_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r4 = MR_tfield(0, MR_sv(1), 3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		libs__lp__extract_obj_var_4_0_i5);
MR_def_label(libs__lp__extract_obj_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__lp__extract_obj_var_4_0_i2);
	}
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tfield(0, MR_sv(1), 2);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		libs__lp__extract_obj_var_4_0_i7);
MR_def_label(libs__lp__extract_obj_var_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,9);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_np_call_localret_ent(solutions__solutions_2_1,
		libs__lp__extract_obj_var_4_0_i9);
MR_def_label(libs__lp__extract_obj_var_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__extract_obj_var_4_0_i10);
	}
	MR_r6 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(libs__lp__extract_obj_var_4_0_i10);
	}
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tfield(0, MR_sv(1), 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_GOTO_LAB(libs__lp__extract_obj_var_4_0_i13);
MR_def_label(libs__lp__extract_obj_var_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_sv(3) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tfield(0, MR_sv(1), 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
MR_def_label(libs__lp__extract_obj_var_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		libs__lp__extract_obj_var_4_0_i14);
MR_def_label(libs__lp__extract_obj_var_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,10);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_np_call_localret_ent(solutions__solutions_2_1,
		libs__lp__extract_obj_var_4_0_i16);
MR_def_label(libs__lp__extract_obj_var_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__lp__extract_obj_var_4_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(libs__lp__extract_obj_var_4_0_i17);
	}
	MR_r4 = MR_sv(2);
	MR_r5 = MR_float_to_word((MR_word_to_float(MR_sv(3)) - MR_word_to_float(MR_tfield(1, MR_r1, 0))));
	MR_r6 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
MR_def_label(libs__lp__extract_obj_var_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r5 = MR_float_to_word((MR_word_to_float(MR_sv(3)) - (MR_Float) 0.0000000000000000));
	MR_r6 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_def_label(libs__lp__extract_obj_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(libs__lp__extract_obj_var2_3_0,
		libs__lp__extract_obj_var_4_0_i21);
MR_def_label(libs__lp__extract_obj_var_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r6 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(libs__lp_module32)
	MR_init_entry1(libs__lp__between_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__between_3_0);
	MR_init_label2(libs__lp__between_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'between'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__between_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred libs.lp.between/3-0", 2);
MR_def_label(libs__lp__between_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__lp__between_3_0_i2);
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_succeed();
MR_def_label(libs__lp__between_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = ((MR_Integer) MR_fv(1) + (MR_Integer) 1);
	MR_r2 = MR_fv(2);
	MR_GOTO_LAB(libs__lp__between_3_0_i4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(libs__lp_module33)
	MR_init_entry1(libs__lp__all_rows_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__all_rows_2_0);
	MR_init_label2(libs__lp__all_rows_2_0,1,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_rows'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__all_rows_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.lp.all_rows/2-0", 2,
		MR_ENTRY(MR_do_fail));
	MR_fv(2) = MR_tfield(0, MR_r1, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(libs__lp__between_3_0,
		libs__lp__all_rows_2_0_i1);
MR_def_label(libs__lp__all_rows_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_fv(1);
	MR_r3 = MR_fv(2);
	MR_np_call_localret_ent(list__member_2_0,
		libs__lp__all_rows_2_0_i3);
MR_def_label(libs__lp__all_rows_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(1);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module34)
	MR_init_entry1(libs__lp__all_cols0_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__all_cols0_2_0);
	MR_init_label2(libs__lp__all_cols0_2_0,1,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_cols0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__all_cols0_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.lp.all_cols0/2-0", 2,
		MR_ENTRY(MR_do_fail));
	MR_fv(2) = MR_tfield(0, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(libs__lp__between_3_0,
		libs__lp__all_cols0_2_0_i1);
MR_def_label(libs__lp__all_cols0_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_fv(1);
	MR_r3 = MR_fv(2);
	MR_np_call_localret_ent(list__member_2_0,
		libs__lp__all_cols0_2_0_i3);
MR_def_label(libs__lp__all_cols0_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(1);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module35)
	MR_init_entry1(libs__lp__all_cols_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__all_cols_2_0);
	MR_init_label2(libs__lp__all_cols_2_0,1,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_cols'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__all_cols_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.lp.all_cols/2-0", 2,
		MR_ENTRY(MR_do_fail));
	MR_fv(2) = MR_tfield(0, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr1, 1) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(libs__lp__between_3_0,
		libs__lp__all_cols_2_0_i1);
MR_def_label(libs__lp__all_cols_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_fv(1);
	MR_r3 = MR_fv(2);
	MR_np_call_localret_ent(list__member_2_0,
		libs__lp__all_cols_2_0_i3);
MR_def_label(libs__lp__all_cols_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(1);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module36)
	MR_init_entry1(__Unify___libs__lp__cell_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__lp__cell_0_0);
	MR_init_label2(__Unify___libs__lp__cell_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__lp__cell_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__lp__cell_0_0_i4);
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
		MR_GOTO_LAB(__Unify___libs__lp__cell_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___libs__lp__cell_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__lp__cell_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(libs__lp_module37)
	MR_init_entry1(__Compare___libs__lp__cell_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__lp__cell_0_0);
	MR_init_label4(__Compare___libs__lp__cell_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__lp__cell_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__lp__cell_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___libs__lp__cell_0_0_i2);
MR_def_label(__Compare___libs__lp__cell_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___libs__lp__cell_0_0,2)
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
		__Compare___libs__lp__cell_0_0_i5);
MR_def_label(__Compare___libs__lp__cell_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__cell_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___libs__lp__cell_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___pair__pair_2_0);

MR_BEGIN_MODULE(libs__lp_module38)
	MR_init_entry1(__Unify___libs__lp__coeff_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__lp__coeff_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__lp__coeff_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___pair__pair_2_0);

MR_BEGIN_MODULE(libs__lp_module39)
	MR_init_entry1(__Compare___libs__lp__coeff_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__lp__coeff_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__lp__coeff_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module40)
	MR_init_entry1(__Unify___libs__lp__direction_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__lp__direction_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__lp__direction_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module41)
	MR_init_entry1(__Compare___libs__lp__direction_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__lp__direction_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__lp__direction_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(libs__lp_module42)
	MR_init_entry1(__Unify___libs__lp__equation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__lp__equation_0_0);
	MR_init_label3(__Unify___libs__lp__equation_0_0,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__lp__equation_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__lp__equation_0_0_i8);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___libs__lp__equation_0_0_i6);
MR_def_label(__Unify___libs__lp__equation_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__lp__equation_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___libs__lp__equation_0_0_i1);
	}
	MR_r1 = (MR_word_to_float(MR_sv(2)) == MR_word_to_float(MR_sv(4)));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___libs__lp__equation_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__lp__equation_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(libs__lp_module43)
	MR_init_entry1(__Compare___libs__lp__equation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__lp__equation_0_0);
	MR_init_label5(__Compare___libs__lp__equation_0_0,3,2,7,11,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__lp__equation_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__lp__equation_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___libs__lp__equation_0_0_i2);
MR_def_label(__Compare___libs__lp__equation_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___libs__lp__equation_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___libs__lp__equation_0_0_i7);
MR_def_label(__Compare___libs__lp__equation_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__equation_0_0_i40);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__lp__equation_0_0_i11);
MR_def_label(__Compare___libs__lp__equation_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__equation_0_0_i40);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___libs__lp__equation_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module44)
	MR_init_entry1(__Unify___libs__lp__equations_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__lp__equations_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__lp__equations_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp, equation);
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


MR_BEGIN_MODULE(libs__lp_module45)
	MR_init_entry1(__Compare___libs__lp__equations_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__lp__equations_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__lp__equations_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp, equation);
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

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(libs__lp_module46)
	MR_init_entry1(__Unify___libs__lp__lp_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__lp__lp_info_0_0);
	MR_init_label5(__Unify___libs__lp__lp_info_0_0,4,8,10,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__lp__lp_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__lp__lp_info_0_0_i14);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___libs__lp__lp_info_0_0_i4);
MR_def_label(__Unify___libs__lp__lp_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__lp__lp_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___libs__lp__lp_info_0_0_i8);
MR_def_label(__Unify___libs__lp__lp_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__lp__lp_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___libs__lp__lp_info_0_0_i10);
MR_def_label(__Unify___libs__lp__lp_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__lp__lp_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___libs__lp__lp_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__lp__lp_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(libs__lp_module47)
	MR_init_entry1(__Compare___libs__lp__lp_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__lp__lp_info_0_0);
	MR_init_label6(__Compare___libs__lp__lp_info_0_0,3,2,5,11,16,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__lp__lp_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__lp__lp_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___libs__lp__lp_info_0_0_i2);
MR_def_label(__Compare___libs__lp__lp_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___libs__lp__lp_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___libs__lp__lp_info_0_0_i5);
MR_def_label(__Compare___libs__lp__lp_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__lp_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___libs__lp__lp_info_0_0_i11);
MR_def_label(__Compare___libs__lp__lp_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__lp_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___libs__lp__lp_info_0_0_i16);
MR_def_label(__Compare___libs__lp__lp_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__lp_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___libs__lp__lp_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module48)
	MR_init_entry1(__Unify___libs__lp__objective_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__lp__objective_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__lp__objective_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
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


MR_BEGIN_MODULE(libs__lp_module49)
	MR_init_entry1(__Compare___libs__lp__objective_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__lp__objective_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__lp__objective_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
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


MR_BEGIN_MODULE(libs__lp_module50)
	MR_init_entry1(__Unify___libs__lp__operator_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__lp__operator_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__lp__operator_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module51)
	MR_init_entry1(__Compare___libs__lp__operator_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__lp__operator_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__lp__operator_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module52)
	MR_init_entry1(__Unify___libs__lp__result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__lp__result_0_0);
	MR_init_label3(__Unify___libs__lp__result_0_0,13,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__lp__result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__lp__result_0_0_i13);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___libs__lp__result_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___libs__lp__result_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__lp__result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___libs__lp__result_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___libs__lp__result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_tfield(1, MR_tempr3, 1);
	MR_r4 = MR_tfield(1, MR_tempr4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
MR_def_label(__Unify___libs__lp__result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module53)
	MR_init_entry1(__Compare___libs__lp__result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__lp__result_0_0);
	MR_init_label6(__Compare___libs__lp__result_0_0,25,7,5,9,11,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__lp__result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__lp__result_0_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__result_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__result_0_0_i7);
	}
MR_def_label(__Compare___libs__lp__result_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__lp__result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__lp__result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__result_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__lp__result_0_0,9)
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
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___libs__lp__result_0_0_i11);
MR_def_label(__Compare___libs__lp__result_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__result_0_0_i17);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___libs__lp__result_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module54)
	MR_init_entry1(__Unify___libs__lp__tableau_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__lp__tableau_0_0);
	MR_init_label6(__Unify___libs__lp__tableau_0_0,5,8,10,12,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__lp__tableau_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__lp__tableau_0_0_i17);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___libs__lp__tableau_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___libs__lp__tableau_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(9) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(2) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr4, 6);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr3, 2);
	MR_r4 = MR_tfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___libs__lp__tableau_0_0_i5);
MR_def_label(__Unify___libs__lp__tableau_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__lp__tableau_0_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___libs__lp__tableau_0_0_i8);
MR_def_label(__Unify___libs__lp__tableau_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__lp__tableau_0_0_i1);
	}
	MR_sv(9) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___libs__lp__tableau_0_0_i10);
MR_def_label(__Unify___libs__lp__tableau_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__lp__tableau_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___libs__lp__tableau_0_0_i12);
MR_def_label(__Unify___libs__lp__tableau_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__lp__tableau_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___libs__lp__tableau_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__lp__tableau_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module55)
	MR_init_entry1(__Compare___libs__lp__tableau_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__lp__tableau_0_0);
	MR_init_label9(__Compare___libs__lp__tableau_0_0,3,2,5,9,14,20,24,28,86)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__lp__tableau_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__lp__tableau_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___libs__lp__tableau_0_0_i2);
MR_def_label(__Compare___libs__lp__tableau_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___libs__lp__tableau_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__lp__tableau_0_0_i5);
MR_def_label(__Compare___libs__lp__tableau_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__tableau_0_0_i86);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__lp__tableau_0_0_i9);
MR_def_label(__Compare___libs__lp__tableau_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__tableau_0_0_i86);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___libs__lp__tableau_0_0_i14);
MR_def_label(__Compare___libs__lp__tableau_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__tableau_0_0_i86);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___libs__lp__tableau_0_0_i20);
MR_def_label(__Compare___libs__lp__tableau_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__tableau_0_0_i86);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___libs__lp__tableau_0_0_i24);
MR_def_label(__Compare___libs__lp__tableau_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__tableau_0_0_i86);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___libs__lp__tableau_0_0_i28);
MR_def_label(__Compare___libs__lp__tableau_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__lp__tableau_0_0_i86);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___libs__lp__tableau_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module56)
	MR_init_entry1(fn__libs__lp__IntroducedFrom__func__negate_equation__328__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__lp__IntroducedFrom__func__negate_equation__328__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__negate_equation__328__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__lp__IntroducedFrom__func__negate_equation__328__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_float_to_word(((MR_Float) 0.0000000000000000 - MR_word_to_float(MR_tfield(0, MR_r1, 1))));
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module57)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_0);
	MR_init_label2(libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__simplify_coeffs__340__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r5 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_r5;
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_0_i4);
MR_def_label(libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_0_i2);
	}
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r5 = MR_float_to_word((MR_word_to_float(MR_r2) + MR_word_to_float(MR_sv(2))));
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_def_label(libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r5 = MR_float_to_word(((MR_Float) 0.0000000000000000 + MR_word_to_float(MR_sv(2))));
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);

MR_BEGIN_MODULE(libs__lp_module58)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0);
	MR_init_label3(libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0,3,2,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__collect_vars__396__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.lp.IntroducedFrom__pred__collect_vars__396__1/3-0", 1,
		MR_LABEL_AP(libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0_i2));
	MR_fv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp, equation);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0_i3);
MR_def_label(libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_1,
		libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0_i9);
MR_def_label(libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = MR_fv(1);
	MR_np_call_localret_ent(list__member_2_1,
		libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0_i9);
MR_def_label(libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module59)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0);
	MR_init_label4(libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0,1,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__extract_obj_var2__474__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.lp.IntroducedFrom__pred__extract_obj_var2__474__1/3-0", 4,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(4) = MR_tfield(0, MR_r1, 4);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_fv(1), 0);
	MR_np_call_localret_ent(libs__lp__between_3_0,
		libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0_i1);
MR_def_label(libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_fv(3);
	MR_r3 = MR_fv(4);
	MR_np_call_localret_ent(list__member_2_0,
		libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0_i3);
MR_def_label(libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(3);
	MR_r3 = MR_fv(2);
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0_i5);
MR_def_label(libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Float) 1.0000000000000000 != MR_word_to_float(MR_r1))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(3);
	MR_r3 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0_i6);
MR_def_label(libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module60)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__simplex__500__1_4_0);
	MR_init_label5(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0,4,5,3,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__simplex__500__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__simplex__500__1_4_0_i4);
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__simplex__500__1_4_0_i9);
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) >= MR_word_to_float(MR_sv(1)))) {
		MR_GOTO_LAB(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__500__1_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module61)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__simplex__530__1_5_0);
	MR_init_label9(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0,4,6,7,5,3,11,12,15,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__simplex__530__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0_i3);
	}
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__simplex__530__1_5_0_i4);
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) <= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__simplex__530__1_5_0_i6);
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		libs__lp__IntroducedFrom__pred__simplex__530__1_5_0_i7);
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 1);
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__simplex__530__1_5_0_i11);
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__simplex__530__1_5_0_i12);
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(4)) <= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0_i14);
	}
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		libs__lp__IntroducedFrom__pred__simplex__530__1_5_0_i15);
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > MR_word_to_float(MR_sv(1)))) {
		MR_GOTO_LAB(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(libs__lp__IntroducedFrom__pred__simplex__530__1_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module62)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_0);
	MR_init_label3(libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_0,1,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.lp.IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1/3-0", 4,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(4) = MR_tfield(0, MR_r1, 4);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_fv(1), 0);
	MR_np_call_localret_ent(libs__lp__between_3_0,
		libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_0_i1);
MR_def_label(libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_fv(3);
	MR_r3 = MR_fv(4);
	MR_np_call_localret_ent(list__member_2_0,
		libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_0_i3);
MR_def_label(libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(3);
	MR_r3 = MR_fv(2);
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_0_i5);
MR_def_label(libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) == (MR_Float) 0.0000000000000000)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_fv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module63)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_0);
	MR_init_label2(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__fix_basis_and_rem_cols__594__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_0_i2);
MR_def_label(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module64)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_0);
	MR_init_label2(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_0,1,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__fix_basis_and_rem_cols__604__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.lp.IntroducedFrom__pred__fix_basis_and_rem_cols__604__1/4-0", 4,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(3) = MR_r3;
	MR_np_call_localret_ent(libs__lp__all_cols_2_0,
		libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_0_i1);
MR_def_label(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_fv(2) == MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_fv(4) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(3);
	MR_r3 = MR_fv(4);
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_0_i3);
MR_def_label(libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) == (MR_Float) 0.0000000000000000)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(4);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module65)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__pivot__635__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__pivot__635__1_4_0);
	MR_init_label3(libs__lp__IntroducedFrom__pred__pivot__635__1_4_0,1,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__pivot__635__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__pivot__635__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.lp.IntroducedFrom__pred__pivot__635__1/4-0", 5,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_fv(4) = MR_tempr1;
	MR_fv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(libs__lp__between_3_0,
		libs__lp__IntroducedFrom__pred__pivot__635__1_4_0_i1);
MR_def_label(libs__lp__IntroducedFrom__pred__pivot__635__1_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_fv(3);
	MR_r3 = MR_fv(5);
	MR_np_call_localret_ent(list__member_2_0,
		libs__lp__IntroducedFrom__pred__pivot__635__1_4_0_i3);
MR_def_label(libs__lp__IntroducedFrom__pred__pivot__635__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((MR_fv(3) == MR_fv(1))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(4);
	MR_np_call_localret_ent(libs__lp__all_cols0_2_0,
		libs__lp__IntroducedFrom__pred__pivot__635__1_4_0_i6);
MR_def_label(libs__lp__IntroducedFrom__pred__pivot__635__1_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_fv(2))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_fv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module66)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__pivot__642__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__pivot__642__1_6_0);
	MR_init_label4(libs__lp__IntroducedFrom__pred__pivot__642__1_6_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__pivot__642__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__pivot__642__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__pivot__642__1_6_0_i2);
MR_def_label(libs__lp__IntroducedFrom__pred__pivot__642__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__pivot__642__1_6_0_i3);
MR_def_label(libs__lp__IntroducedFrom__pred__pivot__642__1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__pivot__642__1_6_0_i4);
MR_def_label(libs__lp__IntroducedFrom__pred__pivot__642__1_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r1) * MR_word_to_float(MR_sv(3))));
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		libs__lp__IntroducedFrom__pred__pivot__642__1_6_0_i5);
MR_def_label(libs__lp__IntroducedFrom__pred__pivot__642__1_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_float_to_word((MR_word_to_float(MR_sv(2)) - MR_word_to_float(MR_tempr1)));
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__lp__set_index_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module67)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__pivot__651__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__pivot__651__1_3_0);
	MR_init_label2(libs__lp__IntroducedFrom__pred__pivot__651__1_3_0,1,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__pivot__651__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__pivot__651__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.lp.IntroducedFrom__pred__pivot__651__1/3-0", 3,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(3) = MR_tfield(0, MR_r2, 4);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(libs__lp__between_3_0,
		libs__lp__IntroducedFrom__pred__pivot__651__1_3_0_i1);
MR_def_label(libs__lp__IntroducedFrom__pred__pivot__651__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(3);
	MR_np_call_localret_ent(list__member_2_0,
		libs__lp__IntroducedFrom__pred__pivot__651__1_3_0_i3);
MR_def_label(libs__lp__IntroducedFrom__pred__pivot__651__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_fv(2);
	MR_tfield(0, MR_r1, 1) = MR_fv(1);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module68)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__pivot__655__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__pivot__655__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__pivot__655__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__pivot__655__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(libs__lp__set_index_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module69)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__pivot__661__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__pivot__661__1_5_0);
	MR_init_label2(libs__lp__IntroducedFrom__pred__pivot__661__1_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__pivot__661__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__pivot__661__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__pivot__661__1_5_0_i2);
MR_def_label(libs__lp__IntroducedFrom__pred__pivot__661__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		libs__lp__IntroducedFrom__pred__pivot__661__1_5_0_i3);
MR_def_label(libs__lp__IntroducedFrom__pred__pivot__661__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__lp__set_index_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module70)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__row_op__674__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__row_op__674__1_6_0);
	MR_init_label2(libs__lp__IntroducedFrom__pred__row_op__674__1_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__row_op__674__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__row_op__674__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__row_op__674__1_6_0_i2);
MR_def_label(libs__lp__IntroducedFrom__pred__row_op__674__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__row_op__674__1_6_0_i3);
MR_def_label(libs__lp__IntroducedFrom__pred__row_op__674__1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_float_to_word((MR_word_to_float(MR_tempr1) + (MR_word_to_float(MR_sv(1)) * MR_word_to_float(MR_sv(3)))));
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__lp__set_index_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module71)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_0);
	MR_init_label3(libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_0,1,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_basis_vars__800__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.lp.IntroducedFrom__pred__get_basis_vars__800__1/3-0", 4,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(3) = MR_r2;
	MR_fv(4) = MR_tfield(0, MR_r1, 4);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_fv(1), 0);
	MR_np_call_localret_ent(libs__lp__between_3_0,
		libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_0_i1);
MR_def_label(libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(4);
	MR_np_call_localret_ent(list__member_2_0,
		libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_0_i3);
MR_def_label(libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(3);
	MR_np_call_localret_ent(libs__lp__index_4_0,
		libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_0_i5);
MR_def_label(libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) == (MR_Float) 0.0000000000000000)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_fv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module72)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0);
	MR_init_label2(libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0,1,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_basis_vars__798__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.lp.IntroducedFrom__pred__get_basis_vars__798__1/2-0", 2,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_np_call_localret_ent(libs__lp__all_cols_2_0,
		libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0_i1);
MR_def_label(libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,11);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_fv(1);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_fv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(solutions__solutions_2_1,
		libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0_i4);
MR_def_label(libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	if ((MR_word_to_float(MR_r2) != (MR_Float) 1.0000000000000000)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__member_3_0);

MR_BEGIN_MODULE(libs__lp_module73)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_0);
	MR_init_label2(libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_0,1,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_basis_vars__810__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.lp.IntroducedFrom__pred__get_basis_vars__810__1/3-0", 3,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(3) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_fv(3);
	MR_np_call_localret_ent(list__member_2_1,
		libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_0_i1);
MR_def_label(libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_fv(3);
	MR_r3 = MR_tfield(0, MR_fv(1), 2);
	MR_np_call_localret_ent(map__member_3_0,
		libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_0_i3);
MR_def_label(libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_fv(2) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__lp_module74)
	MR_init_entry1(libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_0);
	MR_init_label3(libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_0,2,3,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__lp_info_init__822__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(varset__new_var_3_0,
		libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_0_i2);
MR_def_label(libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(varset__new_var_3_0,
		libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_0_i3);
MR_def_label(libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_0_i7);
MR_def_label(libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__libs__lp_maybe_bunch_0(void)
{
	libs__lp_module0();
	libs__lp_module1();
	libs__lp_module2();
	libs__lp_module3();
	libs__lp_module4();
	libs__lp_module5();
	libs__lp_module6();
	libs__lp_module7();
	libs__lp_module8();
	libs__lp_module9();
	libs__lp_module10();
	libs__lp_module11();
	libs__lp_module12();
	libs__lp_module13();
	libs__lp_module14();
	libs__lp_module15();
	libs__lp_module16();
	libs__lp_module17();
	libs__lp_module18();
	libs__lp_module19();
	libs__lp_module20();
	libs__lp_module21();
	libs__lp_module22();
	libs__lp_module23();
	libs__lp_module24();
	libs__lp_module25();
	libs__lp_module26();
	libs__lp_module27();
	libs__lp_module28();
	libs__lp_module29();
	libs__lp_module30();
	libs__lp_module31();
	libs__lp_module32();
	libs__lp_module33();
	libs__lp_module34();
	libs__lp_module35();
	libs__lp_module36();
	libs__lp_module37();
	libs__lp_module38();
	libs__lp_module39();
}

static void mercury__libs__lp_maybe_bunch_1(void)
{
	libs__lp_module40();
	libs__lp_module41();
	libs__lp_module42();
	libs__lp_module43();
	libs__lp_module44();
	libs__lp_module45();
	libs__lp_module46();
	libs__lp_module47();
	libs__lp_module48();
	libs__lp_module49();
	libs__lp_module50();
	libs__lp_module51();
	libs__lp_module52();
	libs__lp_module53();
	libs__lp_module54();
	libs__lp_module55();
	libs__lp_module56();
	libs__lp_module57();
	libs__lp_module58();
	libs__lp_module59();
	libs__lp_module60();
	libs__lp_module61();
	libs__lp_module62();
	libs__lp_module63();
	libs__lp_module64();
	libs__lp_module65();
	libs__lp_module66();
	libs__lp_module67();
	libs__lp_module68();
	libs__lp_module69();
	libs__lp_module70();
	libs__lp_module71();
	libs__lp_module72();
	libs__lp_module73();
	libs__lp_module74();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__lp__init(void);
void mercury__libs__lp__init_type_tables(void);
void mercury__libs__lp__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__lp__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__lp__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__libs__lp__init_threadscope_string_table(void);
#endif

void mercury__libs__lp__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__lp_maybe_bunch_0();
	mercury__libs__lp_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__lp__type_ctor_info_cell_0,
		libs__lp__cell_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__lp__type_ctor_info_coeff_0,
		libs__lp__coeff_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__lp__type_ctor_info_direction_0,
		libs__lp__direction_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__lp__type_ctor_info_equation_0,
		libs__lp__equation_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__lp__type_ctor_info_equations_0,
		libs__lp__equations_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__lp__type_ctor_info_lp_info_0,
		libs__lp__lp_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__lp__type_ctor_info_objective_0,
		libs__lp__objective_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__lp__type_ctor_info_operator_0,
		libs__lp__operator_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__lp__type_ctor_info_result_0,
		libs__lp__result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__lp__type_ctor_info_tableau_0,
		libs__lp__tableau_0_0);
	mercury__libs__lp__init_debugger();
}

void mercury__libs__lp__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__lp__type_ctor_info_cell_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__lp__type_ctor_info_coeff_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__lp__type_ctor_info_direction_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__lp__type_ctor_info_equation_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__lp__type_ctor_info_equations_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__lp__type_ctor_info_lp_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__lp__type_ctor_info_objective_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__lp__type_ctor_info_operator_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__lp__type_ctor_info_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__lp__type_ctor_info_tableau_0);
	}
}


void mercury__libs__lp__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__lp__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__libs__lp);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__lp__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__libs__lp__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
