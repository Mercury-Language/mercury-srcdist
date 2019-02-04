/*
** Automatically generated from `term_pass1.m'
** by the Mercury compiler,
** version rotd-2012-06-11, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__term_pass1__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.term_pass1.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "transform_hlds.term_pass1.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "transform_hlds.term_pass1.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "transform_hlds.term_pass1.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.term_pass1.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.term_pass1.c"
#line 49 "transform_hlds.term_pass1.c"
#include "transform_hlds.term_pass1.mh"

#line 52 "transform_hlds.term_pass1.c"
#line 53 "transform_hlds.term_pass1.c"
#ifndef TRANSFORM_HLDS__TERM_PASS1_DECL_GUARD
#define TRANSFORM_HLDS__TERM_PASS1_DECL_GUARD

#line 57 "transform_hlds.term_pass1.c"
#line 58 "transform_hlds.term_pass1.c"

#endif
#line 61 "transform_hlds.term_pass1.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__term_pass1__type_ctor_info_arg_size_result_0,
	mercury_data_transform_hlds__term_pass1__type_ctor_info_pass1_result_0;
MR_decl_label4(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0, 3,2,6,7)
MR_decl_label10(transform_hlds__term_pass1__check_goal_non_term_calls_9_0, 147,3,4,7,11,10,14,20,24,25)
MR_decl_label10(transform_hlds__term_pass1__check_goal_non_term_calls_9_0, 26,62,28,33,36,40,35,22,46,157)
MR_decl_label3(transform_hlds__term_pass1__check_goal_non_term_calls_9_0, 42,50,53)
MR_decl_label3(transform_hlds__term_pass1__check_proc_non_term_calls_7_0, 2,3,4)
MR_decl_label9(transform_hlds__term_pass1__convert_equations_2_7_0, 34,4,6,5,10,11,15,18,2)
MR_decl_label10(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0, 2,3,5,11,10,16,17,18,19,21)
MR_decl_label10(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0, 22,24,25,26,27,30,29,35,15,37)
MR_decl_label1(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0, 8)
MR_decl_label5(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0, 23,2,6,5,26)
MR_decl_label10(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0, 29,3,5,6,7,11,12,9,13,14)
MR_decl_label10(transform_hlds__term_pass1__find_arg_sizes_pred_9_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__term_pass1__find_arg_sizes_pred_9_0, 13,15,17,19,20,21,22,23,25,24)
MR_decl_label5(transform_hlds__term_pass1__init_output_suppliers_3_0, 21,5,6,7,9)
MR_decl_label3(transform_hlds__term_pass1__lookup_coeff_4_0, 2,3,4)
MR_decl_label5(transform_hlds__term_pass1__update_output_suppliers_4_0, 3,10,9,13,8)
MR_decl_label4(__Unify___transform_hlds__term_pass1__arg_size_result_0_0, 18,5,10,1)
MR_decl_label5(__Unify___transform_hlds__term_pass1__pass1_result_0_0, 20,5,10,12,1)
MR_decl_label7(__Compare___transform_hlds__term_pass1__arg_size_result_0_0, 3,2,7,5,10,12,55)
MR_decl_label8(__Compare___transform_hlds__term_pass1__pass1_result_0_0, 3,2,7,5,10,12,16,66)
MR_decl_static(transform_hlds__term_pass1__init_output_suppliers_3_0)
MR_decl_static(transform_hlds__term_pass1__update_output_suppliers_4_0)
MR_decl_static(transform_hlds__term_pass1__find_arg_sizes_pred_9_0)
MR_decl_static(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0)
MR_decl_static(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0)
MR_decl_static(transform_hlds__term_pass1__convert_equations_2_7_0)
MR_def_extern_entry(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0)
MR_decl_static(transform_hlds__term_pass1__check_goal_non_term_calls_9_0)
MR_decl_static(transform_hlds__term_pass1__check_proc_non_term_calls_7_0)
MR_decl_static(transform_hlds__term_pass1__check_cases_non_term_calls_9_0)
MR_decl_static(transform_hlds__term_pass1__lookup_coeff_4_0)
MR_def_extern_entry(__Unify___transform_hlds__term_pass1__arg_size_result_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_pass1__arg_size_result_0_0)
MR_decl_static(__Unify___transform_hlds__term_pass1__pass1_result_0_0)
MR_decl_static(__Compare___transform_hlds__term_pass1__pass1_result_0_0)
MR_decl_static(transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__144__1_2_0)
MR_decl_static(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__437__1_2_0)
MR_decl_static(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_49_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_52_95_95_49_95_95_91_49_93_95_48_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
static const struct mercury_type_0 mercury_common_0[13] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
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
MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error_context)
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
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_traversal, term_path_info)
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
MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error_context)
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

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_1 mercury_common_1[9] =
{
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
MR_TAG_COMMON(0,0,3),
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,0,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,9),
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,9)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,9),
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
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,12),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__init_output_suppliers_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__init_output_suppliers_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,7),
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,11),
MR_COMMON(1,4)
},
};

static const struct mercury_type_3 mercury_common_3[5] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__144__1_2_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(transform_hlds__term_pass1__check_proc_non_term_calls_7_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__437__1_2_0),
0
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
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__convert_equations_2_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__convert_equations_2_7_0_2;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__convert_equations_2_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,4),
MR_COMMON(0,10),
MR_COMMON(0,10),
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__convert_equations_2_7_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,4),
MR_COMMON(0,10),
MR_COMMON(0,10),
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_2;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,5),
MR_COMMON(1,6),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,7)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_non_term_calls_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_non_term_calls_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_non_term_calls_9_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_non_term_calls_9_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_non_term_calls_9_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,8),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_non_term_calls_9_0_2,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,8),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_non_term_calls_9_0_3,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,8),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_non_term_calls_9_0_4,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,8),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
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

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_pass1__field_types_arg_size_result_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0 = {
	"arg_size_ok",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_pass1__field_types_arg_size_result_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_pass1__field_types_arg_size_result_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1 = {
	"arg_size_error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_pass1__field_types_arg_size_result_0_1,
	NULL,
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
	15,
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
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_traversal__type_ctor_info_term_path_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_traversal__type_ctor_info_term_path_info_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_pass1__field_types_pass1_result_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0 = {
	"term_pass1_ok",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_pass1__field_types_pass1_result_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_pass1__field_types_pass1_result_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1 = {
	"term_pass1_error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_pass1__field_types_pass1_result_0_1,
	NULL,
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
	15,
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


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_non_term_calls_9_0_4 = {
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
"68"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_non_term_calls_9_0_3 = {
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
367,
"76"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_non_term_calls_9_0_2 = {
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
358,
"64"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__check_goal_non_term_calls_9_0_1 = {
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
358,
"64"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_2 = {
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
419,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_pass1",
"transform_hlds.term_pass1",
"lambda_term_pass1_m_437",
2,
0
},
"transform_hlds.term_pass1",
"term_pass1.m",
437,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__convert_equations_2_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_pass1",
"transform_hlds.term_pass1",
"lambda_term_pass1_m_452",
6,
0
},
"transform_hlds.term_pass1",
"term_pass1.m",
452,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__convert_equations_2_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_pass1",
"transform_hlds.term_pass1",
"lambda_term_pass1_m_452",
6,
0
},
"transform_hlds.term_pass1",
"term_pass1.m",
452,
"28"
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
201,
"39"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass1__init_output_suppliers_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_pass1",
"transform_hlds.term_pass1",
"lambda_term_pass1_m_144",
2,
0
},
"transform_hlds.term_pass1",
"term_pass1.m",
144,
"13"
};


MR_decl_entry(map__init_1_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module0)
	MR_init_entry1(transform_hlds__term_pass1__init_output_suppliers_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__init_output_suppliers_3_0);
	MR_init_label5(transform_hlds__term_pass1__init_output_suppliers_3_0,21,5,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_output_suppliers'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__init_output_suppliers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__init_output_suppliers_3_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(map__init_1_0);
MR_def_label(transform_hlds__term_pass1__init_output_suppliers_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(transform_hlds__term_pass1__init_output_suppliers_3_0,
		transform_hlds__term_pass1__init_output_suppliers_3_0_i5);
MR_def_label(transform_hlds__term_pass1__init_output_suppliers_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_pass1__init_output_suppliers_3_0_i6);
MR_def_label(transform_hlds__term_pass1__init_output_suppliers_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_pass1__init_output_suppliers_3_0_i7);
MR_def_label(transform_hlds__term_pass1__init_output_suppliers_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_pass1__init_output_suppliers_3_0_i9);
MR_def_label(transform_hlds__term_pass1__init_output_suppliers_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bag__contains_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module1)
	MR_init_entry1(transform_hlds__term_pass1__update_output_suppliers_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__update_output_suppliers_4_0);
	MR_init_label5(transform_hlds__term_pass1__update_output_suppliers_4_0,3,10,9,13,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_output_suppliers'/4 mode 0 */
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
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_r2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(bag__contains_2_0,
		transform_hlds__term_pass1__update_output_suppliers_4_0_i10);
