/*
** Automatically generated from `add_clause.m'
** by the Mercury compiler,
** version rotd-2009-10-23, configured for i686-pc-linux-gnu.
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
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "hlds.make_hlds.add_clause.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "hlds.make_hlds.add_clause.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "hlds.make_hlds.add_clause.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 39 "hlds.make_hlds.add_clause.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "hlds.make_hlds.add_clause.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "hlds.make_hlds.add_clause.c"
#line 48 "hlds.make_hlds.add_clause.c"
#include "hlds.make_hlds.add_clause.mh"

#line 51 "hlds.make_hlds.add_clause.c"
#line 52 "hlds.make_hlds.add_clause.c"
#ifndef HLDS__MAKE_HLDS__ADD_CLAUSE_DECL_GUARD
#define HLDS__MAKE_HLDS__ADD_CLAUSE_DECL_GUARD

#line 56 "hlds.make_hlds.add_clause.c"
#line 57 "hlds.make_hlds.add_clause.c"

#endif
#line 60 "hlds.make_hlds.add_clause.c"

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
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_hlds__add_clause__type_ctor_info_mode_annotations_0;
MR_decl_label10(hlds__make_hlds__add_clause__add_clause_transform_18_0, 3,4,5,6,7,8,11,13,15,16)
MR_decl_label5(hlds__make_hlds__add_clause__add_clause_transform_18_0, 19,20,21,22,23)
MR_decl_label10(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0, 2,4,5,3,6,7,8,9,10,11)
MR_decl_label10(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0, 15,18,21,22,24,25,27,30,14,31)
MR_decl_label3(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0, 32,13,34)
MR_decl_label3(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0, 14,4,5)
MR_decl_label1(hlds__make_hlds__add_clause__extract_trace_io_var_4_0, 2)
MR_decl_label3(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0, 2,4,6)
MR_decl_label4(hlds__make_hlds__add_clause__get_disj_15_0, 15,4,2,6)
MR_decl_label10(hlds__make_hlds__add_clause__get_mode_annotations_4_0, 95,12,13,4,5,16,20,34,24,51)
MR_decl_label3(hlds__make_hlds__add_clause__get_mode_annotations_4_0, 26,28,36)
MR_decl_label7(hlds__make_hlds__add_clause__get_rev_conj_16_0, 16,4,2,6,7,8,9)
MR_decl_label7(hlds__make_hlds__add_clause__get_rev_par_conj_16_0, 16,4,2,6,7,8,9)
MR_decl_label3(hlds__make_hlds__add_clause__invalid_goal_10_0, 2,3,4)
MR_decl_label9(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0, 6,5,13,16,3,21,22,27,30)
MR_decl_label3(hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0, 2,5,8)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 4,2,7,8,11,12,14,15,17,20)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 24,25,26,27,28,29,30,31,32,22)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 16,37,38,35,41,43,44,45,46,47)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 48,150,50,51,52,53,54,55,56,57)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 58,59,60,62,49,66,67,68,69,64)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 70,76,77,73,74,101,99,111,112,113)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 114,115,116,117,120,122,123,124,125,128)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 129,130,127,131,132,133,134,137,138,72)
MR_decl_label1(hlds__make_hlds__add_clause__module_add_clause_15_0, 142)
MR_decl_label4(hlds__make_hlds__add_clause__report_svar_unify_error_5_0, 2,4,8,11)
MR_decl_label10(hlds__make_hlds__add_clause__select_applicable_modes_15_0, 2,3,5,8,6,52,13,33,34,36)
MR_decl_label8(hlds__make_hlds__add_clause__select_applicable_modes_15_0, 37,38,39,40,41,44,43,48)
MR_decl_label10(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0, 2,10,9,16,17,20,21,22,19,3)
MR_decl_label2(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0, 25,26)
MR_decl_label10(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0, 2,10,12,22,24,25,9,26,29,40)
MR_decl_label4(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0, 42,43,3,44)
MR_decl_label2(hlds__make_hlds__add_clause__transform_goal_14_0, 2,3)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 358,307,310,201,203,206,207,163,164,165)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 166,167,234,235,236,237,238,362,3,10)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 17,19,20,18,24,25,29,30,31,33)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 35,36,28,38,40,42,43,44,46,23)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 47,48,52,53,54,56,58,59,51,61)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 63,65,66,67,22,70,73,69,75,77)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 78,85,89,79,109,122,91,127,126,129)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 130,131,124,133,134,135,137,141,140,143)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 146,138,147,148,152,153,154,156,158,169)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 170,171,172,173,174,175,176,177,178,183)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 184,185,186,187,189,190,191,192,199,208)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 209,210,211,212,213,214,215,216,217,218)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 221,228,229,231,233,240,241,245,246,250)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 251,255,257,259,261,262,264,266,268,269)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 270,271,272,277,281,283,285,287,282,292)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 293,294,295,296,297,298,299,300,303,312)
MR_decl_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0, 314,318,317,332,333,334,342,335,351,352)
MR_decl_label4(hlds__make_hlds__add_clause__transform_goal_2_15_0, 344,353,354,355)
MR_decl_label3(hlds__make_hlds__add_clause__transform_orelse_goals_14_0, 15,4,6)
MR_decl_label9(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0, 2,3,4,5,6,7,8,10,11)
MR_decl_label10(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0, 2,3,8,9,13,14,15,18,31,32)
MR_decl_label7(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0, 35,39,40,41,46,47,50)
MR_decl_label9(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0, 2,3,8,9,13,17,16,30,35)
MR_decl_label10(hlds__make_hlds__add_clause__undeclared_mode_error_8_0, 2,3,4,5,6,8,21,22,23,25)
MR_decl_label8(hlds__make_hlds__add_clause__undeclared_mode_error_8_0, 50,53,54,41,73,74,77,78)
MR_decl_label4(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0, 18,5,3,1)
MR_decl_label1(fn__hlds__make_hlds__add_clause__dcg_field_error_context_pieces_1_0, 3)
MR_decl_label1(fn__hlds__make_hlds__add_clause__exception_functor_3_0, 2)
MR_decl_label1(fn__hlds__make_hlds__add_clause__magic_exception_result_sym_name_0_0, 2)
MR_decl_label1(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0, 3)
MR_decl_label3(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0, 7,15,1)
MR_decl_label10(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0, 51,43,40,55,14,21,23,31,75,27)
MR_decl_static(hlds__make_hlds__add_clause__extract_trace_io_var_4_0)
MR_decl_static(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0)
MR_decl_static(hlds__make_hlds__add_clause__report_svar_unify_error_5_0)
MR_decl_static(fn__hlds__make_hlds__add_clause__dcg_field_error_context_pieces_1_0)
MR_decl_static(hlds__make_hlds__add_clause__invalid_goal_10_0)
MR_decl_static(fn__hlds__make_hlds__add_clause__this_file_0_0)
MR_decl_static(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0)
MR_decl_static(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0)
MR_decl_static(fn__hlds__make_hlds__add_clause__exception_functor_3_0)
MR_decl_static(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0)
MR_decl_static(hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0)
MR_decl_static(fn__hlds__make_hlds__add_clause__magic_exception_result_sym_name_0_0)
MR_def_extern_entry(hlds__make_hlds__add_clause__transform_goal_14_0)
MR_decl_static(hlds__make_hlds__add_clause__transform_goal_2_15_0)
MR_decl_static(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0)
MR_decl_static(hlds__make_hlds__add_clause__get_rev_conj_16_0)
MR_decl_static(hlds__make_hlds__add_clause__get_rev_par_conj_16_0)
MR_decl_static(hlds__make_hlds__add_clause__get_disj_15_0)
MR_decl_static(hlds__make_hlds__add_clause__transform_orelse_goals_14_0)
MR_decl_static(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0)
MR_decl_static(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0)
MR_decl_static(hlds__make_hlds__add_clause__add_clause_transform_18_0)
MR_def_extern_entry(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0)
MR_decl_static(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0)
MR_decl_static(hlds__make_hlds__add_clause__undeclared_mode_error_8_0)
MR_decl_static(hlds__make_hlds__add_clause__get_mode_annotations_4_0)
MR_decl_static(hlds__make_hlds__add_clause__select_applicable_modes_15_0)
MR_def_extern_entry(hlds__make_hlds__add_clause__module_add_clause_15_0)
MR_decl_static(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0)
MR_decl_static(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0)
MR_decl_static(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0)
MR_decl_static(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0)

static const struct mercury_type_0 mercury_common_0[4] =
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
MR_string_const("{}", 2)
},
};

static const struct mercury_type_1 mercury_common_1[35] =
{
{
4,
MR_string_const("Error:", 6)
},
{
4,
MR_string_const("cannot appear as a unification argument.", 40)
},
{
4,
MR_string_const("You probably meant", 18)
},
{
4,
MR_string_const("or", 2)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("In DCG field", 12)
},
{
4,
MR_string_const("extraction", 10)
},
{
4,
MR_string_const("goal:", 5)
},
{
4,
MR_string_const("update", 6)
},
{
4,
MR_string_const("in DCG field access goal.", 25)
},
{
4,
MR_string_const("or \140^ field1 ^ ... ^ fieldN := Field\'", 37)
},
{
4,
MR_string_const("Error: expected \140Field =^ field1 ^ ... ^ fieldN\'", 48)
},
{
4,
MR_string_const("Error: a \140try\' goal with an \140io\' parameter", 42)
},
{
4,
MR_string_const("cannot have an else part.", 25)
},
{
4,
MR_string_const(":- mode", 7)
},
{
4,
MR_string_const("In clause for", 13)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("error: mode annotation specifies undeclared mode", 48)
},
{
4,
MR_string_const("(There are no declared modes for this", 37)
},
{
3,
MR_string_const(".)", 2)
},
{
4,
MR_string_const("The declared mode for this", 26)
},
{
4,
MR_string_const("is:", 3)
},
{
4,
MR_string_const("The declared modes for this", 27)
},
{
4,
MR_string_const("are the following:", 18)
},
{
4,
MR_string_const("syntax error: some but not all arguments", 40)
},
{
4,
MR_string_const("have mode annotations.", 22)
},
{
4,
MR_string_const("Error: clause for automatically generated", 41)
},
{
4,
MR_string_const("field access", 12)
},
{
4,
MR_string_const("of the constructor a different name.", 36)
},
{
4,
MR_string_const("to a field update, give the field", 33)
},
{
4,
MR_string_const("function, for example to check the input", 40)
},
{
4,
MR_string_const("To supply your own definition for a field access", 48)
},
{
4,
MR_string_const("are automatically generated by the compiler.", 44)
},
{
4,
MR_string_const("Clauses for field access functions", 34)
},
{
4,
MR_string_const("Error: clause for builtin.", 26)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
static const struct mercury_type_2 mercury_common_2[42] =
{
{
{
MR_TAG_COMMON(3,1,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,7),
MR_TAG_COMMON(1,2,1)
}
},
{
{
MR_TAG_COMMON(3,1,6),
MR_TAG_COMMON(1,2,2)
}
},
{
{
MR_TAG_COMMON(3,1,5),
MR_TAG_COMMON(1,2,3)
}
},
{
{
MR_TAG_COMMON(3,1,8),
MR_TAG_COMMON(1,2,2)
}
},
{
{
MR_TAG_COMMON(3,1,5),
MR_TAG_COMMON(1,2,5)
}
},
{
{
MR_TAG_COMMON(3,1,9),
MR_TAG_COMMON(1,2,1)
}
},
{
{
MR_TAG_COMMON(3,1,10),
MR_TAG_COMMON(1,2,7)
}
},
{
{
MR_TAG_COMMON(3,1,11),
MR_TAG_COMMON(1,2,8)
}
},
{
{
MR_TAG_COMMON(0,3,0),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,1,13),
MR_TAG_COMMON(1,2,1)
}
},
{
{
MR_TAG_COMMON(3,1,12),
MR_TAG_COMMON(1,2,15)
}
},
{
{
MR_TAG_COMMON(0,3,1),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,1,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,4),
MR_TAG_COMMON(1,2,1)
}
},
{
{
MR_TAG_COMMON(3,1,19),
MR_TAG_COMMON(1,2,1)
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
MR_TAG_COMMON(3,1,21),
MR_TAG_COMMON(1,2,23)
}
},
{
{
MR_TAG_COMMON(3,10,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,23),
MR_TAG_COMMON(1,2,23)
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
MR_TAG_COMMON(3,1,25),
MR_TAG_COMMON(1,2,1)
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
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,2,30)
}
},
{
{
MR_TAG_COMMON(3,1,16),
MR_TAG_COMMON(1,2,31)
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
MR_TAG_COMMON(3,1,29),
MR_TAG_COMMON(1,2,33)
}
},
{
{
MR_TAG_COMMON(3,1,30),
MR_TAG_COMMON(1,2,34)
}
},
{
{
MR_TAG_COMMON(3,1,31),
MR_TAG_COMMON(1,2,35)
}
},
{
{
MR_TAG_COMMON(3,1,32),
MR_TAG_COMMON(1,2,36)
}
},
{
{
MR_TAG_COMMON(3,1,33),
MR_TAG_COMMON(1,2,37)
}
},
{
{
MR_TAG_COMMON(2,3,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,34),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,3),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
MR_TAG_COMMON(1,2,9)
},
{
MR_TAG_COMMON(1,2,16)
},
{
MR_TAG_COMMON(1,2,38)
},
{
MR_TAG_COMMON(1,2,40)
},
};

static const struct mercury_type_4 mercury_common_4[2] =
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

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const struct mercury_type_5 mercury_common_5[2] =
{
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
mercury_data__closure_layout__hlds__make_hlds__add_clause__transform_goal_2_15_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_clause__transform_goal_2_15_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(term, context),
MR_COMMON(2,13),
MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var),
MR_CTOR0_ADDR(hlds__hlds_goal, trace_mutable_var_hlds),
MR_COMMON(2,14),
MR_COMMON(5,0),
MR_COMMON(5,0)
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_COMMON(2,19)
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_COMMON(8,0),
MR_ENTRY_AP(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0),
0
},
};

static const struct mercury_type_10 mercury_common_10[2] =
{
{
{
10,
1
}
},
{
{
10,
-1
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__undeclared_mode_error_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_11 mercury_common_11[1] =
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
MR_COMMON(2,28)
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
393,
"d1;c41;d2;c2;d2;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_1 = {
{
MR_FUNCTION,
"hlds.make_hlds.add_clause",
"hlds.make_hlds.add_clause",
"lambda_add_clause_m_511",
2,
0
},
"hlds.make_hlds.add_clause",
"add_clause.m",
511,
"d1;c35;d2;c3;d1;c5;"
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
801,
"d12;c17;"
};


MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module0)
	MR_init_entry1(hlds__make_hlds__add_clause__extract_trace_io_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__extract_trace_io_var_4_0);
	MR_init_label1(hlds__make_hlds__add_clause__extract_trace_io_var_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extract_trace_io_var'/4 mode 0 */
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr10 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("trace_get_io_state", 18);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_string_const("trace_set_io_state", 18);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tempr11 = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 2) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tfield(0, MR_tempr6, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr6, 2) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr7, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr7, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr7, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr8, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr4, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr9;
	MR_tfield(0, MR_tempr9, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr9, 1) = MR_tempr11;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__state_var__svar_dot_9_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module1)
	MR_init_entry1(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__convert_dot_state_vars_9_0);
	MR_init_label3(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_dot_state_vars'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_proceed();
MR_def_label(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_dot_9_0,
		hlds__make_hlds__add_clause__convert_dot_state_vars_9_0_i4);
MR_def_label(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
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
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__lookup_name_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module2)
	MR_init_entry1(hlds__make_hlds__add_clause__report_svar_unify_error_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__report_svar_unify_error_5_0);
	MR_init_label4(hlds__make_hlds__add_clause__report_svar_unify_error_5_0,2,4,8,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_svar_unify_error'/5 mode 0 */
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
		hlds__make_hlds__add_clause__report_svar_unify_error_5_0_i4);
MR_def_label(hlds__make_hlds__add_clause__report_svar_unify_error_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_r1 = (MR_Word) MR_string_const("!.", 2);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__report_svar_unify_error_5_0_i8);
MR_def_label(hlds__make_hlds__add_clause__report_svar_unify_error_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_r1 = (MR_Word) MR_string_const("!:", 2);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__report_svar_unify_error_5_0_i11);
MR_def_label(hlds__make_hlds__add_clause__report_svar_unify_error_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
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
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
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
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module3)
	MR_init_entry1(fn__hlds__make_hlds__add_clause__dcg_field_error_context_pieces_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_clause__dcg_field_error_context_pieces_1_0);
	MR_init_label1(fn__hlds__make_hlds__add_clause__dcg_field_error_context_pieces_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dcg_field_error_context_pieces'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_clause__dcg_field_error_context_pieces_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_clause__dcg_field_error_context_pieces_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_proceed();
MR_def_label(fn__hlds__make_hlds__add_clause__dcg_field_error_context_pieces_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_pred_id_0_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_proc_id_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module4)
	MR_init_entry1(hlds__make_hlds__add_clause__invalid_goal_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__invalid_goal_10_0);
	MR_init_label3(hlds__make_hlds__add_clause__invalid_goal_10_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'invalid_goal'/10 mode 0 */
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 5) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(2);
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


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module5)
	MR_init_entry1(fn__hlds__make_hlds__add_clause__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_clause__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
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

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module6)
	MR_init_entry1(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0);
	MR_init_label10(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,2,10,12,22,24,25,9,26,29,40)
	MR_init_label4(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,42,43,3,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_dcg_record_syntax_2'/16 mode 0 */
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	MR_r13 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_r14 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i3);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i3);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i9);
	}
	MR_sv(1) = MR_tempr6;
	MR_r1 = MR_sv(4);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr5 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tfield(1, MR_sv(1), 0);
	MR_r6 = MR_tfield(1, MR_tempr1, 0);
	MR_r7 = MR_tfield(1, MR_tempr2, 0);
	MR_r8 = MR_tempr3;
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(6);
	MR_r11 = MR_tempr4;
	MR_r12 = MR_tempr5;
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_21_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i10);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i12);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(1, MR_tempr2, 1);
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
	MR_tempr2 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_r6;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_supplied_contexts_17_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i25);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__this_file_0_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i22);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("transform_dcg_record_syntax_2", 29);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i24);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_supplied_contexts_17_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i25);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r2);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tfield(1, MR_sv(1), 0);
	MR_r6 = MR_tfield(1, MR_r13, 0);
	MR_r7 = MR_tfield(1, MR_r14, 0);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(6);
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__expand_set_field_function_call_21_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i26);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tempr6 = MR_r2;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(0, MR_tempr6, 1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tempr7 = MR_r1;
	MR_tfield(2, MR_tempr2, 0) = MR_tempr7;
	MR_tfield(2, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	if (MR_PTAG_TESTR(MR_tempr7,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i29);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(1, MR_tempr7, 0);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(1, MR_tempr7, 1);
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
	MR_tempr2 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_r6;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_supplied_contexts_17_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i43);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__this_file_0_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i40);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("transform_dcg_record_syntax_2", 29);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i42);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_supplied_contexts_17_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i43);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_r2);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__this_file_0_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0_i44);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0,44)
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
MR_decl_entry(hlds__make_hlds__field_access__parse_field_list_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module7)
	MR_init_entry1(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0);
	MR_init_label10(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,2,10,9,16,17,20,21,22,19,3)
	MR_init_label2(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_dcg_record_syntax'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(10) = MR_r7;
	MR_sv(11) = MR_r8;
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_r5 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const(":=", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i10);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr7, 0);
	MR_r4 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 0);
	MR_r5 = MR_tempr5;
	if (MR_PTAG_TESTR(MR_tempr5,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_r6 = MR_tfield(0, MR_tempr5, 0);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("^", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr4, 1);
	MR_r5 = MR_tempr6;
	if (MR_LTAGS_TEST(MR_tempr6,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_r4 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_sv(5) = MR_tfield(1, MR_tempr6, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(12) = MR_tempr2;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i9);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(1, MR_sv(2), 0);
	MR_sv(12) = MR_r3;
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__dcg_field_error_context_pieces_1_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i16);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__parse_field_list_4_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i17);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i20);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("^", 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__invalid_goal_10_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i21);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i22);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(12);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(11);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(hlds__make_hlds__add_clause__transform_dcg_record_syntax_2_16_0);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("^", 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__invalid_goal_10_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i25);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0,
		hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0_i26);
