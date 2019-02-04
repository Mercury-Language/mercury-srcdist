/*
** Automatically generated from `prog_io_util.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
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
INIT mercury__parse_tree__prog_io_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "parse_tree.prog_io_util.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "parse_tree.prog_io_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "parse_tree.prog_io_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "parse_tree.prog_io_util.c"
#line 40 "parse_tree.prog_io_util.c"
#include "parse_tree.prog_io_util.mh"

#line 43 "parse_tree.prog_io_util.c"
#line 44 "parse_tree.prog_io_util.c"
#ifndef PARSE_TREE__PROG_IO_UTIL_DECL_GUARD
#define PARSE_TREE__PROG_IO_UTIL_DECL_GUARD

#line 48 "parse_tree.prog_io_util.c"
#line 49 "parse_tree.prog_io_util.c"

#endif
#line 52 "parse_tree.prog_io_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
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
	MR_Integer f1[32];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_String f1[3];
	MR_Integer f2[4];
	MR_String f3;
	MR_Integer f4[4];
	MR_String f5;
	MR_Integer f6[7];
	MR_String f7;
	MR_Integer f8;
	MR_String f9;
	MR_Integer f10[5];
	MR_String f11;
	MR_Integer f12;
	MR_String f13;
	MR_Integer f14;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1;
	MR_String f2[5];
	MR_Integer f3[3];
	MR_String f4;
	MR_Integer f5[6];
	MR_String f6[3];
	MR_Integer f7[2];
	MR_String f8;
	MR_Integer f9[7];
	MR_String f10;
	MR_Integer f11;
	MR_String f12;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_io_util__type_ctor_info_var2tvar_0,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_var2pvar_0,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_parser_1,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_pred_or_func_1,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_item_and_context_0,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_functor_1,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_functor_0,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe4_5,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe4_4,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe3_4;

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe3_3,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe2_3,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe2_2,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe1_2,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe1_1,
	mercury_data_parse_tree__prog_io_util__type_ctor_info_allow_constrained_inst_var_0;
MR_decl_label3(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0, 36,8,2)
MR_decl_label1(parse_tree__prog_io_util__add_context_3_0, 3)
MR_decl_label7(parse_tree__prog_io_util__convert_bound_inst_3_0, 5,7,3,8,9,11,1)
MR_decl_label4(parse_tree__prog_io_util__convert_bound_inst_list_3_0, 22,4,6,1)
MR_decl_label8(parse_tree__prog_io_util__convert_inst_3_0, 7,20,22,9,41,43,45,47)
MR_decl_label8(parse_tree__prog_io_util__convert_inst_3_0, 24,48,54,60,66,79,81,82)
MR_decl_label8(parse_tree__prog_io_util__convert_inst_3_0, 72,83,86,87,88,90,91,85)
MR_decl_label5(parse_tree__prog_io_util__convert_inst_3_0, 96,3,107,2,1)
MR_decl_label4(parse_tree__prog_io_util__convert_inst_list_3_0, 22,4,6,1)
MR_decl_label8(parse_tree__prog_io_util__convert_mode_3_0, 9,11,2,26,28,13,49,51)
MR_decl_label6(parse_tree__prog_io_util__convert_mode_3_0, 53,55,30,56,58,1)
MR_decl_label4(parse_tree__prog_io_util__convert_mode_list_3_0, 22,4,6,1)
MR_decl_label8(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0, 4,21,6,7,8,9,10,11)
MR_decl_label7(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0, 12,13,14,15,16,17,18)
MR_decl_label4(parse_tree__prog_io_util__list_term_to_term_list_2_0, 42,10,41,1)
MR_decl_label3(parse_tree__prog_io_util__list_to_conjunction_4_0, 4,5,2)
MR_decl_label7(parse_tree__prog_io_util__map_parser_3_0, 4,5,10,9,7,3,34)
MR_decl_label7(parse_tree__prog_io_util__parse_bound_inst_list_4_0, 2,3,5,10,13,9,1)
MR_decl_label5(parse_tree__prog_io_util__parse_higher_order_type_5_0, 2,13,3,19,1)
MR_decl_label1(parse_tree__prog_io_util__parse_list_3_0, 2)
MR_decl_label4(parse_tree__prog_io_util__parse_list_of_vars_2_0, 46,11,45,1)
MR_decl_label3(parse_tree__prog_io_util__parse_name_and_arity_4_0, 8,10,1)
MR_decl_label4(parse_tree__prog_io_util__parse_pred_or_func_and_args_4_0, 2,5,6,1)
MR_decl_label5(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0, 2,9,11,10,14)
MR_decl_label4(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0, 5,4,9,1)
MR_decl_label3(parse_tree__prog_io_util__parse_purity_annotation_3_0, 8,2,3)
MR_decl_label8(parse_tree__prog_io_util__parse_quantifier_vars_2_0, 2,105,15,22,25,26,14,7)
MR_decl_label1(parse_tree__prog_io_util__parse_quantifier_vars_2_0, 103)
MR_decl_label8(parse_tree__prog_io_util__parse_type_2_0, 4,2,10,5,6,14,12,20)
MR_decl_label6(parse_tree__prog_io_util__parse_type_2_0, 16,23,27,29,30,37)
MR_decl_label5(parse_tree__prog_io_util__parse_types_2_3_0, 18,4,3,5,21)
MR_decl_label6(parse_tree__prog_io_util__parse_vars_2_0, 2,16,19,14,7,76)
MR_decl_label8(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0, 2,22,23,117,15,25,28,29)
MR_decl_label4(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0, 30,14,7,115)
MR_decl_label8(parse_tree__prog_io_util__standard_det_2_0, 3,16,5,6,7,8,9,11)
MR_decl_label3(parse_tree__prog_io_util__standard_det_2_0, 12,13,14)
MR_decl_label4(parse_tree__prog_io_util__unparse_qualified_term_3_0, 4,5,3,6)
MR_decl_label8(parse_tree__prog_io_util__unparse_type_2_0, 68,5,6,69,8,70,11,12)
MR_decl_label8(parse_tree__prog_io_util__unparse_type_2_0, 13,73,29,30,31,72,26,27)
MR_decl_label8(parse_tree__prog_io_util__unparse_type_2_0, 71,15,16,19,18,17,21,23)
MR_decl_label2(parse_tree__prog_io_util__unparse_type_2_0, 22,24)
MR_decl_label1(fn__parse_tree__prog_io_util__get_any_errors1_1_0, 3)
MR_decl_label1(fn__parse_tree__prog_io_util__get_any_errors2_1_0, 3)
MR_decl_label1(fn__parse_tree__prog_io_util__get_any_errors3_1_0, 3)
MR_decl_label1(fn__parse_tree__prog_io_util__get_any_errors4_1_0, 3)
MR_decl_label3(__Unify___parse_tree__prog_io_util__maybe1_2_0, 16,5,1)
MR_decl_label4(__Unify___parse_tree__prog_io_util__maybe2_3_0, 18,5,10,1)
MR_decl_label5(__Unify___parse_tree__prog_io_util__maybe3_4_0, 20,5,10,12,1)
MR_decl_label6(__Unify___parse_tree__prog_io_util__maybe4_5_0, 22,5,10,12,14,1)
MR_decl_label5(__Compare___parse_tree__prog_io_util__maybe1_2_0, 3,2,7,5,10)
MR_decl_label7(__Compare___parse_tree__prog_io_util__maybe2_3_0, 3,2,7,5,10,12,45)
MR_decl_label8(__Compare___parse_tree__prog_io_util__maybe3_4_0, 3,2,7,5,10,12,16,54)
MR_decl_label8(__Compare___parse_tree__prog_io_util__maybe4_5_0, 3,2,7,5,10,12,16,20)
MR_decl_label1(__Compare___parse_tree__prog_io_util__maybe4_5_0, 63)
MR_def_extern_entry(fn__parse_tree__prog_io_util__get_any_errors1_1_0)
MR_def_extern_entry(fn__parse_tree__prog_io_util__get_any_errors2_1_0)
MR_def_extern_entry(fn__parse_tree__prog_io_util__get_any_errors3_1_0)
MR_def_extern_entry(fn__parse_tree__prog_io_util__get_any_errors4_1_0)
MR_def_extern_entry(parse_tree__prog_io_util__add_context_3_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_list_of_vars_2_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_vars_2_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_quantifier_vars_2_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_name_and_arity_4_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_name_and_arity_3_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_4_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_pred_or_func_and_args_4_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_purity_annotation_3_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_type_2_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_types_2_0)
MR_decl_static(parse_tree__prog_io_util__parse_types_2_3_0)
MR_decl_static(parse_tree__prog_io_util__parse_higher_order_type_5_0)
MR_decl_static(parse_tree__prog_io_util__unparse_type_list_2_0)
MR_decl_static(parse_tree__prog_io_util__unparse_qualified_term_3_0)
MR_def_extern_entry(parse_tree__prog_io_util__unparse_type_2_0)
MR_def_extern_entry(parse_tree__prog_io_util__standard_det_2_0)
MR_decl_static(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0)
MR_def_extern_entry(parse_tree__prog_io_util__disjunction_to_list_2_0)
MR_def_extern_entry(parse_tree__prog_io_util__convert_mode_list_3_0)
MR_def_extern_entry(parse_tree__prog_io_util__convert_mode_3_0)
MR_def_extern_entry(parse_tree__prog_io_util__convert_inst_list_3_0)
MR_def_extern_entry(parse_tree__prog_io_util__convert_inst_3_0)
MR_decl_static(parse_tree__prog_io_util__parse_bound_inst_list_4_0)
MR_decl_static(parse_tree__prog_io_util__convert_bound_inst_list_3_0)
MR_decl_static(parse_tree__prog_io_util__convert_bound_inst_3_0)
MR_def_extern_entry(parse_tree__prog_io_util__conjunction_to_list_2_0)
MR_def_extern_entry(parse_tree__prog_io_util__list_to_conjunction_4_0)
MR_def_extern_entry(parse_tree__prog_io_util__sum_to_list_2_0)
MR_def_extern_entry(parse_tree__prog_io_util__map_parser_3_0)
MR_def_extern_entry(parse_tree__prog_io_util__parse_list_3_0)
MR_def_extern_entry(parse_tree__prog_io_util__list_term_to_term_list_2_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__allow_constrained_inst_var_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__allow_constrained_inst_var_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__maybe1_1_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__maybe1_1_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__maybe1_2_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__maybe1_2_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__maybe2_2_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__maybe2_2_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__maybe2_3_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__maybe2_3_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__maybe3_3_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__maybe3_3_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__maybe3_4_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__maybe3_4_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__maybe4_4_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__maybe4_4_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__maybe4_5_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__maybe4_5_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__maybe_functor_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__maybe_functor_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__maybe_functor_1_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__maybe_functor_1_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__maybe_item_and_context_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__maybe_item_and_context_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__maybe_pred_or_func_1_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__maybe_pred_or_func_1_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__parser_1_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__parser_1_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__var2pvar_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__var2pvar_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_io_util__var2tvar_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_io_util__var2tvar_0_0)
MR_decl_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_1 mercury_common_1[8] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,1)
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
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,1,1)
}
},
};

static const struct mercury_type_3 mercury_common_3[9] =
{
{
MR_string_const("", 0)
},
{
MR_string_const(".", 1)
},
{
MR_string_const("func", 4)
},
{
MR_string_const("=", 1)
},
{
MR_string_const("pred", 4)
},
{
MR_string_const("semipure", 8)
},
{
MR_string_const("impure", 6)
},
{
MR_string_const("{}", 2)
},
{
MR_string_const(",", 1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io_util__unparse_type_list_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_io_util__unparse_type_list_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(1,2)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(parse_tree__prog_io_util__unparse_type_2_0),
0
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
-1,
-1,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-2
}
},
{
{
-2,
-1,
-1,
-1,
1,
-1,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
2,
-1,
-1,
-2,
-2,
5,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-1
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
MR_string_const("semidet", 7),
MR_string_const("erroneous", 9),
MR_string_const("cc_nondet", 9)
},
{
0,
0,
0,
0
},
MR_string_const("failure", 7),
{
0,
0,
0,
0
},
MR_string_const("multi", 5),
{
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("multidet", 8),
0,
MR_string_const("det", 3),
{
0,
0,
0,
0,
0
},
MR_string_const("nondet", 6),
0,
MR_string_const("cc_multi", 8),
0
},
};

static const struct mercury_type_8 mercury_common_8[5] =
{
{
4
},
{
2
},
{
0
},
{
1
},
{
3
},
};

static const struct mercury_type_9 mercury_common_9[5] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
{
1,
4,
MR_tbmkword(0, 0)
},
{
1,
2,
MR_tbmkword(0, 0)
},
{
1,
1,
MR_tbmkword(0, 0)
},
{
1,
3,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
0,
{
MR_string_const("mostly_clobbered_any", 20),
MR_string_const("free", 4),
MR_string_const("ground", 6),
MR_string_const("mostly_unique_any", 17),
MR_string_const("any", 3)
},
{
0,
0,
0
},
MR_string_const("mostly_clobbered", 16),
{
0,
0,
0,
0,
0,
0
},
{
MR_string_const("unique_any", 10),
MR_string_const("mostly_unique", 13),
MR_string_const("clobbered_any", 13)
},
{
0,
0
},
MR_string_const("unique", 6),
{
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("not_reached", 11),
0,
MR_string_const("clobbered", 9)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_var2tvar_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__var2tvar_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__var2tvar_0_0)),
	"parse_tree.prog_io_util",
	"var2tvar",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_var2pvar_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__var2pvar_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__var2pvar_0_0)),
	"parse_tree.prog_io_util",
	"var2pvar",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_term_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_parse_tree__prog_io_util__pti_maybe1_2__pseudo_1__plain_term__type_ctor_info_generic_0 = {
	&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe1_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_VA_PseudoTypeInfo_Struct2 mercury_data___vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_2__pseudo_1__plain_term__type_ctor_info_generic_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	2,
{	(MR_PseudoTypeInfo) &mercury_data_term__ti_term_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_io_util__pti_maybe1_2__pseudo_1__plain_term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_parser_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__parser_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__parser_1_0)),
	"parse_tree.prog_io_util",
	"parser",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_2__pseudo_1__plain_term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_maybe__pti_maybe_1__pseudo_1 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_maybe__pti_maybe_1__pseudo_1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct3 mercury_data_parse_tree__prog_io_util__pti_maybe2_3__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1__plain_term__type_ctor_info_generic_0 = {
	&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe2_3,
{	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_pred_or_func_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__maybe_pred_or_func_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__maybe_pred_or_func_1_0)),
	"parse_tree.prog_io_util",
	"maybe_pred_or_func",
	{ 0 },
	{ (void *)&mercury_data_parse_tree__prog_io_util__pti_maybe2_3__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1__plain_term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct3 mercury_data_parse_tree__prog_io_util__ti_maybe2_3parse_tree__prog_item__type_ctor_info_item_0term__type_ctor_info_context_0term__type_ctor_info_generic_0 = {
	&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe2_3,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_0,
	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_item_and_context_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__maybe_item_and_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__maybe_item_and_context_0_0)),
	"parse_tree.prog_io_util",
	"maybe_item_and_context",
	{ 0 },
	{ (void *)&mercury_data_parse_tree__prog_io_util__ti_maybe2_3parse_tree__prog_item__type_ctor_info_item_0term__type_ctor_info_context_0term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_term_1__pseudo_1 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_term__pti_term_1__pseudo_1
}};

static const MR_FA_PseudoTypeInfo_Struct3 mercury_data_parse_tree__prog_io_util__pti_maybe2_3__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1__plain_term__type_ctor_info_generic_0 = {
	&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe2_3,
{	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_functor_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__maybe_functor_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__maybe_functor_1_0)),
	"parse_tree.prog_io_util",
	"maybe_functor",
	{ 0 },
	{ (void *)&mercury_data_parse_tree__prog_io_util__pti_maybe2_3__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1__plain_term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_term_1term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct3 mercury_data_parse_tree__prog_io_util__ti_maybe2_3mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0term__type_ctor_info_generic_0 = {
	&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe2_3,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0,
	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_functor_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__maybe_functor_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__maybe_functor_0_0)),
	"parse_tree.prog_io_util",
	"maybe_functor",
	{ 0 },
	{ (void *)&mercury_data_parse_tree__prog_io_util__ti_maybe2_3mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_term_1__pseudo_5 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_PseudoTypeInfo) 5
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_5 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_term__pti_term_1__pseudo_5
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_5 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_5
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_io_util__field_types_maybe4_5_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_5
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe4_5_0 = {
	"error4",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_io_util__field_types_maybe4_5_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_io_util__field_types_maybe4_5_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 3,
	(MR_PseudoTypeInfo) 4
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe4_5_1 = {
	"ok4",
	4,
	15,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_io_util__field_types_maybe4_5_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe4_5_0[] = {
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe4_5_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe4_5_1[] = {
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe4_5_1

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_io_util__du_ptag_ordered_maybe4_5[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe4_5_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe4_5_1 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io_util__du_name_ordered_maybe4_5[] = {
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe4_5_0,
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe4_5_1
};

const MR_Integer mercury_data_parse_tree__prog_io_util__functor_number_map_maybe4_5[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe4_5 = {
	5,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__maybe4_5_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__maybe4_5_0)),
	"parse_tree.prog_io_util",
	"maybe4",
	{ (void *)mercury_data_parse_tree__prog_io_util__du_name_ordered_maybe4_5 },
	{ (void *)mercury_data_parse_tree__prog_io_util__du_ptag_ordered_maybe4_5 },
	2,
	4,
	mercury_data_parse_tree__prog_io_util__functor_number_map_maybe4_5
};

static const MR_FA_PseudoTypeInfo_Struct5 mercury_data_parse_tree__prog_io_util__pti_maybe4_5__pseudo_1__pseudo_2__pseudo_3__pseudo_4__plain_term__type_ctor_info_generic_0 = {
	&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe4_5,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 3,
	(MR_PseudoTypeInfo) 4,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe4_4 = {
	4,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__maybe4_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__maybe4_4_0)),
	"parse_tree.prog_io_util",
	"maybe4",
	{ 0 },
	{ (void *)&mercury_data_parse_tree__prog_io_util__pti_maybe4_5__pseudo_1__pseudo_2__pseudo_3__pseudo_4__plain_term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_term_1__pseudo_4 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_PseudoTypeInfo) 4
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_4 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_term__pti_term_1__pseudo_4
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_4 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_4
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_io_util__field_types_maybe3_4_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_4
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe3_4_0 = {
	"error3",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_io_util__field_types_maybe3_4_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_io_util__field_types_maybe3_4_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 3
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe3_4_1 = {
	"ok3",
	3,
	7,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_io_util__field_types_maybe3_4_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe3_4_0[] = {
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe3_4_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe3_4_1[] = {
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe3_4_1

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_io_util__du_ptag_ordered_maybe3_4[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe3_4_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe3_4_1 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io_util__du_name_ordered_maybe3_4[] = {
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe3_4_0,
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe3_4_1
};

const MR_Integer mercury_data_parse_tree__prog_io_util__functor_number_map_maybe3_4[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe3_4 = {
	4,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__maybe3_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__maybe3_4_0)),
	"parse_tree.prog_io_util",
	"maybe3",
	{ (void *)mercury_data_parse_tree__prog_io_util__du_name_ordered_maybe3_4 },
	{ (void *)mercury_data_parse_tree__prog_io_util__du_ptag_ordered_maybe3_4 },
	2,
	4,
	mercury_data_parse_tree__prog_io_util__functor_number_map_maybe3_4
};

static const MR_FA_PseudoTypeInfo_Struct4 mercury_data_parse_tree__prog_io_util__pti_maybe3_4__pseudo_1__pseudo_2__pseudo_3__plain_term__type_ctor_info_generic_0 = {
	&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe3_4,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 3,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe3_3 = {
	3,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__maybe3_3_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__maybe3_3_0)),
	"parse_tree.prog_io_util",
	"maybe3",
	{ 0 },
	{ (void *)&mercury_data_parse_tree__prog_io_util__pti_maybe3_4__pseudo_1__pseudo_2__pseudo_3__plain_term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_term_1__pseudo_3 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_PseudoTypeInfo) 3
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_3 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_term__pti_term_1__pseudo_3
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_3 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_3
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_io_util__field_types_maybe2_3_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_3
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe2_3_0 = {
	"error2",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_io_util__field_types_maybe2_3_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_io_util__field_types_maybe2_3_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe2_3_1 = {
	"ok2",
	2,
	3,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_io_util__field_types_maybe2_3_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe2_3_0[] = {
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe2_3_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe2_3_1[] = {
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe2_3_1

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_io_util__du_ptag_ordered_maybe2_3[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe2_3_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe2_3_1 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io_util__du_name_ordered_maybe2_3[] = {
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe2_3_0,
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe2_3_1
};

const MR_Integer mercury_data_parse_tree__prog_io_util__functor_number_map_maybe2_3[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe2_3 = {
	3,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__maybe2_3_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__maybe2_3_0)),
	"parse_tree.prog_io_util",
	"maybe2",
	{ (void *)mercury_data_parse_tree__prog_io_util__du_name_ordered_maybe2_3 },
	{ (void *)mercury_data_parse_tree__prog_io_util__du_ptag_ordered_maybe2_3 },
	2,
	4,
	mercury_data_parse_tree__prog_io_util__functor_number_map_maybe2_3
};

static const MR_FA_PseudoTypeInfo_Struct3 mercury_data_parse_tree__prog_io_util__pti_maybe2_3__pseudo_1__pseudo_2__plain_term__type_ctor_info_generic_0 = {
	&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe2_3,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe2_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__maybe2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__maybe2_2_0)),
	"parse_tree.prog_io_util",
	"maybe2",
	{ 0 },
	{ (void *)&mercury_data_parse_tree__prog_io_util__pti_maybe2_3__pseudo_1__pseudo_2__plain_term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_term_1__pseudo_2 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_2 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_term__pti_term_1__pseudo_2
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_2 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_2
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_io_util__field_types_maybe1_2_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_term_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe1_2_0 = {
	"error1",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_io_util__field_types_maybe1_2_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_io_util__field_types_maybe1_2_1[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe1_2_1 = {
	"ok1",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_io_util__field_types_maybe1_2_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe1_2_0[] = {
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe1_2_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe1_2_1[] = {
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe1_2_1

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_io_util__du_ptag_ordered_maybe1_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe1_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_io_util__du_stag_ordered_maybe1_2_1 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_io_util__du_name_ordered_maybe1_2[] = {
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe1_2_0,
	&mercury_data_parse_tree__prog_io_util__du_functor_desc_maybe1_2_1
};

const MR_Integer mercury_data_parse_tree__prog_io_util__functor_number_map_maybe1_2[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe1_2 = {
	2,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__maybe1_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__maybe1_2_0)),
	"parse_tree.prog_io_util",
	"maybe1",
	{ (void *)mercury_data_parse_tree__prog_io_util__du_name_ordered_maybe1_2 },
	{ (void *)mercury_data_parse_tree__prog_io_util__du_ptag_ordered_maybe1_2 },
	2,
	4,
	mercury_data_parse_tree__prog_io_util__functor_number_map_maybe1_2
};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe1_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__maybe1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__maybe1_1_0)),
	"parse_tree.prog_io_util",
	"maybe1",
	{ 0 },
	{ (void *)&mercury_data_parse_tree__prog_io_util__pti_maybe1_2__pseudo_1__plain_term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0 = {
	"allow_constrained_inst_var",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1 = {
	"no_allow_constrained_inst_var",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[] = {
	&mercury_data_parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
	&mercury_data_parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[] = {
	&mercury_data_parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
	&mercury_data_parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

const MR_Integer mercury_data_parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io_util__type_ctor_info_allow_constrained_inst_var_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_io_util__allow_constrained_inst_var_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_io_util__allow_constrained_inst_var_0_0)),
	"parse_tree.prog_io_util",
	"allow_constrained_inst_var",
	{ (void *)mercury_data_parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0 },
	{ (void *)mercury_data_parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0 },
	2,
	4,
	mercury_data_parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_io_util__unparse_type_list_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io_util",
"parse_tree.prog_io_util",
"unparse_type",
2,
0
},
"parse_tree.prog_io_util",
"prog_io_util.m",
430,
"d1;c3;"
};


MR_BEGIN_MODULE(parse_tree__prog_io_util_module0)
	MR_init_entry1(fn__parse_tree__prog_io_util__get_any_errors1_1_0);
	MR_init_label1(fn__parse_tree__prog_io_util__get_any_errors1_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_io_util__get_any_errors1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io_util__get_any_errors1_1_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r3, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_io_util__get_any_errors1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module1)
	MR_init_entry1(fn__parse_tree__prog_io_util__get_any_errors2_1_0);
	MR_init_label1(fn__parse_tree__prog_io_util__get_any_errors2_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_io_util__get_any_errors2_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io_util__get_any_errors2_1_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r4, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_io_util__get_any_errors2_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module2)
	MR_init_entry1(fn__parse_tree__prog_io_util__get_any_errors3_1_0);
	MR_init_label1(fn__parse_tree__prog_io_util__get_any_errors3_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_io_util__get_any_errors3_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io_util__get_any_errors3_1_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r5, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_io_util__get_any_errors3_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module3)
	MR_init_entry1(fn__parse_tree__prog_io_util__get_any_errors4_1_0);
	MR_init_label1(fn__parse_tree__prog_io_util__get_any_errors4_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_io_util__get_any_errors4_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_io_util__get_any_errors4_1_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r6, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_io_util__get_any_errors4_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module4)
	MR_init_entry1(parse_tree__prog_io_util__add_context_3_0);
	MR_init_label1(parse_tree__prog_io_util__add_context_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__add_context_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__add_context_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__add_context_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module5)
	MR_init_entry1(parse_tree__prog_io_util__parse_list_of_vars_2_0);
	MR_init_label4(parse_tree__prog_io_util__parse_list_of_vars_2_0,46,11,45,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_list_of_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_list_of_vars_2_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_list_of_vars_2_0_i45);
	}
	MR_r4 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_list_of_vars_2_0_i46);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_list_of_vars_2_0_i45);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__parse_list_of_vars_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_list_of_vars_2_0_i1);
	}
	MR_tempr3 = MR_r4;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_list_of_vars_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_list_of_vars_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_list_of_vars_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(parse_tree__prog_io_util__parse_list_of_vars_2_0,
		parse_tree__prog_io_util__parse_list_of_vars_2_0_i11);
MR_def_label(parse_tree__prog_io_util__parse_list_of_vars_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_list_of_vars_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_io_util__parse_list_of_vars_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_io_util__parse_list_of_vars_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module6)
	MR_init_entry1(parse_tree__prog_io_util__parse_vars_2_0);
	MR_init_label6(parse_tree__prog_io_util__parse_vars_2_0,2,16,19,14,7,76)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_2_0_i2);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_2_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__parse_vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_2_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_2_0_i7);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_2_0_i7);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_2_0_i7);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_2_0_i7);
	}
	MR_r5 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_2_0_i7);
	}
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_2_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r5, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(parse_tree__prog_io_util__parse_vars_2_0,
		parse_tree__prog_io_util__parse_vars_2_0_i16);
MR_def_label(parse_tree__prog_io_util__parse_vars_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_2_0_i76);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io_util__parse_vars_2_0_i19);
MR_def_label(parse_tree__prog_io_util__parse_vars_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_io_util__parse_vars_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("expected variable", 17);
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__parse_vars_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("expected list of variables", 26);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__parse_vars_2_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module7)
	MR_init_entry1(parse_tree__prog_io_util__parse_quantifier_vars_2_0);
	MR_init_label8(parse_tree__prog_io_util__parse_quantifier_vars_2_0,2,105,15,22,25,26,14,7)
	MR_init_label1(parse_tree__prog_io_util__parse_quantifier_vars_2_0,103)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_quantifier_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i2);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__parse_quantifier_vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr8 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr8, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i7);
	}
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i7);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr8, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i7);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i7);
	}
	MR_r5 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i7);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr2, 0);
	MR_r5 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i105);
	}
	MR_tempr5 = MR_ctfield(0, MR_tempr4, 0);
	MR_r3 = MR_tempr5;
	if (MR_PTAG_TESTR(MR_tempr5,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i14);
	}
	MR_r6 = MR_ctfield(0, MR_tempr5, 0);
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i14);
	}
	MR_tempr6 = MR_ctfield(0, MR_tempr4, 1);
	MR_r3 = MR_tempr6;
	if (MR_LTAGS_TEST(MR_tempr6,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i14);
	}
	MR_r6 = MR_ctfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i14);
	}
	MR_r6 = MR_ctfield(1, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i14);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_ctfield(1, MR_r6, 0);
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i15);
	}
MR_def_label(parse_tree__prog_io_util__parse_quantifier_vars_2_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(parse_tree__prog_io_util__parse_quantifier_vars_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_localcall_lab(parse_tree__prog_io_util__parse_quantifier_vars_2_0,
		parse_tree__prog_io_util__parse_quantifier_vars_2_0_i22);
MR_def_label(parse_tree__prog_io_util__parse_quantifier_vars_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_quantifier_vars_2_0_i103);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io_util__parse_quantifier_vars_2_0_i25);
MR_def_label(parse_tree__prog_io_util__parse_quantifier_vars_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io_util__parse_quantifier_vars_2_0_i26);
MR_def_label(parse_tree__prog_io_util__parse_quantifier_vars_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_io_util__parse_quantifier_vars_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("expected variable or state variable", 35);
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__parse_quantifier_vars_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("expected list of variables and/or state variables", 49);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__parse_quantifier_vars_2_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module8)
	MR_init_entry1(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0);
	MR_init_label8(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,2,22,23,117,15,25,28,29)
	MR_init_label4(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,30,14,7,115)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_vars_and_state_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i2);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr8 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr8, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i7);
	}
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i7);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr8, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i7);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i7);
	}
	MR_r5 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i7);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr2, 0);
	MR_r5 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i117);
	}
	MR_tempr5 = MR_ctfield(0, MR_tempr4, 1);
	MR_r3 = MR_tempr5;
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i14);
	}
	MR_r6 = MR_ctfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i14);
	}
	MR_tempr6 = MR_ctfield(0, MR_tempr4, 0);
	MR_r6 = MR_tempr6;
	if (MR_PTAG_TESTR(MR_tempr6,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i14);
	}
	MR_r7 = MR_ctfield(1, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_r7,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i14);
	}
	MR_r3 = MR_ctfield(0, MR_tempr6, 0);
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i22);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_ctfield(1, MR_r7, 0);
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_tempr7;
	MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i15);
	}
MR_def_label(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("!.", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i23);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r7, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i15);
	}
MR_def_label(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("!:", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i14);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r7, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i15);
	}
MR_def_label(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_localcall_lab(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,
		parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i25);
MR_def_label(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i115);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_ctfield(1, MR_r1, 2);
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i28);
MR_def_label(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i29);
MR_def_label(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io_util__parse_vars_and_state_vars_2_0_i30);
MR_def_label(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("expected variable or state variable", 35);
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("expected list of variables and/or state variables", 49);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__parse_vars_and_state_vars_2_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io__parse_implicitly_qualified_term_5_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module9)
	MR_init_entry1(parse_tree__prog_io_util__parse_name_and_arity_4_0);
	MR_init_label3(parse_tree__prog_io_util__parse_name_and_arity_4_0,8,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_name_and_arity_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_name_and_arity_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_name_and_arity_4_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("/", 1)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_name_and_arity_4_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_name_and_arity_4_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_name_and_arity_4_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_name_and_arity_4_0_i1);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_r3;
	MR_r5 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_implicitly_qualified_term_5_0,
		parse_tree__prog_io_util__parse_name_and_arity_4_0_i8);
MR_def_label(parse_tree__prog_io_util__parse_name_and_arity_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_name_and_arity_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		parse_tree__prog_io_util__parse_name_and_arity_4_0_i10);
MR_def_label(parse_tree__prog_io_util__parse_name_and_arity_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_name_and_arity_4_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_name_and_arity_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_name_and_arity_4_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_name_and_arity_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__parse_name_and_arity_4_0,1)
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


MR_BEGIN_MODULE(parse_tree__prog_io_util_module10)
	MR_init_entry1(parse_tree__prog_io_util__parse_name_and_arity_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_name_and_arity_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_tailcall_ent(parse_tree__prog_io_util__parse_name_and_arity_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module11)
	MR_init_entry1(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0);
	MR_init_label4(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0,5,4,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r3, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0_i1);
	}
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("func", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0_i5);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0_i4);
	}
MR_def_label(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("pred", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0_i1);
	}
	MR_sv(1) = (MR_Integer) 0;
	MR_r3 = MR_ctfield(0, MR_r3, 1);
MR_def_label(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0_i1);
	}
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_name_and_arity_4_0,
		parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0_i9);
MR_def_label(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module12)
	MR_init_entry1(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_tailcall_ent(parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io__parse_qualified_term_4_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module13)
	MR_init_entry1(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0);
	MR_init_label5(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0,2,9,11,10,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0_i2);
	}
	MR_r7 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_r7, (char *)(MR_Word) MR_string_const("=", 1)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 1);
	MR_r6 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0_i2);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r7 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0_i2);
	}
	MR_r8 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0_i2);
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0_i9);
	}
MR_def_label(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0_i11);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_qualified_term_4_0,
		parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0_i10);
MR_def_label(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_implicitly_qualified_term_5_0,
		parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0_i10);
MR_def_label(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
MR_def_label(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module14)
	MR_init_entry1(parse_tree__prog_io_util__parse_pred_or_func_and_args_4_0);
	MR_init_label4(parse_tree__prog_io_util__parse_pred_or_func_and_args_4_0,2,5,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_pred_or_func_and_args_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r3;
	MR_r5 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_pred_or_func_and_args_5_0,
		parse_tree__prog_io_util__parse_pred_or_func_and_args_4_0_i2);
MR_def_label(parse_tree__prog_io_util__parse_pred_or_func_and_args_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_and_args_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_r6 = MR_tempr1;
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_pred_or_func_and_args_4_0_i5);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__parse_pred_or_func_and_args_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r5, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_r6, 0);
	}
	MR_np_call_localret_ent(list__append_3_1,
		parse_tree__prog_io_util__parse_pred_or_func_and_args_4_0_i6);
MR_def_label(parse_tree__prog_io_util__parse_pred_or_func_and_args_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__parse_pred_or_func_and_args_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__purity_name_2_1);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module15)
	MR_init_entry1(parse_tree__prog_io_util__parse_purity_annotation_3_0);
	MR_init_label3(parse_tree__prog_io_util__parse_purity_annotation_3_0,8,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_purity_annotation_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_purity_annotation_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_purity_annotation_3_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_purity_annotation_3_0_i3);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_purity_annotation_3_0_i3);
	}
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_1,
		parse_tree__prog_io_util__parse_purity_annotation_3_0_i8);
MR_def_label(parse_tree__prog_io_util__parse_purity_annotation_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_purity_annotation_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_io_util__parse_purity_annotation_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(parse_tree__prog_io_util__parse_purity_annotation_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__coerce_var_2_0);
MR_decl_entry(parse_tree__prog_out__builtin_type_to_string_2_1);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module16)
	MR_init_entry1(parse_tree__prog_io_util__parse_type_2_0);
	MR_init_label8(parse_tree__prog_io_util__parse_type_2_0,4,2,10,5,6,14,12,20)
	MR_init_label6(parse_tree__prog_io_util__parse_type_2_0,16,23,27,29,30,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r3 = MR_ctfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(term__coerce_var_2_0,
		parse_tree__prog_io_util__parse_type_2_0_i4);
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i6);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__builtin_type_to_string_2_1,
		parse_tree__prog_io_util__parse_type_2_0_i10);
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_higher_order_type_5_0,
		parse_tree__prog_io_util__parse_type_2_0_i14);
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tfield(3, MR_tempr1, 3) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i16);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i16);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_types_2_0,
		parse_tree__prog_io_util__parse_type_2_0_i20);
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i23);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i23);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("ill-formed type", 15);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_string_const("type", 4);
	MR_np_call_localret_ent(parse_tree__prog_io__parse_qualified_term_4_0,
		parse_tree__prog_io_util__parse_type_2_0_i27);
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_types_2_0,
		parse_tree__prog_io_util__parse_type_2_0_i30);
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_type_2_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	}
MR_def_label(parse_tree__prog_io_util__parse_type_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module17)
	MR_init_entry1(parse_tree__prog_io_util__parse_types_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_types_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(parse_tree__prog_io_util__parse_types_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module18)
	MR_init_entry1(parse_tree__prog_io_util__parse_types_2_3_0);
	MR_init_label5(parse_tree__prog_io_util__parse_types_2_3_0,18,4,3,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io_util__parse_types_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_io_util__parse_types_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_types_2_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_io_util__parse_types_2_3_0_i4);
MR_def_label(parse_tree__prog_io_util__parse_types_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_io_util__parse_types_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_type_2_0,
		parse_tree__prog_io_util__parse_types_2_3_0_i5);
MR_def_label(parse_tree__prog_io_util__parse_types_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_types_2_3_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(parse_tree__prog_io_util__parse_types_2_3_0_i18);
	}
MR_def_label(parse_tree__prog_io_util__parse_types_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module19)
	MR_init_entry1(parse_tree__prog_io_util__parse_higher_order_type_5_0);
	MR_init_label5(parse_tree__prog_io_util__parse_higher_order_type_5_0,2,13,3,19,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io_util__parse_higher_order_type_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_purity_annotation_3_0,
		parse_tree__prog_io_util__parse_higher_order_type_5_0_i2);
MR_def_label(parse_tree__prog_io_util__parse_higher_order_type_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("=", 1)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i3);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i3);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i3);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr3, (char *)(MR_Word) MR_string_const("func", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i1);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_type_2_0,
		parse_tree__prog_io_util__parse_higher_order_type_5_0_i13);
MR_def_label(parse_tree__prog_io_util__parse_higher_order_type_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_types_2_3_0,
		parse_tree__prog_io_util__parse_higher_order_type_5_0_i19);
MR_def_label(parse_tree__prog_io_util__parse_higher_order_type_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("pred", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_types_2_3_0,
		parse_tree__prog_io_util__parse_higher_order_type_5_0_i19);
MR_def_label(parse_tree__prog_io_util__parse_higher_order_type_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_higher_order_type_5_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__parse_higher_order_type_5_0,1)
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

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module20)
	MR_init_entry1(parse_tree__prog_io_util__unparse_type_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io_util__unparse_type_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_np_tailcall_ent(list__map_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__context_init_0_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module21)
	MR_init_entry1(parse_tree__prog_io_util__unparse_qualified_term_3_0);
	MR_init_label4(parse_tree__prog_io_util__unparse_qualified_term_3_0,4,5,3,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io_util__unparse_qualified_term_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__unparse_qualified_term_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_io_util__unparse_qualified_term_3_0_i4);
MR_def_label(parse_tree__prog_io_util__unparse_qualified_term_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_localcall_lab(parse_tree__prog_io_util__unparse_qualified_term_3_0,
		parse_tree__prog_io_util__unparse_qualified_term_3_0_i5);
MR_def_label(parse_tree__prog_io_util__unparse_qualified_term_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tempr4 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_tfield(0, MR_r1, 1) = MR_tempr3;
	MR_tfield(0, MR_r1, 2) = MR_tempr4;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_io_util__unparse_qualified_term_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_io_util__unparse_qualified_term_3_0_i6);
MR_def_label(parse_tree__prog_io_util__unparse_qualified_term_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__coerce_var_1_0);
MR_decl_entry(parse_tree__prog_out__builtin_type_to_string_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module22)
	MR_init_entry1(parse_tree__prog_io_util__unparse_type_2_0);
	MR_init_label8(parse_tree__prog_io_util__unparse_type_2_0,68,5,6,69,8,70,11,12)
	MR_init_label8(parse_tree__prog_io_util__unparse_type_2_0,13,73,29,30,31,72,26,27)
	MR_init_label8(parse_tree__prog_io_util__unparse_type_2_0,71,15,16,19,18,17,21,23)
	MR_init_label2(parse_tree__prog_io_util__unparse_type_2_0,22,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__unparse_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(parse_tree__prog_io_util__unparse_type_2_0_i68) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__unparse_type_2_0_i69) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__unparse_type_2_0_i70) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__unparse_type_2_0_i13));
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_io_util__unparse_type_2_0_i5);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(fn__term__coerce_var_1_0,
		parse_tree__prog_io_util__unparse_type_2_0_i6);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_io_util__unparse_type_list_2_0,
		parse_tree__prog_io_util__unparse_type_2_0_i8);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_io_util__unparse_qualified_term_3_0);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_io_util__unparse_type_2_0_i11);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_out__builtin_type_to_string_2_0,
		parse_tree__prog_io_util__unparse_type_2_0_i12);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__unparse_type_2_0_i71);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__unparse_type_2_0_i72);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__unparse_type_2_0_i73);
	}
	MR_r1 = (MR_Word) MR_string_const("prog_io_util.m", 14);
	MR_r2 = (MR_Word) MR_string_const("prog_io_util: kind annotation", 29);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_io_util__unparse_type_2_0_i29);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(fn__term__coerce_var_1_0,
		parse_tree__prog_io_util__unparse_type_2_0_i30);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__unparse_type_list_2_0,
		parse_tree__prog_io_util__unparse_type_2_0_i31);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tempr3 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_tfield(0, MR_r1, 2) = MR_tempr3;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_io_util__unparse_type_2_0_i26);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__unparse_type_list_2_0,
		parse_tree__prog_io_util__unparse_type_2_0_i27);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_io_util__unparse_type_2_0_i15);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__unparse_type_list_2_0,
		parse_tree__prog_io_util__unparse_type_2_0_i16);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__unparse_type_2_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(parse_tree__prog_io_util__unparse_type_2_0,
		parse_tree__prog_io_util__unparse_type_2_0_i19);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_GOTO_LAB(parse_tree__prog_io_util__unparse_type_2_0_i17);
	}
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__unparse_type_2_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__unparse_type_2_0_i22);
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_io_util__unparse_type_2_0_i23);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		parse_tree__prog_io_util__unparse_type_2_0_i24);
MR_def_label(parse_tree__prog_io_util__unparse_type_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module23)
	MR_init_entry1(parse_tree__prog_io_util__standard_det_2_0);
	MR_init_label8(parse_tree__prog_io_util__standard_det_2_0,3,16,5,6,7,8,9,11)
	MR_init_label3(parse_tree__prog_io_util__standard_det_2_0,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__standard_det_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 31);
MR_def_label(parse_tree__prog_io_util__standard_det_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(7,0))[(MR_Integer) MR_r3];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0))) {
		MR_GOTO_LAB(parse_tree__prog_io_util__standard_det_2_0_i5);
	}
	MR_r3 = (MR_COMMON(6,0))[(MR_Integer) MR_r3];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(parse_tree__prog_io_util__standard_det_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__standard_det_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i6) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i7) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i8) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i9) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i11) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i11) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i12) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i13) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i14) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__standard_det_2_0_i16));
MR_def_label(parse_tree__prog_io_util__standard_det_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__standard_det_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__standard_det_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__standard_det_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__standard_det_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__standard_det_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__standard_det_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__standard_det_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module24)
	MR_init_entry1(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0);
	MR_init_label8(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,4,21,6,7,8,9,10,11)
	MR_init_label7(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,12,13,14,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21);
	}
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 31);
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(10,0))[(MR_Integer) MR_r3];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0))) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i6);
	}
	MR_r3 = (MR_COMMON(6,1))[(MR_Integer) MR_r3];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i7) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i8) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i9) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i10) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i11) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i12) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i13) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i14) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i15) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i17) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0_i18));
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,9,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,9,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,9,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,9,4);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module25)
	MR_init_entry1(parse_tree__prog_io_util__disjunction_to_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__disjunction_to_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";", 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module26)
	MR_init_entry1(parse_tree__prog_io_util__convert_mode_list_3_0);
	MR_init_label4(parse_tree__prog_io_util__convert_mode_list_3_0,22,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__convert_mode_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_list_3_0_i22);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_mode_list_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_mode_3_0,
		parse_tree__prog_io_util__convert_mode_list_3_0_i4);
MR_def_label(parse_tree__prog_io_util__convert_mode_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_list_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(parse_tree__prog_io_util__convert_mode_list_3_0,
		parse_tree__prog_io_util__convert_mode_list_3_0_i6);
MR_def_label(parse_tree__prog_io_util__convert_mode_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_list_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_io_util__convert_mode_list_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;

MR_BEGIN_MODULE(parse_tree__prog_io_util_module27)
	MR_init_entry1(parse_tree__prog_io_util__convert_mode_3_0);
	MR_init_label8(parse_tree__prog_io_util__convert_mode_3_0,9,11,2,26,28,13,49,51)
	MR_init_label6(parse_tree__prog_io_util__convert_mode_3_0,53,55,30,56,58,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__convert_mode_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const(">>", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i2);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i2);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_inst_3_0,
		parse_tree__prog_io_util__convert_mode_3_0_i9);
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_inst_3_0,
		parse_tree__prog_io_util__convert_mode_3_0_i11);
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i13);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("is", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i13);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i13);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i13);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i13);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i13);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i13);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr4, (char *)(MR_Word) MR_string_const("pred", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i13);
	}
	MR_tempr5 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr5,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__standard_det_2_0,
		parse_tree__prog_io_util__convert_mode_3_0_i26);
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_mode_list_3_0,
		parse_tree__prog_io_util__convert_mode_3_0_i28);
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr7, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("is", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr4, (char *)(MR_Word) MR_string_const("=", 1)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr5 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr5, (char *)(MR_Word) MR_string_const("func", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i30);
	}
	MR_tempr6 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr6,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__standard_det_2_0,
		parse_tree__prog_io_util__convert_mode_3_0_i49);
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_mode_list_3_0,
		parse_tree__prog_io_util__convert_mode_3_0_i51);
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(parse_tree__prog_io_util__convert_mode_3_0,
		parse_tree__prog_io_util__convert_mode_3_0_i53);
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		parse_tree__prog_io_util__convert_mode_3_0_i55);
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_string_const("mode definition", 15);
	MR_np_call_localret_ent(parse_tree__prog_io__parse_qualified_term_4_0,
		parse_tree__prog_io_util__convert_mode_3_0_i56);
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_inst_list_3_0,
		parse_tree__prog_io_util__convert_mode_3_0_i58);
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_mode_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__convert_mode_3_0,1)
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


MR_BEGIN_MODULE(parse_tree__prog_io_util_module28)
	MR_init_entry1(parse_tree__prog_io_util__convert_inst_list_3_0);
	MR_init_label4(parse_tree__prog_io_util__convert_inst_list_3_0,22,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__convert_inst_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_list_3_0_i22);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_inst_list_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_inst_3_0,
		parse_tree__prog_io_util__convert_inst_list_3_0_i4);
MR_def_label(parse_tree__prog_io_util__convert_inst_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_list_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(parse_tree__prog_io_util__convert_inst_list_3_0,
		parse_tree__prog_io_util__convert_inst_list_3_0_i6);
MR_def_label(parse_tree__prog_io_util__convert_inst_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_list_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_io_util__convert_inst_list_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(parse_tree__prog_util__sym_name_get_module_name_3_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(fn__parse_tree__prog_util__unqualify_name_1_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module29)
	MR_init_entry1(parse_tree__prog_io_util__convert_inst_3_0);
	MR_init_label8(parse_tree__prog_io_util__convert_inst_3_0,7,20,22,9,41,43,45,47)
	MR_init_label8(parse_tree__prog_io_util__convert_inst_3_0,24,48,54,60,66,79,81,82)
	MR_init_label8(parse_tree__prog_io_util__convert_inst_3_0,72,83,86,87,88,90,91,85)
	MR_init_label5(parse_tree__prog_io_util__convert_inst_3_0,96,3,107,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__convert_inst_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr4;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,
		parse_tree__prog_io_util__convert_inst_3_0_i7);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_sv(4);
	MR_r4 = MR_tempr1;
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("is", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i9);
	}
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i9);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i9);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i9);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i9);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i9);
	}
	MR_tempr5 = MR_ctfield(0, MR_tempr4, 0);
	if ((strcmp((char *)MR_tempr5, (char *)(MR_Word) MR_string_const("pred", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i9);
	}
	MR_tempr6 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr6,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__standard_det_2_0,
		parse_tree__prog_io_util__convert_inst_3_0_i20);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_mode_list_3_0,
		parse_tree__prog_io_util__convert_inst_3_0_i22);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("is", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i24);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i24);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i24);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr7, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i24);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i24);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr4, (char *)(MR_Word) MR_string_const("=", 1)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i24);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i24);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i24);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i24);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i24);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i24);
	}
	MR_tempr5 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr5, (char *)(MR_Word) MR_string_const("func", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i24);
	}
	MR_tempr6 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr6,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__standard_det_2_0,
		parse_tree__prog_io_util__convert_inst_3_0_i41);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_mode_list_3_0,
		parse_tree__prog_io_util__convert_inst_3_0_i43);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_mode_3_0,
		parse_tree__prog_io_util__convert_inst_3_0_i45);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		parse_tree__prog_io_util__convert_inst_3_0_i47);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("bound", 5)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i48);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i48);
	}
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_io_util__parse_bound_inst_list_4_0);
	}
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("bound_unique", 12)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i54);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i54);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i54);
	}
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_io_util__parse_bound_inst_list_4_0);
	}
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("unique", 6)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i60);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i60);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i60);
	}
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_io_util__parse_bound_inst_list_4_0);
	}
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("mostly_unique", 13)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i66);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i66);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i66);
	}
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = (MR_Integer) 2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_io_util__parse_bound_inst_list_4_0);
	}
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("=<", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i72);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i72);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i72);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i72);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(parse_tree__prog_io_util__convert_inst_3_0,
		parse_tree__prog_io_util__convert_inst_3_0_i79);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__term__coerce_var_1_0,
		parse_tree__prog_io_util__convert_inst_3_0_i81);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		parse_tree__prog_io_util__convert_inst_3_0_i82);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_string_const("inst", 4);
	MR_np_call_localret_ent(parse_tree__prog_io__parse_qualified_term_4_0,
		parse_tree__prog_io_util__convert_inst_3_0_i83);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_io_util__convert_inst_3_0_i86);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(parse_tree__prog_util__sym_name_get_module_name_3_0,
		parse_tree__prog_io_util__convert_inst_3_0_i87);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_io_util__convert_inst_3_0_i88);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i85);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_util__unqualify_name_1_0,
		parse_tree__prog_io_util__convert_inst_3_0_i90);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_simple_builtin_inst_3_0,
		parse_tree__prog_io_util__convert_inst_3_0_i91);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i85);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i2);
	}
	}
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_inst_list_3_0,
		parse_tree__prog_io_util__convert_inst_3_0_i96);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_inst_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(term__coerce_var_2_0,
		parse_tree__prog_io_util__convert_inst_3_0_i107);
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	}
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_inst_3_0,1)
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

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
MR_decl_entry(list__sort_2_0);
MR_decl_entry(list__append_3_4);
MR_declare_entry(MR_do_redo);
MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module30)
	MR_init_entry1(parse_tree__prog_io_util__parse_bound_inst_list_4_0);
	MR_init_label7(parse_tree__prog_io_util__parse_bound_inst_list_4_0,2,3,5,10,13,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io_util__parse_bound_inst_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(";", 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0,
		parse_tree__prog_io_util__parse_bound_inst_list_4_0_i2);
MR_def_label(parse_tree__prog_io_util__parse_bound_inst_list_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_bound_inst_list_3_0,
		parse_tree__prog_io_util__parse_bound_inst_list_4_0_i3);
MR_def_label(parse_tree__prog_io_util__parse_bound_inst_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__parse_bound_inst_list_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_np_call_localret_ent(list__sort_2_0,
		parse_tree__prog_io_util__parse_bound_inst_list_4_0_i5);
MR_def_label(parse_tree__prog_io_util__parse_bound_inst_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(parse_tree__prog_io_util__parse_bound_inst_list_4_0_i9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r2 = MR_ctfield(3, MR_sv(1), 2);
	}
	MR_np_call_localret_ent(list__append_3_4,
		parse_tree__prog_io_util__parse_bound_inst_list_4_0_i10);
MR_def_label(parse_tree__prog_io_util__parse_bound_inst_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 0);
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		parse_tree__prog_io_util__parse_bound_inst_list_4_0_i13);
MR_def_label(parse_tree__prog_io_util__parse_bound_inst_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__parse_bound_inst_list_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__parse_bound_inst_list_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module31)
	MR_init_entry1(parse_tree__prog_io_util__convert_bound_inst_list_3_0);
	MR_init_label4(parse_tree__prog_io_util__convert_bound_inst_list_3_0,22,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io_util__convert_bound_inst_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_bound_inst_list_3_0_i22);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__convert_bound_inst_list_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_bound_inst_3_0,
		parse_tree__prog_io_util__convert_bound_inst_list_3_0_i4);
MR_def_label(parse_tree__prog_io_util__convert_bound_inst_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_bound_inst_list_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(parse_tree__prog_io_util__convert_bound_inst_list_3_0,
		parse_tree__prog_io_util__convert_bound_inst_list_3_0_i6);
MR_def_label(parse_tree__prog_io_util__convert_bound_inst_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_bound_inst_list_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_io_util__convert_bound_inst_list_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__parse_tree__prog_util__make_functor_cons_id_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module32)
	MR_init_entry1(parse_tree__prog_io_util__convert_bound_inst_3_0);
	MR_init_label7(parse_tree__prog_io_util__convert_bound_inst_3_0,5,7,3,8,9,11,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_io_util__convert_bound_inst_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_bound_inst_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_bound_inst_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("inst", 4);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_qualified_term_4_0,
		parse_tree__prog_io_util__convert_bound_inst_3_0_i5);
MR_def_label(parse_tree__prog_io_util__convert_bound_inst_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_bound_inst_3_0_i1);
	}
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		parse_tree__prog_io_util__convert_bound_inst_3_0_i7);
MR_def_label(parse_tree__prog_io_util__convert_bound_inst_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_inst_list_3_0,
		parse_tree__prog_io_util__convert_bound_inst_3_0_i11);
MR_def_label(parse_tree__prog_io_util__convert_bound_inst_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		parse_tree__prog_io_util__convert_bound_inst_3_0_i8);
MR_def_label(parse_tree__prog_io_util__convert_bound_inst_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_util__make_functor_cons_id_2_0,
		parse_tree__prog_io_util__convert_bound_inst_3_0_i9);
MR_def_label(parse_tree__prog_io_util__convert_bound_inst_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_inst_list_3_0,
		parse_tree__prog_io_util__convert_bound_inst_3_0_i11);
MR_def_label(parse_tree__prog_io_util__convert_bound_inst_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__convert_bound_inst_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__convert_bound_inst_3_0,1)
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


MR_BEGIN_MODULE(parse_tree__prog_io_util_module33)
	MR_init_entry1(parse_tree__prog_io_util__conjunction_to_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__conjunction_to_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module34)
	MR_init_entry1(parse_tree__prog_io_util__list_to_conjunction_4_0);
	MR_init_label3(parse_tree__prog_io_util__list_to_conjunction_4_0,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__list_to_conjunction_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__list_to_conjunction_4_0_i2);
	}
	MR_r5 = (MR_Word) MR_sp;
MR_def_label(parse_tree__prog_io_util__list_to_conjunction_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(2);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_ctfield(1, MR_r4, 0);
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0))
		continue;
	MR_r1 = MR_r3;
	break; } /* end while */
