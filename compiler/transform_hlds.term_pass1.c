/*
** Automatically generated from `term_pass1.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__term_pass1__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.term_pass1.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.term_pass1.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "transform_hlds.term_pass1.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "transform_hlds.term_pass1.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "transform_hlds.term_pass1.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "transform_hlds.term_pass1.c"
#line 48 "transform_hlds.term_pass1.c"
#include "transform_hlds.term_pass1.mh"

#line 51 "transform_hlds.term_pass1.c"
#line 52 "transform_hlds.term_pass1.c"
#ifndef TRANSFORM_HLDS__TERM_PASS1_DECL_GUARD
#define TRANSFORM_HLDS__TERM_PASS1_DECL_GUARD

#line 56 "transform_hlds.term_pass1.c"
#line 57 "transform_hlds.term_pass1.c"

#endif
#line 60 "transform_hlds.term_pass1.c"

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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__term_pass1__type_ctor_info_pass1_result_0,
	mercury_data_transform_hlds__term_pass1__type_ctor_info_arg_size_result_0;
MR_decl_label1(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__451__1_6_0, 2)
MR_decl_label8(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0, 67,6,7,8,10,12,13,16)
MR_decl_label8(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0, 15,68,21,22,23,24,25,27)
MR_decl_label6(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0, 29,31,33,35,69,38)
MR_decl_label3(transform_hlds__term_pass1__check_proc_non_term_calls_7_0, 2,3,4)
MR_decl_label6(transform_hlds__term_pass1__convert_equations_2_7_0, 16,4,5,6,7,2)
MR_decl_label8(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0, 2,3,10,9,11,14,13,7)
MR_decl_label1(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0, 5)
MR_decl_label5(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0, 19,2,6,5,22)
MR_decl_label8(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0, 23,3,4,5,6,9,10,8)
MR_decl_label2(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0, 12,13)
MR_decl_label8(transform_hlds__term_pass1__find_arg_sizes_pred_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__term_pass1__find_arg_sizes_pred_9_0, 10,11,12,13,16,17,18,19)
MR_decl_label4(transform_hlds__term_pass1__find_arg_sizes_pred_9_0, 20,22,21,15)
MR_decl_label5(transform_hlds__term_pass1__init_output_suppliers_3_0, 4,5,6,7,3)
MR_decl_label3(transform_hlds__term_pass1__lookup_coeff_4_0, 2,3,4)
MR_decl_label4(transform_hlds__term_pass1__pred_proc_var_6_0, 3,2,5,6)
MR_decl_label8(transform_hlds__term_pass1__solve_equations_5_0, 3,4,5,6,8,9,10,11)
MR_decl_label5(transform_hlds__term_pass1__solve_equations_5_0, 12,13,19,15,16)
MR_decl_label5(transform_hlds__term_pass1__update_output_suppliers_4_0, 3,10,9,13,8)
MR_decl_label4(__Unify___transform_hlds__term_pass1__arg_size_result_0_0, 7,19,5,1)
MR_decl_label5(__Unify___transform_hlds__term_pass1__pass1_result_0_0, 7,9,22,5,1)
MR_decl_label7(__Compare___transform_hlds__term_pass1__arg_size_result_0_0, 3,2,9,7,5,15,45)
MR_decl_label8(__Compare___transform_hlds__term_pass1__pass1_result_0_0, 3,2,9,13,7,5,20,54)
MR_decl_static(transform_hlds__term_pass1__init_output_suppliers_3_0)
MR_decl_static(fn__transform_hlds__term_pass1__this_file_0_0)
MR_decl_static(transform_hlds__term_pass1__update_output_suppliers_4_0)
MR_decl_static(transform_hlds__term_pass1__find_arg_sizes_pred_9_0)
MR_decl_static(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0)
MR_decl_static(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0)
MR_decl_static(transform_hlds__term_pass1__pred_proc_var_6_0)
MR_decl_static(transform_hlds__term_pass1__convert_equations_2_7_0)
MR_decl_static(transform_hlds__term_pass1__solve_equations_5_0)
MR_def_extern_entry(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0)
MR_decl_static(transform_hlds__term_pass1__check_goal_non_term_calls_9_0)
MR_decl_static(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0)
MR_decl_static(transform_hlds__term_pass1__check_proc_non_term_calls_7_0)
MR_decl_static(transform_hlds__term_pass1__check_cases_non_term_calls_9_0)
MR_decl_static(transform_hlds__term_pass1__lookup_coeff_4_0)
MR_def_extern_entry(__Unify___transform_hlds__term_pass1__arg_size_result_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_pass1__arg_size_result_0_0)
MR_decl_static(__Unify___transform_hlds__term_pass1__pass1_result_0_0)
MR_decl_static(__Compare___transform_hlds__term_pass1__pass1_result_0_0)
MR_decl_static(transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__143__1_2_0)
MR_decl_static(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__436__1_2_0)
MR_decl_static(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__451__1_6_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_49_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_51_95_95_49_95_95_91_49_93_95_48_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
static const struct mercury_type_0 mercury_common_0[11] =
{
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
MR_BOOL_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,3,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(3,1)
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
MR_CTOR1_ADDR(varset, varset),
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
MR_CTOR1_ADDR(varset, varset),
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__init_output_suppliers_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__solve_equations_5_0_1;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__init_output_suppliers_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__solve_equations_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,9),
MR_COMMON(3,4)
},
};

static const struct mercury_type_2 mercury_common_2[4] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__143__1_2_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(transform_hlds__term_pass1__check_proc_non_term_calls_7_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__451__1_6_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__436__1_2_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_3 mercury_common_3[10] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,5),
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,0,5)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,7),
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,7)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,7),
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,10),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__convert_equations_2_7_0_1;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__convert_equations_2_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(3,4),
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_COMMON(3,5),
MR_COMMON(3,5)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__solve_equations_5_0_2;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__solve_equations_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(3,5),
MR_COMMON(3,6),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(3,7)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_4;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(3,9),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_2,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(3,9),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_3,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(3,9),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_4,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(3,9),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_traversal__type_ctor_info_path_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_traversal__type_ctor_info_path_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__term_traversal__type_ctor_info_path_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_traversal__type_ctor_info_path_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1bool__type_ctor_info_bool_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_bool__type_ctor_info_bool_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1bool__type_ctor_info_bool_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_pass1__field_types_pass1_result_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__term_traversal__type_ctor_info_path_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0 = {
	"ok",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_pass1__field_types_pass1_result_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_pass1__field_types_pass1_result_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1 = {
	"error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_pass1__field_types_pass1_result_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0[] = {
	&mercury_data_transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1[] = {
	&mercury_data_transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_pass1__du_name_ordered_pass1_result_0[] = {
	&mercury_data_transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1,
	&mercury_data_transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0
};

const MR_Integer mercury_data_transform_hlds__term_pass1__functor_number_map_pass1_result_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_pass1__type_ctor_info_pass1_result_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_pass1__pass1_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_pass1__pass1_result_0_0)),
	"transform_hlds.term_pass1",
	"pass1_result",
	{ (void *)mercury_data_transform_hlds__term_pass1__du_name_ordered_pass1_result_0 },
	{ (void *)mercury_data_transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0 },
	2,
	4,
	mercury_data_transform_hlds__term_pass1__functor_number_map_pass1_result_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_pass1__field_types_arg_size_result_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0 = {
	"ok",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_pass1__field_types_arg_size_result_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_pass1__field_types_arg_size_result_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1 = {
	"error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_pass1__field_types_arg_size_result_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0[] = {
	&mercury_data_transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1[] = {
	&mercury_data_transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_pass1__du_name_ordered_arg_size_result_0[] = {
	&mercury_data_transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1,
	&mercury_data_transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0
};

const MR_Integer mercury_data_transform_hlds__term_pass1__functor_number_map_arg_size_result_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_pass1__type_ctor_info_arg_size_result_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_pass1__arg_size_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_pass1__arg_size_result_0_0)),
	"transform_hlds.term_pass1",
	"arg_size_result",
	{ (void *)mercury_data_transform_hlds__term_pass1__du_name_ordered_arg_size_result_0 },
	{ (void *)mercury_data_transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0 },
	2,
	4,
	mercury_data_transform_hlds__term_pass1__functor_number_map_arg_size_result_0
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__init_output_suppliers_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_pass1",
"transform_hlds.term_pass1",
"lambda_term_pass1_m_143",
2,
0
},
"transform_hlds.term_pass1",
"term_pass1.m",
143,
"d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_pass1",
"transform_hlds.term_pass1",
"check_proc_non_term_calls",
7,
0
},
"transform_hlds.term_pass1",
"term_pass1.m",
200,
"d2;c17;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__convert_equations_2_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_pass1",
"transform_hlds.term_pass1",
"lambda_term_pass1_m_451",
6,
0
},
"transform_hlds.term_pass1",
"term_pass1.m",
451,
"d2;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__solve_equations_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_pass1",
"transform_hlds.term_pass1",
"lambda_term_pass1_m_436",
2,
0
},
"transform_hlds.term_pass1",
"term_pass1.m",
436,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__solve_equations_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_pass1",
"transform_hlds.term_pass1",
"lookup_coeff",
4,
0
},
"transform_hlds.term_pass1",
"term_pass1.m",
418,
"d1;c6;t;c5;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_pass1",
"transform_hlds.term_pass1",
"check_goal_non_term_calls",
9,
0
},
"transform_hlds.term_pass1",
"term_pass1.m",
329,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_pass1",
"transform_hlds.term_pass1",
"check_goal_non_term_calls",
9,
0
},
"transform_hlds.term_pass1",
"term_pass1.m",
329,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_3 = {
{
MR_PREDICATE,
"transform_hlds.term_pass1",
"transform_hlds.term_pass1",
"check_cases_non_term_calls",
9,
0
},
"transform_hlds.term_pass1",
"term_pass1.m",
362,
"d4;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_4 = {
{
MR_PREDICATE,
"transform_hlds.term_pass1",
"transform_hlds.term_pass1",
"check_goal_non_term_calls",
9,
0
},
"transform_hlds.term_pass1",
"term_pass1.m",
379,
"d8;c16;"
};

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module0)
	MR_init_entry1(transform_hlds__term_pass1__init_output_suppliers_3_0);
	MR_init_label5(transform_hlds__term_pass1__init_output_suppliers_3_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__init_output_suppliers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__init_output_suppliers_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(transform_hlds__term_pass1__init_output_suppliers_3_0,
		transform_hlds__term_pass1__init_output_suppliers_3_0_i4);
MR_def_label(transform_hlds__term_pass1__init_output_suppliers_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_pass1__init_output_suppliers_3_0_i5);
MR_def_label(transform_hlds__term_pass1__init_output_suppliers_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_pass1__init_output_suppliers_3_0_i6);
MR_def_label(transform_hlds__term_pass1__init_output_suppliers_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_pass1__init_output_suppliers_3_0_i7);
MR_def_label(transform_hlds__term_pass1__init_output_suppliers_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(map__det_insert_4_0);
MR_def_label(transform_hlds__term_pass1__init_output_suppliers_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_tailcall_ent(map__init_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module1)
	MR_init_entry1(fn__transform_hlds__term_pass1__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_pass1__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_pass1.m", 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bag__contains_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module2)
	MR_init_entry1(transform_hlds__term_pass1__update_output_suppliers_4_0);
	MR_init_label5(transform_hlds__term_pass1__update_output_suppliers_4_0,3,10,9,13,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__update_output_suppliers_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__update_output_suppliers_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__update_output_suppliers_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_pass1__update_output_suppliers_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__update_output_suppliers_4_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(bag__contains_2_0,
		transform_hlds__term_pass1__update_output_suppliers_4_0_i10);
MR_def_label(transform_hlds__term_pass1__update_output_suppliers_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__update_output_suppliers_4_0_i9);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(1) = (MR_Integer) 1;
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(transform_hlds__term_pass1__update_output_suppliers_4_0,
		transform_hlds__term_pass1__update_output_suppliers_4_0_i13);
MR_def_label(transform_hlds__term_pass1__update_output_suppliers_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(transform_hlds__term_pass1__update_output_suppliers_4_0,
		transform_hlds__term_pass1__update_output_suppliers_4_0_i13);
MR_def_label(transform_hlds__term_pass1__update_output_suppliers_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__term_pass1__update_output_suppliers_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_pass1.m", 12);
	MR_r2 = (MR_Word) MR_string_const("update_output_suppliers/4: umatched variables.", 46);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0);
MR_decl_entry(transform_hlds__term_traversal__init_traversal_params_9_0);
MR_decl_entry(transform_hlds__term_util__partition_call_args_5_0);
MR_decl_entry(set__singleton_set_2_1);
MR_decl_entry(transform_hlds__term_traversal__traverse_goal_8_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(transform_hlds__term_traversal__upper_bound_active_vars_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(bag__is_subbag_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module3)
	MR_init_entry1(transform_hlds__term_pass1__find_arg_sizes_pred_9_0);
	MR_init_label8(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,10,11,12,13,16,17,18,19)
	MR_init_label4(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,20,22,21,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__find_arg_sizes_pred_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i2);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i3);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i4);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i5);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i6);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i7);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i8);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i9);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_ctfield(0, MR_tempr1, 1);
	MR_r8 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__init_traversal_params_9_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i10);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_util__partition_call_args_5_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i11);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__singleton_set_2_1,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i12);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__traverse_goal_8_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i13);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i15);
	}
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i16);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__term_traversal__upper_bound_active_vars_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i17);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i18);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__term_pass1__update_output_suppliers_4_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i19);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i20);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(bag__is_subbag_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i22);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(7);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(7);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(list__take_upto_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl3_8_4);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module4)
	MR_init_entry1(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0);
	MR_init_label8(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,23,3,4,5,6,9,10,8)
	MR_init_label2(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_r4;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_tfield(0, MR_r1, 2) = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_r7;
	MR_np_call_localret_ent(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i4);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i5);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(list__take_upto_3_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i6);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i8);
	}
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i9);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i10);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i23);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(4);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r6 = MR_sv(5);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(list__foldl3_8_4,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i12);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i13);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module5)
	MR_init_entry1(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0);
	MR_init_label5(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0,19,2,6,5,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r7 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0_i2);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0_i6);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0_i19);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(svvarset__new_var_3_0);
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module6)
	MR_init_entry1(transform_hlds__term_pass1__pred_proc_var_6_0);
	MR_init_label4(transform_hlds__term_pass1__pred_proc_var_6_0,3,2,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__pred_proc_var_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__term_pass1__pred_proc_var_6_0_i3);
MR_def_label(transform_hlds__term_pass1__pred_proc_var_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__pred_proc_var_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__term_pass1__pred_proc_var_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(svvarset__new_var_3_0,
		transform_hlds__term_pass1__pred_proc_var_6_0_i5);
MR_def_label(transform_hlds__term_pass1__pred_proc_var_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		transform_hlds__term_pass1__pred_proc_var_6_0_i6);
MR_def_label(transform_hlds__term_pass1__pred_proc_var_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__float_1_0);
static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;
MR_decl_entry(list__map_foldl2_7_1);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_equation_0;
MR_decl_entry(svset__insert_3_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module7)
	MR_init_entry1(transform_hlds__term_pass1__convert_equations_2_7_0);
	MR_init_label6(transform_hlds__term_pass1__convert_equations_2_7_0,16,4,5,6,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__convert_equations_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__convert_equations_2_7_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__term_pass1__convert_equations_2_7_0_i4);
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__term_pass1__pred_proc_var_6_0,
		transform_hlds__term_pass1__convert_equations_2_7_0_i5);
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r7 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r8 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_1,
		transform_hlds__term_pass1__convert_equations_2_7_0_i6);
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp, equation);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		transform_hlds__term_pass1__convert_equations_2_7_0_i7);
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__term_pass1__convert_equations_2_7_0_i16);
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__init_1_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(map__values_2_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(libs__lp__lp_solve_8_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module8)
	MR_init_entry1(transform_hlds__term_pass1__solve_equations_5_0);
	MR_init_label8(transform_hlds__term_pass1__solve_equations_5_0,3,4,5,6,8,9,10,11)
	MR_init_label5(transform_hlds__term_pass1__solve_equations_5_0,12,13,19,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__solve_equations_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(varset__init_1_0,
		transform_hlds__term_pass1__solve_equations_5_0_i3);
MR_def_label(transform_hlds__term_pass1__solve_equations_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__term_pass1__solve_equations_5_0_i4);
MR_def_label(transform_hlds__term_pass1__solve_equations_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp, equation);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__term_pass1__solve_equations_5_0_i5);
MR_def_label(transform_hlds__term_pass1__solve_equations_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_pass1__convert_equations_2_7_0,
		transform_hlds__term_pass1__solve_equations_5_0_i6);
MR_def_label(transform_hlds__term_pass1__solve_equations_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__solve_equations_5_0_i19);
	}
	MR_sv(1) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp, equation);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__term_pass1__solve_equations_5_0_i8);
MR_def_label(transform_hlds__term_pass1__solve_equations_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__values_2_0,
		transform_hlds__term_pass1__solve_equations_5_0_i9);
MR_def_label(transform_hlds__term_pass1__solve_equations_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_pass1__solve_equations_5_0_i10);
MR_def_label(transform_hlds__term_pass1__solve_equations_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__values_2_0,
		transform_hlds__term_pass1__solve_equations_5_0_i11);
MR_def_label(transform_hlds__term_pass1__solve_equations_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_pass1__solve_equations_5_0_i12);
MR_def_label(transform_hlds__term_pass1__solve_equations_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(libs__lp__lp_solve_8_0,
		transform_hlds__term_pass1__solve_equations_5_0_i13);
MR_def_label(transform_hlds__term_pass1__solve_equations_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__solve_equations_5_0_i15);
	}
MR_def_label(transform_hlds__term_pass1__solve_equations_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__term_pass1__solve_equations_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_pass1__lookup_coeff_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_pass1__solve_equations_5_0_i16);
MR_def_label(transform_hlds__term_pass1__solve_equations_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_util__get_context_from_scc_3_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module9)
	MR_init_entry1(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0);
	MR_init_label8(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,2,3,10,9,11,14,13,7)
	MR_init_label1(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_pass1__init_output_suppliers_3_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i2);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i3);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i5);
	}
	MR_r5 = MR_ctfield(0, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i7);
	}
	MR_r5 = MR_ctfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i9);
	}
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_util__get_context_from_scc_3_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i10);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r5;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__term_pass1__solve_equations_5_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i11);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__term_util__get_context_from_scc_3_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i14);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r5;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module10)
	MR_init_entry1(transform_hlds__term_pass1__check_goal_non_term_calls_9_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__check_goal_non_term_calls_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(transform_hlds__term_util__horder_vars_2_0);
MR_decl_entry(list__cons_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(transform_hlds__term_pass1_module11)
	MR_init_entry1(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0);
	MR_init_label8(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,67,6,7,8,10,12,13,16)
	MR_init_label8(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,15,68,21,22,23,24,25,27)
	MR_init_label6(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,29,31,33,35,69,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i24) MR_AND
		MR_LABEL_AP(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i67) MR_AND
		MR_LABEL_AP(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i68) MR_AND
		MR_LABEL_AP(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i23));
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr3 = MR_r6;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i6);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i7);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i8);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i10);
	}
	MR_r2 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(2) = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__term_util__horder_vars_2_0,
		transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i16);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i12);
	}
	MR_r2 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(2) = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__term_util__horder_vars_2_0,
		transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i16);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i13);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_util__horder_vars_2_0,
		transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i16);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i22);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i21);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i22);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i24) MR_AND
		MR_LABEL_AP(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i25) MR_AND
		MR_LABEL_AP(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i27) MR_AND
		MR_LABEL_AP(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i29) MR_AND
		MR_LABEL_AP(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i31) MR_AND
		MR_LABEL_AP(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i33) MR_AND
		MR_LABEL_AP(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i35) MR_AND
		MR_LABEL_AP(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i69));
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_pass1__check_goal_non_term_calls_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r7 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r8 = MR_r6;
	MR_r6 = MR_ctfield(3, MR_tempr2, 2);
	MR_np_tailcall_ent(list__foldl3_8_4);
	}
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_pass1__check_goal_non_term_calls_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r7 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r8 = MR_r6;
	MR_r6 = MR_ctfield(3, MR_tempr2, 1);
	MR_np_tailcall_ent(list__foldl3_8_4);
	}
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_pass1__check_cases_non_term_calls_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r7 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r8 = MR_r6;
	MR_r6 = MR_ctfield(3, MR_tempr2, 3);
	MR_np_tailcall_ent(list__foldl3_8_4);
	}
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(transform_hlds__term_pass1__check_goal_non_term_calls_9_0);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(transform_hlds__term_pass1__check_goal_non_term_calls_9_0);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr3, 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_pass1__check_goal_non_term_calls_9_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r7 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r8 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl3_8_4);
	}
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__term_pass1__this_file_0_0,
		transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0_i38);
MR_def_label(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("shorthand goal encountered during termination analysis.", 55);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module12)
	MR_init_entry1(transform_hlds__term_pass1__check_proc_non_term_calls_7_0);
	MR_init_label3(transform_hlds__term_pass1__check_proc_non_term_calls_7_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__check_proc_non_term_calls_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_pass1__check_proc_non_term_calls_7_0_i2);
MR_def_label(transform_hlds__term_pass1__check_proc_non_term_calls_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__term_pass1__check_proc_non_term_calls_7_0_i3);
MR_def_label(transform_hlds__term_pass1__check_proc_non_term_calls_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__term_pass1__check_proc_non_term_calls_7_0_i4);
MR_def_label(transform_hlds__term_pass1__check_proc_non_term_calls_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module13)
	MR_init_entry1(transform_hlds__term_pass1__check_cases_non_term_calls_9_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__check_cases_non_term_calls_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(transform_hlds__term_pass1__check_goal_expr_non_term_calls_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__float__ceiling_to_int_1_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module14)
	MR_init_entry1(transform_hlds__term_pass1__lookup_coeff_4_0);
	MR_init_label3(transform_hlds__term_pass1__lookup_coeff_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__lookup_coeff_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_pass1__lookup_coeff_4_0_i2);
MR_def_label(transform_hlds__term_pass1__lookup_coeff_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__term_pass1__lookup_coeff_4_0_i3);
MR_def_label(transform_hlds__term_pass1__lookup_coeff_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__float__ceiling_to_int_1_0,
		transform_hlds__term_pass1__lookup_coeff_4_0_i4);
MR_def_label(transform_hlds__term_pass1__lookup_coeff_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module15)
	MR_init_entry1(__Unify___transform_hlds__term_pass1__arg_size_result_0_0);
	MR_init_label4(__Unify___transform_hlds__term_pass1__arg_size_result_0_0,7,19,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_pass1__arg_size_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__arg_size_result_0_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__arg_size_result_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__arg_size_result_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_pass1__arg_size_result_0_0_i7);
MR_def_label(__Unify___transform_hlds__term_pass1__arg_size_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__arg_size_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___transform_hlds__term_pass1__arg_size_result_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_pass1__arg_size_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__arg_size_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__term_pass1__arg_size_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module16)
	MR_init_entry1(__Compare___transform_hlds__term_pass1__arg_size_result_0_0);
	MR_init_label7(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,3,2,9,7,5,15,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_pass1__arg_size_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__arg_size_result_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__arg_size_result_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__arg_size_result_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__arg_size_result_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_pass1__arg_size_result_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__arg_size_result_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__arg_size_result_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module17)
	MR_init_entry1(__Unify___transform_hlds__term_pass1__pass1_result_0_0);
	MR_init_label5(__Unify___transform_hlds__term_pass1__pass1_result_0_0,7,9,22,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_pass1__pass1_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__pass1_result_0_0_i22);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__pass1_result_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__pass1_result_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_pass1__pass1_result_0_0_i7);
MR_def_label(__Unify___transform_hlds__term_pass1__pass1_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__pass1_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__term_pass1__pass1_result_0_0_i9);
MR_def_label(__Unify___transform_hlds__term_pass1__pass1_result_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__pass1_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__term_pass1__pass1_result_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_pass1__pass1_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__pass1_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__term_pass1__pass1_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module18)
	MR_init_entry1(__Compare___transform_hlds__term_pass1__pass1_result_0_0);
	MR_init_label8(__Compare___transform_hlds__term_pass1__pass1_result_0_0,3,2,9,13,7,5,20,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_pass1__pass1_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__pass1_result_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__pass1_result_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__pass1_result_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__pass1_result_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_pass1__pass1_result_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__pass1_result_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__term_pass1__pass1_result_0_0_i13);
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__pass1_result_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__pass1_result_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module19)
	MR_init_entry1(transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__143__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__143__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_49_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_51_95_95_49_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module20)
	MR_init_entry1(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__436__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__436__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_neg1pt0000000000000000 = -1.0000000000000000;

MR_BEGIN_MODULE(transform_hlds__term_pass1_module21)
	MR_init_entry1(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__451__1_6_0);
	MR_init_label1(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__451__1_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__451__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__term_pass1__pred_proc_var_6_0,
		transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__451__1_6_0_i2);
MR_def_label(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__451__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_neg1pt0000000000000000;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module22)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_49_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_51_95_95_49_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_49_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_51_95_95_49_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__term_pass1_maybe_bunch_0(void)
{
	transform_hlds__term_pass1_module0();
	transform_hlds__term_pass1_module1();
	transform_hlds__term_pass1_module2();
	transform_hlds__term_pass1_module3();
	transform_hlds__term_pass1_module4();
	transform_hlds__term_pass1_module5();
	transform_hlds__term_pass1_module6();
	transform_hlds__term_pass1_module7();
	transform_hlds__term_pass1_module8();
	transform_hlds__term_pass1_module9();
	transform_hlds__term_pass1_module10();
	transform_hlds__term_pass1_module11();
	transform_hlds__term_pass1_module12();
	transform_hlds__term_pass1_module13();
	transform_hlds__term_pass1_module14();
	transform_hlds__term_pass1_module15();
	transform_hlds__term_pass1_module16();
	transform_hlds__term_pass1_module17();
	transform_hlds__term_pass1_module18();
	transform_hlds__term_pass1_module19();
	transform_hlds__term_pass1_module20();
	transform_hlds__term_pass1_module21();
	transform_hlds__term_pass1_module22();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_pass1__init(void);
void mercury__transform_hlds__term_pass1__init_type_tables(void);
void mercury__transform_hlds__term_pass1__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_pass1__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_pass1__init_complexity_procs(void);
#endif

void mercury__transform_hlds__term_pass1__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__term_pass1_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_pass1__type_ctor_info_pass1_result_0,
		transform_hlds__term_pass1__pass1_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_pass1__type_ctor_info_arg_size_result_0,
		transform_hlds__term_pass1__arg_size_result_0_0);
	mercury__transform_hlds__term_pass1__init_debugger();
}

void mercury__transform_hlds__term_pass1__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_pass1__type_ctor_info_pass1_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_pass1__type_ctor_info_arg_size_result_0);
	}
}


void mercury__transform_hlds__term_pass1__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__term_pass1__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_pass1__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