MR_def_label(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,26)
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
	MR_tfield(1, MR_tempr3, 1) = MR_sv(5);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_exception_module_0_0);
MR_decl_entry(parse_tree__prog_util__construct_qualified_term_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module8)
	MR_init_entry1(fn__hlds__make_hlds__add_clause__exception_functor_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_clause__exception_functor_3_0);
	MR_init_label1(fn__hlds__make_hlds__add_clause__exception_functor_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'exception_functor'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_clause__exception_functor_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		fn__hlds__make_hlds__add_clause__exception_functor_3_0_i2);
MR_def_label(fn__hlds__make_hlds__add_clause__exception_functor_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__get_term_context_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module9)
	MR_init_entry1(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__make_catch_ite_chain_5_0);
	MR_init_label9(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0,6,5,13,16,3,21,22,27,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_catch_ite_chain'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		hlds__make_hlds__add_clause__make_catch_ite_chain_5_0_i6);
MR_def_label(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("rethrow", 7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_sv(1) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		hlds__make_hlds__add_clause__make_catch_ite_chain_5_0_i30);
MR_def_label(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_tfield(1, MR_r4, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tfield(0, MR_tempr2, 1), 1);
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		hlds__make_hlds__add_clause__make_catch_ite_chain_5_0_i13);
MR_def_label(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("exc_univ_value", 14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_4_0,
		hlds__make_hlds__add_clause__make_catch_ite_chain_5_0_i16);
MR_def_label(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_r1 = MR_tempr3;
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0,
		hlds__make_hlds__add_clause__make_catch_ite_chain_5_0_i21);
MR_def_label(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		hlds__make_hlds__add_clause__make_catch_ite_chain_5_0_i22);
MR_def_label(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("exc_univ_to_type", 16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_sv(2) = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr4, 3) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr5;
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		hlds__make_hlds__add_clause__make_catch_ite_chain_5_0_i27);
MR_def_label(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 4) = MR_sv(3);
	MR_tfield(3, MR_tempr2, 5) = MR_sv(4);
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		hlds__make_hlds__add_clause__make_catch_ite_chain_5_0_i30);
MR_def_label(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module10)
	MR_init_entry1(hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0);
	MR_init_label3(hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0,2,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_exception_handling_disjunct'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0_i2);
MR_def_label(hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("exception", 9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_4_0,
		hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0_i5);
MR_def_label(hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__make_catch_ite_chain_5_0,
		hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0_i8);
MR_def_label(hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module11)
	MR_init_entry1(fn__hlds__make_hlds__add_clause__magic_exception_result_sym_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_clause__magic_exception_result_sym_name_0_0);
	MR_init_label1(fn__hlds__make_hlds__add_clause__magic_exception_result_sym_name_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'magic_exception_result_sym_name'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_clause__magic_exception_result_sym_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		fn__hlds__make_hlds__add_clause__magic_exception_result_sym_name_0_0_i2);
MR_def_label(fn__hlds__make_hlds__add_clause__magic_exception_result_sym_name_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("magic_exception_result", 22);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_set_context_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module12)
	MR_init_entry1(hlds__make_hlds__add_clause__transform_goal_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__transform_goal_14_0);
	MR_init_label2(hlds__make_hlds__add_clause__transform_goal_14_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_goal'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_clause__transform_goal_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_2_15_0,
		hlds__make_hlds__add_clause__transform_goal_14_0_i2);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
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
MR_decl_entry(hlds__make_hlds__state_var__svar_prepare_for_next_conjunct_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(hlds__hlds_goal__par_conj_list_to_goal_3_0);
MR_decl_entry(parse_tree__prog_data__rename_var_list_4_0);
MR_decl_entry(parse_tree__prog_data__rename_var_4_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_disjunction_5_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0);
MR_decl_entry(fn__hlds__make_hlds__state_var__expand_bang_state_var_args_1_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_prepare_for_call_2_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_call_4_0);
MR_decl_entry(parse_tree__prog_data__rename_vars_in_term_list_4_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__hlds_goal__generic_call_id_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);
MR_decl_entry(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0);
MR_decl_entry(hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_0);
MR_decl_entry(hlds__hlds_goal__disj_list_to_goal_3_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_equivalence_3_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_prepare_for_if_then_else_goal_5_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_if_then_else_goal_condition_5_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_if_then_else_goal_then_goal_4_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_if_then_else_12_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_negation_3_0);
MR_decl_entry(hlds__make_hlds__state_var__prepare_for_local_state_vars_5_0);
MR_decl_entry(hlds__make_hlds__state_var__finish_local_state_vars_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0;
MR_decl_entry(list__map4_6_0);
MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(fn__parse_tree__prog_util__goal_list_to_conj_2_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);
MR_decl_entry(parse_tree__prog_data__rename_vars_in_term_4_0);
MR_decl_entry(hlds__make_hlds__superhomogeneous__unravel_unification_18_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module13)
	MR_init_entry1(hlds__make_hlds__add_clause__transform_goal_2_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__transform_goal_2_15_0);
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,358,307,310,201,203,206,207,163,164,165)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,166,167,234,235,236,237,238,362,3,10)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,17,19,20,18,24,25,29,30,31,33)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,35,36,28,38,40,42,43,44,46,23)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,47,48,52,53,54,56,58,59,51,61)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,63,65,66,67,22,70,73,69,75,77)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,78,85,89,79,109,122,91,127,126,129)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,130,131,124,133,134,135,137,141,140,143)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,146,138,147,148,152,153,154,156,158,169)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,170,171,172,173,174,175,176,177,178,183)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,184,185,186,187,189,190,191,192,199,208)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,209,210,211,212,213,214,215,216,217,218)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,221,228,229,231,233,240,241,245,246,250)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,251,255,257,259,261,262,264,266,268,269)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,270,271,272,277,281,283,285,287,282,292)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,293,294,295,296,297,298,299,300,303,312)
	MR_init_label10(hlds__make_hlds__add_clause__transform_goal_2_15_0,314,318,317,332,333,334,342,335,351,352)
	MR_init_label4(hlds__make_hlds__add_clause__transform_goal_2_15_0,344,353,354,355)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_goal_2'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__transform_goal_2_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i358) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i163) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i234) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i362));
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,358)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i201);
	}
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i307);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,12);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i310);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_next_conjunct_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i207);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i203);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,12);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i206);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_next_conjunct_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i207);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(19);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r3;
	MR_sv(2) = MR_tempr6;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tempr6;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_rev_conj_16_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i164);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_r9 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_rev_conj_16_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i165);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i166);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i167);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i174);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r3;
	MR_sv(2) = MR_tempr6;
	MR_sv(1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_r2 = MR_tempr6;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i235);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_r9 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i236);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i237);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i238);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__par_conj_list_to_goal_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i174);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,362)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i169) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i261) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i3) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i268) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i10) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i255) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i250) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i245) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i240) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i277) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i17) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i312) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i221) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i175) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i228) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i208) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i183) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i77) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i332));
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r9 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 14;
	MR_tempr6 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_tempr6, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r10 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr7 = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r9 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tfield(3, MR_tempr6, 1);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r11 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr4;
	MR_succip_word = MR_sv(19);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_tempr5),
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i358) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i163) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i234) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i362));
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r9 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 14;
	MR_tempr6 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_tempr6, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r10 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr7 = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r9 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tfield(3, MR_tempr6, 1);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r11 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr4;
	MR_succip_word = MR_sv(19);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_tempr5),
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i358) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i163) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i234) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i362));
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r9 = MR_tfield(3, MR_tempr1, 3);
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i19);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(10) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(11) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(12) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i18);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(8) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(10) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(11) = MR_tfield(3, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tfield(1, MR_r9, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i20);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(12), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(12), 0) = MR_r1;
	MR_r3 = MR_sv(2);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i23);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tfield(0, MR_sv(8), 0);
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i24);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i25);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	if (MR_PTAG_TESTR(MR_sv(9),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i28);
	}
	MR_sv(13) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_sv(9), 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i29);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i30);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i31);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r6;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_tempr3 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr4;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr5;
	MR_r6 = MR_tempr6;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_orelse_goals_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i33);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(10) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_disjunction_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i35);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i36);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i46);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r3;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i38);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r6;
	MR_tempr2 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr6;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_orelse_goals_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i40);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_disjunction_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i42);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(14) = MR_r2;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i43);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i44);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i46);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i22);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i47);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i48);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	if (MR_PTAG_TESTR(MR_sv(9),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i51);
	}
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_sv(9), 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i52);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i53);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i54);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r6;
	MR_tempr2 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr4;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr5;
	MR_r6 = MR_tempr6;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_orelse_goals_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i56);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(10) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_disjunction_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i58);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i59);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i22);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r5;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i61);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r6;
	MR_tempr2 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr6;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_orelse_goals_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i63);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_disjunction_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i65);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_sv(13) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i66);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(13);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i67);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i70);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(12);
	MR_tempr3 = MR_sv(9);
	MR_tfield(1, MR_tempr1, 4) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 5) = MR_tfield(1, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_sv(2) = (((MR_Integer) MR_sv(11) + (MR_Integer) 1) + (MR_Integer) MR_sv(10));
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i75);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__this_file_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i73);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("transform_goal_2: atomic HLDSGoals = []", 39);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i69);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i75);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,75)
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
	MR_decr_sp_and_return(19);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(8) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__expand_bang_state_var_args_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i78);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i79);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(8), 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("\\=", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i79);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i79);
	}
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i79);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i79);
	}
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_call_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i85);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr3;
	MR_r8 = MR_sv(7);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__transform_goal_2_15_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i89);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_call_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i355);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_tfield(0, MR_sv(8), 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(":=", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr8 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr8, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr8, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr4, MR_string_const("^", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr6 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr6 = MR_tfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr6,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr7 = MR_tfield(0, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr7, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr7 = MR_tfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr7,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr7 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr7,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i91);
	}
	MR_tempr7 = MR_sv(6);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 0);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_tempr4;
	MR_sv(12) = MR_tfield(0, MR_tempr6, 2);
	MR_sv(13) = MR_tempr3;
	MR_r1 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_call_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i109);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,109)
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
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 3) = MR_sv(9);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr7;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(7);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__transform_goal_2_15_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i122);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_call_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i355);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i124);
	}
	MR_r2 = MR_tfield(0, MR_sv(8), 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const(":=", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i127);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i126);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("=^", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i124);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_call_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i129);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_term_list_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i130);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_dcg_record_syntax_15_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i131);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_call_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i355);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_call_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i133);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_term_list_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i134);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i135);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i137);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i138);
	}
	MR_r2 = MR_tfield(0, MR_sv(8), 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i141);
	}
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i140);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("call", 4)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i138);
	}
	MR_sv(3) = MR_r1;
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i143);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i138);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 4);
	MR_sv(6) = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 1) = MR_tfield(1, MR_tempr3, 1);
	MR_tfield(2, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 3) = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__generic_call_id_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i146);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i152);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i147);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i148);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,148)
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
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i153);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i154);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i156);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i158);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_call_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i355);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_sv(2) = MR_tempr5;
	MR_sv(6) = MR_r7;
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_tempr5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tempr4;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_disj_15_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i170);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tempr6;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_disj_15_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i171);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_disjunction_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i172);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i173);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__disj_list_to_goal_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i174);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(19);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i176);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i177);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i178);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,178)
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
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_equivalence_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i233);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__expand_bang_state_var_args_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i184);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_call_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i185);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_term_list_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i186);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i187);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i189);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i190);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i191);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i192);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,192)
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
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i199);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_call_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i355);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(8) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i209);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i210);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_if_then_else_goal_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i211);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i212);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,212)
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
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_if_then_else_goal_condition_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i213);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i214);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r4;
	MR_sv(13) = MR_r5;
	MR_sv(14) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r6;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_if_then_else_goal_then_goal_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i215);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i216);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,216)
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
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i217);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_if_then_else_12_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i218);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(19);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r9 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 14;
	MR_tempr6 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_tempr6, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r10 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr7 = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(3, MR_tempr6, 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r11 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr4;
	MR_succip_word = MR_sv(19);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_tempr5),
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i358) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i163) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i234) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_clause__transform_goal_2_15_0_i362));
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_r8;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i229);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,229)
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
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i231);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,231)
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
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_negation_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i233);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(19);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tfield(3, MR_tempr1, 4);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_tempr7 = MR_r8;
	MR_r8 = MR_tempr5;
	MR_r9 = MR_tempr6;
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i241);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_decr_sp_and_return(19);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tfield(3, MR_tempr1, 4);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_tempr7 = MR_r8;
	MR_r8 = MR_tempr5;
	MR_r9 = MR_tempr6;
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i246);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_decr_sp_and_return(19);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tfield(3, MR_tempr1, 4);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_tempr7 = MR_r8;
	MR_r8 = MR_tempr5;
	MR_r9 = MR_tempr6;
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i251);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_decr_sp_and_return(19);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(1), 0) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i257);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i259);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,259)
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
	MR_decr_sp_and_return(19);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i262);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i264);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i266);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,266)
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
	MR_decr_sp_and_return(19);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i269);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_local_state_vars_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i270);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i271);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r6;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_local_state_vars_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i272);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(1);
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i303);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
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
	MR_tempr5 = MR_r1;
	MR_sv(8) = MR_tfield(3, MR_tempr5, 1);
	MR_sv(9) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(11) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(17) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_tempr2 = MR_tempr5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, trace_mutable_var_hlds);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r4 = MR_sv(18);
	MR_r5 = MR_r4;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tfield(3, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(list__map4_6_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i281);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i283);
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
	MR_r1 = MR_sv(18);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i282);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_sv(15) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i285);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(16), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(16), 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__extract_trace_io_var_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i287);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,287)
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
	MR_r1 = MR_sv(18);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i292);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i293);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__goal_list_to_conj_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i294);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,294)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i295);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_local_state_vars_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i296);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i297);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r6;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i298);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(2));
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i299);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_local_state_vars_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i300);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,300)
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
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(1);
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i303);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(19);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr8 = MR_r1;
	MR_r13 = MR_tfield(3, MR_tempr8, 1);
	if (MR_LTAGS_TESTR(MR_r13,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i314);
	}
	MR_tempr1 = MR_tempr8;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 3);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 4);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tfield(3, MR_tempr1, 5);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tfield(3, MR_tempr1, 6);
	MR_tempr1 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_tempr7 = MR_r8;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr6;
	MR_r12 = MR_tempr7;
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 4);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i317);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(12) = MR_tfield(1, MR_r13, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i318);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_r12 = MR_sv(6);
	MR_r13 = MR_sv(7);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,17);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_r8;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i352);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,332)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(8) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_term_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i333);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_term_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i334);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i335);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i335);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i335);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i335);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i335);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i335);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__report_svar_unify_error_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i342);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,342)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i352);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,335)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i344);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i344);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i344);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i344);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i344);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_goal_2_15_0_i344);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__report_svar_unify_error_5_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i351);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i352);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(19);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,344)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_call_2_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i353);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__unravel_unification_18_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i354);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,354)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_call_4_0,
		hlds__make_hlds__add_clause__transform_goal_2_15_0_i355);