MR_def_label(parse_tree__prog_io_util__list_to_conjunction_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_tfield(0, MR_r1, 2) = MR_sv(1);
	MR_decr_sp(2);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r5))
		continue;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(parse_tree__prog_io_util__list_to_conjunction_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module35)
	MR_init_entry1(parse_tree__prog_io_util__sum_to_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__sum_to_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("+", 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module36)
	MR_init_entry1(parse_tree__prog_io_util__map_parser_3_0);
	MR_init_label7(parse_tree__prog_io_util__map_parser_3_0,4,5,10,9,7,3,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__map_parser_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__map_parser_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parse_tree__prog_io_util__map_parser_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__parse_tree__prog_io_util__map_parser_3_0_i4);
MR_def_label(parse_tree__prog_io_util__map_parser_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(parse_tree__prog_io_util__map_parser_3_0,
		parse_tree__prog_io_util__map_parser_3_0_i5);
MR_def_label(parse_tree__prog_io_util__map_parser_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__map_parser_3_0_i7);
	}
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__map_parser_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_io_util__map_parser_3_0_i10);
MR_def_label(parse_tree__prog_io_util__map_parser_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_io_util__map_parser_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_io_util__map_parser_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__map_parser_3_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_sv(1), 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_io_util__map_parser_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_proceed();
MR_def_label(parse_tree__prog_io_util__map_parser_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module37)
	MR_init_entry1(parse_tree__prog_io_util__parse_list_3_0);
	MR_init_label1(parse_tree__prog_io_util__parse_list_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__parse_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0,
		parse_tree__prog_io_util__parse_list_3_0_i2);
MR_def_label(parse_tree__prog_io_util__parse_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(parse_tree__prog_io_util__map_parser_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module38)
	MR_init_entry1(parse_tree__prog_io_util__list_term_to_term_list_2_0);
	MR_init_label4(parse_tree__prog_io_util__list_term_to_term_list_2_0,42,10,41,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_io_util__list_term_to_term_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__list_term_to_term_list_2_0_i41);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__list_term_to_term_list_2_0_i41);
	}
	MR_r4 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__list_term_to_term_list_2_0_i42);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__list_term_to_term_list_2_0_i41);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_io_util__list_term_to_term_list_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__list_term_to_term_list_2_0_i1);
	}
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__list_term_to_term_list_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__list_term_to_term_list_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(parse_tree__prog_io_util__list_term_to_term_list_2_0,
		parse_tree__prog_io_util__list_term_to_term_list_2_0_i10);
