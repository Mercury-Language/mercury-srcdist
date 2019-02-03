/*
** Automatically generated from `erl_code_util.m'
** by the Mercury compiler,
** version 11.07-beta-2011-11-14, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__erl_backend__erl_code_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "erl_backend.erl_code_util.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "erl_backend.erl_code_util.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "erl_backend.erl_code_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "erl_backend.erl_code_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "erl_backend.erl_code_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "erl_backend.erl_code_util.c"
#line 49 "erl_backend.erl_code_util.c"
#include "erl_backend.erl_code_util.mh"

#line 52 "erl_backend.erl_code_util.c"
#line 53 "erl_backend.erl_code_util.c"
#ifndef ERL_BACKEND__ERL_CODE_UTIL_DECL_GUARD
#define ERL_BACKEND__ERL_CODE_UTIL_DECL_GUARD

#line 57 "erl_backend.erl_code_util.c"
#line 58 "erl_backend.erl_code_util.c"

#endif
#line 61 "erl_backend.erl_code_util.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
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

extern const MR_TypeCtorInfo_Struct
	mercury_data_erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0,
	mercury_data_erl_backend__erl_code_util__type_ctor_info_opt_dummy_args_0;
MR_decl_label6(erl_backend__erl_code_util__erl_bind_unbound_vars_6_0, 2,4,7,5,9,11)
MR_decl_label2(erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0, 2,3)
MR_decl_label2(erl_backend__erl_code_util__erl_create_renaming_4_0, 3,7)
MR_decl_label4(erl_backend__erl_code_util__erl_create_renaming_2_5_0, 3,2,7,10)
MR_decl_label1(erl_backend__erl_code_util__erl_expr_vars_2_0, 3)
MR_decl_label4(erl_backend__erl_code_util__erl_fix_success_expr_6_0, 18,4,5,6)
MR_decl_label1(erl_backend__erl_code_util__erl_gen_arg_list_7_0, 2)
MR_decl_label8(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0, 2,10,16,15,11,12,20,6)
MR_decl_label1(erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_0, 2)
MR_decl_label2(erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_0, 2,6)
MR_decl_label1(erl_backend__erl_code_util__erl_gen_info_new_named_var_4_0, 2)
MR_decl_label1(erl_backend__erl_code_util__erl_gen_info_new_vars_4_0, 2)
MR_decl_label2(erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_0, 4,3)
MR_decl_label2(erl_backend__erl_code_util__erl_rename_vars_in_case_3_0, 2,3)
MR_decl_label3(erl_backend__erl_code_util__erl_rename_vars_in_catch_3_0, 2,3,4)
MR_decl_label2(erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0, 3,4)
MR_decl_label10(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0, 4,3,7,6,9,8,12,13,11,16)
MR_decl_label10(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0, 17,15,20,21,19,24,25,23,28,27)
MR_decl_label10(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0, 31,32,30,35,34,38,39,41,42,40)
MR_decl_label5(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0, 45,47,37,51,50)
MR_decl_label6(erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0, 3,4,5,6,7,8)
MR_decl_label5(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0, 5,3,10,8,7)
MR_decl_label2(erl_backend__erl_code_util__erl_vars_in_call_target_3_0, 8,3)
MR_decl_label1(erl_backend__erl_code_util__erl_vars_in_case_3_0, 2)
MR_decl_label2(erl_backend__erl_code_util__erl_vars_in_catch_3_0, 2,3)
MR_decl_label1(erl_backend__erl_code_util__erl_vars_in_clause_3_0, 5)
MR_decl_label10(erl_backend__erl_code_util__erl_vars_in_expr_3_0, 137,3,8,10,12,16,15,22,21,24)
MR_decl_label10(erl_backend__erl_code_util__erl_vars_in_expr_3_0, 27,28,30,32,31,34,37,38,39,36)
MR_decl_label1(erl_backend__erl_code_util__erl_vars_in_expr_3_0, 150)
MR_decl_label10(erl_backend__erl_code_util__erl_vars_in_term_3_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label4(erl_backend__erl_code_util__is_bound_and_not_dummy_5_0, 2,5,6,1)
MR_decl_label8(erl_backend__erl_code_util__match_inner_outer_cases_3_0, 79,7,12,11,9,17,80,1)
MR_decl_label6(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0, 7,6,11,15,2,58)
MR_decl_label6(erl_backend__erl_code_util__non_variable_term_1_0, 15,19,14,67,2,1)
MR_decl_label2(fn__erl_backend__erl_code_util__erl_call_target_size_1_0, 8,3)
MR_decl_label2(fn__erl_backend__erl_code_util__erl_case_size_1_0, 2,3)
MR_decl_label2(fn__erl_backend__erl_code_util__erl_cases_size_1_0, 3,5)
MR_decl_label10(fn__erl_backend__erl_code_util__erl_expr_size_1_0, 104,3,6,5,8,11,10,14,13,17)
MR_decl_label10(fn__erl_backend__erl_code_util__erl_expr_size_1_0, 16,20,19,22,23,25,27,28,26,30)
MR_decl_label10(fn__erl_backend__erl_code_util__erl_expr_size_1_0, 29,33,34,35,36,32,38,39,40,41)
MR_decl_label1(fn__erl_backend__erl_code_util__erl_expr_size_1_0, 31)
MR_decl_label1(fn__erl_backend__erl_code_util__erl_exprs_size_1_0, 3)
MR_decl_label9(fn__erl_backend__erl_code_util__erl_gen_info_init_3_0, 2,3,4,5,6,7,9,10,11)
MR_decl_label3(fn__erl_backend__erl_code_util__erl_term_size_1_0, 5,7,3)
MR_decl_label1(fn__erl_backend__erl_code_util__erl_terms_size_1_0, 3)
MR_decl_label3(fn__erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_0, 4,6,2)
MR_decl_label7(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0, 4,6,9,11,13,17,1)
MR_decl_label10(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0, 3,2,5,9,13,17,22,27,32,96)
MR_def_extern_entry(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_gen_arg_list_7_0)
MR_def_extern_entry(fn__erl_backend__erl_code_util__erl_gen_info_init_3_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_gen_info_get_module_info_2_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_gen_info_get_varset_2_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_gen_info_get_var_types_2_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_gen_info_get_output_vars_2_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_gen_info_new_named_var_4_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_gen_info_new_vars_4_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_variable_types_3_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_variable_type_3_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_create_renaming_4_0)
MR_decl_static(erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_0)
MR_decl_static(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0)
MR_decl_static(erl_backend__erl_code_util__erl_rename_vars_in_cases_3_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0)
MR_decl_static(erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_0)
MR_decl_static(erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0)
MR_decl_static(erl_backend__erl_code_util__erl_rename_vars_in_catch_3_0)
MR_decl_static(erl_backend__erl_code_util__erl_vars_in_term_3_0)
MR_decl_static(erl_backend__erl_code_util__erl_vars_in_cases_3_0)
MR_decl_static(erl_backend__erl_code_util__erl_vars_in_expr_3_0)
MR_decl_static(erl_backend__erl_code_util__erl_vars_in_call_target_3_0)
MR_decl_static(erl_backend__erl_code_util__erl_vars_in_clause_3_0)
MR_decl_static(erl_backend__erl_code_util__erl_vars_in_catch_3_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_expr_vars_2_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_fix_success_expr_6_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0)
MR_def_extern_entry(erl_backend__erl_code_util__erl_bind_unbound_vars_6_0)
MR_def_extern_entry(fn__erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_0)
MR_decl_static(fn__erl_backend__erl_code_util__erl_exprs_size_1_0)
MR_decl_static(fn__erl_backend__erl_code_util__erl_terms_size_1_0)
MR_decl_static(fn__erl_backend__erl_code_util__erl_term_size_1_0)
MR_decl_static(fn__erl_backend__erl_code_util__erl_cases_size_1_0)
MR_def_extern_entry(fn__erl_backend__erl_code_util__erl_expr_size_1_0)
MR_decl_static(fn__erl_backend__erl_code_util__erl_call_target_size_1_0)
MR_decl_static(erl_backend__erl_code_util__non_variable_term_1_0)
MR_decl_static(erl_backend__erl_code_util__match_inner_outer_cases_3_0)
MR_def_extern_entry(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0)
MR_def_extern_entry(fn__erl_backend__erl_code_util__erl_base_typeclass_info_method_offset_0_0)
MR_decl_static(erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_0)
MR_decl_static(erl_backend__erl_code_util__is_bound_and_not_dummy_5_0)
MR_decl_static(erl_backend__erl_code_util__erl_create_renaming_2_5_0)
MR_decl_static(erl_backend__erl_code_util__erl_rename_vars_in_case_3_0)
MR_decl_static(erl_backend__erl_code_util__erl_vars_in_case_3_0)
MR_decl_static(fn__erl_backend__erl_code_util__erl_case_size_1_0)
MR_def_extern_entry(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0)
MR_def_extern_entry(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0)
MR_def_extern_entry(__Unify___erl_backend__erl_code_util__opt_dummy_args_0_0)
MR_def_extern_entry(__Compare___erl_backend__erl_code_util__opt_dummy_args_0_0)
MR_decl_static(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_0 mercury_common_0[7] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(0,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
};

MR_decl_entry(fn__erl_backend__elds__var_eq_false_1_0);
MR_decl_entry(fn__int__plus_2_0);
static const struct mercury_type_2 mercury_common_2[16] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(erl_backend__erl_code_util__erl_create_renaming_2_5_0),
0
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(erl_backend__erl_code_util__erl_vars_in_expr_3_0),
0
},
{
MR_COMMON(3,6),
MR_ENTRY_AP(erl_backend__erl_code_util__erl_vars_in_case_3_0),
0
},
{
MR_COMMON(3,7),
MR_ENTRY_AP(erl_backend__erl_code_util__erl_vars_in_expr_3_0),
0
},
{
MR_COMMON(3,8),
MR_ENTRY_AP(erl_backend__erl_code_util__erl_vars_in_expr_3_0),
0
},
{
MR_COMMON(3,9),
MR_ENTRY_AP(erl_backend__erl_code_util__erl_vars_in_term_3_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(fn__erl_backend__elds__var_eq_false_1_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(fn__erl_backend__erl_code_util__erl_expr_size_1_0),
0
},
{
MR_COMMON(3,10),
MR_ENTRY_AP(fn__int__plus_2_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(fn__erl_backend__erl_code_util__erl_term_size_1_0),
0
},
{
MR_COMMON(3,11),
MR_ENTRY_AP(fn__int__plus_2_0),
0
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(fn__erl_backend__erl_code_util__erl_expr_size_1_0),
0
},
{
MR_COMMON(3,12),
MR_ENTRY_AP(fn__int__plus_2_0),
0
},
{
MR_COMMON(6,4),
MR_ENTRY_AP(fn__erl_backend__erl_code_util__erl_case_size_1_0),
0
},
{
MR_COMMON(3,13),
MR_ENTRY_AP(fn__int__plus_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_variable_types_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_rename_vars_in_term_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_rename_vars_in_cases_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_term_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_term_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_cases_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_expr_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_expr_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_clause_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_exprs_size_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_terms_size_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_term_size_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_cases_size_1_0_2;
static const struct mercury_type_3 mercury_common_3[14] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_variable_types_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(erl_backend__erl_code_util, erl_gen_info),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,1),
MR_CTOR0_ADDR(erl_backend__elds, elds_expr),
MR_CTOR0_ADDR(erl_backend__elds, elds_expr)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_rename_vars_in_term_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,1),
MR_CTOR0_ADDR(erl_backend__elds, elds_expr),
MR_CTOR0_ADDR(erl_backend__elds, elds_expr)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_rename_vars_in_cases_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,1),
MR_CTOR0_ADDR(erl_backend__elds, elds_case),
MR_CTOR0_ADDR(erl_backend__elds, elds_case)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,1),
MR_CTOR0_ADDR(erl_backend__elds, elds_term),
MR_CTOR0_ADDR(erl_backend__elds, elds_term)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_term_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(erl_backend__elds, elds_expr),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_cases_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(erl_backend__elds, elds_case),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_expr_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(erl_backend__elds, elds_expr),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_expr_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(erl_backend__elds, elds_expr),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_clause_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(erl_backend__elds, elds_term),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_exprs_size_1_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_terms_size_1_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_term_size_1_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_cases_size_1_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_TAG_COMMON(0,0,0)
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
mercury_data__closure_layout__erl_backend__erl_code_util__erl_create_renaming_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_create_renaming_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_COMMON(4,1),
MR_COMMON(4,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(4,2),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_bind_unbound_vars_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_exprs_size_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_terms_size_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_term_size_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_cases_size_1_0_1;
static const struct mercury_type_6 mercury_common_6[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_code_util__erl_bind_unbound_vars_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,2),
MR_CTOR0_ADDR(erl_backend__elds, elds_expr)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_exprs_size_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(erl_backend__elds, elds_expr),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_terms_size_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(erl_backend__elds, elds_term),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_term_size_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(erl_backend__elds, elds_expr),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_cases_size_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(erl_backend__elds, elds_case),
MR_INT_CTOR_ADDR
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

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
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__erl_code_util__field_types_erl_gen_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_erl_backend__erl_code_util__field_names_erl_gen_info_0_0[] = {
	"egi_module_info",
	"egi_pred_id",
	"egi_proc_id",
	"egi_varset",
	"egi_var_types",
	"egi_input_vars",
	"egi_output_vars",
	"egi_env_var_names"
};

static const MR_DuFunctorDesc mercury_data_erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0 = {
	"erl_gen_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__erl_code_util__field_types_erl_gen_info_0_0,
	mercury_data_erl_backend__erl_code_util__field_names_erl_gen_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_erl_backend__erl_code_util__du_stag_ordered_erl_gen_info_0_0[] = {
	&mercury_data_erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0

};

const MR_DuPtagLayout mercury_data_erl_backend__erl_code_util__du_ptag_ordered_erl_gen_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__erl_code_util__du_stag_ordered_erl_gen_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__erl_code_util__du_name_ordered_erl_gen_info_0[] = {
	&mercury_data_erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0
};

const MR_Integer mercury_data_erl_backend__erl_code_util__functor_number_map_erl_gen_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0)),
	"erl_backend.erl_code_util",
	"erl_gen_info",
	{ (void *)mercury_data_erl_backend__erl_code_util__du_name_ordered_erl_gen_info_0 },
	{ (void *)mercury_data_erl_backend__erl_code_util__du_ptag_ordered_erl_gen_info_0 },
	1,
	4,
	mercury_data_erl_backend__erl_code_util__functor_number_map_erl_gen_info_0
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0 = {
	"opt_dummy_args",
	0
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1 = {
	"no_opt_dummy_args",
	1
};

const MR_EnumFunctorDescPtr mercury_data_erl_backend__erl_code_util__enum_value_ordered_opt_dummy_args_0[] = {
	&mercury_data_erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0,
	&mercury_data_erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1
};

const MR_EnumFunctorDescPtr mercury_data_erl_backend__erl_code_util__enum_name_ordered_opt_dummy_args_0[] = {
	&mercury_data_erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1,
	&mercury_data_erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0
};

const MR_Integer mercury_data_erl_backend__erl_code_util__functor_number_map_opt_dummy_args_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__erl_code_util__type_ctor_info_opt_dummy_args_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__erl_code_util__opt_dummy_args_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__erl_code_util__opt_dummy_args_0_0)),
	"erl_backend.erl_code_util",
	"opt_dummy_args",
	{ (void *)mercury_data_erl_backend__erl_code_util__enum_name_ordered_opt_dummy_args_0 },
	{ (void *)mercury_data_erl_backend__erl_code_util__enum_value_ordered_opt_dummy_args_0 },
	2,
	4,
	mercury_data_erl_backend__erl_code_util__functor_number_map_opt_dummy_args_0
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_cases_size_1_0_2 = {
{
MR_FUNCTION,
"int",
"int",
"plus",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
983,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_cases_size_1_0_1 = {
{
MR_FUNCTION,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_case_size",
2,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
973,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_term_size_1_0_2 = {
{
MR_FUNCTION,
"int",
"int",
"plus",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
983,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_term_size_1_0_1 = {
{
MR_FUNCTION,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_expr_size",
2,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
876,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_terms_size_1_0_2 = {
{
MR_FUNCTION,
"int",
"int",
"plus",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
983,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_terms_size_1_0_1 = {
{
MR_FUNCTION,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_term_size",
2,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
942,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_exprs_size_1_0_2 = {
{
MR_FUNCTION,
"int",
"int",
"plus",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
983,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__erl_code_util__erl_exprs_size_1_0_1 = {
{
MR_FUNCTION,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_expr_size",
2,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
876,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_bind_unbound_vars_6_0_1 = {
{
MR_FUNCTION,
"erl_backend.elds",
"erl_backend.elds",
"var_eq_false",
2,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
421,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"is_bound_and_not_dummy",
5,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
401,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_clause_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_vars_in_term",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
803,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_expr_3_0_2 = {
{
MR_PREDICATE,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_vars_in_expr",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
733,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_expr_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_vars_in_expr",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
733,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_cases_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_vars_in_case",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
853,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_vars_in_term_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_vars_in_expr",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
733,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_rename_vars_in_term",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
639,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_rename_vars_in_cases_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_rename_vars_in_case",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
695,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_rename_vars_in_term_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_rename_vars_in_expr",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
555,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_rename_vars_in_expr",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
555,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_create_renaming_4_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_create_renaming_2",
5,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
537,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_variable_types_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_variable_type",
3,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
306,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_code_util",
"erl_backend.erl_code_util",
"erl_gen_info_new_anonymous_var",
4,
0
},
"erl_backend.erl_code_util",
"erl_code_util.m",
295,
"7"
};


MR_decl_entry(fn__check_hlds__type_util__check_dummy_type_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module0)
	MR_init_entry1(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0);
	MR_init_label8(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0,2,10,16,15,11,12,20,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_arg_list_arg_modes'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0_i6);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r4, 0);
	MR_sv(4) = MR_tfield(1, MR_r5, 0);
	MR_sv(5) = MR_tfield(1, MR_r6, 0);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_r5 = MR_tfield(1, MR_r5, 1);
	MR_r6 = MR_tfield(1, MR_r6, 1);
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0,
		erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0_i10);
MR_def_label(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0_i16);
MR_def_label(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),2)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("erl_backend.erl_code_util", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140erl_backend.erl_code_util.erl_gen_arg_list_arg_modes\'/7", 66);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__modes_to_arg_modes_4_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module1)
	MR_init_entry1(erl_backend__erl_code_util__erl_gen_arg_list_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_gen_arg_list_7_0);
	MR_init_label1(erl_backend__erl_code_util__erl_gen_arg_list_7_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_arg_list'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_gen_arg_list_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r6;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_arg_modes_4_0,
		erl_backend__erl_code_util__erl_gen_arg_list_7_0_i2);
MR_def_label(erl_backend__erl_code_util__erl_gen_arg_list_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module2)
	MR_init_entry1(fn__erl_backend__erl_code_util__erl_gen_info_init_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__erl_code_util__erl_gen_info_init_3_0);
	MR_init_label9(fn__erl_backend__erl_code_util__erl_gen_info_init_3_0,2,3,4,5,6,7,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_info_init'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__erl_code_util__erl_gen_info_init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		fn__erl_backend__erl_code_util__erl_gen_info_init_3_0_i2);
MR_def_label(fn__erl_backend__erl_code_util__erl_gen_info_init_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		fn__erl_backend__erl_code_util__erl_gen_info_init_3_0_i3);
MR_def_label(fn__erl_backend__erl_code_util__erl_gen_info_init_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		fn__erl_backend__erl_code_util__erl_gen_info_init_3_0_i4);
MR_def_label(fn__erl_backend__erl_code_util__erl_gen_info_init_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		fn__erl_backend__erl_code_util__erl_gen_info_init_3_0_i5);
MR_def_label(fn__erl_backend__erl_code_util__erl_gen_info_init_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		fn__erl_backend__erl_code_util__erl_gen_info_init_3_0_i6);
MR_def_label(fn__erl_backend__erl_code_util__erl_gen_info_init_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		fn__erl_backend__erl_code_util__erl_gen_info_init_3_0_i7);
MR_def_label(fn__erl_backend__erl_code_util__erl_gen_info_init_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_arg_modes_4_0,
		fn__erl_backend__erl_code_util__erl_gen_info_init_3_0_i9);
MR_def_label(fn__erl_backend__erl_code_util__erl_gen_info_init_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_0,
		fn__erl_backend__erl_code_util__erl_gen_info_init_3_0_i10);
MR_def_label(fn__erl_backend__erl_code_util__erl_gen_info_init_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__erl_backend__erl_code_util__erl_gen_info_init_3_0_i11);
MR_def_label(fn__erl_backend__erl_code_util__erl_gen_info_init_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_sv(4);
	MR_tfield(0, MR_r2, 6) = MR_sv(6);
	MR_tfield(0, MR_r2, 7) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module3)
	MR_init_entry1(erl_backend__erl_code_util__erl_gen_info_get_module_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_gen_info_get_module_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_info_get_module_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_gen_info_get_module_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module4)
	MR_init_entry1(erl_backend__erl_code_util__erl_gen_info_get_varset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_gen_info_get_varset_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_info_get_varset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_gen_info_get_varset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module5)
	MR_init_entry1(erl_backend__erl_code_util__erl_gen_info_get_var_types_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_gen_info_get_var_types_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_info_get_var_types'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_gen_info_get_var_types_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module6)
	MR_init_entry1(erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_info_get_input_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module7)
	MR_init_entry1(erl_backend__erl_code_util__erl_gen_info_get_output_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_gen_info_get_output_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_info_get_output_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_gen_info_get_output_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_named_var_4_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module8)
	MR_init_entry1(erl_backend__erl_code_util__erl_gen_info_new_named_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_gen_info_new_named_var_4_0);
	MR_init_label1(erl_backend__erl_code_util__erl_gen_info_new_named_var_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_info_new_named_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_gen_info_new_named_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(1), 3);
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		erl_backend__erl_code_util__erl_gen_info_new_named_var_4_0_i2);
MR_def_label(erl_backend__erl_code_util__erl_gen_info_new_named_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_vars_4_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module9)
	MR_init_entry1(erl_backend__erl_code_util__erl_gen_info_new_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_gen_info_new_vars_4_0);
	MR_init_label1(erl_backend__erl_code_util__erl_gen_info_new_vars_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_info_new_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_gen_info_new_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(1), 3);
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		erl_backend__erl_code_util__erl_gen_info_new_vars_4_0_i2);
MR_def_label(erl_backend__erl_code_util__erl_gen_info_new_vars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_46_46_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module10)
	MR_init_entry1(erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_0);
	MR_init_label2(erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_0,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_info_new_anonymous_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 3);
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_46_46_2_0,
		erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_0_i2);
MR_def_label(erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_0_i6);
MR_def_label(erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module11)
	MR_init_entry1(erl_backend__erl_code_util__erl_variable_types_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_variable_types_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_variable_types'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_variable_types_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__erl_code_util__erl_variable_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module12)
	MR_init_entry1(erl_backend__erl_code_util__erl_variable_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_variable_type_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_variable_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_variable_type_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module13)
	MR_init_entry1(erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_0);
	MR_init_label1(erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_info_add_env_var_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(1), 7);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_0_i2);
MR_def_label(erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_0,2)
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
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module14)
	MR_init_entry1(erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_info_get_env_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module15)
	MR_init_entry1(erl_backend__erl_code_util__erl_create_renaming_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_create_renaming_4_0);
	MR_init_label2(erl_backend__erl_code_util__erl_create_renaming_4_0,3,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_create_renaming'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_create_renaming_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		erl_backend__erl_code_util__erl_create_renaming_4_0_i3);
MR_def_label(erl_backend__erl_code_util__erl_create_renaming_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		erl_backend__erl_code_util__erl_create_renaming_4_0_i7);
MR_def_label(erl_backend__erl_code_util__erl_create_renaming_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0;

MR_BEGIN_MODULE(erl_backend__erl_code_util_module16)
	MR_init_entry1(erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_rename_vars_in_exprs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module17)
	MR_init_entry1(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_rename_vars_in_term_3_0);
	MR_init_label5(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0,5,3,10,8,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_rename_vars_in_term'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(3, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_term_3_0_i5);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0_i7);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(3, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_term_3_0_i10);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_case_0;

MR_BEGIN_MODULE(erl_backend__erl_code_util_module18)
	MR_init_entry1(erl_backend__erl_code_util__erl_rename_vars_in_cases_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_rename_vars_in_cases_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_rename_vars_in_cases'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_rename_vars_in_cases_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__erl_code_util__erl_rename_vars_in_case_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_case);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module19)
	MR_init_entry1(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0);
	MR_init_label10(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,4,3,7,6,9,8,12,13,11,16)
	MR_init_label10(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,17,15,20,21,19,24,25,23,28,27)
	MR_init_label10(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,31,32,30,35,34,38,39,41,42,40)
	MR_init_label5(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,45,47,37,51,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_rename_vars_in_expr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i4);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i6);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i7);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_decr_sp_and_return(5);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i9);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i11);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i12);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i13);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i15);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i16);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i17);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i19);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i20);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_cases_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i21);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i23);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i24);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i25);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i27);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_cases_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i28);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i30);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i31);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i32);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i34);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i35);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i37);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i38);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_cases_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i39);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i41);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i40);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_catch_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i42);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	}
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i47);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_sv(4);
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_tfield(3, MR_r1, 3) = MR_sv(1);
	MR_tfield(3, MR_r1, 4) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i50);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0_i51);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module20)
	MR_init_entry1(erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_0);
	MR_init_label2(erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_rename_vars_in_call_target'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_0_i4);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_term_0;

MR_BEGIN_MODULE(erl_backend__erl_code_util_module21)
	MR_init_entry1(erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0);
	MR_init_label2(erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_rename_vars_in_clause'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_term);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0_i3);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0_i4);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_clause_3_0,4)
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


MR_BEGIN_MODULE(erl_backend__erl_code_util_module22)
	MR_init_entry1(erl_backend__erl_code_util__erl_rename_vars_in_catch_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_rename_vars_in_catch_3_0);
	MR_init_label3(erl_backend__erl_code_util__erl_rename_vars_in_catch_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_rename_vars_in_catch'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_rename_vars_in_catch_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_catch_3_0_i2);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_catch_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_catch_3_0_i3);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_catch_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_catch_3_0_i4);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_catch_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module23)
	MR_init_entry1(erl_backend__erl_code_util__erl_vars_in_term_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_vars_in_term_3_0);
	MR_init_label10(erl_backend__erl_code_util__erl_vars_in_term_3_0,3,4,5,6,7,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_vars_in_term'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_vars_in_term_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_term_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(erl_backend__erl_code_util__erl_vars_in_term_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_term_3_0_i4);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(erl_backend__erl_code_util__erl_vars_in_term_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_term_3_0_i5);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(erl_backend__erl_code_util__erl_vars_in_term_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_term_3_0_i6);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(erl_backend__erl_code_util__erl_vars_in_term_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_term_3_0_i7);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(erl_backend__erl_code_util__erl_vars_in_term_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_term_3_0_i8);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(erl_backend__erl_code_util__erl_vars_in_term_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_term_3_0_i9);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(erl_backend__erl_code_util__erl_vars_in_term_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_term_3_0_i10);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(erl_backend__erl_code_util__erl_vars_in_term_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_term_3_0_i11);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(erl_backend__erl_code_util__erl_vars_in_term_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_term_3_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(erl_backend__erl_code_util__erl_vars_in_term_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module24)
	MR_init_entry1(erl_backend__erl_code_util__erl_vars_in_cases_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_vars_in_cases_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_vars_in_cases'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_vars_in_cases_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_case);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module25)
	MR_init_entry1(erl_backend__erl_code_util__erl_vars_in_expr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_vars_in_expr_3_0);
	MR_init_label10(erl_backend__erl_code_util__erl_vars_in_expr_3_0,137,3,8,10,12,16,15,22,21,24)
	MR_init_label10(erl_backend__erl_code_util__erl_vars_in_expr_3_0,27,28,30,32,31,34,37,38,39,36)
	MR_init_label1(erl_backend__erl_code_util__erl_vars_in_expr_3_0,150)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_vars_in_expr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_vars_in_expr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i8);
	}
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(erl_backend__erl_code_util__erl_vars_in_clause_3_0);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i10);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(erl_backend__erl_code_util__erl_vars_in_term_3_0);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i12);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_vars_in_expr_3_0_i32);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i15);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_vars_in_call_target_3_0,
		erl_backend__erl_code_util__erl_vars_in_expr_3_0_i16);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i21);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_vars_in_expr_3_0_i22);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(erl_backend__erl_code_util__erl_vars_in_cases_3_0);
	}
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i24);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_vars_in_expr_3_0_i32);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i27);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i28);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(erl_backend__erl_code_util__erl_vars_in_cases_3_0);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i30);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i31);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_vars_in_expr_3_0_i32);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i137);
	}
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i34);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i137);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i36);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_localcall_lab(erl_backend__erl_code_util__erl_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_vars_in_expr_3_0_i37);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_vars_in_cases_3_0,
		erl_backend__erl_code_util__erl_vars_in_expr_3_0_i38);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_vars_in_catch_3_0,
		erl_backend__erl_code_util__erl_vars_in_expr_3_0_i39);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i150);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i137);
	}
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_expr_3_0_i137);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_expr_3_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module26)
	MR_init_entry1(erl_backend__erl_code_util__erl_vars_in_call_target_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_vars_in_call_target_3_0);
	MR_init_label2(erl_backend__erl_code_util__erl_vars_in_call_target_3_0,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_vars_in_call_target'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_vars_in_call_target_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_call_target_3_0_i3);
	}
MR_def_label(erl_backend__erl_code_util__erl_vars_in_call_target_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(erl_backend__erl_code_util__erl_vars_in_call_target_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_vars_in_call_target_3_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(erl_backend__erl_code_util__erl_vars_in_expr_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module27)
	MR_init_entry1(erl_backend__erl_code_util__erl_vars_in_clause_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_vars_in_clause_3_0);
	MR_init_label1(erl_backend__erl_code_util__erl_vars_in_clause_3_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_vars_in_clause'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_vars_in_clause_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_term);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		erl_backend__erl_code_util__erl_vars_in_clause_3_0_i5);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_clause_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(erl_backend__erl_code_util__erl_vars_in_expr_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module28)
	MR_init_entry1(erl_backend__erl_code_util__erl_vars_in_catch_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_vars_in_catch_3_0);
	MR_init_label2(erl_backend__erl_code_util__erl_vars_in_catch_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_vars_in_catch'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_vars_in_catch_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_vars_in_term_3_0,
		erl_backend__erl_code_util__erl_vars_in_catch_3_0_i2);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_catch_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_vars_in_term_3_0,
		erl_backend__erl_code_util__erl_vars_in_catch_3_0_i3);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_catch_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(erl_backend__erl_code_util__erl_vars_in_expr_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module29)
	MR_init_entry1(erl_backend__erl_code_util__erl_expr_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_expr_vars_2_0);
	MR_init_label1(erl_backend__erl_code_util__erl_expr_vars_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_expr_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_expr_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		erl_backend__erl_code_util__erl_expr_vars_2_0_i3);
MR_def_label(erl_backend__erl_code_util__erl_expr_vars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(erl_backend__erl_code_util__erl_vars_in_expr_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module30)
	MR_init_entry1(erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0);
	MR_init_label6(erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_rename_vars_in_expr_except'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__init_0_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0_i3);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0_i4);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0_i5);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0_i6);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_create_renaming_4_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0_i7);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0_i8);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__update_instmap_3_0);
MR_decl_entry(hlds__instmap__instmap_bound_vars_3_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module31)
	MR_init_entry1(erl_backend__erl_code_util__erl_fix_success_expr_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_fix_success_expr_6_0);
	MR_init_label4(erl_backend__erl_code_util__erl_fix_success_expr_6_0,18,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_fix_success_expr'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_fix_success_expr_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_fix_success_expr_6_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(erl_backend__erl_code_util__erl_fix_success_expr_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		erl_backend__erl_code_util__erl_fix_success_expr_6_0_i4);
MR_def_label(erl_backend__erl_code_util__erl_fix_success_expr_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__instmap_bound_vars_3_0,
		erl_backend__erl_code_util__erl_fix_success_expr_6_0_i5);
MR_def_label(erl_backend__erl_code_util__erl_fix_success_expr_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_0,
		erl_backend__erl_code_util__erl_fix_success_expr_6_0_i6);
MR_def_label(erl_backend__erl_code_util__erl_fix_success_expr_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(fn__set__filter_2_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module32)
	MR_init_entry1(erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0);
	MR_init_label2(erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_bound_nonlocals_in_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 4);
	MR_sv(4) = MR_tfield(0, MR_r3, 1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0_i2);
MR_def_label(erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0_i3);
MR_def_label(erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__erl_code_util__is_bound_and_not_dummy_5_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = MR_sv(3);
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__set__filter_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__empty_1_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__erl_backend__elds__join_exprs_2_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module33)
	MR_init_entry1(erl_backend__erl_code_util__erl_bind_unbound_vars_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_bind_unbound_vars_6_0);
	MR_init_label6(erl_backend__erl_code_util__erl_bind_unbound_vars_6_0,2,4,7,5,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_bind_unbound_vars'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__erl_bind_unbound_vars_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_0,
		erl_backend__erl_code_util__erl_bind_unbound_vars_6_0_i2);
MR_def_label(erl_backend__erl_code_util__erl_bind_unbound_vars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		erl_backend__erl_code_util__erl_bind_unbound_vars_6_0_i4);
MR_def_label(erl_backend__erl_code_util__erl_bind_unbound_vars_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__empty_1_0,
		erl_backend__erl_code_util__erl_bind_unbound_vars_6_0_i7);
MR_def_label(erl_backend__erl_code_util__erl_bind_unbound_vars_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_bind_unbound_vars_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(erl_backend__erl_code_util__erl_bind_unbound_vars_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		erl_backend__erl_code_util__erl_bind_unbound_vars_6_0_i9);
MR_def_label(erl_backend__erl_code_util__erl_bind_unbound_vars_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		erl_backend__erl_code_util__erl_bind_unbound_vars_6_0_i11);
MR_def_label(erl_backend__erl_code_util__erl_bind_unbound_vars_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__erl_backend__elds__join_exprs_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__erl_backend__elds__expr_from_var_1_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module34)
	MR_init_entry1(fn__erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_0);
	MR_init_label3(fn__erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_0,4,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_var_or_dummy_replacement'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_0_i4);
MR_def_label(fn__erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		fn__erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_0_i6);
MR_def_label(fn__erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(fn__erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__erl_backend__elds__expr_from_var_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module35)
	MR_init_entry1(fn__erl_backend__erl_code_util__erl_exprs_size_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__erl_code_util__erl_exprs_size_1_0);
	MR_init_label1(fn__erl_backend__erl_code_util__erl_exprs_size_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_exprs_size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__erl_code_util__erl_exprs_size_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__erl_backend__erl_code_util__erl_exprs_size_1_0_i3);
MR_def_label(fn__erl_backend__erl_code_util__erl_exprs_size_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module36)
	MR_init_entry1(fn__erl_backend__erl_code_util__erl_terms_size_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__erl_code_util__erl_terms_size_1_0);
	MR_init_label1(fn__erl_backend__erl_code_util__erl_terms_size_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_terms_size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__erl_code_util__erl_terms_size_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_term);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__erl_backend__erl_code_util__erl_terms_size_1_0_i3);
MR_def_label(fn__erl_backend__erl_code_util__erl_terms_size_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module37)
	MR_init_entry1(fn__erl_backend__erl_code_util__erl_term_size_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__erl_code_util__erl_term_size_1_0);
	MR_init_label3(fn__erl_backend__erl_code_util__erl_term_size_1_0,5,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_term_size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__erl_code_util__erl_term_size_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_term_size_1_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__erl_backend__erl_code_util__erl_term_size_1_0_i5);
MR_def_label(fn__erl_backend__erl_code_util__erl_term_size_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,13);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__erl_backend__erl_code_util__erl_term_size_1_0_i7);
MR_def_label(fn__erl_backend__erl_code_util__erl_term_size_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__erl_backend__erl_code_util__erl_term_size_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module38)
	MR_init_entry1(fn__erl_backend__erl_code_util__erl_cases_size_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__erl_code_util__erl_cases_size_1_0);
	MR_init_label2(fn__erl_backend__erl_code_util__erl_cases_size_1_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_cases_size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__erl_code_util__erl_cases_size_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_case);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,14);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__erl_backend__erl_code_util__erl_cases_size_1_0_i3);
MR_def_label(fn__erl_backend__erl_code_util__erl_cases_size_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,15);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__erl_backend__erl_code_util__erl_cases_size_1_0_i5);
MR_def_label(fn__erl_backend__erl_code_util__erl_cases_size_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module39)
	MR_init_entry1(fn__erl_backend__erl_code_util__erl_expr_size_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__erl_code_util__erl_expr_size_1_0);
	MR_init_label10(fn__erl_backend__erl_code_util__erl_expr_size_1_0,104,3,6,5,8,11,10,14,13,17)
	MR_init_label10(fn__erl_backend__erl_code_util__erl_expr_size_1_0,16,20,19,22,23,25,27,28,26,30)
	MR_init_label10(fn__erl_backend__erl_code_util__erl_expr_size_1_0,29,33,34,35,36,32,38,39,40,41)
	MR_init_label1(fn__erl_backend__erl_code_util__erl_expr_size_1_0,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_expr_size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__erl_code_util__erl_expr_size_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__erl_backend__erl_code_util__erl_exprs_size_1_0);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i5);
	}
	MR_r2 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__erl_backend__erl_code_util__erl_terms_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i6);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i28);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__erl_backend__erl_code_util__erl_term_size_1_0);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i10);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i11);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i28);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i13);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__erl_backend__erl_code_util__erl_call_target_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i14);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__erl_backend__erl_code_util__erl_exprs_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i28);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i16);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_localcall_lab(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i17);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__erl_backend__erl_code_util__erl_cases_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i28);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i19);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_localcall_lab(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i20);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i28);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i22);
	}
	MR_r1 = (MR_Integer) 10000;
	MR_decr_sp_and_return(6);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i23);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__erl_backend__erl_code_util__erl_cases_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i30);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i26);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_localcall_lab(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i27);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i28);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(6);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i29);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_localcall_lab(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i30);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(6);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i31);
	}
	MR_r2 = MR_tfield(3, MR_r1, 3);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i33);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_sv(5) = MR_tfield(3, MR_r3, 2);
	MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i32);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_r1, 1);
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__erl_backend__erl_code_util__erl_term_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i34);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__erl_backend__erl_code_util__erl_term_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i35);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i36);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(4);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i38);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Integer) 0;
	MR_np_localcall_lab(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i40);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i39);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i40);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__erl_backend__erl_code_util__erl_cases_size_1_0,
		fn__erl_backend__erl_code_util__erl_expr_size_1_0_i41);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((((MR_Integer) MR_sv(3) + (MR_Integer) MR_r1) + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_sv(2));
	MR_decr_sp_and_return(6);
MR_def_label(fn__erl_backend__erl_code_util__erl_expr_size_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_expr_size_1_0_i104);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module40)
	MR_init_entry1(fn__erl_backend__erl_code_util__erl_call_target_size_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__erl_code_util__erl_call_target_size_1_0);
	MR_init_label2(fn__erl_backend__erl_code_util__erl_call_target_size_1_0,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_call_target_size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__erl_code_util__erl_call_target_size_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_call_target_size_1_0_i3);
	}
MR_def_label(fn__erl_backend__erl_code_util__erl_call_target_size_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__erl_backend__erl_code_util__erl_call_target_size_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__erl_backend__erl_code_util__erl_call_target_size_1_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(fn__erl_backend__erl_code_util__erl_expr_size_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module41)
	MR_init_entry1(erl_backend__erl_code_util__non_variable_term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__non_variable_term_1_0);
	MR_init_label6(erl_backend__erl_code_util__non_variable_term_1_0,15,19,14,67,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'non_variable_term'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__non_variable_term_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__non_variable_term_1_0_i67);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__non_variable_term_1_0_i67);
	}
	if (MR_RTAGS_TEST(MR_r1,3,4)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__non_variable_term_1_0_i67);
	}
	if (MR_RTAGS_TEST(MR_r1,3,3)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__non_variable_term_1_0_i67);
	}
	if (MR_RTAGS_TEST(MR_r1,3,1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__non_variable_term_1_0_i67);
	}
	if (MR_RTAGS_TEST(MR_r1,3,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__non_variable_term_1_0_i67);
	}
	if (MR_RTAGS_TEST(MR_r1,3,2)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__non_variable_term_1_0_i67);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__non_variable_term_1_0_i1);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(2) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(3));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(erl_backend__erl_code_util__non_variable_term_1_0_i14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__member_2_1,
		erl_backend__erl_code_util__non_variable_term_1_0_i15);
MR_def_label(erl_backend__erl_code_util__non_variable_term_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_localcall_lab(erl_backend__erl_code_util__non_variable_term_1_0,
		erl_backend__erl_code_util__non_variable_term_1_0_i19);
MR_def_label(erl_backend__erl_code_util__non_variable_term_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(3));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(1);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(2);
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
MR_def_label(erl_backend__erl_code_util__non_variable_term_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(1);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(2);
	MR_GOTO_LAB(erl_backend__erl_code_util__non_variable_term_1_0_i2);
MR_def_label(erl_backend__erl_code_util__non_variable_term_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(erl_backend__erl_code_util__non_variable_term_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(erl_backend__erl_code_util__non_variable_term_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___erl_backend__elds__elds_term_0_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module42)
	MR_init_entry1(erl_backend__erl_code_util__match_inner_outer_cases_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__match_inner_outer_cases_3_0);
	MR_init_label8(erl_backend__erl_code_util__match_inner_outer_cases_3_0,79,7,12,11,9,17,80,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_inner_outer_cases'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__match_inner_outer_cases_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__match_inner_outer_cases_3_0_i79);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__match_inner_outer_cases_3_0_i80);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(erl_backend__erl_code_util__match_inner_outer_cases_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__match_inner_outer_cases_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__match_inner_outer_cases_3_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 0);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__non_variable_term_1_0,
		erl_backend__erl_code_util__match_inner_outer_cases_3_0_i7);
MR_def_label(erl_backend__erl_code_util__match_inner_outer_cases_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__match_inner_outer_cases_3_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___erl_backend__elds__elds_term_0_0,
		erl_backend__erl_code_util__match_inner_outer_cases_3_0_i12);
MR_def_label(erl_backend__erl_code_util__match_inner_outer_cases_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__match_inner_outer_cases_3_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(erl_backend__erl_code_util__match_inner_outer_cases_3_0_i9);
MR_def_label(erl_backend__erl_code_util__match_inner_outer_cases_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__match_inner_outer_cases_3_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__match_inner_outer_cases_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(erl_backend__erl_code_util__match_inner_outer_cases_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	}
	MR_np_localcall_lab(erl_backend__erl_code_util__match_inner_outer_cases_3_0,
		erl_backend__erl_code_util__match_inner_outer_cases_3_0_i17);
MR_def_label(erl_backend__erl_code_util__match_inner_outer_cases_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__match_inner_outer_cases_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(erl_backend__erl_code_util__match_inner_outer_cases_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(erl_backend__erl_code_util__match_inner_outer_cases_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__split_last_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module43)
	MR_init_entry1(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0);
	MR_init_label6(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0,7,6,11,15,2,58)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_simplify_nested_cases'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0_i58);
	}
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(list__split_last_3_0,
		erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0_i7);
MR_def_label(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0_i2);
	}
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0_i2);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__match_inner_outer_cases_3_0,
		erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0_i11);
MR_def_label(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0_i58);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__match_inner_outer_cases_3_0,
		erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0_i11);
MR_def_label(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0_i15);
MR_def_label(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(erl_backend__erl_code_util__maybe_simplify_nested_cases_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module44)
	MR_init_entry1(fn__erl_backend__erl_code_util__erl_base_typeclass_info_method_offset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__erl_code_util__erl_base_typeclass_info_method_offset_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_base_typeclass_info_method_offset'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__erl_code_util__erl_base_typeclass_info_method_offset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module45)
	MR_init_entry1(erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_gen_info_new_anonymous_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__var_is_bound_in_instmap_delta_4_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module46)
	MR_init_entry1(erl_backend__erl_code_util__is_bound_and_not_dummy_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__is_bound_and_not_dummy_5_0);
	MR_init_label4(erl_backend__erl_code_util__is_bound_and_not_dummy_5_0,2,5,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_bound_and_not_dummy'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__is_bound_and_not_dummy_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__var_is_bound_in_instmap_delta_4_0,
		erl_backend__erl_code_util__is_bound_and_not_dummy_5_0_i2);
MR_def_label(erl_backend__erl_code_util__is_bound_and_not_dummy_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__is_bound_and_not_dummy_5_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		erl_backend__erl_code_util__is_bound_and_not_dummy_5_0_i5);
MR_def_label(erl_backend__erl_code_util__is_bound_and_not_dummy_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		erl_backend__erl_code_util__is_bound_and_not_dummy_5_0_i6);
MR_def_label(erl_backend__erl_code_util__is_bound_and_not_dummy_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(4);
MR_def_label(erl_backend__erl_code_util__is_bound_and_not_dummy_5_0,1)
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

MR_decl_entry(varset__search_name_3_0);
MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module47)
	MR_init_entry1(erl_backend__erl_code_util__erl_create_renaming_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_create_renaming_2_5_0);
	MR_init_label4(erl_backend__erl_code_util__erl_create_renaming_2_5_0,3,2,7,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_create_renaming_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_create_renaming_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(varset__search_name_3_0,
		erl_backend__erl_code_util__erl_create_renaming_2_5_0_i3);
MR_def_label(erl_backend__erl_code_util__erl_create_renaming_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_code_util__erl_create_renaming_2_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		erl_backend__erl_code_util__erl_create_renaming_2_5_0_i7);
MR_def_label(erl_backend__erl_code_util__erl_create_renaming_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(varset__new_var_3_0,
		erl_backend__erl_code_util__erl_create_renaming_2_5_0_i7);
MR_def_label(erl_backend__erl_code_util__erl_create_renaming_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r6 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		erl_backend__erl_code_util__erl_create_renaming_2_5_0_i10);
MR_def_label(erl_backend__erl_code_util__erl_create_renaming_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module48)
	MR_init_entry1(erl_backend__erl_code_util__erl_rename_vars_in_case_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_rename_vars_in_case_3_0);
	MR_init_label2(erl_backend__erl_code_util__erl_rename_vars_in_case_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_rename_vars_in_case'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_rename_vars_in_case_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_term_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_case_3_0_i2);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_case_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_rename_vars_in_expr_3_0,
		erl_backend__erl_code_util__erl_rename_vars_in_case_3_0_i3);
MR_def_label(erl_backend__erl_code_util__erl_rename_vars_in_case_3_0,3)
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


MR_BEGIN_MODULE(erl_backend__erl_code_util_module49)
	MR_init_entry1(erl_backend__erl_code_util__erl_vars_in_case_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__erl_code_util__erl_vars_in_case_3_0);
	MR_init_label1(erl_backend__erl_code_util__erl_vars_in_case_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_vars_in_case'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_code_util__erl_vars_in_case_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_vars_in_term_3_0,
		erl_backend__erl_code_util__erl_vars_in_case_3_0_i2);
MR_def_label(erl_backend__erl_code_util__erl_vars_in_case_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(erl_backend__erl_code_util__erl_vars_in_expr_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module50)
	MR_init_entry1(fn__erl_backend__erl_code_util__erl_case_size_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__erl_code_util__erl_case_size_1_0);
	MR_init_label2(fn__erl_backend__erl_code_util__erl_case_size_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erl_case_size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__erl_code_util__erl_case_size_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__erl_backend__erl_code_util__erl_term_size_1_0,
		fn__erl_backend__erl_code_util__erl_case_size_1_0_i2);
MR_def_label(fn__erl_backend__erl_code_util__erl_case_size_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__erl_backend__erl_code_util__erl_expr_size_1_0,
		fn__erl_backend__erl_code_util__erl_case_size_1_0_i3);
MR_def_label(fn__erl_backend__erl_code_util__erl_case_size_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module51)
	MR_init_entry1(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___erl_backend__erl_code_util__erl_gen_info_0_0);
	MR_init_label7(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0,4,6,9,11,13,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__erl_code_util__erl_gen_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0_i17);
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___erl_backend__erl_code_util__erl_gen_info_0_0_i4);
MR_def_label(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___erl_backend__erl_code_util__erl_gen_info_0_0_i6);
MR_def_label(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___erl_backend__erl_code_util__erl_gen_info_0_0_i9);
MR_def_label(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___erl_backend__erl_code_util__erl_gen_info_0_0_i11);
MR_def_label(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___erl_backend__erl_code_util__erl_gen_info_0_0_i13);
MR_def_label(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___erl_backend__erl_code_util__erl_gen_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(erl_backend__erl_code_util_module52)
	MR_init_entry1(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___erl_backend__erl_code_util__erl_gen_info_0_0);
	MR_init_label10(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0,3,2,5,9,13,17,22,27,32,96)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__erl_code_util__erl_gen_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i2);
MR_def_label(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0,2)
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
		__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i5);
MR_def_label(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i96);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i9);
MR_def_label(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i96);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i13);
MR_def_label(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i96);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i17);
MR_def_label(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i96);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i22);
MR_def_label(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i96);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i27);
MR_def_label(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i96);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i32);
MR_def_label(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0_i96);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___erl_backend__erl_code_util__erl_gen_info_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module53)
	MR_init_entry1(__Unify___erl_backend__erl_code_util__opt_dummy_args_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___erl_backend__erl_code_util__opt_dummy_args_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__erl_code_util__opt_dummy_args_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module54)
	MR_init_entry1(__Compare___erl_backend__erl_code_util__opt_dummy_args_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___erl_backend__erl_code_util__opt_dummy_args_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__erl_code_util__opt_dummy_args_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_code_util_module55)
	MR_init_entry1(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__erl_gen_info_new_anonymous_var__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(varset__new_named_var_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__erl_backend__erl_code_util_maybe_bunch_0(void)
{
	erl_backend__erl_code_util_module0();
	erl_backend__erl_code_util_module1();
	erl_backend__erl_code_util_module2();
	erl_backend__erl_code_util_module3();
	erl_backend__erl_code_util_module4();
	erl_backend__erl_code_util_module5();
	erl_backend__erl_code_util_module6();
	erl_backend__erl_code_util_module7();
	erl_backend__erl_code_util_module8();
	erl_backend__erl_code_util_module9();
	erl_backend__erl_code_util_module10();
	erl_backend__erl_code_util_module11();
	erl_backend__erl_code_util_module12();
	erl_backend__erl_code_util_module13();
	erl_backend__erl_code_util_module14();
	erl_backend__erl_code_util_module15();
	erl_backend__erl_code_util_module16();
	erl_backend__erl_code_util_module17();
	erl_backend__erl_code_util_module18();
	erl_backend__erl_code_util_module19();
	erl_backend__erl_code_util_module20();
	erl_backend__erl_code_util_module21();
	erl_backend__erl_code_util_module22();
	erl_backend__erl_code_util_module23();
	erl_backend__erl_code_util_module24();
	erl_backend__erl_code_util_module25();
	erl_backend__erl_code_util_module26();
	erl_backend__erl_code_util_module27();
	erl_backend__erl_code_util_module28();
	erl_backend__erl_code_util_module29();
	erl_backend__erl_code_util_module30();
	erl_backend__erl_code_util_module31();
	erl_backend__erl_code_util_module32();
	erl_backend__erl_code_util_module33();
	erl_backend__erl_code_util_module34();
	erl_backend__erl_code_util_module35();
	erl_backend__erl_code_util_module36();
	erl_backend__erl_code_util_module37();
	erl_backend__erl_code_util_module38();
	erl_backend__erl_code_util_module39();
}

static void mercury__erl_backend__erl_code_util_maybe_bunch_1(void)
{
	erl_backend__erl_code_util_module40();
	erl_backend__erl_code_util_module41();
	erl_backend__erl_code_util_module42();
	erl_backend__erl_code_util_module43();
	erl_backend__erl_code_util_module44();
	erl_backend__erl_code_util_module45();
	erl_backend__erl_code_util_module46();
	erl_backend__erl_code_util_module47();
	erl_backend__erl_code_util_module48();
	erl_backend__erl_code_util_module49();
	erl_backend__erl_code_util_module50();
	erl_backend__erl_code_util_module51();
	erl_backend__erl_code_util_module52();
	erl_backend__erl_code_util_module53();
	erl_backend__erl_code_util_module54();
	erl_backend__erl_code_util_module55();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__erl_backend__erl_code_util__init(void);
void mercury__erl_backend__erl_code_util__init_type_tables(void);
void mercury__erl_backend__erl_code_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__erl_backend__erl_code_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__erl_backend__erl_code_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__erl_backend__erl_code_util__init_threadscope_string_table(void);
#endif

void mercury__erl_backend__erl_code_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__erl_backend__erl_code_util_maybe_bunch_0();
	mercury__erl_backend__erl_code_util_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0,
		erl_backend__erl_code_util__erl_gen_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__erl_code_util__type_ctor_info_opt_dummy_args_0,
		erl_backend__erl_code_util__opt_dummy_args_0_0);
	mercury__erl_backend__erl_code_util__init_debugger();
}

void mercury__erl_backend__erl_code_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__erl_code_util__type_ctor_info_opt_dummy_args_0);
	}
}


void mercury__erl_backend__erl_code_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__erl_backend__erl_code_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__erl_backend__erl_code_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__erl_backend__erl_code_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__erl_backend__erl_code_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