MR_def_label(hlds__make_hlds__add_clause__transform_goal_2_15_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module14)
	MR_init_entry1(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0);
	MR_init_label9(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,2,3,4,5,6,7,8,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_promise_eqv_goal'/20 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i2);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i3);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i4);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	}
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i7);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__convert_dot_state_vars_9_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i8);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r4;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i10);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0_i11);
MR_def_label(hlds__make_hlds__add_clause__transform_promise_eqv_goal_20_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(7);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module15)
	MR_init_entry1(hlds__make_hlds__add_clause__get_rev_conj_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__get_rev_conj_16_0);
	MR_init_label7(hlds__make_hlds__add_clause__get_rev_conj_16_0,16,4,2,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_rev_conj'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__get_rev_conj_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__add_clause__get_rev_conj_16_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_rev_conj_16_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_rev_conj_16_0,
		hlds__make_hlds__add_clause__get_rev_conj_16_0_i4);
MR_def_label(hlds__make_hlds__add_clause__get_rev_conj_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_r9 = MR_tempr7;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__get_rev_conj_16_0_i16);
	}
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
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__make_hlds__add_clause__get_rev_conj_16_0_i8);
MR_def_label(hlds__make_hlds__add_clause__get_rev_conj_16_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
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
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_par_conj_list_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module16)
	MR_init_entry1(hlds__make_hlds__add_clause__get_rev_par_conj_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__get_rev_par_conj_16_0);
	MR_init_label7(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,16,4,2,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_rev_par_conj'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__get_rev_par_conj_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_rev_par_conj_16_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,
		hlds__make_hlds__add_clause__get_rev_par_conj_16_0_i4);
