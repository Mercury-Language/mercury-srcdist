/*
** Automatically generated from `prog_util.m'
** by the Mercury compiler,
** version rotd-2012-07-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__parse_tree__prog_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "parse_tree.prog_util.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "parse_tree.prog_util.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "parse_tree.prog_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "parse_tree.prog_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "parse_tree.prog_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "parse_tree.prog_util.c"
#line 49 "parse_tree.prog_util.c"
#include "parse_tree.prog_util.mh"

#line 52 "parse_tree.prog_util.c"
#line 53 "parse_tree.prog_util.c"
#ifndef PARSE_TREE__PROG_UTIL_DECL_GUARD
#define PARSE_TREE__PROG_UTIL_DECL_GUARD

#line 57 "parse_tree.prog_util.c"
#line 58 "parse_tree.prog_util.c"

#endif
#line 61 "parse_tree.prog_util.c"

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
	MR_String f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_String f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_util__type_ctor_info_maybe_modes_0,
	mercury_data_parse_tree__prog_util__type_ctor_info_new_pred_id_0;
MR_decl_label2(parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_0, 2,3)
MR_decl_label7(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0, 28,5,7,8,6,10,13)
MR_decl_label1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_0, 3)
MR_decl_label1(parse_tree__prog_util__adjust_func_arity_3_0, 3)
MR_decl_label1(parse_tree__prog_util__adjust_func_arity_3_1, 3)
MR_decl_label10(parse_tree__prog_util__cons_id_and_args_to_term_3_0, 5,7,3,9,14,12,19,17,24,22)
MR_decl_label3(parse_tree__prog_util__cons_id_and_args_to_term_3_0, 29,30,1)
MR_decl_label1(parse_tree__prog_util__construct_qualified_term_3_0, 2)
MR_decl_label3(parse_tree__prog_util__construct_qualified_term_with_context_4_0, 12,13,2)
MR_decl_label10(parse_tree__prog_util__get_new_tvars_8_0, 49,3,5,4,8,11,13,10,14,15)
MR_decl_label5(parse_tree__prog_util__get_new_tvars_8_0, 16,17,7,19,20)
MR_decl_label3(parse_tree__prog_util__get_state_args_4_0, 2,5,1)
MR_decl_label3(parse_tree__prog_util__get_state_args_det_4_0, 3,6,2)
MR_decl_label6(parse_tree__prog_util__list_to_string_2__ho4_4_0, 28,5,7,8,10,13)
MR_decl_label1(parse_tree__prog_util__list_to_string__ho1_3_0, 3)
MR_decl_label6(parse_tree__prog_util__make_n_fresh_vars_2_6_0, 20,3,4,5,6,7)
MR_decl_label10(parse_tree__prog_util__make_pred_name_6_0, 3,2,6,8,9,10,7,12,14,43)
MR_decl_label10(parse_tree__prog_util__make_pred_name_6_0, 16,19,20,21,23,24,25,26,27,28)
MR_decl_label1(parse_tree__prog_util__make_pred_name_6_0, 29)
MR_decl_label1(parse_tree__prog_util__parse_rule_term_4_0, 2)
MR_decl_label4(parse_tree__prog_util__pred_args_to_func_args_3_0, 2,4,7,3)
MR_decl_label8(parse_tree__prog_util__rename_in_atomic_varlist_4_0, 5,4,3,10,9,12,14,13)
MR_decl_label3(parse_tree__prog_util__rename_in_catch_expr_4_0, 2,4,5)
MR_decl_label1(parse_tree__prog_util__rename_in_goal_4_0, 2)
MR_decl_label10(parse_tree__prog_util__rename_in_goal_expr_4_0, 4,5,3,329,9,10,8,13,14,12)
MR_decl_label10(parse_tree__prog_util__rename_in_goal_expr_4_0, 17,18,16,21,22,24,26,23,28,30)
MR_decl_label10(parse_tree__prog_util__rename_in_goal_expr_4_0, 20,33,35,32,38,39,37,42,43,41)
MR_decl_label10(parse_tree__prog_util__rename_in_goal_expr_4_0, 46,48,45,51,52,53,54,55,50,58)
MR_decl_label10(parse_tree__prog_util__rename_in_goal_expr_4_0, 59,57,62,61,65,66,67,68,69,64)
MR_decl_label10(parse_tree__prog_util__rename_in_goal_expr_4_0, 72,73,74,75,76,71,79,80,81,82)
MR_decl_label10(parse_tree__prog_util__rename_in_goal_expr_4_0, 83,78,86,85,89,90,88,93,92,96)
MR_decl_label10(parse_tree__prog_util__rename_in_goal_expr_4_0, 97,95,100,101,99,105,107,104,110,111)
MR_decl_label10(parse_tree__prog_util__rename_in_goal_expr_4_0, 103,114,115,116,118,120,117,123,125,127)
MR_decl_label6(parse_tree__prog_util__rename_in_goal_expr_4_0, 128,113,132,134,135,137)
MR_decl_label3(parse_tree__prog_util__rename_in_maybe_var_4_0, 26,5,4)
MR_decl_label2(parse_tree__prog_util__rename_in_trace_mutable_var_4_0, 3,2)
MR_decl_label2(parse_tree__prog_util__rename_in_var_4_0, 3,2)
MR_decl_label4(parse_tree__prog_util__rename_in_vars_4_0, 26,5,4,8)
MR_decl_label1(parse_tree__prog_util__split_type_and_mode_3_0, 3)
MR_decl_label2(parse_tree__prog_util__split_types_and_modes_3_0, 2,4)
MR_decl_label5(parse_tree__prog_util__split_types_and_modes_2_5_0, 9,4,3,10,2)
MR_decl_label3(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0, 16,17,2)
MR_decl_label4(fn__parse_tree__prog_util__cons_id_arity_1_0, 3,4,5,7)
MR_decl_label10(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0, 3,4,5,6,7,9,10,12,13,15)
MR_decl_label5(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0, 17,19,21,91,23)
MR_decl_label1(fn__parse_tree__prog_util__goal_list_to_conj_2_0, 3)
MR_decl_label3(fn__parse_tree__prog_util__goal_list_to_conj_2_3_0, 6,7,2)
MR_decl_label5(fn__parse_tree__prog_util__make_functor_cons_id_2_0, 5,3,7,9,11)
MR_decl_label1(fn__parse_tree__prog_util__sym_name_and_args_to_term_3_0, 3)
MR_decl_label9(__Unify___parse_tree__prog_util__new_pred_id_0_0, 5,6,10,8,14,16,48,20,1)
MR_decl_label10(__Compare___parse_tree__prog_util__new_pred_id_0_0, 136,7,8,9,10,11,5,15,18,16)
MR_decl_label10(__Compare___parse_tree__prog_util__new_pred_id_0_0, 23,24,25,13,29,30,33,31,38,39)
MR_decl_label10(__Compare___parse_tree__prog_util__new_pred_id_0_0, 27,43,44,45,46,48,41,52,53,54)
MR_decl_label10(__Compare___parse_tree__prog_util__new_pred_id_0_0, 55,170,56,50,61,62,63,64,65,68)
MR_decl_label9(__Compare___parse_tree__prog_util__new_pred_id_0_0, 59,74,75,130,76,77,78,133,81)
MR_def_extern_entry(parse_tree__prog_util__construct_qualified_term_with_context_4_0)
MR_def_extern_entry(parse_tree__prog_util__construct_qualified_term_3_0)
MR_def_extern_entry(parse_tree__prog_util__adjust_func_arity_3_0)
MR_def_extern_entry(parse_tree__prog_util__adjust_func_arity_3_1)
MR_def_extern_entry(parse_tree__prog_util__make_pred_name_6_0)
MR_def_extern_entry(parse_tree__prog_util__make_pred_name_with_context_7_0)
MR_decl_static(parse_tree__prog_util__split_types_and_modes_2_5_0)
MR_def_extern_entry(parse_tree__prog_util__split_types_and_modes_3_0)
MR_def_extern_entry(parse_tree__prog_util__split_type_and_mode_3_0)
MR_decl_static(parse_tree__prog_util__rename_in_var_4_0)
MR_decl_static(parse_tree__prog_util__rename_in_atomic_varlist_4_0)
MR_decl_static(parse_tree__prog_util__rename_in_vars_4_0)
MR_decl_static(parse_tree__prog_util__rename_in_maybe_var_4_0)
MR_def_extern_entry(parse_tree__prog_util__rename_in_goal_4_0)
MR_decl_static(parse_tree__prog_util__rename_in_goal_expr_4_0)
MR_def_extern_entry(parse_tree__prog_util__cons_id_and_args_to_term_3_0)
MR_def_extern_entry(fn__parse_tree__prog_util__cons_id_arity_1_0)
MR_def_extern_entry(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0)
MR_def_extern_entry(fn__parse_tree__prog_util__make_functor_cons_id_2_0)
MR_decl_static(parse_tree__prog_util__make_n_fresh_vars_2_6_0)
MR_def_extern_entry(parse_tree__prog_util__make_n_fresh_vars_5_0)
MR_def_extern_entry(parse_tree__prog_util__pred_args_to_func_args_3_0)
MR_def_extern_entry(parse_tree__prog_util__get_state_args_4_0)
MR_def_extern_entry(parse_tree__prog_util__get_state_args_det_4_0)
MR_def_extern_entry(parse_tree__prog_util__parse_rule_term_4_0)
MR_def_extern_entry(parse_tree__prog_util__get_new_tvars_8_0)
MR_def_extern_entry(fn__parse_tree__prog_util__sym_name_and_args_to_term_3_0)
MR_decl_static(fn__parse_tree__prog_util__goal_list_to_conj_2_3_0)
MR_def_extern_entry(fn__parse_tree__prog_util__goal_list_to_conj_2_0)
MR_decl_static(parse_tree__prog_util__rename_in_trace_mutable_var_4_0)
MR_decl_static(parse_tree__prog_util__rename_in_catch_expr_4_0)
MR_def_extern_entry(__Unify___parse_tree__prog_util__maybe_modes_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_util__maybe_modes_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_util__new_pred_id_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_util__new_pred_id_0_0)
MR_decl_static(parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_0)
MR_decl_static(parse_tree__prog_util__list_to_string__ho1_3_0)
MR_decl_static(parse_tree__prog_util__list_to_string_2__ho4_4_0)
MR_decl_static(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0)
MR_decl_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_0)
MR_decl_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[9] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_TAG_COMMON(0,0,2)
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
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr),
MR_CTOR0_ADDR(term, context)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr),
MR_CTOR0_ADDR(term, context)
}
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
MR_string_const(".", 1)
},
{
MR_string_const("{}", 2)
},
{
MR_string_const("true", 4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_catch_expr_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_6;
static const struct mercury_type_3 mercury_common_3[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_COMMON(0,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var),
MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var),
MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_CTOR0_ADDR(parse_tree__prog_item, catch_expr),
MR_CTOR0_ADDR(parse_tree__prog_item, catch_expr)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_6,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_CTOR0_ADDR(parse_tree__prog_item, catch_expr),
MR_CTOR0_ADDR(parse_tree__prog_item, catch_expr)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
0
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_string_const("]", 1),
MR_tbmkword(0, 0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_util__type_ctor_info_maybe_modes_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_util__maybe_modes_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_util__maybe_modes_0_0)),
	"parse_tree.prog_util",
	"maybe_modes",
	{ 0 },
	{ (void *)&mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_util__field_types_new_pred_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_0 = {
	"newpred_counter",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_util__field_types_new_pred_id_0_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_util__field_types_new_pred_id_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_1 = {
	"newpred_type_subst",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_util__field_types_new_pred_id_0_1,
	NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_util__field_types_new_pred_id_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_2 = {
	"newpred_unused_args",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_util__field_types_new_pred_id_0_2,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_util__field_types_new_pred_id_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_3 = {
	"newpred_parallel_args",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_util__field_types_new_pred_id_0_3,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_4 = {
	"newpred_parallel_loop_control",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_util__field_types_new_pred_id_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_5 = {
	"newpred_structure_reuse",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_util__field_types_new_pred_id_0_5,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_util__field_types_new_pred_id_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_6 = {
	"newpred_distance_granularity",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_util__field_types_new_pred_id_0_6,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0[] = {
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_4

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1[] = {
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2[] = {
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_1

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3[] = {
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_2,
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_6

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_util__du_ptag_ordered_new_pred_id_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2 },
	{ 4, MR_SECTAG_REMOTE,
	mercury_data_parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_util__du_name_ordered_new_pred_id_0[] = {
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_0,
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_6,
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_4,
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_1,
	&mercury_data_parse_tree__prog_util__du_functor_desc_new_pred_id_0_2
};

const MR_Integer mercury_data_parse_tree__prog_util__functor_number_map_new_pred_id_0[] = {
	0,
	5,
	6,
	2,
	3,
	4,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_util__type_ctor_info_new_pred_id_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_util__new_pred_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_util__new_pred_id_0_0)),
	"parse_tree.prog_util",
	"new_pred_id",
	{ (void *)mercury_data_parse_tree__prog_util__du_name_ordered_new_pred_id_0 },
	{ (void *)mercury_data_parse_tree__prog_util__du_ptag_ordered_new_pred_id_0 },
	7,
	4,
	mercury_data_parse_tree__prog_util__functor_number_map_new_pred_id_0
};


static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_6 = {
{
MR_PREDICATE,
"parse_tree.prog_util",
"parse_tree.prog_util",
"rename_in_catch_expr",
4,
0
},
"parse_tree.prog_util",
"prog_util.m",
405,
"132"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_5 = {
{
MR_PREDICATE,
"parse_tree.prog_util",
"parse_tree.prog_util",
"rename_in_catch_expr",
4,
0
},
"parse_tree.prog_util",
"prog_util.m",
405,
"132"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_4 = {
{
MR_PREDICATE,
"parse_tree.prog_util",
"parse_tree.prog_util",
"rename_in_trace_mutable_var",
4,
0
},
"parse_tree.prog_util",
"prog_util.m",
370,
"98"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_3 = {
{
MR_PREDICATE,
"parse_tree.prog_util",
"parse_tree.prog_util",
"rename_in_trace_mutable_var",
4,
0
},
"parse_tree.prog_util",
"prog_util.m",
370,
"98"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_2 = {
{
MR_PREDICATE,
"parse_tree.prog_util",
"parse_tree.prog_util",
"rename_in_goal",
4,
0
},
"parse_tree.prog_util",
"prog_util.m",
389,
"116"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_util__rename_in_goal_expr_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_util",
"parse_tree.prog_util",
"rename_in_var",
4,
0
},
"parse_tree.prog_util",
"prog_util.m",
384,
"112"
};



MR_BEGIN_MODULE(parse_tree__prog_util_module0)
	MR_init_entry1(parse_tree__prog_util__construct_qualified_term_with_context_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__construct_qualified_term_with_context_4_0);
	MR_init_label3(parse_tree__prog_util__construct_qualified_term_with_context_4_0,12,13,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_qualified_term_with_context'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__construct_qualified_term_with_context_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__construct_qualified_term_with_context_4_0_i2);
	}
	MR_r6 = (MR_Word) MR_sp;
MR_def_label(parse_tree__prog_util__construct_qualified_term_with_context_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(3);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	if (MR_PTAG_TESTR(MR_r2,0))
		continue;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_tfield(0, MR_r1, 2) = MR_r4;
	}
	break;
	} /* end while */