MR_def_label(transform_hlds__term_pass1__update_output_suppliers_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__update_output_suppliers_4_0_i9);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_sv(3) = (MR_Integer) 1;
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(transform_hlds__term_pass1__update_output_suppliers_4_0,
		transform_hlds__term_pass1__update_output_suppliers_4_0_i13);
MR_def_label(transform_hlds__term_pass1__update_output_suppliers_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_sv(3) = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(transform_hlds__term_pass1__update_output_suppliers_4_0,
		transform_hlds__term_pass1__update_output_suppliers_4_0_i13);
MR_def_label(transform_hlds__term_pass1__update_output_suppliers_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__term_pass1__update_output_suppliers_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_pass1", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_pass1.update_output_suppliers\'/4", 63);
	MR_r3 = (MR_Word) MR_string_const("umatched variables", 18);
	MR_np_tailcall_ent(require__unexpected_3_0);
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
MR_decl_entry(transform_hlds__term_traversal__init_term_traversal_params_9_0);
MR_decl_entry(transform_hlds__term_util__partition_call_args_5_0);
MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(transform_hlds__term_traversal__term_traverse_goal_8_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(transform_hlds__term_traversal__upper_bound_active_vars_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(bag__is_subbag_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module2)
	MR_init_entry1(transform_hlds__term_pass1__find_arg_sizes_pred_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__find_arg_sizes_pred_9_0);
	MR_init_label10(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,13,15,17,19,20,21,22,23,25,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_arg_sizes_pred'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__find_arg_sizes_pred_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i2);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i3);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i4);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i5);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i6);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i7);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i8);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i9);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr2, 1);
	MR_r8 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__init_term_traversal_params_9_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i10);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(3);
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
	MR_sv(5) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, term_path_info);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i13);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__term_traverse_goal_8_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i15);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_r3 = MR_tempr3;
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i19);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__term_traversal__upper_bound_active_vars_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i20);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i21);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_pass1__update_output_suppliers_4_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i22);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i23);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(bag__is_subbag_2_0,
		transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i25);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_pred_9_0_i24);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(11);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(11);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(12);
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
MR_decl_entry(list__foldl3_8_2);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module3)
	MR_init_entry1(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0);
	MR_init_label10(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,29,3,5,6,7,11,12,9,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_arg_sizes_in_scc_pass'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,29)
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
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_r7;
	MR_np_call_localret_ent(transform_hlds__term_pass1__find_arg_sizes_pred_9_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i5);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error_context);
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i6);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(0, MR_sv(1), 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__take_upto_3_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i7);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i9);
	}
	MR_sv(1) = MR_sv(4);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r6 = MR_sv(2);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(list__foldl3_8_2,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i11);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i12);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_tempr3;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, term_path_info);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i13);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i14);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0_i29);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module4)
	MR_init_entry1(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0);
	MR_init_label5(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0,23,2,6,5,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_arg_sizes_in_scc_fixpoint'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0_i2);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
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
	MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0_i23);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(map__search_3_0);