MR_def_label(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_r9 = MR_tempr7;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__get_rev_par_conj_16_0_i16);
	}
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
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__make_hlds__add_clause__get_rev_par_conj_16_0_i8);
MR_def_label(hlds__make_hlds__add_clause__get_rev_par_conj_16_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
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
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module17)
	MR_init_entry1(hlds__make_hlds__add_clause__get_disj_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__get_disj_15_0);
	MR_init_label4(hlds__make_hlds__add_clause__get_disj_15_0,15,4,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_disj'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__get_disj_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__add_clause__get_disj_15_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_disj_15_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_disj_15_0,
		hlds__make_hlds__add_clause__get_disj_15_0_i4);
MR_def_label(hlds__make_hlds__add_clause__get_disj_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_tempr6;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__get_disj_15_0_i15);
	}
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r2);
	MR_r6 = MR_r7;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module18)
	MR_init_entry1(hlds__make_hlds__add_clause__transform_orelse_goals_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__transform_orelse_goals_14_0);
	MR_init_label3(hlds__make_hlds__add_clause__transform_orelse_goals_14_0,15,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_orelse_goals'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__transform_orelse_goals_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_orelse_goals_14_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r8;
	MR_proceed();
MR_def_label(hlds__make_hlds__add_clause__transform_orelse_goals_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_r8;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_orelse_goals_14_0_i4);
MR_def_label(hlds__make_hlds__add_clause__transform_orelse_goals_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r6;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_tempr3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr4;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr5;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr6;
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__transform_orelse_goals_14_0,
		hlds__make_hlds__add_clause__transform_orelse_goals_14_0_i6);
MR_def_label(hlds__make_hlds__add_clause__transform_orelse_goals_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(varset__new_var_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module19)
	MR_init_entry1(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0);
	MR_init_label10(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,2,3,8,9,13,14,15,18,31,32)
	MR_init_label7(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,35,39,40,41,46,47,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_try_expr_with_io'/20 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0)
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
	MR_sv(14) = MR_r10;
	MR_sv(15) = MR_r11;
	MR_sv(16) = MR_r12;
	MR_sv(17) = MR_r13;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r9;
	MR_r3 = (MR_Word) MR_string_const("TryResult", 9);
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i2);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i3);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tempr4 = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(11) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(12) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr4;
	MR_sv(18) = MR_r2;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i8);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__magic_exception_result_sym_name_0_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i9);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i13);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(16) = MR_r4;
	MR_sv(17) = MR_r5;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_dot_9_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i14);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_sv(19) = MR_r4;
	MR_sv(22) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("succeeded", 9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__exception_functor_3_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i15);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(17);
	MR_r6 = MR_sv(22);
	MR_r7 = MR_sv(19);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i18);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tempr8 = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr7, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr7, 1) = MR_tempr8;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr7;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i31);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_sv(17) = MR_r4;
	MR_sv(18) = MR_r5;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_dot_9_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i32);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(7);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(17);
	MR_r5 = MR_sv(18);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i35);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_sv(17) = MR_r6;
	MR_sv(18) = MR_r4;
	MR_sv(19) = MR_r5;
	MR_sv(20) = MR_r3;
	MR_sv(21) = MR_r7;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i39);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i40);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(20);
	MR_r4 = MR_sv(18);
	MR_r5 = MR_sv(19);
	MR_r6 = MR_sv(22);
	MR_r7 = MR_sv(21);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i41);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(17);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(5) = MR_tempr4;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(10) = MR_r7;
	MR_r1 = MR_tfield(1, MR_sv(11), 1);
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_disjunction_5_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i46);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_goal__disj_list_to_goal_3_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i47);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0_i50);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_with_io_20_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(13);
	MR_r2 = (((((MR_Integer) MR_sv(15) + (MR_Integer) MR_sv(3)) + (MR_Integer) MR_sv(16)) + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_sv(2));
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(10);
	MR_decr_sp_and_return(23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module20)
	MR_init_entry1(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0);
	MR_init_label9(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0,2,3,8,9,13,17,16,30,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_try_expr_without_io'/19 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(13) = MR_r9;
	MR_sv(14) = MR_r10;
	MR_sv(15) = MR_r11;
	MR_sv(16) = MR_r12;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r8;
	MR_r3 = (MR_Word) MR_string_const("TryResult", 9);
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0_i2);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0_i3);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tempr4 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(11) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr4;
	MR_sv(17) = MR_r2;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0_i8);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__magic_exception_result_sym_name_0_0,
		hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0_i9);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_tempr2 = MR_sv(11);
	MR_sv(11) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("succeeded", 9);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__exception_functor_3_0,
		hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0_i13);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tempr11 = MR_sv(9);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr11;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r7 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr12 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr12;
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0_i17);
	}
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r8 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r9 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 3);
	MR_r8 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_r10 = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_r11 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr8, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr10;
	MR_tfield(0, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr10, 1) = MR_tempr12;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr12;
	MR_r1 = MR_tempr11;
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0_i16);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = MR_tfield(1, MR_sv(3), 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr4;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	}
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r5;
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__make_exception_handling_disjunct_6_0,
		hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0_i30);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(16);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0_i35);