MR_def_label(parse_tree__prog_io_util__list_term_to_term_list_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_io_util__list_term_to_term_list_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_io_util__list_term_to_term_list_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_io_util__list_term_to_term_list_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module39)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__allow_constrained_inst_var_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__allow_constrained_inst_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module40)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__allow_constrained_inst_var_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__allow_constrained_inst_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module41)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__maybe1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__maybe1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___parse_tree__prog_io_util__maybe1_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module42)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__maybe1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__maybe1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___parse_tree__prog_io_util__maybe1_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module43)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__maybe1_2_0);
	MR_init_label3(__Unify___parse_tree__prog_io_util__maybe1_2_0,16,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__maybe1_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe1_2_0_i16);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe1_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe1_2_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_r1, 2) = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__prog_io_util__maybe1_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_io_util__maybe1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe1_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___parse_tree__prog_io_util__maybe1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module44)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__maybe1_2_0);
	MR_init_label5(__Compare___parse_tree__prog_io_util__maybe1_2_0,3,2,7,5,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__maybe1_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe1_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe1_2_0_i2);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_io_util__maybe1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe1_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe1_2_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
MR_def_label(__Compare___parse_tree__prog_io_util__maybe1_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe1_2_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe1_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module45)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__maybe2_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__maybe2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___parse_tree__prog_io_util__maybe2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module46)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__maybe2_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__maybe2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___parse_tree__prog_io_util__maybe2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module47)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__maybe2_3_0);
	MR_init_label4(__Unify___parse_tree__prog_io_util__maybe2_3_0,18,5,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__maybe2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 == MR_r5)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe2_3_0_i18);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe2_3_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe2_3_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_r1, 2) = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__prog_io_util__maybe2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_io_util__maybe2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe2_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___parse_tree__prog_io_util__maybe2_3_0_i10);
