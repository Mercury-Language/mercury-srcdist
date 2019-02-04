/*
** Automatically generated from `add_clause.m'
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
INIT mercury__hlds__make_hlds__add_clause__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "hlds.make_hlds.add_clause.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "hlds.make_hlds.add_clause.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "hlds.make_hlds.add_clause.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "hlds.make_hlds.add_clause.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "hlds.make_hlds.add_clause.c"
#line 44 "hlds.make_hlds.add_clause.c"
#include "hlds.make_hlds.add_clause.mh"

#line 47 "hlds.make_hlds.add_clause.c"
#line 48 "hlds.make_hlds.add_clause.c"
#ifndef HLDS__MAKE_HLDS__ADD_CLAUSE_DECL_GUARD
#define HLDS__MAKE_HLDS__ADD_CLAUSE_DECL_GUARD

#line 52 "hlds.make_hlds.add_clause.c"
#line 53 "hlds.make_hlds.add_clause.c"

#endif
#line 56 "hlds.make_hlds.add_clause.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_hlds__add_clause__type_ctor_info_mode_annotations_0;
MR_decl_label8(hlds__make_hlds__add_clause__add_clause_transform_18_0, 2,3,4,5,6,7,9,10)
MR_decl_label7(hlds__make_hlds__add_clause__add_clause_transform_18_0, 12,13,14,15,16,17,18)
MR_decl_label8(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0, 2,4,5,3,6,7,8,9)
MR_decl_label8(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0, 10,11,15,17,18,19,20,22)
MR_decl_label5(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0, 23,14,24,13,25)
MR_decl_label3(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0, 4,5,3)
MR_decl_label1(hlds__make_hlds__add_clause__extract_trace_io_var_4_0, 2)
MR_decl_label3(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0, 2,3,4)
MR_decl_label4(hlds__make_hlds__add_clause__get_disj_15_0, 13,4,2,6)
MR_decl_label8(hlds__make_hlds__add_clause__get_mode_annotations_4_0, 12,13,4,5,15,21,19,18)
MR_decl_label5(hlds__make_hlds__add_clause__get_mode_annotations_4_0, 42,26,27,28,3)
MR_decl_label7(hlds__make_hlds__add_clause__get_rev_conj_16_0, 16,4,2,6,7,8,9)
MR_decl_label7(hlds__make_hlds__add_clause__get_rev_par_conj_16_0, 16,4,2,6,7,8,9)
MR_decl_label3(hlds__make_hlds__add_clause__invalid_goal_10_0, 2,3,4)
MR_decl_label8(hlds__make_hlds__add_clause__module_add_clause_14_0, 4,2,6,7,10,11,12,13)
MR_decl_label8(hlds__make_hlds__add_clause__module_add_clause_14_0, 15,18,22,23,24,20,14,29)
MR_decl_label8(hlds__make_hlds__add_clause__module_add_clause_14_0, 30,27,32,34,35,36,37,38)
MR_decl_label8(hlds__make_hlds__add_clause__module_add_clause_14_0, 110,40,41,42,43,44,45,46)
MR_decl_label8(hlds__make_hlds__add_clause__module_add_clause_14_0, 47,48,39,52,53,54,55,50)
MR_decl_label8(hlds__make_hlds__add_clause__module_add_clause_14_0, 56,59,57,63,64,60,61,70)
MR_decl_label8(hlds__make_hlds__add_clause__module_add_clause_14_0, 68,72,73,74,75,76,77,78)
MR_decl_label8(hlds__make_hlds__add_clause__module_add_clause_14_0, 81,83,84,85,86,89,90,91)
MR_decl_label7(hlds__make_hlds__add_clause__module_add_clause_14_0, 88,92,93,94,95,97,98)
MR_decl_label3(hlds__make_hlds__add_clause__report_dcg_field_error_6_0, 3,4,5)
MR_decl_label4(hlds__make_hlds__add_clause__report_svar_unify_error_5_0, 2,3,4,5)
MR_decl_label8(hlds__make_hlds__add_clause__select_applicable_modes_14_0, 2,9,6,16,18,14,13,20)
MR_decl_label8(hlds__make_hlds__add_clause__select_applicable_modes_14_0, 5,22,24,25,26,27,28,29)
MR_decl_label4(hlds__make_hlds__add_clause__select_applicable_modes_14_0, 32,31,34,35)
MR_decl_label8(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0, 2,10,16,19,20,21,18,3)
MR_decl_label2(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0, 23,24)
MR_decl_label8(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0, 2,10,11,13,15,16,9,17)
MR_decl_label6(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0, 18,20,22,23,3,24)
MR_decl_label2(hlds__make_hlds__add_clause__transform_goal_14_0, 2,3)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 4,6,7,5,9,10,11,12)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 13,14,15,16,18,19,20,21)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 22,24,25,26,27,28,29,30)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 31,32,33,34,35,37,38,39)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 40,41,43,45,46,47,48,49)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 50,51,52,53,54,55,57,58)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 59,56,60,61,62,63,64,65)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 66,67,68,69,70,72,73,74)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 75,77,78,79,80,81,82,83)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 84,85,86,87,88,89,90,91)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 92,93,94,95,96,97,98,99)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 100,101,103,104,111,112,105,132)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 133,114,138,137,140,141,142,135)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 144,145,146,147,151,150,153,154)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 148,155,156,157,158,159,160,161)
MR_decl_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0, 166,174,167,183,184,176,185,186)
MR_decl_label3(hlds__make_hlds__add_clause__transform_goal_2_15_0, 187,188,189)
MR_decl_label8(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0, 10)
MR_decl_label8(hlds__make_hlds__add_clause__undeclared_mode_error_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(hlds__make_hlds__add_clause__undeclared_mode_error_8_0, 10,12,15,16,17,14,18,19)
MR_decl_label2(hlds__make_hlds__add_clause__undeclared_mode_error_8_0, 20,21)
MR_decl_label1(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__515__1_1_0, 1)
MR_decl_label1(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0, 2)
MR_decl_label3(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0, 6,21,1)
MR_decl_label8(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0, 36,7,17,40,13,22,6,27)
MR_decl_label2(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0, 46,26)
MR_decl_static(hlds__make_hlds__add_clause__extract_trace_io_var_4_0)
MR_decl_static(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0)
MR_decl_static(hlds__make_hlds__add_clause__report_svar_unify_error_5_0)
MR_decl_static(hlds__make_hlds__add_clause__invalid_goal_10_0)
MR_decl_static(fn__hlds__make_hlds__add_clause__this_file_0_0)
MR_decl_static(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0)
MR_decl_static(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0)
MR_def_extern_entry(hlds__make_hlds__add_clause__transform_goal_14_0)
MR_decl_static(hlds__make_hlds__add_clause__transform_goal_2_15_0)
MR_decl_static(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0)
MR_decl_static(hlds__make_hlds__add_clause__get_rev_conj_16_0)
MR_decl_static(hlds__make_hlds__add_clause__get_rev_par_conj_16_0)
MR_decl_static(hlds__make_hlds__add_clause__get_disj_15_0)
MR_decl_static(hlds__make_hlds__add_clause__add_clause_transform_18_0)
MR_def_extern_entry(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0)
MR_decl_static(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0)
MR_decl_static(hlds__make_hlds__add_clause__undeclared_mode_error_8_0)
MR_decl_static(hlds__make_hlds__add_clause__get_mode_annotations_4_0)
MR_decl_static(hlds__make_hlds__add_clause__select_applicable_modes_14_0)
MR_def_extern_entry(hlds__make_hlds__add_clause__module_add_clause_14_0)
MR_decl_static(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0)
MR_decl_static(hlds__make_hlds__add_clause__report_dcg_field_error_6_0)
MR_decl_static(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0)
MR_decl_static(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0)
MR_decl_static(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__515__1_1_0)

static const struct mercury_type_0 mercury_common_0[6] =
{
{
MR_string_const("!:", 2)
},
{
MR_string_const("!.", 2)
},
{
MR_string_const(":=", 2)
},
{
MR_string_const("Attempted to introduce a predicate", 34)
},
{
MR_string_const("for a promise with an identical", 31)
},
{
MR_string_const("name to an existing predicate", 29)
},
};

static const struct mercury_type_1 mercury_common_1[33] =
{
{
3,
MR_string_const("Error:", 6)
},
{
3,
MR_string_const("cannot appear as a unification argument.", 40)
},
{
3,
MR_string_const("You probably meant", 18)
},
{
3,
MR_string_const("or", 2)
},
{
2,
MR_string_const(".", 1)
},
{
3,
MR_string_const("Error: expected \140Field =^ field1 ^ ... ^ fieldN\'", 48)
},
{
3,
MR_string_const("or \140^ field1 ^ ... ^ fieldN := Field\'", 37)
},
{
3,
MR_string_const("in DCG field access goal.", 25)
},
{
3,
MR_string_const(":- mode", 7)
},
{
3,
MR_string_const("In clause for", 13)
},
{
2,
MR_string_const(":", 1)
},
{
3,
MR_string_const("error: mode annotation specifies undeclared mode", 48)
},
{
3,
MR_string_const("(There are no declared modes for this", 37)
},
{
2,
MR_string_const(".)", 2)
},
{
3,
MR_string_const("The declared mode for this", 26)
},
{
3,
MR_string_const("is:", 3)
},
{
3,
MR_string_const("The declared modes for this", 27)
},
{
3,
MR_string_const("are the following:", 18)
},
{
3,
MR_string_const("syntax error: some but not all arguments", 40)
},
{
3,
MR_string_const("have mode annotations.", 22)
},
{
3,
MR_string_const("Error: clause for automatically generated", 41)
},
{
3,
MR_string_const("field access", 12)
},
{
3,
MR_string_const("of the constructor a different name.", 36)
},
{
3,
MR_string_const("to a field update, give the field", 33)
},
{
3,
MR_string_const("function, for example to check the input", 40)
},
{
3,
MR_string_const("To supply your own definition for a field access", 48)
},
{
3,
MR_string_const("are automatically generated by the compiler.", 44)
},
{
3,
MR_string_const("Clauses for field access functions", 34)
},
{
3,
MR_string_const("Error: clause for builtin.", 26)
},
{
3,
MR_string_const("In DCG field", 12)
},
{
3,
MR_string_const("goal:", 5)
},
{
3,
MR_string_const("error:", 6)
},
{
3,
MR_string_const("at term", 7)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
static const struct mercury_type_2 mercury_common_2[37] =
{
{
{
MR_TAG_COMMON(3,1,4),
MR_tbmkword(0, 0)
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
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
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
MR_TAG_COMMON(3,1,7),
MR_TAG_COMMON(1,2,6)
}
},
{
{
MR_TAG_COMMON(3,1,6),
MR_TAG_COMMON(1,2,7)
}
},
{
{
MR_TAG_COMMON(3,1,5),
MR_TAG_COMMON(1,2,8)
}
},
{
{
MR_TAG_COMMON(0,5,0),
MR_tbmkword(0, 0)
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
MR_CTOR0_ADDR(hlds__hlds_pred, proc_id)
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
MR_TAG_COMMON(3,1,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,4),
MR_TAG_COMMON(1,2,6)
}
},
{
{
MR_TAG_COMMON(3,1,13),
MR_TAG_COMMON(1,2,6)
}
},
{
{
MR_TAG_COMMON(3,11,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,15),
MR_TAG_COMMON(1,2,18)
}
},
{
{
MR_TAG_COMMON(3,11,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,17),
MR_TAG_COMMON(1,2,18)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
}
},
{
{
MR_TAG_COMMON(3,1,19),
MR_TAG_COMMON(1,2,6)
}
},
{
{
MR_TAG_COMMON(3,1,18),
MR_TAG_COMMON(1,2,24)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,2,25)
}
},
{
{
MR_TAG_COMMON(3,1,10),
MR_TAG_COMMON(1,2,26)
}
},
{
{
MR_TAG_COMMON(3,1,22),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,23),
MR_TAG_COMMON(1,2,28)
}
},
{
{
MR_TAG_COMMON(3,1,24),
MR_TAG_COMMON(1,2,29)
}
},
{
{
MR_TAG_COMMON(3,1,25),
MR_TAG_COMMON(1,2,30)
}
},
{
{
MR_TAG_COMMON(3,1,26),
MR_TAG_COMMON(1,2,31)
}
},
{
{
MR_TAG_COMMON(3,1,27),
MR_TAG_COMMON(1,2,32)
}
},
{
{
MR_TAG_COMMON(2,5,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,28),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,5,2),
MR_tbmkword(0, 0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const struct mercury_type_3 mercury_common_3[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_COMMON(2,2)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,2,4)
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

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_field_access_type_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(hlds__hlds_data, field_access_type),
MR_COMMON(2,1),
MR_COMMON(3,0),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
};

static const struct mercury_type_5 mercury_common_5[3] =
{
{
MR_TAG_COMMON(1,2,9)
},
{
MR_TAG_COMMON(1,2,33)
},
{
MR_TAG_COMMON(1,2,35)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
2,
MR_tbmkword(0, 0)
},
{
1,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__transform_goal_2_15_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_clause__transform_goal_2_15_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(term, context),
MR_COMMON(2,1),
MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var),
MR_CTOR0_ADDR(hlds__hlds_goal, trace_mutable_var_hlds),
MR_COMMON(2,12),
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_COMMON(2,14)
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
MR_COMMON(9,0),
MR_ENTRY_AP(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__515__1_1_0),
0
},
};

static const struct mercury_type_11 mercury_common_11[2] =
{
{
{
9,
1
}
},
{
{
9,
-1
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__undeclared_mode_error_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_12 mercury_common_12[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_clause__undeclared_mode_error_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_INT_CTOR_ADDR,
MR_COMMON(2,23)
}
},
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0 = {
	"empty",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1 = {
	"none",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__add_clause__field_types_mode_annotations_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2 = {
	"modes",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__add_clause__field_types_mode_annotations_0_2,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3 = {
	"mixed",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0[] = {
	&mercury_data_hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0,
	&mercury_data_hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1,
	&mercury_data_hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1[] = {
	&mercury_data_hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2

};

const MR_DuPtagLayout mercury_data_hlds__make_hlds__add_clause__du_ptag_ordered_mode_annotations_0[] = {
	{ 3, MR_SECTAG_LOCAL,
	mercury_data_hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0[] = {
	&mercury_data_hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0,
	&mercury_data_hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3,
	&mercury_data_hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2,
	&mercury_data_hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1
};

const MR_Integer mercury_data_hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0[] = {
	0,
	3,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__add_clause__type_ctor_info_mode_annotations_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0)),
	"hlds.make_hlds.add_clause",
	"mode_annotations",
	{ (void *)mercury_data_hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0 },
	{ (void *)mercury_data_hlds__make_hlds__add_clause__du_ptag_ordered_mode_annotations_0 },
	4,
	4,
	mercury_data_hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.add_clause",
"hlds.make_hlds.add_clause",
"report_dcg_field_error",
6,
0
},
"hlds.make_hlds.add_clause",
"add_clause.m",
1047,
"d1;c17;t;c2;d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__transform_goal_2_15_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.add_clause",
"hlds.make_hlds.add_clause",
"extract_trace_mutable_var",
7,
0
},
"hlds.make_hlds.add_clause",
"add_clause.m",
684,
"d11;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_1 = {
{
MR_FUNCTION,
"hlds.make_hlds.add_clause",
"hlds.make_hlds.add_clause",
"lambda_add_clause_m_515",
2,
0
},
"hlds.make_hlds.add_clause",
"add_clause.m",
515,
"d1;c33;d2;c3;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__undeclared_mode_error_8_0_1 = {
{
MR_FUNCTION,
"hlds.make_hlds.add_clause",
"hlds.make_hlds.add_clause",
"mode_decl_for_pred_info_to_pieces",
3,
0
},
"hlds.make_hlds.add_clause",
"add_clause.m",
397,
"d1;c41;d2;c2;d2;c18;"
};

MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module0)
	MR_init_entry1(hlds__make_hlds__add_clause__extract_trace_io_var_4_0);
	MR_init_label1(hlds__make_hlds__add_clause__extract_trace_io_var_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__extract_trace_io_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		hlds__make_hlds__add_clause__extract_trace_io_var_4_0_i2);
MR_def_label(hlds__make_hlds__add_clause__extract_trace_io_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("trace_get_io_state", 18);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_string_const("trace_set_io_state", 18);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tempr9 = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 2) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tfield(0, MR_tempr6, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr6, 2) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr7, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr7, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr7, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr7;
	MR_tfield(0, MR_r1, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr4, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr8, 1) = MR_tempr9;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__state_var__dot_9_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module1)
	MR_init_entry1(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0);
	MR_init_label3(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__dot_9_0,
		hlds__make_hlds__add_clause__convert_dot_state_vars_9_0_i4);
MR_def_label(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0,
		hlds__make_hlds__add_clause__convert_dot_state_vars_9_0_i5);
MR_def_label(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__lookup_name_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module2)
	MR_init_entry1(hlds__make_hlds__add_clause__report_svar_unify_error_5_0);
	MR_init_label4(hlds__make_hlds__add_clause__report_svar_unify_error_5_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__report_svar_unify_error_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__add_clause__report_svar_unify_error_5_0_i2);
MR_def_label(hlds__make_hlds__add_clause__report_svar_unify_error_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_r1 = (MR_Word) MR_string_const("!", 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__report_svar_unify_error_5_0_i3);
MR_def_label(hlds__make_hlds__add_clause__report_svar_unify_error_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_r1 = (MR_Word) MR_string_const("!.", 2);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__report_svar_unify_error_5_0_i4);
MR_def_label(hlds__make_hlds__add_clause__report_svar_unify_error_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_r1 = (MR_Word) MR_string_const("!:", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__report_svar_unify_error_5_0_i5);
MR_def_label(hlds__make_hlds__add_clause__report_svar_unify_error_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_pred_id_0_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_proc_id_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module3)
	MR_init_entry1(hlds__make_hlds__add_clause__invalid_goal_10_0);
	MR_init_label3(hlds__make_hlds__add_clause__invalid_goal_10_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__invalid_goal_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0,
		hlds__make_hlds__add_clause__invalid_goal_10_0_i2);
MR_def_label(hlds__make_hlds__add_clause__invalid_goal_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		hlds__make_hlds__add_clause__invalid_goal_10_0_i3);
MR_def_label(hlds__make_hlds__add_clause__invalid_goal_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		hlds__make_hlds__add_clause__invalid_goal_10_0_i4);
MR_def_label(hlds__make_hlds__add_clause__invalid_goal_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 5) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module4)
	MR_init_entry1(fn__hlds__make_hlds__add_clause__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_clause__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("add_clause.m", 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_21_0);
MR_decl_entry(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_supplied_contexts_17_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(hlds__make_hlds__field_access__expand_set_field_function_call_21_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module5)
	MR_init_entry1(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0);
	MR_init_label8(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,2,10,11,13,15,16,9,17)
	MR_init_label6(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,18,20,22,23,3,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i2);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_r13 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r14 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i3);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i3);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r8 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r11 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r12 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_ctfield(1, MR_sv(1), 0);
	MR_r6 = MR_ctfield(1, MR_tempr1, 0);
	MR_r7 = MR_ctfield(1, MR_tempr2, 0);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_21_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i10);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr3, 2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_r2 = MR_sv(3);
	MR_sv(2) = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_supplied_contexts_17_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i16);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__this_file_0_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i13);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("transform_dcg_record_syntax_2", 29);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i15);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_supplied_contexts_17_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i16);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r2);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r8 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r11 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r12 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_ctfield(1, MR_sv(1), 0);
	MR_r6 = MR_ctfield(1, MR_r13, 0);
	MR_r7 = MR_ctfield(1, MR_r14, 0);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__field_access__expand_set_field_function_call_21_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i17);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tempr5 = MR_r2;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(0, MR_tempr5, 0);
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(0, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tfield(2, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i18);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr3, 2) = MR_ctfield(1, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_sv(5) = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_supplied_contexts_17_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i23);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__this_file_0_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i20);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("transform_dcg_record_syntax_2", 29);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i22);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_supplied_contexts_17_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i23);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_r2);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__this_file_0_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i24);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("do_transform_dcg_record_syntax", 30);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_init_2_0);
MR_decl_entry(hlds__make_hlds__field_access__parse_field_list_2_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0);
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module6)
	MR_init_entry1(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0);
	MR_init_label8(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,2,10,16,19,20,21,18,3)
	MR_init_label2(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,23,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i2);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	if ((strcmp((char *)MR_sv(1), (char *)(MR_Word) MR_string_const(":=", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i10);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_tempr5 = MR_ctfield(0, MR_tempr4, 0);
	if ((strcmp((char *)MR_tempr5, (char *)(MR_Word) MR_string_const("^", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Integer) 1;
	MR_r1 = MR_ctfield(1, MR_tempr4, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__parse_field_list_2_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i16);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Integer) 0;
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_sv(5) = MR_ctfield(1, MR_sv(2), 0);
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(hlds__make_hlds__field_access__parse_field_list_2_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i16);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i18);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("^", 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__invalid_goal_10_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i19);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i20);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__add_clause__report_dcg_field_error_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i21);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_decr_sp_and_return(12);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(11);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("^", 1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__invalid_goal_10_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i23);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i24);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r6 = MR_sv(6);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_set_context_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module7)
	MR_init_entry1(hlds__make_hlds__add_clause__transform_goal_14_0);
	MR_init_label2(hlds__make_hlds__add_clause__transform_goal_14_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_clause__transform_goal_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_2_15_0,
		hlds__make_hlds__add_clause__transform_goal_14_0_i2);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		hlds__make_hlds__add_clause__transform_goal_14_0_i3);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(hlds__make_hlds__state_var__prepare_for_next_conjunct_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(hlds__hlds_goal__par_conj_list_to_goal_3_0);
MR_decl_entry(hlds__make_hlds__state_var__finish_disjunction_5_0);
MR_decl_entry(hlds__hlds_goal__disj_list_to_goal_3_0);
MR_decl_entry(parse_tree__prog_util__substitute_vars_3_0);
MR_decl_entry(hlds__make_hlds__state_var__prepare_for_local_state_vars_5_0);
MR_decl_entry(hlds__make_hlds__state_var__finish_local_state_vars_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0;
MR_decl_entry(list__map4_6_0);
MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__parse_tree__prog_util__goal_list_to_conj_2_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(hlds__make_hlds__state_var__finish_equivalence_3_0);
MR_decl_entry(hlds__make_hlds__state_var__finish_negation_3_0);
MR_decl_entry(hlds__make_hlds__state_var__prepare_for_if_then_else_goal_5_0);
MR_decl_entry(hlds__make_hlds__state_var__finish_if_then_else_goal_condition_5_0);
MR_decl_entry(hlds__make_hlds__state_var__finish_if_then_else_goal_then_goal_4_0);
MR_decl_entry(hlds__make_hlds__state_var__finish_if_then_else_12_0);
MR_decl_entry(fn__hlds__make_hlds__state_var__expand_bang_state_var_args_1_0);
MR_decl_entry(hlds__make_hlds__state_var__prepare_for_call_2_0);
MR_decl_entry(term__apply_substitution_to_list_3_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_0);
MR_decl_entry(hlds__make_hlds__state_var__finish_call_4_0);
MR_decl_entry(hlds__hlds_goal__generic_call_id_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);
MR_decl_entry(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);
MR_decl_entry(term__apply_substitution_3_0);
MR_decl_entry(hlds__make_hlds__superhomogeneous__unravel_unification_18_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module8)
	MR_init_entry1(hlds__make_hlds__add_clause__transform_goal_2_15_0);
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,4,6,7,5,9,10,11,12)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,13,14,15,16,18,19,20,21)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,22,24,25,26,27,28,29,30)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,31,32,33,34,35,37,38,39)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,40,41,43,45,46,47,48,49)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,50,51,52,53,54,55,57,58)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,59,56,60,61,62,63,64,65)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,66,67,68,69,70,72,73,74)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,75,77,78,79,80,81,82,83)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,84,85,86,87,88,89,90,91)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,92,93,94,95,96,97,98,99)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,100,101,103,104,111,112,105,132)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,133,114,138,137,140,141,142,135)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,144,145,146,147,151,150,153,154)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,148,155,156,157,158,159,160,161)
	MR_init_label8(hlds__make_hlds__add_clause__transform_goal_2_15_0,166,174,167,183,184,176,185,186)
	MR_init_label3(hlds__make_hlds__add_clause__transform_goal_2_15_0,187,188,189)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__transform_goal_2_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i4) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i12) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i18) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i24));
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i5);
	}
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i6);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,11);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i7);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_next_conjunct_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i11);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i9);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,11);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i10);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_next_conjunct_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i11);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(18);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_rev_conj_16_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i13);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_r7;
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r8 = MR_r6;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_rev_conj_16_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i14);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i15);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i16);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i30);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_ctfield(2, MR_r1, 1);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i19);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_r7;
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r8 = MR_r6;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i20);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i21);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i22);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__par_conj_list_to_goal_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i30);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i25) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i31) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i35) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i37) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i43) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i45) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i48) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i50) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i52) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i54) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i70) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i72) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i77) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i81) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i92) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i103) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i166));
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(3) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	MR_r9 = MR_r8;
	MR_r8 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_disj_15_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i26);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r9 = MR_r6;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_disj_15_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i27);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_disjunction_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i28);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i29);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__disj_list_to_goal_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i30);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(18);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__substitute_vars_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i32);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i33);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(7) = MR_r7;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i34);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(18);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r9 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r10 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr5 = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r9 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r11 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_r1, 1) = MR_tempr4;
	MR_succip_word = MR_sv(18);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i4) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i12) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i18) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i24));
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__substitute_vars_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i38);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_local_state_vars_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i39);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i40);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_local_state_vars_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i41);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(1);
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i69);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r9 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r10 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr5 = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r9 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r11 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_r1, 1) = MR_tempr4;
	MR_succip_word = MR_sv(18);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i4) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i12) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i18) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i24));
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i46);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(7) = MR_r7;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i47);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(18);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r11 = MR_r8;
	MR_r8 = MR_r5;
	MR_r5 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r10 = MR_r7;
	MR_r7 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r9 = MR_r6;
	MR_r6 = MR_ctfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i49);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_decr_sp_and_return(18);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r11 = MR_r8;
	MR_r8 = MR_r5;
	MR_r5 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r10 = MR_r7;
	MR_r7 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r9 = MR_r6;
	MR_r6 = MR_ctfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i51);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_decr_sp_and_return(18);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r11 = MR_r8;
	MR_r8 = MR_r5;
	MR_r5 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r10 = MR_r7;
	MR_r7 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r9 = MR_r6;
	MR_r6 = MR_ctfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i53);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_decr_sp_and_return(18);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_ctfield(3, MR_r1, 1);
	MR_sv(9) = MR_ctfield(3, MR_r1, 2);
	MR_sv(10) = MR_ctfield(3, MR_r1, 3);
	MR_sv(11) = MR_ctfield(3, MR_r1, 5);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, trace_mutable_var_hlds);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r4 = MR_sv(17);
	MR_r5 = MR_r4;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_ctfield(3, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(list__map4_6_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i55);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i57);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = MR_r1;
	MR_sv(16) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i56);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_sv(15) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i58);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(16), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(16), 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__extract_trace_io_var_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i59);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(12) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_sv(17);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r3;
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i60);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i61);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_util__goal_list_to_conj_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i62);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_util__substitute_vars_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i63);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_local_state_vars_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i64);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i65);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(12);
	MR_sv(12) = MR_r6;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i66);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(2));
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i67);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_local_state_vars_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i68);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(16);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(1);
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i69);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(18);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r9 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r10 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr5 = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r11 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_r1, 1) = MR_tempr4;
	MR_succip_word = MR_sv(18);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i4) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i12) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i18) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i24));
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(8) = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i73);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i74);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i75);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_r2);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_equivalence_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i80);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_r8;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i78);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r6;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i79);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_negation_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i80);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(18);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_ctfield(3, MR_r1, 2);
	MR_sv(9) = MR_ctfield(3, MR_r1, 3);
	MR_sv(10) = MR_ctfield(3, MR_r1, 4);
	MR_sv(11) = MR_ctfield(3, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__substitute_vars_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i82);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_util__substitute_vars_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i83);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_if_then_else_goal_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i84);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i85);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(9) = MR_r7;
	MR_sv(13) = MR_r3;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_if_then_else_goal_condition_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i86);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i87);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_r4;
	MR_sv(13) = MR_r5;
	MR_sv(14) = MR_r7;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_if_then_else_goal_then_goal_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i88);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(11) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i89);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (((MR_Integer) MR_sv(4) + (MR_Integer) MR_sv(5)) + (MR_Integer) MR_r2);
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r3;
	MR_sv(14) = MR_r6;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i90);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_if_then_else_12_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r6 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(18);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__expand_bang_state_var_args_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i93);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_call_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i94);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(term__apply_substitution_to_list_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i95);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i96);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i97);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i98);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i99);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i100);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr5 = MR_sv(8);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tempr6 = MR_sv(3);
	MR_tfield(2, MR_tempr2, 1) = MR_tempr6;
	MR_tfield(2, MR_tempr2, 2) = MR_sv(6);
	MR_tfield(2, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_tempr1;
	MR_r1 = MR_tempr6;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i101);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_call_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i189);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_ctfield(3, MR_r1, 1);
	MR_sv(9) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__expand_bang_state_var_args_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i104);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i105);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(8), 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("\\=", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i105);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i105);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i105);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i105);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_call_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i111);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_r7 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r8 = MR_sv(7);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__transform_goal_2_15_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i112);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_call_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i189);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_ctfield(0, MR_sv(8), 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const(":=", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr4, (char *)(MR_Word) MR_string_const("^", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr5 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr6 = MR_ctfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr6 = MR_ctfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr6,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr7 = MR_ctfield(0, MR_tempr4, 0);
	if ((strcmp((char *)MR_tempr7, (char *)(MR_Word) MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr7 = MR_ctfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr7,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_tempr7 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr7,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i114);
	}
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr5, 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_tempr4;
	MR_sv(12) = MR_ctfield(0, MR_tempr6, 2);
	MR_sv(13) = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_call_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i132);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr5 = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_tempr6 = MR_sv(12);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tempr7 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 3) = MR_sv(9);
	MR_r7 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr7;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r8 = MR_sv(7);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__transform_goal_2_15_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i133);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_call_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i189);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i135);
	}
	MR_r2 = MR_ctfield(0, MR_sv(8), 0);
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const(":=", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i138);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i137);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("=^", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i135);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_call_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i140);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(term__apply_substitution_to_list_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i141);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i142);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_call_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i189);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_call_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i144);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(term__apply_substitution_to_list_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i145);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i146);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i147);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i148);
	}
	MR_r2 = MR_ctfield(0, MR_sv(8), 0);
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i151);
	}
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i150);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("call", 4)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i148);
	}
	MR_sv(3) = MR_r1;
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i153);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i148);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(9);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_r1, 3) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_sv(6) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 3) = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__generic_call_id_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i154);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i157);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i155);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i156);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_sv(8);
	MR_tfield(1, MR_tempr1, 5) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_sv(7), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(7), 0) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_sv(6) = MR_tempr1;
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i158);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i159);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i160);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(7);
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(4);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(13);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i161);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_call_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i189);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_ctfield(3, MR_r1, 3);
	MR_sv(8) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_sv(6) = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i167);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i167);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr3, (char *)(MR_Word) MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i167);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i167);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i167);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i167);
	}
	MR_tempr4 = MR_r4;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_ctfield(1, MR_tempr3, 0);
	MR_r4 = MR_r8;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__report_svar_unify_error_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i174);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i184);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i176);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(8);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i176);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i176);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i176);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i176);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i176);
	}
	MR_tempr4 = MR_r4;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	MR_r4 = MR_r8;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__report_svar_unify_error_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i183);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i184);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(18);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(7) = MR_r8;
	MR_r1 = MR_r7;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_call_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i185);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(term__apply_substitution_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i186);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(term__apply_substitution_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i187);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(6);
	MR_r11 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__unravel_unification_18_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i188);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_call_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i189);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module9)
	MR_init_entry1(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0);
	MR_init_label8(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,2,3,4,5,6,7,8,9)
	MR_init_label1(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__substitute_vars_3_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i2);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_util__substitute_vars_3_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i3);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i4);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r6 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r7 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i5);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i6);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_util__substitute_vars_3_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i7);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i8);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r4;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i9);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i10);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(7);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module10)
	MR_init_entry1(hlds__make_hlds__add_clause__get_rev_conj_16_0);
	MR_init_label7(hlds__make_hlds__add_clause__get_rev_conj_16_0,16,4,2,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__get_rev_conj_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__add_clause__get_rev_conj_16_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_rev_conj_16_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_rev_conj_16_0,
		hlds__make_hlds__add_clause__get_rev_conj_16_0_i4);
MR_def_label(hlds__make_hlds__add_clause__get_rev_conj_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_r7;
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r8 = MR_r6;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__get_rev_conj_16_0_i16);
MR_def_label(hlds__make_hlds__add_clause__get_rev_conj_16_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__get_rev_conj_16_0_i6);
MR_def_label(hlds__make_hlds__add_clause__get_rev_conj_16_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r2);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__make_hlds__add_clause__get_rev_conj_16_0_i7);
MR_def_label(hlds__make_hlds__add_clause__get_rev_conj_16_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__make_hlds__add_clause__get_rev_conj_16_0_i8);
MR_def_label(hlds__make_hlds__add_clause__get_rev_conj_16_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__get_rev_conj_16_0_i9);
MR_def_label(hlds__make_hlds__add_clause__get_rev_conj_16_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_par_conj_list_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module11)
	MR_init_entry1(hlds__make_hlds__add_clause__get_rev_par_conj_16_0);
	MR_init_label7(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,16,4,2,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__get_rev_par_conj_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_rev_par_conj_16_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,
		hlds__make_hlds__add_clause__get_rev_par_conj_16_0_i4);
MR_def_label(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_r7;
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r8 = MR_r6;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__get_rev_par_conj_16_0_i16);
MR_def_label(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__get_rev_par_conj_16_0_i6);
MR_def_label(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r2);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_par_conj_list_2_0,
		hlds__make_hlds__add_clause__get_rev_par_conj_16_0_i7);
MR_def_label(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__make_hlds__add_clause__get_rev_par_conj_16_0_i8);
MR_def_label(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__get_rev_par_conj_16_0_i9);
MR_def_label(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module12)
	MR_init_entry1(hlds__make_hlds__add_clause__get_disj_15_0);
	MR_init_label4(hlds__make_hlds__add_clause__get_disj_15_0,13,4,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__get_disj_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__add_clause__get_disj_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_disj_15_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_disj_15_0,
		hlds__make_hlds__add_clause__get_disj_15_0_i4);
MR_def_label(hlds__make_hlds__add_clause__get_disj_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r9 = MR_r6;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__get_disj_15_0_i13);
MR_def_label(hlds__make_hlds__add_clause__get_disj_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__get_disj_15_0_i6);
MR_def_label(hlds__make_hlds__add_clause__get_disj_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r6;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r2);
	MR_r6 = MR_r7;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);
MR_decl_entry(hlds__make_hlds__state_var__prepare_for_head_1_0);
MR_decl_entry(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0);
MR_decl_entry(hlds__make_hlds__state_var__prepare_for_body_5_0);
MR_decl_entry(hlds__goal_util__attach_features_to_all_goals_3_0);
MR_decl_entry(hlds__make_hlds__state_var__finish_goals_5_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_get_var_types_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_init_1_0);
MR_decl_entry(hlds__quantification__implicitly_quantify_clause_body_10_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_set_var_types_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module13)
	MR_init_entry1(hlds__make_hlds__add_clause__add_clause_transform_18_0);
	MR_init_label8(hlds__make_hlds__add_clause__add_clause_transform_18_0,2,3,4,5,6,7,9,10)
	MR_init_label7(hlds__make_hlds__add_clause__add_clause_transform_18_0,12,13,14,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__add_clause_transform_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(12) = MR_r12;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i2);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_head_1_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i3);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(term__apply_substitution_to_list_3_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i4);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i5);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(12) = MR_r4;
	MR_sv(13) = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i6);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__add_clause_transform_18_0_i7);
	}
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_sv(10);
	MR_sv(6) = MR_sv(11);
	MR_r1 = MR_sv(9);
	MR_sv(7) = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_body_5_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i12);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i9);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(2) = MR_r3;
	MR_sv(7) = MR_r7;
	MR_sv(9) = MR_r6;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_np_call_localret_ent(hlds__goal_util__attach_features_to_all_goals_3_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i10);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_body_5_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i12);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i13);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r7;
	MR_sv(3) = MR_r5;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r6;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_goals_5_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i14);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_var_types_2_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i15);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_init_1_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i16);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_clause_body_10_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i17);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_var_types_3_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i18);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_clauses__clause_list_is_empty_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
MR_decl_entry(varset__create_name_var_map_2_0);
MR_decl_entry(hlds__make_hlds__qual_info__update_qual_info_6_0);
MR_decl_entry(varset__merge_subst_4_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_get_tvarset_2_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_0);
MR_decl_entry(hlds__hlds_clauses__add_clause_3_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_any_order_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
MR_decl_entry(fn__list__filter_map_2_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(fn__list__delete_elems_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module14)
	MR_init_entry1(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0);
	MR_init_label8(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,2,4,5,3,6,7,8,9)
	MR_init_label8(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,10,11,15,17,18,19,20,22)
	MR_init_label5(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,23,14,24,13,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_clause__clauses_info_add_clause_22_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r11;
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(17) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(18) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(19) = MR_tempr1;
	MR_sv(20) = MR_r12;
	MR_sv(21) = MR_r13;
	MR_sv(22) = MR_r14;
	MR_r1 = MR_sv(16);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_list_is_empty_1_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i2);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i4);
	}
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r3 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_r5 = MR_sv(21);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i3);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(varset__create_name_var_map_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i5);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r3 = MR_sv(12);
	MR_r5 = MR_sv(21);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__update_qual_info_6_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i6);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(varset__merge_subst_4_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i7);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(10);
	MR_r10 = MR_sv(20);
	MR_r11 = MR_sv(2);
	MR_r12 = MR_sv(22);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__add_clause_transform_18_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i8);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_tvarset_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i9);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i10);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i11);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i13);
	}
	if (MR_INT_NE(MR_sv(18),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(16);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__add_clause_3_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i23);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_any_order_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i17);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,13);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i18);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i19);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__delete_elems_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i20);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i22);
	}
	MR_sv(1) = MR_sv(16);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i14);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(16);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__add_clause_3_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i23);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_var_types_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i24);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(18);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(10);
	MR_decr_sp_and_return(23);
	}
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_22_0_i25);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r4 = MR_sv(19);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(10);
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__mode_errors__mode_decl_to_string_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module15)
	MR_init_entry1(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0);
	MR_init_label1(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,1,8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,
		fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0_i2);
MR_def_label(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
MR_decl_entry(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
MR_decl_entry(fn__varset__coerce_1_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_mode_subdecl_to_string_6_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_all_procids_1_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__parse_tree__error_util__component_list_to_line_pieces_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module16)
	MR_init_entry1(hlds__make_hlds__add_clause__undeclared_mode_error_8_0);
	MR_init_label8(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,2,3,4,5,6,7,8,9)
	MR_init_label8(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,10,12,15,16,17,14,18,19)
	MR_init_label2(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__undeclared_mode_error_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r5;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i2);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i3);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i4);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i5);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__coerce_1_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i6);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_mode_subdecl_to_string_6_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i7);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,16);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,10);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,15);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i8);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i9);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i10);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,17);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i14);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,19);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,14);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i15);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,2,20);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i16);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i17);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,21);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0);
	MR_tfield(0, MR_tempr4, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr4, 3) = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,22);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i18);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i19);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,2,20);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i20);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i21);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
MR_decl_entry(fn__term__coerce_1_0);
MR_decl_entry(parse_tree__prog_io_util__convert_mode_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module17)
	MR_init_entry1(hlds__make_hlds__add_clause__get_mode_annotations_4_0);
	MR_init_label8(hlds__make_hlds__add_clause__get_mode_annotations_4_0,12,13,4,5,15,21,19,18)
	MR_init_label5(hlds__make_hlds__add_clause__get_mode_annotations_4_0,42,26,27,28,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__get_mode_annotations_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i5);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i5);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr3, (char *)(MR_Word) MR_string_const("::", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i5);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i5);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i5);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(fn__term__coerce_1_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i12);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__prog_io_util__convert_mode_3_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i13);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i4);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i15);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i18);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i19);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i21);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i28);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i28);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r4),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i42);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i42);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i28);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i26);
	}
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i28);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i27);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i28);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_pragma_goal_type_1_0);
MR_decl_entry(fn__hlds__hlds_out__pred_id_to_string_2_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0);
MR_decl_entry(parse_tree__module_qual__qualify_clause_mode_list_7_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_set_mq_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(hlds__make_hlds__add_pragma__get_procedure_matching_declmodes_with_renaming_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module18)
	MR_init_entry1(hlds__make_hlds__add_clause__select_applicable_modes_14_0);
	MR_init_label8(hlds__make_hlds__add_clause__select_applicable_modes_14_0,2,9,6,16,18,14,13,20)
	MR_init_label8(hlds__make_hlds__add_clause__select_applicable_modes_14_0,5,22,24,25,26,27,28,29)
	MR_init_label4(hlds__make_hlds__add_clause__select_applicable_modes_14_0,32,31,34,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__select_applicable_modes_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i2);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_14_0_i5);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_14_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_pragma_goal_type_1_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i9);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_14_0_i14);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i18);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_14_0_i13);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_pragma_goal_type_1_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i16);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_14_0_i14);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i18);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_out__pred_id_to_string_2_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i20);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,27);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(9);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i35);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_14_0_i22);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_14_0_i27);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i24);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__module_qual__qualify_clause_mode_list_7_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i25);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_mq_info_3_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i26);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i28);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i29);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__get_procedure_matching_declmodes_with_renaming_4_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i32);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_14_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(10);
	}
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(9);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i34);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		hlds__make_hlds__add_clause__select_applicable_modes_14_0_i35);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_14_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(string__format_3_0);
MR_decl_entry(fn__term__term_list_to_var_list_1_0);
MR_decl_entry(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);
MR_decl_entry(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0);
MR_decl_entry(hlds__pred_table__predicate_table_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(fn__hlds__hlds_clauses__num_clauses_in_clauses_rep_1_0);
MR_decl_entry(io__format_4_0);
MR_decl_entry(parse_tree__prog_out__write_pred_or_func_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_1);
MR_decl_entry(parse_tree__prog_out__write_sym_name_and_arity_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_import_status_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__add_marker_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_decl_entry(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0);
MR_decl_entry(hlds__hlds_pred__is_field_access_function_name_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_builtin_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_clauses_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_goal_type_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_update_goal_type_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_typevarset_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_arg_types_5_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__pred_table__predicate_table_set_preds_3_0);
MR_decl_entry(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0);
MR_decl_entry(hlds__make_hlds__make_hlds_warn__warn_overlap_5_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module19)
	MR_init_entry1(hlds__make_hlds__add_clause__module_add_clause_14_0);
	MR_init_label8(hlds__make_hlds__add_clause__module_add_clause_14_0,4,2,6,7,10,11,12,13)
	MR_init_label8(hlds__make_hlds__add_clause__module_add_clause_14_0,15,18,22,23,24,20,14,29)
	MR_init_label8(hlds__make_hlds__add_clause__module_add_clause_14_0,30,27,32,34,35,36,37,38)
	MR_init_label8(hlds__make_hlds__add_clause__module_add_clause_14_0,110,40,41,42,43,44,45,46)
	MR_init_label8(hlds__make_hlds__add_clause__module_add_clause_14_0,47,48,39,52,53,54,55,50)
	MR_init_label8(hlds__make_hlds__add_clause__module_add_clause_14_0,56,59,57,63,64,60,61,70)
	MR_init_label8(hlds__make_hlds__add_clause__module_add_clause_14_0,68,72,73,74,75,76,77,78)
	MR_init_label8(hlds__make_hlds__add_clause__module_add_clause_14_0,81,83,84,85,86,89,90,91)
	MR_init_label7(hlds__make_hlds__add_clause__module_add_clause_14_0,88,92,93,94,95,97,98)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_clause__module_add_clause_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(14) = MR_r9;
	MR_sv(15) = MR_r10;
	MR_sv(16) = MR_r11;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i4);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i6);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(5);
	MR_tempr5 = MR_sv(6);
	MR_tempr6 = MR_sv(7);
	MR_tempr7 = MR_sv(8);
	MR_tempr8 = MR_sv(14);
	MR_tempr9 = MR_sv(15);
	MR_tempr10 = MR_sv(16);
	MR_r1 = MR_tempr3;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i7);
	}
	MR_sv(9) = (MR_Integer) -1;
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__expand_bang_state_var_args_1_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i10);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__expand_bang_state_var_args_1_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i10);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i11);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i12);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(9));
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i13);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(12);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i15);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i14);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(13) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i18);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i14);
	}
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i20);
	}
	MR_sv(11) = MR_sv(13);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i22);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(2,0,5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(2,0,4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,0,3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("%s %s %s (%s).\n", 15);
	}
	MR_np_call_localret_ent(string__format_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i23);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__this_file_0_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i24);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i34);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_sv(13);
	MR_r1 = MR_sv(14);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i34);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i27);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__term__term_list_to_var_list_1_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i29);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(17);
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i30);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i34);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r8 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tempr2 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(7);
	MR_r9 = (MR_Word) MR_string_const("clause", 6);
	MR_r10 = MR_sv(14);
	MR_r11 = MR_sv(16);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i32);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(16) = MR_r3;
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i35);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i36);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i37);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i38);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i40);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i39);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i41);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__num_clauses_in_clauses_rep_1_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i42);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%% Processing clause %d for ", 28);
	}
	MR_np_call_localret_ent(io__format_4_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i43);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__write_pred_or_func_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i44);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" \140", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i45);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i46);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(9));
	}
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i47);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_and_arity_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i48);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'...\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i110);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i50);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_import_status_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i52);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i53);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 18;
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i54);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i55);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(16);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i56);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(16);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i57);
	}
	MR_r3 = MR_ctfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i59);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_decr_sp_and_return(20);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i61);
	}
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(16) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i63);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__is_field_access_function_name_5_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i64);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i60);
	}
	if ((MR_sv(4) != MR_r2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i60);
	}
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i60);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,21);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,20);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,34);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(16);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(16);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(16) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_builtin_1_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i70);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i68);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,36);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(16);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_sv(16);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i72);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i73);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i74);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(10) = MR_r6;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(11);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(16);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__select_applicable_modes_14_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i75);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r13 = MR_r4;
	MR_r4 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r12 = MR_r3;
	MR_r3 = MR_sv(9);
	MR_r14 = MR_r5;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(12);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(4);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__clauses_info_add_clause_22_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i76);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r5;
	MR_sv(9) = MR_r7;
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r6;
	MR_sv(14) = MR_r8;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i77);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i78);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_goal_type_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i81);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_update_goal_type_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i81);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_typevarset_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i83);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i84);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_arg_types_5_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i85);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i86);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i88);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i89);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i90);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i91);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(11);
	MR_r3 = MR_sv(13);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i92);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(11);
	MR_r3 = MR_sv(13);
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i92);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_set_preds_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i93);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i94);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_14_0_i95);
	}
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(14);
	MR_decr_sp_and_return(20);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(12);
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i97);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_overlap_5_0,
		hlds__make_hlds__add_clause__module_add_clause_14_0_i98);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_14_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module20)
	MR_init_entry1(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0);
	MR_init_label3(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0_i2);
MR_def_label(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("get_", 4);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0_i3);
MR_def_label(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("set_", 4);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0_i4);
MR_def_label(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr9 = MR_sv(3);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr9;
	MR_tempr10 = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr5, 2) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr6, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr6, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr6, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr7, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr6, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr6, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr6, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr8, 1) = MR_tempr10;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr9;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_term_to_string_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module21)
	MR_init_entry1(hlds__make_hlds__add_clause__report_dcg_field_error_6_0);
	MR_init_label3(hlds__make_hlds__add_clause__report_dcg_field_error_6_0,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__report_dcg_field_error_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__report_dcg_field_error_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = (MR_Word) MR_string_const("extraction", 10);
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(fn__varset__coerce_1_0,
		hlds__make_hlds__add_clause__report_dcg_field_error_6_0_i4);
MR_def_label(hlds__make_hlds__add_clause__report_dcg_field_error_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = (MR_Word) MR_string_const("update", 6);
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(fn__varset__coerce_1_0,
		hlds__make_hlds__add_clause__report_dcg_field_error_6_0_i4);
MR_def_label(hlds__make_hlds__add_clause__report_dcg_field_error_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_to_string_3_0,
		hlds__make_hlds__add_clause__report_dcg_field_error_6_0_i5);
MR_def_label(hlds__make_hlds__add_clause__report_dcg_field_error_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,2,16);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,32);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,31);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,30);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,29);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module22)
	MR_init_entry1(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0);
	MR_init_label3(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0,6,21,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0_i21);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module23)
	MR_init_entry1(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0);
	MR_init_label8(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,36,7,17,40,13,22,6,27)
	MR_init_label2(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,46,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i40);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i6);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i7);
	}
	MR_tempr2 = MR_sv(2);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i36);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i36);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i36);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i36);
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i46);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i26);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i27);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i36);
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module24)
	MR_init_entry1(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__515__1_1_0);
	MR_init_label1(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__515__1_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__515__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__515__1_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__515__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__add_clause_maybe_bunch_0(void)
{
	hlds__make_hlds__add_clause_module0();
	hlds__make_hlds__add_clause_module1();
	hlds__make_hlds__add_clause_module2();
	hlds__make_hlds__add_clause_module3();
	hlds__make_hlds__add_clause_module4();
	hlds__make_hlds__add_clause_module5();
	hlds__make_hlds__add_clause_module6();
	hlds__make_hlds__add_clause_module7();
	hlds__make_hlds__add_clause_module8();
	hlds__make_hlds__add_clause_module9();
	hlds__make_hlds__add_clause_module10();
	hlds__make_hlds__add_clause_module11();
	hlds__make_hlds__add_clause_module12();
	hlds__make_hlds__add_clause_module13();
	hlds__make_hlds__add_clause_module14();
	hlds__make_hlds__add_clause_module15();
	hlds__make_hlds__add_clause_module16();
	hlds__make_hlds__add_clause_module17();
	hlds__make_hlds__add_clause_module18();
	hlds__make_hlds__add_clause_module19();
	hlds__make_hlds__add_clause_module20();
	hlds__make_hlds__add_clause_module21();
	hlds__make_hlds__add_clause_module22();
	hlds__make_hlds__add_clause_module23();
	hlds__make_hlds__add_clause_module24();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__add_clause__init(void);
void mercury__hlds__make_hlds__add_clause__init_type_tables(void);
void mercury__hlds__make_hlds__add_clause__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__add_clause__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__add_clause__init_complexity_procs(void);
#endif

void mercury__hlds__make_hlds__add_clause__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__add_clause_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__add_clause__type_ctor_info_mode_annotations_0,
		hlds__make_hlds__add_clause__mode_annotations_0_0);
	mercury__hlds__make_hlds__add_clause__init_debugger();
}

void mercury__hlds__make_hlds__add_clause__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__add_clause__type_ctor_info_mode_annotations_0);
	}
}


void mercury__hlds__make_hlds__add_clause__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__add_clause__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__add_clause__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