MR_def_label(parse_tree__prog_util__construct_qualified_term_with_context_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_tfield(0, MR_r1, 2) = MR_tempr3;
	MR_decr_sp(3);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r6))
		continue;
	MR_proceed();
	}
	break;
	} /* end while */
MR_def_label(parse_tree__prog_util__construct_qualified_term_with_context_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_tfield(0, MR_r1, 2) = MR_r4;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__context_init_1_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module1)
	MR_init_entry1(parse_tree__prog_util__construct_qualified_term_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__construct_qualified_term_3_0);
	MR_init_label1(parse_tree__prog_util__construct_qualified_term_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_qualified_term'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__construct_qualified_term_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		parse_tree__prog_util__construct_qualified_term_3_0_i2);
MR_def_label(parse_tree__prog_util__construct_qualified_term_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_with_context_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module2)
	MR_init_entry1(parse_tree__prog_util__adjust_func_arity_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__adjust_func_arity_3_0);
	MR_init_label1(parse_tree__prog_util__adjust_func_arity_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'adjust_func_arity'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__adjust_func_arity_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_util__adjust_func_arity_3_0_i3);
	}
	MR_r1 = ((MR_Integer) 1 + (MR_Integer) MR_r2);
	MR_proceed();
MR_def_label(parse_tree__prog_util__adjust_func_arity_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module3)
	MR_init_entry1(parse_tree__prog_util__adjust_func_arity_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__adjust_func_arity_3_1);
	MR_init_label1(parse_tree__prog_util__adjust_func_arity_3_1,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'adjust_func_arity'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__adjust_func_arity_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_util__adjust_func_arity_3_1_i3);
	}
	MR_r1 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_proceed();