MR_def_label(hlds__make_hlds__add_clause__transform_try_expr_without_io_19_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(12);
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_prepare_for_head_1_0);
MR_decl_entry(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_prepare_for_body_5_0);
MR_decl_entry(hlds__goal_util__attach_features_to_all_goals_4_1);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_goals_5_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_get_var_types_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_init_1_0);
MR_decl_entry(hlds__quantification__implicitly_quantify_clause_body_general_11_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_set_var_types_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module21)
	MR_init_entry1(hlds__make_hlds__add_clause__add_clause_transform_18_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__add_clause_transform_18_0);
	MR_init_label10(hlds__make_hlds__add_clause__add_clause_transform_18_0,3,4,5,6,7,8,11,13,15,16)
	MR_init_label5(hlds__make_hlds__add_clause__add_clause_transform_18_0,19,20,21,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_clause_transform'/18 mode 0 */
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
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i3);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_head_1_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i4);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_term_list_4_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i5);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i6);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(12) = MR_r4;
	MR_sv(13) = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i7);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__add_clause_transform_18_0_i8);
	}
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_sv(10);
	MR_sv(6) = MR_sv(11);
	MR_r1 = MR_sv(9);
	MR_sv(7) = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_body_5_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i15);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i11);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(2) = MR_r3;
	MR_sv(7) = MR_r7;
	MR_sv(9) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__attach_features_to_all_goals_4_1,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i13);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_body_5_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i15);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i16);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r7;
	MR_sv(3) = MR_r5;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r6;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_goals_5_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i19);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_var_types_2_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i20);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_init_1_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i21);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_clause_body_general_11_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i22);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_var_types_3_0,
		hlds__make_hlds__add_clause__add_clause_transform_18_0_i23);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_18_0,23)
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
MR_decl_entry(varset__merge_renaming_4_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_get_tvarset_2_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_0);
MR_decl_entry(hlds__hlds_clauses__add_clause_3_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_any_order_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
MR_decl_entry(fn__list__filter_map_2_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(fn__list__delete_elems_2_0);
MR_decl_entry(hlds__hlds_clauses__add_clause_item_number_5_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module22)
	MR_init_entry1(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__clauses_info_add_clause_24_0);
	MR_init_label10(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,2,4,5,3,6,7,8,9,10,11)
	MR_init_label10(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,15,18,21,22,24,25,27,30,14,31)
	MR_init_label3(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,32,13,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'clauses_info_add_clause'/24 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_clause__clauses_info_add_clause_24_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(26);
	MR_sv(26) = (MR_Word) MR_succip;
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
	MR_sv(11) = MR_r11;
	MR_sv(12) = MR_r12;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r13;
	MR_sv(13) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(17) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(18) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(19) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(20) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(21) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(22) = MR_tempr1;
	MR_sv(23) = MR_r14;
	MR_sv(24) = MR_r15;
	MR_sv(25) = MR_r16;
	MR_r1 = MR_sv(18);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_list_is_empty_1_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i2);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i4);
	}
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_r3 = MR_sv(14);
	MR_r1 = MR_sv(15);
	MR_r5 = MR_sv(24);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i3);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(varset__create_name_var_map_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i5);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_r3 = MR_sv(14);
	MR_r5 = MR_sv(24);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__update_qual_info_6_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i6);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__merge_renaming_4_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i7);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(23);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(25);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__add_clause_transform_18_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i8);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_tvarset_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i9);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i10);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i11);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i13);
	}
	if (MR_INT_NE(MR_sv(21),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__add_clause_3_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i30);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_any_order_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i18);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,18);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i21);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i22);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i24);
	}
	MR_r3 = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__list__delete_elems_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i25);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__list__delete_elems_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i25);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i27);
	}
	MR_sv(1) = MR_sv(18);
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i14);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(7);
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__add_clause_3_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i30);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_var_types_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i31);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_clauses__add_clause_item_number_5_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i32);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(20);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(21);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(12);
	MR_decr_sp_and_return(26);
	}
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i34);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r4 = MR_sv(22);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(12);
	MR_decr_sp_and_return(26);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__mode_errors__mode_decl_to_string_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module23)
	MR_init_entry1(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0);
	MR_init_label1(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_decl_for_pred_info_to_pieces'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,1,14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,
		fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0_i3);