MR_def_label(__Unify___parse_tree__prog_io_util__maybe2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe2_3_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___parse_tree__prog_io_util__maybe2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module48)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__maybe2_3_0);
	MR_init_label7(__Compare___parse_tree__prog_io_util__maybe2_3_0,3,2,7,5,10,12,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__maybe2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 == MR_r5)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe2_3_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe2_3_0_i2);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_io_util__maybe2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe2_3_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe2_3_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
MR_def_label(__Compare___parse_tree__prog_io_util__maybe2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe2_3_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___parse_tree__prog_io_util__maybe2_3_0_i12);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe2_3_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe2_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module49)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__maybe3_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__maybe3_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___parse_tree__prog_io_util__maybe3_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module50)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__maybe3_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__maybe3_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___parse_tree__prog_io_util__maybe3_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module51)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__maybe3_4_0);
	MR_init_label5(__Unify___parse_tree__prog_io_util__maybe3_4_0,20,5,10,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__maybe3_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 == MR_r6)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe3_4_0_i20);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(4) = MR_r4;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe3_4_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe3_4_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_r1, 2) = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__prog_io_util__maybe3_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_io_util__maybe3_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe3_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___parse_tree__prog_io_util__maybe3_4_0_i10);
MR_def_label(__Unify___parse_tree__prog_io_util__maybe3_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe3_4_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___parse_tree__prog_io_util__maybe3_4_0_i12);
MR_def_label(__Unify___parse_tree__prog_io_util__maybe3_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe3_4_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___parse_tree__prog_io_util__maybe3_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module52)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__maybe3_4_0);
	MR_init_label8(__Compare___parse_tree__prog_io_util__maybe3_4_0,3,2,7,5,10,12,16,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__maybe3_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 == MR_r6)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe3_4_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe3_4_0_i2);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe3_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_io_util__maybe3_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe3_4_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe3_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