MR_def_label(parse_tree__prog_util__adjust_func_arity_3_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_out__pred_or_func_to_str_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(string__int_to_string_2_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module4)
	MR_init_entry1(parse_tree__prog_util__make_pred_name_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__make_pred_name_6_0);
	MR_init_label10(parse_tree__prog_util__make_pred_name_6_0,3,2,6,8,9,10,7,12,14,43)
	MR_init_label10(parse_tree__prog_util__make_pred_name_6_0,16,19,20,21,23,24,25,26,27,28)
	MR_init_label1(parse_tree__prog_util__make_pred_name_6_0,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_pred_name'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__make_pred_name_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__make_pred_name_6_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("pred_or_func", 12);
	MR_GOTO_LAB(parse_tree__prog_util__make_pred_name_6_0_i2);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_str_1_0,
		parse_tree__prog_util__make_pred_name_6_0_i2);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__make_pred_name_6_0_i6);
	}
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_util__make_pred_name_6_0_i24);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(parse_tree__prog_util__make_pred_name_6_0_i7);
	}
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		parse_tree__prog_util__make_pred_name_6_0_i8);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_util__make_pred_name_6_0_i9);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		parse_tree__prog_util__make_pred_name_6_0_i10);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_util__make_pred_name_6_0_i23);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),2)) {
		MR_GOTO_LAB(parse_tree__prog_util__make_pred_name_6_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_0,
		parse_tree__prog_util__make_pred_name_6_0_i23);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,3)) {
		MR_GOTO_LAB(parse_tree__prog_util__make_pred_name_6_0_i14);
	}
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		parse_tree__prog_util__make_pred_name_6_0_i23);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,1)) {
		MR_GOTO_LAB(parse_tree__prog_util__make_pred_name_6_0_i16);
	}
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_util__list_to_string__ho1_3_0,
		parse_tree__prog_util__make_pred_name_6_0_i23);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,2)) {
		MR_GOTO_LAB(parse_tree__prog_util__make_pred_name_6_0_i43);
	}
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		parse_tree__prog_util__make_pred_name_6_0_i19);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_util__list_to_string__ho1_3_0,
		parse_tree__prog_util__make_pred_name_6_0_i20);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_util__make_pred_name_6_0_i21);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_util__make_pred_name_6_0_i23);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_util__make_pred_name_6_0_i24);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_util__make_pred_name_6_0_i25);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_util__make_pred_name_6_0_i26);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_util__make_pred_name_6_0_i27);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_util__make_pred_name_6_0_i28);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_util__make_pred_name_6_0_i29);
MR_def_label(parse_tree__prog_util__make_pred_name_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module5)
	MR_init_entry1(parse_tree__prog_util__make_pred_name_with_context_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__make_pred_name_with_context_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_pred_name_with_context'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__make_pred_name_with_context_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r5;
	MR_tfield(1, MR_tempr2, 1) = MR_r6;
	MR_r3 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(parse_tree__prog_util__make_pred_name_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module6)
	MR_init_entry1(parse_tree__prog_util__split_types_and_modes_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__split_types_and_modes_2_5_0);
	MR_init_label5(parse_tree__prog_util__split_types_and_modes_2_5_0,9,4,3,10,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_types_and_modes_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_util__split_types_and_modes_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__split_types_and_modes_2_5_0_i2);
	}
	MR_r6 = (MR_Word) MR_sp;