MR_def_label(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
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

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module24)
	MR_init_entry1(hlds__make_hlds__add_clause__undeclared_mode_error_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__undeclared_mode_error_8_0);
	MR_init_label10(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,2,3,4,5,6,8,21,22,23,25)
	MR_init_label8(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,50,53,54,41,73,74,77,78)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'undeclared_mode_error'/8 mode 0 */
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__varset__coerce_1_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i6);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_mode_subdecl_to_string_6_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i8);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,21);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,17);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,20);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i21);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i22);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i23);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,22);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,18);
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
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i41);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,24);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,20);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr1 = MR_tempr4;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i50);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,2,25);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i53);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i54);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
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
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,26);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,22);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0);
	MR_tfield(0, MR_tempr4, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr4, 3) = MR_sv(3);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,27);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i73);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i74);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,2,25);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i77);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i78);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
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
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(7);
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

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module25)
	MR_init_entry1(hlds__make_hlds__add_clause__get_mode_annotations_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__get_mode_annotations_4_0);
	MR_init_label10(hlds__make_hlds__add_clause__get_mode_annotations_4_0,95,12,13,4,5,16,20,34,24,51)
	MR_init_label3(hlds__make_hlds__add_clause__get_mode_annotations_4_0,26,28,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_mode_annotations'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__get_mode_annotations_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i95);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 0);
	MR_sv(2) = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i5);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i5);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, MR_string_const("::", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i5);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i5);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i5);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(fn__term__coerce_1_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i12);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
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
	MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i16);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i24);
	}
	MR_r5 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i34);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i20);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i36);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i36);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i51);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i51);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i36);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i26);
	}
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i36);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i28);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i36);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
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

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module26)
	MR_init_entry1(hlds__make_hlds__add_clause__select_applicable_modes_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__select_applicable_modes_15_0);
	MR_init_label10(hlds__make_hlds__add_clause__select_applicable_modes_15_0,2,3,5,8,6,52,13,33,34,36)
	MR_init_label8(hlds__make_hlds__add_clause__select_applicable_modes_15_0,37,38,39,40,41,44,43,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select_applicable_modes'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__select_applicable_modes_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(8) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i2);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i3);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_15_0_i33);
	}
	MR_r4 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_15_0_i52);
	}
	}
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_pragma_goal_type_1_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i8);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_15_0_i6);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r4,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_15_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_out__pred_id_to_string_2_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i13);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,32);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr8, 2) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tempr10 = MR_sv(7);
	MR_tfield(1, MR_r2, 0) = MR_tempr10;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tempr10;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_15_0_i34);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(3) = MR_r3;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_15_0_i39);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i36);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(parse_tree__module_qual__qualify_clause_mode_list_7_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i37);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_mq_info_3_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i38);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i40);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i41);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__get_procedure_matching_declmodes_with_renaming_4_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i44);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_15_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i48);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(7);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
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
MR_decl_entry(fn__term__term_list_to_var_list_1_0);
MR_decl_entry(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);
MR_decl_entry(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0);
MR_decl_entry(hlds__pred_table__predicate_table_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(fn__hlds__hlds_clauses__num_clauses_in_clauses_rep_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(parse_tree__prog_out__write_pred_or_func_3_0);
MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_1);
MR_decl_entry(parse_tree__prog_out__write_sym_name_and_arity_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_import_status_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__add_marker_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_markers_3_0);
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
MR_decl_entry(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module27)
	MR_init_entry1(hlds__make_hlds__add_clause__module_add_clause_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__module_add_clause_15_0);
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,4,2,7,8,11,12,14,15,17,20)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,24,25,26,27,28,29,30,31,32,22)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,16,37,38,35,41,43,44,45,46,47)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,48,150,50,51,52,53,54,55,56,57)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,58,59,60,62,49,66,67,68,69,64)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,70,76,77,73,74,101,99,111,112,113)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,114,115,116,117,120,122,123,124,125,128)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,129,130,127,131,132,133,134,137,138,72)
	MR_init_label1(hlds__make_hlds__add_clause__module_add_clause_15_0,142)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_add_clause'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_clause__module_add_clause_15_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
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
	MR_sv(9) = MR_r9;
	MR_sv(15) = MR_r10;
	MR_sv(16) = MR_r11;
	MR_sv(17) = MR_r12;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i4);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i7);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(5);
	MR_tempr5 = MR_sv(6);
	MR_tempr6 = MR_sv(7);
	MR_tempr7 = MR_sv(8);
	MR_tempr8 = MR_sv(9);
	MR_tempr9 = MR_sv(15);
	MR_tempr10 = MR_sv(16);
	MR_tempr11 = MR_sv(17);
	MR_r1 = MR_tempr3;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i8);
	}
	MR_sv(10) = (MR_Integer) -1;
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__expand_bang_state_var_args_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i11);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__expand_bang_state_var_args_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i11);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i12);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(20) = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i14);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(10));
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i15);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(13);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i17);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i16);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(14) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i20);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i16);
	}
	if (MR_PTAG_TESTR(MR_sv(9),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i22);
	}
	MR_sv(12) = MR_sv(14);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i24);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(").\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i25);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i26);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("name to an existing predicate", 29);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i27);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i28);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("for a promise with an identical", 31);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i29);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i30);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Attempted to introduce a predicate", 34);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i31);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__this_file_0_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i32);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i43);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_sv(14);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i43);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(9),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i35);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__term__term_list_to_var_list_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i37);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(18);
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i38);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i43);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r8 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tempr2 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(7);
	MR_r9 = (MR_Word) MR_string_const("clause", 6);
	MR_r10 = MR_sv(15);
	MR_r11 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i41);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(17) = MR_r3;
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i44);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i45);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(21) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(22) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i46);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i47);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 40;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i48);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i50);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i49);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i51);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__num_clauses_in_clauses_rep_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i52);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i53);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" for ", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i54);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Processing clause ", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i55);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i56);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__write_pred_or_func_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i57);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" \140", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i58);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i59);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(10));
	}
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i60);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_and_arity_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i62);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'...\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i150);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i64);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_import_status_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i66);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i67);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 19;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i68);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i69);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_sv(10) = MR_r1;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i70);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_r2 = MR_sv(13);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i72);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i74);
	}
	MR_sv(13) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i76);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__is_field_access_function_name_5_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i77);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i73);
	}
	if ((MR_sv(4) != MR_r2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i73);
	}
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i73);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,21);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,27);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,26);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,39);
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
	MR_tfield(1, MR_tempr3, 1) = MR_sv(17);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_decr_sp_and_return(23);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_builtin_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i101);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i99);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,41);
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
	MR_tfield(1, MR_tempr3, 1) = MR_sv(17);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_decr_sp_and_return(23);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i111);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i112);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i113);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(15);
	MR_r8 = MR_sv(16);
	MR_r9 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__select_applicable_modes_15_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i114);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(10);
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(13);
	MR_r12 = MR_sv(9);
	MR_r13 = MR_sv(4);
	MR_r14 = MR_tempr2;
	MR_r15 = MR_tempr3;
	MR_r16 = MR_tempr4;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i115);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r7;
	MR_sv(10) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r8;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i116);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(9),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i117);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_goal_type_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i120);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_update_goal_type_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i120);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_typevarset_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i122);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i123);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_arg_types_5_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i124);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i125);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i127);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i128);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i129);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i130);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(12);
	MR_r3 = MR_sv(14);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i131);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(12);
	MR_r3 = MR_sv(14);
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i131);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_set_preds_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i132);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i133);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i134);
	}
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(23);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(13);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i137);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_overlap_5_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i138);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(23);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_sv(4), 0);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i142);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module28)
	MR_init_entry1(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0);
	MR_init_label3(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0,2,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extract_trace_mutable_var'/7 mode 0 */
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
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
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
		hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0_i4);