static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;
MR_decl_entry(list__map_foldl2_7_0);
MR_decl_entry(varset__new_var_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp__type_ctor_info_equation_0;
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module5)
	MR_init_entry1(transform_hlds__term_pass1__convert_equations_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__convert_equations_2_7_0);
	MR_init_label9(transform_hlds__term_pass1__convert_equations_2_7_0,34,4,6,5,10,11,15,18,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_equations_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__convert_equations_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__convert_equations_2_7_0_i2);
	}
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		transform_hlds__term_pass1__convert_equations_2_7_0_i4);
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(7) = MR_f(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__term_pass1__convert_equations_2_7_0_i6);
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__convert_equations_2_7_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,2);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		transform_hlds__term_pass1__convert_equations_2_7_0_i15);
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(varset__new_var_3_0,
		transform_hlds__term_pass1__convert_equations_2_7_0_i10);
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__term_pass1__convert_equations_2_7_0_i11);
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,2);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		transform_hlds__term_pass1__convert_equations_2_7_0_i15);
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 2;
	MR_tempf3 = MR_float_from_dword_ptr(&MR_sv(7));
	* (MR_Float *) &(MR_tfield(0, MR_tempr2, 2)) = MR_tempf3;
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp, equation);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		transform_hlds__term_pass1__convert_equations_2_7_0_i18);
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__term_pass1__convert_equations_2_7_0_i34);
	}