MR_def_label(parse_tree__prog_util__split_types_and_modes_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_util__split_types_and_modes_2_5_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_GOTO_LAB(parse_tree__prog_util__split_types_and_modes_2_5_0_i3);
	}
MR_def_label(parse_tree__prog_util__split_types_and_modes_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(0, MR_r3, 0);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = (MR_Integer) 0;
MR_def_label(parse_tree__prog_util__split_types_and_modes_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__split_types_and_modes_2_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
MR_def_label(parse_tree__prog_util__split_types_and_modes_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp(2);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r6))
		continue;
	MR_proceed();
	}
	break;
	} /* end while */
MR_def_label(parse_tree__prog_util__split_types_and_modes_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module7)
	MR_init_entry1(parse_tree__prog_util__split_types_and_modes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__split_types_and_modes_3_0);
	MR_init_label2(parse_tree__prog_util__split_types_and_modes_3_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_types_and_modes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__split_types_and_modes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_util__split_types_and_modes_2_5_0,
		parse_tree__prog_util__split_types_and_modes_3_0_i2);
MR_def_label(parse_tree__prog_util__split_types_and_modes_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__split_types_and_modes_3_0_i4);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
MR_def_label(parse_tree__prog_util__split_types_and_modes_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module8)
	MR_init_entry1(parse_tree__prog_util__split_type_and_mode_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__split_type_and_mode_3_0);
	MR_init_label1(parse_tree__prog_util__split_type_and_mode_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_type_and_mode'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__split_type_and_mode_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_util__split_type_and_mode_3_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_util__split_type_and_mode_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module9)
	MR_init_entry1(parse_tree__prog_util__rename_in_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__rename_in_var_4_0);
	MR_init_label2(parse_tree__prog_util__rename_in_var_4_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_in_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_util__rename_in_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		parse_tree__prog_util__rename_in_var_4_0_i3);
MR_def_label(parse_tree__prog_util__rename_in_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_var_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_util__rename_in_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module10)
	MR_init_entry1(parse_tree__prog_util__rename_in_atomic_varlist_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__rename_in_atomic_varlist_4_0);
	MR_init_label8(parse_tree__prog_util__rename_in_atomic_varlist_4_0,5,4,3,10,9,12,14,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_in_atomic_varlist'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_util__rename_in_atomic_varlist_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_atomic_varlist_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		parse_tree__prog_util__rename_in_atomic_varlist_4_0_i5);
MR_def_label(parse_tree__prog_util__rename_in_atomic_varlist_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_atomic_varlist_4_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__prog_util__rename_in_atomic_varlist_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__prog_util__rename_in_atomic_varlist_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		parse_tree__prog_util__rename_in_atomic_varlist_4_0_i10);
MR_def_label(parse_tree__prog_util__rename_in_atomic_varlist_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_atomic_varlist_4_0_i9);
	}
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_sv(4) = MR_sv(1);
	MR_GOTO_LAB(parse_tree__prog_util__rename_in_atomic_varlist_4_0_i12);
MR_def_label(parse_tree__prog_util__rename_in_atomic_varlist_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_sv(4) = MR_sv(2);
MR_def_label(parse_tree__prog_util__rename_in_atomic_varlist_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(builtin__unify_2_0,
		parse_tree__prog_util__rename_in_atomic_varlist_4_0_i14);
MR_def_label(parse_tree__prog_util__rename_in_atomic_varlist_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_atomic_varlist_4_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__prog_util__rename_in_atomic_varlist_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module11)
	MR_init_entry1(parse_tree__prog_util__rename_in_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__rename_in_vars_4_0);
	MR_init_label4(parse_tree__prog_util__rename_in_vars_4_0,26,5,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_in_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_util__rename_in_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_vars_4_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_util__rename_in_vars_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		parse_tree__prog_util__rename_in_vars_4_0_i5);
MR_def_label(parse_tree__prog_util__rename_in_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_vars_4_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(4) = MR_r2;
	MR_np_localcall_lab(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_vars_4_0_i8);
MR_def_label(parse_tree__prog_util__rename_in_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(4) = MR_sv(2);
	MR_np_localcall_lab(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_vars_4_0_i8);
MR_def_label(parse_tree__prog_util__rename_in_vars_4_0,8)
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


MR_BEGIN_MODULE(parse_tree__prog_util_module12)
	MR_init_entry1(parse_tree__prog_util__rename_in_maybe_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__rename_in_maybe_var_4_0);
	MR_init_label3(parse_tree__prog_util__rename_in_maybe_var_4_0,26,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_in_maybe_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_util__rename_in_maybe_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_maybe_var_4_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_util__rename_in_maybe_var_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		parse_tree__prog_util__rename_in_maybe_var_4_0_i5);
MR_def_label(parse_tree__prog_util__rename_in_maybe_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_maybe_var_4_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_util__rename_in_maybe_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module13)
	MR_init_entry1(parse_tree__prog_util__rename_in_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__rename_in_goal_4_0);
	MR_init_label1(parse_tree__prog_util__rename_in_goal_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_in_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__rename_in_goal_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_expr_4_0,
		parse_tree__prog_util__rename_in_goal_4_0_i2);
MR_def_label(parse_tree__prog_util__rename_in_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(term__substitute_list_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_catch_expr_0;
MR_decl_entry(term__substitute_4_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module14)
	MR_init_entry1(parse_tree__prog_util__rename_in_goal_expr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__rename_in_goal_expr_4_0);
	MR_init_label10(parse_tree__prog_util__rename_in_goal_expr_4_0,4,5,3,329,9,10,8,13,14,12)
	MR_init_label10(parse_tree__prog_util__rename_in_goal_expr_4_0,17,18,16,21,22,24,26,23,28,30)
	MR_init_label10(parse_tree__prog_util__rename_in_goal_expr_4_0,20,33,35,32,38,39,37,42,43,41)
	MR_init_label10(parse_tree__prog_util__rename_in_goal_expr_4_0,46,48,45,51,52,53,54,55,50,58)
	MR_init_label10(parse_tree__prog_util__rename_in_goal_expr_4_0,59,57,62,61,65,66,67,68,69,64)
	MR_init_label10(parse_tree__prog_util__rename_in_goal_expr_4_0,72,73,74,75,76,71,79,80,81,82)
	MR_init_label10(parse_tree__prog_util__rename_in_goal_expr_4_0,83,78,86,85,89,90,88,93,92,96)
	MR_init_label10(parse_tree__prog_util__rename_in_goal_expr_4_0,97,95,100,101,99,105,107,104,110,111)
	MR_init_label10(parse_tree__prog_util__rename_in_goal_expr_4_0,103,114,115,116,118,120,117,123,125,127)
	MR_init_label6(parse_tree__prog_util__rename_in_goal_expr_4_0,128,113,132,134,135,137)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_in_goal_expr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_util__rename_in_goal_expr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r3, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i4);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i5);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r3 == (MR_Integer) MR_tbmkword(0, 1)) || ((MR_Integer) MR_r3 == (MR_Integer) MR_tbmkword(0, 0))))) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i329);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,329)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i8);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(2, MR_r3, 1);
	MR_r3 = MR_tfield(2, MR_r3, 0);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i9);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i10);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i12);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r3, 2);
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i13);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i14);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i16);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r3, 2);
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i17);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i18);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,12)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i20);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 5);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_atomic_varlist_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i21);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_atomic_varlist_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i22);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i24);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i23);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_util__rename_in_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i26);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i28);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_util__rename_in_goal_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i30);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,19)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i32);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i33);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(term__substitute_list_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i35);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i37);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r3, 2);
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i38);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i39);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,15)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i41);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r3, 2);
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i42);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i43);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,18)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i45);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i46);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(term__substitute_list_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i48);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,17)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i50);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i51);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i52);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i53);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i54);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i55);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 6);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(4);
	MR_tfield(3, MR_r2, 3) = MR_sv(1);
	MR_tfield(3, MR_r2, 4) = MR_sv(7);
	MR_tfield(3, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,14)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i57);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r3, 2);
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i58);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i59);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,16)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i61);
	}
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i62);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,8)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i64);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i65);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i66);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i67);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i68);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i69);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i71);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i72);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i73);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i74);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i75);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i76);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i78);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 5);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i79);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i80);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i81);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i82);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i83);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i85);
	}
	MR_sv(7) = MR_tfield(3, MR_r3, 1);
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i86);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,10)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i88);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r3, 2);
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_var_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i89);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i90);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,9)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i92);
	}
	MR_sv(7) = MR_tfield(3, MR_r3, 1);
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i93);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i95);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r3, 2);
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i96);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i97);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i99);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r3, 2);
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_vars_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i100);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i101);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,11)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i103);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r5 = MR_tfield(3, MR_tempr2, 3);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i105);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_util__rename_in_trace_mutable_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_r4 = MR_tfield(3, MR_tempr2, 4);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_sv(5) = MR_tfield(3, MR_r6, 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var);
	MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i104);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 5);
	MR_r3 = MR_tfield(1, MR_r5, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_var_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i107);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_util__rename_in_trace_mutable_var_4_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i110);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i111);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,13)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i113);
	}
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 6);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_maybe_var_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i114);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i115);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i116);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i118);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_util__rename_in_catch_expr_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, catch_expr);
	MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i117);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i120);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_util__rename_in_catch_expr_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, catch_expr);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i123);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_goal_expr_4_0_i125);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tfield(3, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_var_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i127);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i128);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_r1, 1) = MR_sv(8);
	MR_tfield(3, MR_r1, 2) = MR_sv(1);
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_tfield(3, MR_r1, 4) = MR_sv(4);
	MR_tfield(3, MR_r1, 5) = MR_sv(5);
	MR_tfield(3, MR_r1, 6) = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i132);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(term__substitute_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i134);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i135);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(term__substitute_4_0,
		parse_tree__prog_util__rename_in_goal_expr_4_0_i137);