MR_def_label(__Compare___parse_tree__prog_io_util__maybe3_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe3_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe3_4_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe3_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr6 = MR_sv(1);
	MR_sv(6) = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	MR_tempr7 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr7, 2);
	MR_tempr3 = MR_ctfield(1, MR_tempr7, 1);
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr3;
	MR_tempr5 = MR_tempr7;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	MR_r3 = MR_ctfield(1, MR_tempr5, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___parse_tree__prog_io_util__maybe3_4_0_i12);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe3_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe3_4_0_i54);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___parse_tree__prog_io_util__maybe3_4_0_i16);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe3_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe3_4_0_i54);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe3_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module53)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__maybe4_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__maybe4_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___parse_tree__prog_io_util__maybe4_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module54)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__maybe4_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__maybe4_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___parse_tree__prog_io_util__maybe4_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module55)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__maybe4_5_0);
	MR_init_label6(__Unify___parse_tree__prog_io_util__maybe4_5_0,22,5,10,12,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__maybe4_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r6 == MR_r7)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe4_5_0_i22);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(4) = MR_r5;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe4_5_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe4_5_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_r1, 2) = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__prog_io_util__maybe4_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_io_util__maybe4_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe4_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 3);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___parse_tree__prog_io_util__maybe4_5_0_i10);