MR_def_label(transform_hlds__term_pass1__convert_equations_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_util__get_context_from_scc_3_0);
MR_decl_entry(varset__init_1_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(map__values_2_0);
MR_decl_entry(list__sort_and_remove_dups_2_0);
MR_decl_entry(libs__lp__lp_solve_8_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module6)
	MR_init_entry1(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0);
	MR_init_label10(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,2,3,5,11,10,16,17,18,19,21)
	MR_init_label10(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,22,24,25,26,27,30,29,35,15,37)
	MR_init_label1(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_arg_sizes_in_scc'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_pass1__init_output_suppliers_3_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i2);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i3);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i8);
	}
	MR_r5 = MR_tfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i10);
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
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i11);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r5;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(varset__init_1_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i16);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i17);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(libs__lp, equation);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i18);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_pass1__convert_equations_2_7_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i19);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i15);
	}
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp, equation);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i21);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(map__values_2_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i22);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i24);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(map__values_2_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i25);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i26);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__lp__lp_solve_8_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i27);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__term_util__get_context_from_scc_3_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i30);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_pass1__lookup_coeff_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(1, MR_r1, 2);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i35);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__term_util__get_context_from_scc_3_0,
		transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0_i37);
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r5;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(list__cons_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0);
MR_decl_entry(transform_hlds__term_util__horder_vars_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(transform_hlds__term_pass1_module7)
	MR_init_entry1(transform_hlds__term_pass1__check_goal_non_term_calls_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__check_goal_non_term_calls_9_0);
	MR_init_label10(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,147,3,4,7,11,10,14,20,24,25)
	MR_init_label10(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,26,62,28,33,36,40,35,22,46,157)
	MR_init_label3(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,42,50,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_goal_non_term_calls'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__check_goal_non_term_calls_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	MR_r7 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,2)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_pass1__check_goal_non_term_calls_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_tempr2 = MR_r4;
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tfield(3, MR_r7, 2);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl3_8_2);
	}
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,3)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_pass1__check_goal_non_term_calls_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_tempr2 = MR_r4;
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tfield(3, MR_r7, 1);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl3_8_2);
	}
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i10);
	}
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tfield(0, MR_r3, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i11);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error_context);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i40);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,6)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_r7;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr5, 4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_tempr5, 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr5, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_pass1__check_goal_non_term_calls_9_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_tempr3 = MR_r4;
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl3_8_2);
	}
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i20);
	}
	MR_r3 = MR_body((MR_Integer) MR_r7, (MR_Integer) 0);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i147);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,2)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r7;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(2, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_tfield(0, MR_r3, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(7) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i24);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i25);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i26);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i28);
	}
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_util__horder_vars_2_0,
		transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i36);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(5), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i62);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error_context);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i33);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_util__horder_vars_2_0,
		transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i36);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error_context);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i40);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,5)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i42);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r7;
	MR_r3 = MR_tfield(3, MR_tempr4, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr4, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i157);
	}
	MR_r7 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i46);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_tempr2 = MR_r3;
	MR_tempr3 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,2)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i157);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_tempr2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i147);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,4)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i50);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_pass1__check_cases_non_term_calls_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_tempr2 = MR_r4;
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tfield(3, MR_r7, 3);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl3_8_2);
	}
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__check_goal_non_term_calls_9_0_i53);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__term_pass1__check_goal_non_term_calls_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_pass1", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_pass1.check_goal_non_term_calls\'/9", 65);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module8)
	MR_init_entry1(transform_hlds__term_pass1__check_proc_non_term_calls_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__check_proc_non_term_calls_7_0);
	MR_init_label3(transform_hlds__term_pass1__check_proc_non_term_calls_7_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_proc_non_term_calls'/7 mode 0 */
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
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__term_pass1__check_proc_non_term_calls_7_0_i3);
MR_def_label(transform_hlds__term_pass1__check_proc_non_term_calls_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__term_pass1__check_proc_non_term_calls_7_0_i4);
MR_def_label(transform_hlds__term_pass1__check_proc_non_term_calls_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__term_pass1__check_goal_non_term_calls_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module9)
	MR_init_entry1(transform_hlds__term_pass1__check_cases_non_term_calls_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__check_cases_non_term_calls_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_cases_non_term_calls'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__check_cases_non_term_calls_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r3, 2);
	MR_np_tailcall_ent(transform_hlds__term_pass1__check_goal_non_term_calls_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__ceiling_to_int_1_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module10)
	MR_init_entry1(transform_hlds__term_pass1__lookup_coeff_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__lookup_coeff_4_0);
	MR_init_label3(transform_hlds__term_pass1__lookup_coeff_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_coeff'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__lookup_coeff_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_pass1__lookup_coeff_4_0_i2);
MR_def_label(transform_hlds__term_pass1__lookup_coeff_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_pass1__lookup_coeff_4_0_i3);
MR_def_label(transform_hlds__term_pass1__lookup_coeff_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_f(1) = MR_word_to_float(MR_r1);
	MR_np_call_localret_ent(fn__float__ceiling_to_int_1_0,
		transform_hlds__term_pass1__lookup_coeff_4_0_i4);
MR_def_label(transform_hlds__term_pass1__lookup_coeff_4_0,4)
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


MR_BEGIN_MODULE(transform_hlds__term_pass1_module11)
	MR_init_entry1(__Unify___transform_hlds__term_pass1__arg_size_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_pass1__arg_size_result_0_0);
	MR_init_label4(__Unify___transform_hlds__term_pass1__arg_size_result_0_0,18,5,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_pass1__arg_size_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__arg_size_result_0_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__arg_size_result_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__arg_size_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(__Unify___transform_hlds__term_pass1__arg_size_result_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_pass1__arg_size_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__arg_size_result_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__term_pass1__arg_size_result_0_0_i10);
MR_def_label(__Unify___transform_hlds__term_pass1__arg_size_result_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__arg_size_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___transform_hlds__term_pass1__arg_size_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(transform_hlds__term_pass1_module12)
	MR_init_entry1(__Compare___transform_hlds__term_pass1__arg_size_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_pass1__arg_size_result_0_0);
	MR_init_label7(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,3,2,7,5,10,12,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__arg_size_result_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__arg_size_result_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__arg_size_result_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__term_pass1__arg_size_result_0_0_i12);
MR_def_label(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__arg_size_result_0_0_i55);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___transform_hlds__term_pass1__arg_size_result_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module13)
	MR_init_entry1(__Unify___transform_hlds__term_pass1__pass1_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_pass1__pass1_result_0_0);
	MR_init_label5(__Unify___transform_hlds__term_pass1__pass1_result_0_0,20,5,10,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_pass1__pass1_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__pass1_result_0_0_i20);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__pass1_result_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__pass1_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(__Unify___transform_hlds__term_pass1__pass1_result_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_pass1__pass1_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__pass1_result_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__term_pass1__pass1_result_0_0_i10);
MR_def_label(__Unify___transform_hlds__term_pass1__pass1_result_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__pass1_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__term_pass1__pass1_result_0_0_i12);
MR_def_label(__Unify___transform_hlds__term_pass1__pass1_result_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass1__pass1_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___transform_hlds__term_pass1__pass1_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module14)
	MR_init_entry1(__Compare___transform_hlds__term_pass1__pass1_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_pass1__pass1_result_0_0);
	MR_init_label8(__Compare___transform_hlds__term_pass1__pass1_result_0_0,3,2,7,5,10,12,16,66)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__pass1_result_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__pass1_result_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__pass1_result_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__term_pass1__pass1_result_0_0_i12);
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__pass1_result_0_0_i66);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__term_pass1__pass1_result_0_0_i16);
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass1__pass1_result_0_0_i66);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___transform_hlds__term_pass1__pass1_result_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module15)
	MR_init_entry1(transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__144__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__144__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__init_output_suppliers__144__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__144__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_49_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_52_95_95_49_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module16)
	MR_init_entry1(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__437__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__437__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_equations__437__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__437__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_neg1pt0000000000000000 = -1.0000000000000000;

MR_BEGIN_MODULE(transform_hlds__term_pass1_module17)
	MR_init_entry1(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0);
	MR_init_label4(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0,3,2,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_equations_2__452__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0_i3);
MR_def_label(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = (MR_Word) &mercury_float_const_neg1pt0000000000000000;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(varset__new_var_3_0,
		transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0_i6);
MR_def_label(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0_i7);
MR_def_label(transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) &mercury_float_const_neg1pt0000000000000000;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass1_module18)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_49_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_52_95_95_49_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_49_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_52_95_95_49_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__IntroducedFrom__pred__init_output_suppliers__144__1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_49_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_52_95_95_49_95_95_91_49_93_95_48_2_0)
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_pass1__init(void);
void mercury__transform_hlds__term_pass1__init_type_tables(void);
void mercury__transform_hlds__term_pass1__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_pass1__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_pass1__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__term_pass1__init_threadscope_string_table(void);
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
		mercury_data_transform_hlds__term_pass1__type_ctor_info_arg_size_result_0,
		transform_hlds__term_pass1__arg_size_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_pass1__type_ctor_info_pass1_result_0,
		transform_hlds__term_pass1__pass1_result_0_0);
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
		&mercury_data_transform_hlds__term_pass1__type_ctor_info_arg_size_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_pass1__type_ctor_info_pass1_result_0);
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

void mercury__transform_hlds__term_pass1__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__term_pass1);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_pass1__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__term_pass1__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