MR_def_label(parse_tree__prog_util__rename_in_goal_expr_4_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term_io__escaped_char_1_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module15)
	MR_init_entry1(parse_tree__prog_util__cons_id_and_args_to_term_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__cons_id_and_args_to_term_3_0);
	MR_init_label10(parse_tree__prog_util__cons_id_and_args_to_term_3_0,5,7,3,9,14,12,19,17,24,22)
	MR_init_label3(parse_tree__prog_util__cons_id_and_args_to_term_3_0,29,30,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons_id_and_args_to_term'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__cons_id_and_args_to_term_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(parse_tree__prog_util__cons_id_and_args_to_term_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__cons_id_and_args_to_term_3_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__term_io__escaped_char_1_0,
		parse_tree__prog_util__cons_id_and_args_to_term_3_0_i5);
MR_def_label(parse_tree__prog_util__cons_id_and_args_to_term_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		parse_tree__prog_util__cons_id_and_args_to_term_3_0_i7);
MR_def_label(parse_tree__prog_util__cons_id_and_args_to_term_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_with_context_4_0,
		parse_tree__prog_util__cons_id_and_args_to_term_3_0_i30);
MR_def_label(parse_tree__prog_util__cons_id_and_args_to_term_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(parse_tree__prog_util__cons_id_and_args_to_term_3_0_i9);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_r2, 1);
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		parse_tree__prog_util__cons_id_and_args_to_term_3_0_i29);
MR_def_label(parse_tree__prog_util__cons_id_and_args_to_term_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(parse_tree__prog_util__cons_id_and_args_to_term_3_0_i12);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__cons_id_and_args_to_term_3_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(3) = MR_float_from_dword_ptr(&MR_tfield(3, MR_r2, 1));
	MR_np_call_localret_ent(term__context_init_1_0,
		parse_tree__prog_util__cons_id_and_args_to_term_3_0_i14);
MR_def_label(parse_tree__prog_util__cons_id_and_args_to_term_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_Float MR_tempf1, MR_tempf2;
	MR_tempf2 = MR_float_from_dword_ptr(&MR_sv(3));
	* (MR_Float *) &(MR_tfield(3, MR_r2, 1)) = MR_tempf2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(parse_tree__prog_util__cons_id_and_args_to_term_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(parse_tree__prog_util__cons_id_and_args_to_term_3_0_i17);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__cons_id_and_args_to_term_3_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(term__context_init_1_0,
		parse_tree__prog_util__cons_id_and_args_to_term_3_0_i19);
MR_def_label(parse_tree__prog_util__cons_id_and_args_to_term_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(parse_tree__prog_util__cons_id_and_args_to_term_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(parse_tree__prog_util__cons_id_and_args_to_term_3_0_i22);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__cons_id_and_args_to_term_3_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(term__context_init_1_0,
		parse_tree__prog_util__cons_id_and_args_to_term_3_0_i24);
MR_def_label(parse_tree__prog_util__cons_id_and_args_to_term_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(parse_tree__prog_util__cons_id_and_args_to_term_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(parse_tree__prog_util__cons_id_and_args_to_term_3_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		parse_tree__prog_util__cons_id_and_args_to_term_3_0_i29);
MR_def_label(parse_tree__prog_util__cons_id_and_args_to_term_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_with_context_4_0,
		parse_tree__prog_util__cons_id_and_args_to_term_3_0_i30);
MR_def_label(parse_tree__prog_util__cons_id_and_args_to_term_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(parse_tree__prog_util__cons_id_and_args_to_term_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module16)
	MR_init_entry1(fn__parse_tree__prog_util__cons_id_arity_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_util__cons_id_arity_1_0);
	MR_init_label4(fn__parse_tree__prog_util__cons_id_arity_1_0,3,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons_id_arity'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_util__cons_id_arity_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 7)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 6))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 9))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 5))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 8))))) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_arity_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_arity_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_arity_1_0_i4);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_arity_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_arity_1_0_i5);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localtailcall(fn__parse_tree__prog_util__cons_id_arity_1_0);
MR_def_label(fn__parse_tree__prog_util__cons_id_arity_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_arity_1_0_i7);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_arity_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("parse_tree.prog_util", 20);
	MR_r2 = (MR_Word) MR_string_const("function \140parse_tree.prog_util.cons_id_arity\'/1", 47);
	MR_r3 = (MR_Word) MR_string_const("unexpected cons_id", 18);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module17)
	MR_init_entry1(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_util__cons_id_maybe_arity_1_0);
	MR_init_label10(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,3,4,5,6,7,9,10,12,13,15)
	MR_init_label5(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,17,19,21,91,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons_id_maybe_arity'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_util__cons_id_maybe_arity_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i12);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i13);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i15);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localtailcall(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0);
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i17);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i19);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i21);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i23);
	}
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0_i91);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_data__cons_id_dummy_type_ctor_0_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module18)
	MR_init_entry1(fn__parse_tree__prog_util__make_functor_cons_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_util__make_functor_cons_id_2_0);
	MR_init_label5(fn__parse_tree__prog_util__make_functor_cons_id_2_0,5,3,7,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_functor_cons_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_util__make_functor_cons_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__make_functor_cons_id_2_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(2), 0) = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__cons_id_dummy_type_ctor_0_0,
		fn__parse_tree__prog_util__make_functor_cons_id_2_0_i5);
MR_def_label(fn__parse_tree__prog_util__make_functor_cons_id_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__parse_tree__prog_util__make_functor_cons_id_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__make_functor_cons_id_2_0_i7);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__make_functor_cons_id_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__make_functor_cons_id_2_0_i9);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__make_functor_cons_id_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__make_functor_cons_id_2_0_i11);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	* (MR_Float *) &(MR_tfield(3, MR_r2, 1)) = MR_float_from_dword_ptr(&MR_tfield(3, MR_r1, 1));
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__make_functor_cons_id_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_r2, 1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(varset__name_var_4_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module19)
	MR_init_entry1(parse_tree__prog_util__make_n_fresh_vars_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__make_n_fresh_vars_2_6_0);
	MR_init_label6(parse_tree__prog_util__make_n_fresh_vars_2_6_0,20,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_n_fresh_vars_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_util__make_n_fresh_vars_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(parse_tree__prog_util__make_n_fresh_vars_2_6_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(parse_tree__prog_util__make_n_fresh_vars_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(varset__new_var_3_0,
		parse_tree__prog_util__make_n_fresh_vars_2_6_0_i3);
MR_def_label(parse_tree__prog_util__make_n_fresh_vars_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		parse_tree__prog_util__make_n_fresh_vars_2_6_0_i4);
MR_def_label(parse_tree__prog_util__make_n_fresh_vars_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		parse_tree__prog_util__make_n_fresh_vars_2_6_0_i5);
MR_def_label(parse_tree__prog_util__make_n_fresh_vars_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(varset__name_var_4_0,
		parse_tree__prog_util__make_n_fresh_vars_2_6_0_i6);
MR_def_label(parse_tree__prog_util__make_n_fresh_vars_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(parse_tree__prog_util__make_n_fresh_vars_2_6_0,
		parse_tree__prog_util__make_n_fresh_vars_2_6_0_i7);
MR_def_label(parse_tree__prog_util__make_n_fresh_vars_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module20)
	MR_init_entry1(parse_tree__prog_util__make_n_fresh_vars_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__make_n_fresh_vars_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_n_fresh_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__make_n_fresh_vars_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(parse_tree__prog_util__make_n_fresh_vars_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(list__split_list_4_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module21)
	MR_init_entry1(parse_tree__prog_util__pred_args_to_func_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__pred_args_to_func_args_3_0);
	MR_init_label4(parse_tree__prog_util__pred_args_to_func_args_3_0,2,4,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_args_to_func_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__pred_args_to_func_args_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(list__length_2_0,
		parse_tree__prog_util__pred_args_to_func_args_3_0_i2);
MR_def_label(parse_tree__prog_util__pred_args_to_func_args_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__split_list_4_0,
		parse_tree__prog_util__pred_args_to_func_args_3_0_i4);
MR_def_label(parse_tree__prog_util__pred_args_to_func_args_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_util__pred_args_to_func_args_3_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__pred_args_to_func_args_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		parse_tree__prog_util__pred_args_to_func_args_3_0_i7);
MR_def_label(parse_tree__prog_util__pred_args_to_func_args_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_util__pred_args_to_func_args_3_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_util__pred_args_to_func_args_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("parse_tree.prog_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140parse_tree.prog_util.pred_args_to_func_args\'/3", 57);
	MR_r3 = (MR_Word) MR_string_const("function missing return value\?", 30);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module22)
	MR_init_entry1(parse_tree__prog_util__get_state_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__get_state_args_4_0);
	MR_init_label3(parse_tree__prog_util__get_state_args_4_0,2,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_state_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__get_state_args_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_util__get_state_args_4_0_i2);
MR_def_label(parse_tree__prog_util__get_state_args_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__get_state_args_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__get_state_args_4_0_i1);
	}
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_util__get_state_args_4_0_i5);
MR_def_label(parse_tree__prog_util__get_state_args_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_util__get_state_args_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_2_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module23)
	MR_init_entry1(parse_tree__prog_util__get_state_args_det_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__get_state_args_det_4_0);
	MR_init_label3(parse_tree__prog_util__get_state_args_det_4_0,3,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_state_args_det'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__get_state_args_det_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_util__get_state_args_det_4_0_i3);
MR_def_label(parse_tree__prog_util__get_state_args_det_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__get_state_args_det_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__get_state_args_det_4_0_i2);
	}
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_util__get_state_args_det_4_0_i6);
MR_def_label(parse_tree__prog_util__get_state_args_det_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_util__get_state_args_det_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("parse_tree.prog_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140parse_tree.prog_util.get_state_args_det\'/4", 53);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module24)
	MR_init_entry1(parse_tree__prog_util__parse_rule_term_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__parse_rule_term_4_0);
	MR_init_label1(parse_tree__prog_util__parse_rule_term_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_rule_term'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__parse_rule_term_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__parse_rule_term_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__parse_rule_term_4_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const(":-", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_util__parse_rule_term_4_0_i2);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__parse_rule_term_4_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__parse_rule_term_4_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__parse_rule_term_4_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_proceed();
	}
MR_def_label(parse_tree__prog_util__parse_rule_term_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__contains_2_0);
MR_decl_entry(varset__search_name_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module25)
	MR_init_entry1(parse_tree__prog_util__get_new_tvars_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__get_new_tvars_8_0);
	MR_init_label10(parse_tree__prog_util__get_new_tvars_8_0,49,3,5,4,8,11,13,10,14,15)
	MR_init_label5(parse_tree__prog_util__get_new_tvars_8_0,16,17,7,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_new_tvars'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_util__get_new_tvars_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__get_new_tvars_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__contains_2_0,
		parse_tree__prog_util__get_new_tvars_8_0_i5);
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_util__get_new_tvars_8_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(parse_tree__prog_util__get_new_tvars_8_0_i49);
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(varset__search_name_3_0,
		parse_tree__prog_util__get_new_tvars_8_0_i8);
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_util__get_new_tvars_8_0_i7);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_util__get_new_tvars_8_0_i11);
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_util__get_new_tvars_8_0_i10);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		parse_tree__prog_util__get_new_tvars_8_0_i13);
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(parse_tree__prog_util__get_new_tvars_8_0_i49);
	}
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		parse_tree__prog_util__get_new_tvars_8_0_i14);
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__name_var_4_0,
		parse_tree__prog_util__get_new_tvars_8_0_i15);
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		parse_tree__prog_util__get_new_tvars_8_0_i16);
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		parse_tree__prog_util__get_new_tvars_8_0_i17);
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(parse_tree__prog_util__get_new_tvars_8_0_i49);
	}
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(varset__new_var_3_0,
		parse_tree__prog_util__get_new_tvars_8_0_i19);
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		parse_tree__prog_util__get_new_tvars_8_0_i20);
MR_def_label(parse_tree__prog_util__get_new_tvars_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(parse_tree__prog_util__get_new_tvars_8_0_i49);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module26)
	MR_init_entry1(fn__parse_tree__prog_util__sym_name_and_args_to_term_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_util__sym_name_and_args_to_term_3_0);
	MR_init_label1(fn__parse_tree__prog_util__sym_name_and_args_to_term_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_and_args_to_term'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_util__sym_name_and_args_to_term_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__sym_name_and_args_to_term_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr3;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_np_tailcall_ent(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0);
	}