MR_def_label(__Unify___parse_tree__prog_io_util__maybe4_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe4_5_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___parse_tree__prog_io_util__maybe4_5_0_i12);
MR_def_label(__Unify___parse_tree__prog_io_util__maybe4_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe4_5_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___parse_tree__prog_io_util__maybe4_5_0_i14);
MR_def_label(__Unify___parse_tree__prog_io_util__maybe4_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_io_util__maybe4_5_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___parse_tree__prog_io_util__maybe4_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module56)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__maybe4_5_0);
	MR_init_label8(__Compare___parse_tree__prog_io_util__maybe4_5_0,3,2,7,5,10,12,16,20)
	MR_init_label1(__Compare___parse_tree__prog_io_util__maybe4_5_0,63)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__maybe4_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r6 == MR_r7)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe4_5_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe4_5_0_i2);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe4_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_io_util__maybe4_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe4_5_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe4_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
MR_def_label(__Compare___parse_tree__prog_io_util__maybe4_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(10);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe4_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe4_5_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(10);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe4_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr6 = MR_sv(1);
	MR_sv(9) = MR_ctfield(1, MR_tempr6, 1);
	MR_sv(8) = MR_ctfield(1, MR_tempr6, 2);
	MR_sv(7) = MR_ctfield(1, MR_tempr6, 3);
	MR_tempr7 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr7, 3);
	MR_tempr2 = MR_ctfield(1, MR_tempr7, 2);
	MR_tempr3 = MR_ctfield(1, MR_tempr7, 1);
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr3;
	MR_tempr5 = MR_tempr7;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	MR_r3 = MR_ctfield(1, MR_tempr5, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___parse_tree__prog_io_util__maybe4_5_0_i12);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe4_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe4_5_0_i63);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___parse_tree__prog_io_util__maybe4_5_0_i16);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe4_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe4_5_0_i63);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___parse_tree__prog_io_util__maybe4_5_0_i20);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe4_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_io_util__maybe4_5_0_i63);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___parse_tree__prog_io_util__maybe4_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module57)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__maybe_functor_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__maybe_functor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___parse_tree__prog_io_util__maybe2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module58)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__maybe_functor_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__maybe_functor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___parse_tree__prog_io_util__maybe2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module59)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__maybe_functor_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__maybe_functor_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(__Unify___parse_tree__prog_io_util__maybe2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module60)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__maybe_functor_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__maybe_functor_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(__Compare___parse_tree__prog_io_util__maybe2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module61)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__maybe_item_and_context_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__maybe_item_and_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___parse_tree__prog_io_util__maybe2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module62)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__maybe_item_and_context_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__maybe_item_and_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___parse_tree__prog_io_util__maybe2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module63)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__maybe_pred_or_func_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__maybe_pred_or_func_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___parse_tree__prog_io_util__maybe2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module64)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__maybe_pred_or_func_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__maybe_pred_or_func_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___parse_tree__prog_io_util__maybe2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module65)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__parser_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__parser_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module66)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__parser_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__parser_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(parse_tree__prog_io_util_module67)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__var2pvar_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__var2pvar_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
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