MR_def_label(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("set_", 4);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0_i6);
MR_def_label(hlds__make_hlds__add_clause__extract_trace_mutable_var_7_0,6)
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
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 17;
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
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 17;
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


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module29)
	MR_init_entry1(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__add_clause__mode_annotations_0_0);
	MR_init_label3(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0,7,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0_i15);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0_i7);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr1);
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0,15)
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

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module30)
	MR_init_entry1(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__add_clause__mode_annotations_0_0);
	MR_init_label10(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,51,43,40,55,14,21,23,31,75,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i55);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i23);
	}
	MR_r3 = MR_unmkbody(MR_tempr1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i43);
	}
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i51);
	}
	MR_tempr4 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_tempr4,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i51);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i51);
	}
	MR_r3 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i51);
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i75);
	}
	MR_r3 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i55);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i27);
	}
	MR_r3 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i31);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i51);
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module31)
	MR_init_entry1(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0);
	MR_init_label4(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0,18,5,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__clauses_info_add_clause__511__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0_i18);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__this_file_0_0,
		fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0_i5);
MR_def_label(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("clauses_info_add_clause: all_modes foreign_proc", 47);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0_i3);
MR_def_label(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__511__1_1_0,1)
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
	hlds__make_hlds__add_clause_module25();
	hlds__make_hlds__add_clause_module26();
	hlds__make_hlds__add_clause_module27();
	hlds__make_hlds__add_clause_module28();
	hlds__make_hlds__add_clause_module29();
	hlds__make_hlds__add_clause_module30();
	hlds__make_hlds__add_clause_module31();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__add_clause__init(void);
void mercury__hlds__make_hlds__add_clause__init_type_tables(void);
void mercury__hlds__make_hlds__add_clause__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__add_clause__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
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

void mercury__hlds__make_hlds__add_clause__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_hlds__add_clause);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__add_clause__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