MR_def_label(fn__parse_tree__prog_util__sym_name_and_args_to_term_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_tfield(0, MR_r1, 2) = MR_r4;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module27)
	MR_init_entry1(fn__parse_tree__prog_util__goal_list_to_conj_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_util__goal_list_to_conj_2_3_0);
	MR_init_label3(fn__parse_tree__prog_util__goal_list_to_conj_2_3_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_list_to_conj_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_util__goal_list_to_conj_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__goal_list_to_conj_2_3_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(fn__parse_tree__prog_util__goal_list_to_conj_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0))
		continue;
	MR_r1 = MR_r2;
	break;
	} /* end while */
MR_def_label(fn__parse_tree__prog_util__goal_list_to_conj_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp(2);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(fn__parse_tree__prog_util__goal_list_to_conj_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module28)
	MR_init_entry1(fn__parse_tree__prog_util__goal_list_to_conj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_util__goal_list_to_conj_2_0);
	MR_init_label1(fn__parse_tree__prog_util__goal_list_to_conj_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_list_to_conj'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_util__goal_list_to_conj_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_util__goal_list_to_conj_2_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_util__goal_list_to_conj_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__parse_tree__prog_util__goal_list_to_conj_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module29)
	MR_init_entry1(parse_tree__prog_util__rename_in_trace_mutable_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__rename_in_trace_mutable_var_4_0);
	MR_init_label2(parse_tree__prog_util__rename_in_trace_mutable_var_4_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_in_trace_mutable_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_util__rename_in_trace_mutable_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		parse_tree__prog_util__rename_in_trace_mutable_var_4_0_i3);
MR_def_label(parse_tree__prog_util__rename_in_trace_mutable_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_util__rename_in_trace_mutable_var_4_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_util__rename_in_trace_mutable_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module30)
	MR_init_entry1(parse_tree__prog_util__rename_in_catch_expr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__rename_in_catch_expr_4_0);
	MR_init_label3(parse_tree__prog_util__rename_in_catch_expr_4_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_in_catch_expr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_util__rename_in_catch_expr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_util__rename_in_catch_expr_4_0_i2);
MR_def_label(parse_tree__prog_util__rename_in_catch_expr_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(term__substitute_4_0,
		parse_tree__prog_util__rename_in_catch_expr_4_0_i4);
MR_def_label(parse_tree__prog_util__rename_in_catch_expr_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__rename_in_goal_expr_4_0,
		parse_tree__prog_util__rename_in_catch_expr_4_0_i5);
MR_def_label(parse_tree__prog_util__rename_in_catch_expr_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module31)
	MR_init_entry1(__Unify___parse_tree__prog_util__maybe_modes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_util__maybe_modes_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_util__maybe_modes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module32)
	MR_init_entry1(__Compare___parse_tree__prog_util__maybe_modes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_util__maybe_modes_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_util__maybe_modes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module33)
	MR_init_entry1(__Unify___parse_tree__prog_util__new_pred_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_util__new_pred_id_0_0);
	MR_init_label9(__Unify___parse_tree__prog_util__new_pred_id_0_0,5,6,10,8,14,16,48,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_util__new_pred_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i48);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_util__new_pred_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___parse_tree__prog_util__new_pred_id_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i8);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___parse_tree__prog_util__new_pred_id_0_0_i10);
MR_def_label(__Unify___parse_tree__prog_util__new_pred_id_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___parse_tree__prog_util__new_pred_id_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i14);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___parse_tree__prog_util__new_pred_id_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i16);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___parse_tree__prog_util__new_pred_id_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i20);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	MR_r3 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(__Unify___parse_tree__prog_util__new_pred_id_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_util__new_pred_id_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_util__new_pred_id_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___parse_tree__prog_util__new_pred_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module34)
	MR_init_entry1(__Compare___parse_tree__prog_util__new_pred_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_util__new_pred_id_0_0);
	MR_init_label10(__Compare___parse_tree__prog_util__new_pred_id_0_0,136,7,8,9,10,11,5,15,18,16)
	MR_init_label10(__Compare___parse_tree__prog_util__new_pred_id_0_0,23,24,25,13,29,30,33,31,38,39)
	MR_init_label10(__Compare___parse_tree__prog_util__new_pred_id_0_0,27,43,44,45,46,48,41,52,53,54)
	MR_init_label10(__Compare___parse_tree__prog_util__new_pred_id_0_0,55,170,56,50,61,62,63,64,65,68)
	MR_init_label9(__Compare___parse_tree__prog_util__new_pred_id_0_0,59,74,75,130,76,77,78,133,81)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_util__new_pred_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i136);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i7);
	}
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i130);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i13);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_util__new_pred_id_0_0_i18);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i81);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i133);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i27);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i29);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i30);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___parse_tree__prog_util__new_pred_id_0_0_i33);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i81);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i133);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i41);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i43);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i45);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i46);
	}
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i48);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i130);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i50);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i53);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i54);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i55);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i56);
	}
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r3 = MR_tfield(3, MR_sv(1), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i130);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i59);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i61);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i62);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i63);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i65);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i130);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_util__new_pred_id_0_0_i68);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i81);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i74);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i75);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i76);
	}
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i77);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i78);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_util__new_pred_id_0_0_i170);
	}
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_util__new_pred_id_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(parse_tree__prog_util_module35)
	MR_init_entry1(parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_0);
	MR_init_label2(parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__make_pred_name__538__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_0_i2);