MR_BEGIN_MODULE(parse_tree__prog_io_util_module68)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__var2pvar_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__var2pvar_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module69)
	MR_init_entry1(__Unify___parse_tree__prog_io_util__var2tvar_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_io_util__var2tvar_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module70)
	MR_init_entry1(__Compare___parse_tree__prog_io_util__var2tvar_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_io_util__var2tvar_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_io_util_module71)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0);
	MR_init_label3(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0,36,8,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0_i2);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0_i2);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0_i8);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0_i36);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__prog_io_util_maybe_bunch_0(void)
{
	parse_tree__prog_io_util_module0();
	parse_tree__prog_io_util_module1();
	parse_tree__prog_io_util_module2();
	parse_tree__prog_io_util_module3();
	parse_tree__prog_io_util_module4();
	parse_tree__prog_io_util_module5();
	parse_tree__prog_io_util_module6();
	parse_tree__prog_io_util_module7();
	parse_tree__prog_io_util_module8();
	parse_tree__prog_io_util_module9();
	parse_tree__prog_io_util_module10();
	parse_tree__prog_io_util_module11();
	parse_tree__prog_io_util_module12();
	parse_tree__prog_io_util_module13();
	parse_tree__prog_io_util_module14();
	parse_tree__prog_io_util_module15();
	parse_tree__prog_io_util_module16();
	parse_tree__prog_io_util_module17();
	parse_tree__prog_io_util_module18();
	parse_tree__prog_io_util_module19();
	parse_tree__prog_io_util_module20();
	parse_tree__prog_io_util_module21();
	parse_tree__prog_io_util_module22();
	parse_tree__prog_io_util_module23();
	parse_tree__prog_io_util_module24();
	parse_tree__prog_io_util_module25();
	parse_tree__prog_io_util_module26();
	parse_tree__prog_io_util_module27();
	parse_tree__prog_io_util_module28();
	parse_tree__prog_io_util_module29();
	parse_tree__prog_io_util_module30();
	parse_tree__prog_io_util_module31();
	parse_tree__prog_io_util_module32();
	parse_tree__prog_io_util_module33();
	parse_tree__prog_io_util_module34();
	parse_tree__prog_io_util_module35();
	parse_tree__prog_io_util_module36();
	parse_tree__prog_io_util_module37();
	parse_tree__prog_io_util_module38();
	parse_tree__prog_io_util_module39();
}