MR_def_label(parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_0_i3);
MR_def_label(parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(" = ", 3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module36)
	MR_init_entry1(parse_tree__prog_util__list_to_string__ho1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__list_to_string__ho1_3_0);
	MR_init_label1(parse_tree__prog_util__list_to_string__ho1_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_string__ho1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_util__list_to_string__ho1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_np_call_localret_ent(parse_tree__prog_util__list_to_string_2__ho4_4_0,
		parse_tree__prog_util__list_to_string__ho1_3_0_i3);
MR_def_label(parse_tree__prog_util__list_to_string__ho1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("[", 1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module37)
	MR_init_entry1(parse_tree__prog_util__list_to_string_2__ho4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_util__list_to_string_2__ho4_4_0);
	MR_init_label6(parse_tree__prog_util__list_to_string_2__ho4_4_0,28,5,7,8,10,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_string_2__ho4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_util__list_to_string_2__ho4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__list_to_string_2__ho4_4_0_i28);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(parse_tree__prog_util__list_to_string_2__ho4_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__list_to_string_2__ho4_4_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		parse_tree__prog_util__list_to_string_2__ho4_4_0_i13);
MR_def_label(parse_tree__prog_util__list_to_string_2__ho4_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_util__list_to_string_2__ho4_4_0_i7);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		parse_tree__prog_util__list_to_string_2__ho4_4_0_i10);
MR_def_label(parse_tree__prog_util__list_to_string_2__ho4_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_r4;
	MR_np_localcall_lab(parse_tree__prog_util__list_to_string_2__ho4_4_0,
		parse_tree__prog_util__list_to_string_2__ho4_4_0_i8);
MR_def_label(parse_tree__prog_util__list_to_string_2__ho4_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		parse_tree__prog_util__list_to_string_2__ho4_4_0_i10);
MR_def_label(parse_tree__prog_util__list_to_string_2__ho4_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		parse_tree__prog_util__list_to_string_2__ho4_4_0_i13);
MR_def_label(parse_tree__prog_util__list_to_string_2__ho4_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module38)
	MR_init_entry1(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0);
	MR_init_label3(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,16,17,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__sym_name_and_term_to_term__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i2);
	}
	MR_r7 = (MR_Word) MR_sp;
MR_def_label(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr4;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_r1,0))
		continue;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr5 = MR_r3;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tfield(0, MR_r1, 1) = MR_tempr3;
	MR_tfield(0, MR_r1, 2) = MR_tempr5;
	}
	break;
	} /* end while */
MR_def_label(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_sv(2);
	MR_decr_sp(3);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r7))
		continue;
	MR_proceed();
	}
	break;
	} /* end while */
MR_def_label(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tfield(0, MR_r1, 1) = MR_tempr3;
	MR_tfield(0, MR_r1, 2) = MR_tempr4;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module39)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_0);
	MR_init_label1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__list_to_string__ho2__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_0_i3);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("[", 1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_util_module40)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0);
	MR_init_label7(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0,28,5,7,8,6,10,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__list_to_string_2__ho3__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0_i28);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0_i5);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0_i13);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0_i7);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_r3;
	MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0_i6);
	}
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_r4, 0);
	MR_r2 = MR_r5;
	MR_np_localcall_lab(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0_i8);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0_i10);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0_i13);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__prog_util_maybe_bunch_0(void)
{
	parse_tree__prog_util_module0();
	parse_tree__prog_util_module1();
	parse_tree__prog_util_module2();
	parse_tree__prog_util_module3();
	parse_tree__prog_util_module4();
	parse_tree__prog_util_module5();
	parse_tree__prog_util_module6();
	parse_tree__prog_util_module7();
	parse_tree__prog_util_module8();
	parse_tree__prog_util_module9();
	parse_tree__prog_util_module10();
	parse_tree__prog_util_module11();
	parse_tree__prog_util_module12();
	parse_tree__prog_util_module13();
	parse_tree__prog_util_module14();
	parse_tree__prog_util_module15();
	parse_tree__prog_util_module16();
	parse_tree__prog_util_module17();
	parse_tree__prog_util_module18();
	parse_tree__prog_util_module19();
	parse_tree__prog_util_module20();
	parse_tree__prog_util_module21();
	parse_tree__prog_util_module22();
	parse_tree__prog_util_module23();
	parse_tree__prog_util_module24();
	parse_tree__prog_util_module25();
	parse_tree__prog_util_module26();
	parse_tree__prog_util_module27();
	parse_tree__prog_util_module28();
	parse_tree__prog_util_module29();
	parse_tree__prog_util_module30();
	parse_tree__prog_util_module31();
	parse_tree__prog_util_module32();
	parse_tree__prog_util_module33();
	parse_tree__prog_util_module34();
	parse_tree__prog_util_module35();
	parse_tree__prog_util_module36();
	parse_tree__prog_util_module37();
	parse_tree__prog_util_module38();
	parse_tree__prog_util_module39();
}

static void mercury__parse_tree__prog_util_maybe_bunch_1(void)
{
	parse_tree__prog_util_module40();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__prog_util__init(void);
void mercury__parse_tree__prog_util__init_type_tables(void);
void mercury__parse_tree__prog_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__prog_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__prog_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__parse_tree__prog_util__init_threadscope_string_table(void);
#endif

void mercury__parse_tree__prog_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__prog_util_maybe_bunch_0();
	mercury__parse_tree__prog_util_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_util__type_ctor_info_maybe_modes_0,
		parse_tree__prog_util__maybe_modes_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_util__type_ctor_info_new_pred_id_0,
		parse_tree__prog_util__new_pred_id_0_0);
	mercury__parse_tree__prog_util__init_debugger();
}

void mercury__parse_tree__prog_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_util__type_ctor_info_maybe_modes_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_util__type_ctor_info_new_pred_id_0);
	}
}


void mercury__parse_tree__prog_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__prog_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parse_tree__prog_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__prog_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__parse_tree__prog_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