static void mercury__parse_tree__prog_io_util_maybe_bunch_1(void)
{
	parse_tree__prog_io_util_module40();
	parse_tree__prog_io_util_module41();
	parse_tree__prog_io_util_module42();
	parse_tree__prog_io_util_module43();
	parse_tree__prog_io_util_module44();
	parse_tree__prog_io_util_module45();
	parse_tree__prog_io_util_module46();
	parse_tree__prog_io_util_module47();
	parse_tree__prog_io_util_module48();
	parse_tree__prog_io_util_module49();
	parse_tree__prog_io_util_module50();
	parse_tree__prog_io_util_module51();
	parse_tree__prog_io_util_module52();
	parse_tree__prog_io_util_module53();
	parse_tree__prog_io_util_module54();
	parse_tree__prog_io_util_module55();
	parse_tree__prog_io_util_module56();
	parse_tree__prog_io_util_module57();
	parse_tree__prog_io_util_module58();
	parse_tree__prog_io_util_module59();
	parse_tree__prog_io_util_module60();
	parse_tree__prog_io_util_module61();
	parse_tree__prog_io_util_module62();
	parse_tree__prog_io_util_module63();
	parse_tree__prog_io_util_module64();
	parse_tree__prog_io_util_module65();
	parse_tree__prog_io_util_module66();
	parse_tree__prog_io_util_module67();
	parse_tree__prog_io_util_module68();
	parse_tree__prog_io_util_module69();
	parse_tree__prog_io_util_module70();
	parse_tree__prog_io_util_module71();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__prog_io_util__init(void);
void mercury__parse_tree__prog_io_util__init_type_tables(void);
void mercury__parse_tree__prog_io_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__prog_io_util__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__prog_io_util__init_complexity_procs(void);
#endif

void mercury__parse_tree__prog_io_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__prog_io_util_maybe_bunch_0();
	mercury__parse_tree__prog_io_util_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_var2tvar_0,
		parse_tree__prog_io_util__var2tvar_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_var2pvar_0,
		parse_tree__prog_io_util__var2pvar_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_parser_1,
		parse_tree__prog_io_util__parser_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_pred_or_func_1,
		parse_tree__prog_io_util__maybe_pred_or_func_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_item_and_context_0,
		parse_tree__prog_io_util__maybe_item_and_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_functor_1,
		parse_tree__prog_io_util__maybe_functor_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_functor_0,
		parse_tree__prog_io_util__maybe_functor_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe4_5,
		parse_tree__prog_io_util__maybe4_5_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe4_4,
		parse_tree__prog_io_util__maybe4_4_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe3_4,
		parse_tree__prog_io_util__maybe3_4_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe3_3,
		parse_tree__prog_io_util__maybe3_3_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe2_3,
		parse_tree__prog_io_util__maybe2_3_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe2_2,
		parse_tree__prog_io_util__maybe2_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe1_2,
		parse_tree__prog_io_util__maybe1_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe1_1,
		parse_tree__prog_io_util__maybe1_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_io_util__type_ctor_info_allow_constrained_inst_var_0,
		parse_tree__prog_io_util__allow_constrained_inst_var_0_0);
	mercury__parse_tree__prog_io_util__init_debugger();
}

void mercury__parse_tree__prog_io_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_var2tvar_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_var2pvar_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_parser_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_pred_or_func_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_item_and_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_functor_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe_functor_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe4_5);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe4_4);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe3_4);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe3_3);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe2_3);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe2_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe1_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_maybe1_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_io_util__type_ctor_info_allow_constrained_inst_var_0);
	}
}


void mercury__parse_tree__prog_io_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__prog_io_util__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__prog_io_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
