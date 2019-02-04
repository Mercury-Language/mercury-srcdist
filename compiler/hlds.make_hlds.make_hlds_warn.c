/*
** Automatically generated from `make_hlds_warn.m'
** by the Mercury compiler,
** version rotd-2011-08-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__make_hlds__make_hlds_warn__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.make_hlds.make_hlds_warn.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "hlds.make_hlds.make_hlds_warn.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "hlds.make_hlds.make_hlds_warn.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "hlds.make_hlds.make_hlds_warn.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "hlds.make_hlds.make_hlds_warn.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "hlds.make_hlds.make_hlds_warn.c"
#line 49 "hlds.make_hlds.make_hlds_warn.c"
#include "hlds.make_hlds.make_hlds_warn.mh"

#line 52 "hlds.make_hlds.make_hlds_warn.c"
#line 53 "hlds.make_hlds.make_hlds_warn.c"
#ifndef HLDS__MAKE_HLDS__MAKE_HLDS_WARN_DECL_GUARD
#define HLDS__MAKE_HLDS__MAKE_HLDS_WARN_DECL_GUARD

#line 57 "hlds.make_hlds.make_hlds_warn.c"
#line 58 "hlds.make_hlds.make_hlds_warn.c"

#endif
#line 61 "hlds.make_hlds.make_hlds_warn.c"

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
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1[2];
	MR_Word * f2[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_hlds__make_hlds_warn__type_ctor_info_single_or_multi_0,
	mercury_data_hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0;
MR_decl_label4(hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0, 2,4,5,6)
MR_decl_label9(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0, 98,9,11,7,5,4,39,41,38)
MR_decl_label10(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0, 2,3,5,7,9,10,11,14,79,13)
MR_decl_label4(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0, 16,12,44,46)
MR_decl_label2(hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_0, 4,3)
MR_decl_label8(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0, 43,3,4,7,14,15,11,17)
MR_decl_label3(hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_0, 10,3,4)
MR_decl_label7(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0, 40,2,7,11,5,15,13)
MR_decl_label3(hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0, 4,5,2)
MR_decl_label3(hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0, 4,5,2)
MR_decl_label6(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0, 3,22,23,24,26,49)
MR_decl_label5(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0, 25,3,6,8,5)
MR_decl_label4(hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0, 28,6,8,5)
MR_decl_label3(hlds__make_hlds__make_hlds_warn__is_multi_var_3_0, 3,5,1)
MR_decl_label8(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0, 4,6,9,12,19,20,17,1)
MR_decl_label5(hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0, 2,3,4,7,6)
MR_decl_label1(hlds__make_hlds__make_hlds_warn__promise_ex_error_5_0, 3)
MR_decl_label3(hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0, 4,7,1)
MR_decl_label1(hlds__make_hlds__make_hlds_warn__warn_overlap_5_0, 3)
MR_decl_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0, 3,4,5,7,8,9,10,11,13,14)
MR_decl_label3(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0, 12,18,16)
MR_decl_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0, 2,5,9,11,8,6,15,17,19,14)
MR_decl_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0, 22,23,26,27,29,31,33,35,30,37)
MR_decl_label3(hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_0, 10,3,4)
MR_decl_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0, 190,3,6,5,8,11,12,16,17,10)
MR_decl_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0, 20,22,25,27,28,24,32,34,35,37)
MR_decl_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0, 38,39,31,40,41,42,30,48,49,51)
MR_decl_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0, 52,53,46,133,57,58,60,61,62,55)
MR_decl_label7(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0, 65,44,75,76,71,78,69)
MR_decl_label3(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0, 10,3,4)
MR_decl_label8(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0, 2,3,4,8,10,22,28,29)
MR_decl_label8(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0, 4,3,8,9,10,12,7,14)
MR_decl_label3(fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0, 36,12,13)
MR_decl_label4(fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0, 13,9,20,27)
MR_decl_label8(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0, 4,6,8,10,13,15,19,1)
MR_decl_label9(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0, 3,2,5,9,13,17,22,27,84)
MR_def_extern_entry(hlds__make_hlds__make_hlds_warn__warn_overlap_5_0)
MR_decl_static(fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__add_warn_spec_3_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__promise_ex_error_5_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_0)
MR_decl_static(fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__is_multi_var_3_0)
MR_decl_static(hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0)
MR_decl_static(__Unify___hlds__make_hlds__make_hlds_warn__single_or_multi_0_0)
MR_decl_static(__Compare___hlds__make_hlds__make_hlds_warn__single_or_multi_0_0)
MR_decl_static(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0)
MR_decl_static(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0)
MR_decl_static(fn__hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__451__1_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_0 mercury_common_0[34] =
{
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_TAG_COMMON(3,2,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,7),
MR_TAG_COMMON(1,0,3)
}
},
{
{
MR_TAG_COMMON(2,3,0),
MR_TAG_COMMON(1,0,4)
}
},
{
{
MR_TAG_COMMON(3,2,6),
MR_TAG_COMMON(1,0,5)
}
},
{
{
MR_TAG_COMMON(3,2,10),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,7),
MR_TAG_COMMON(1,0,7)
}
},
{
{
MR_TAG_COMMON(2,3,0),
MR_TAG_COMMON(1,0,8)
}
},
{
{
MR_TAG_COMMON(3,2,9),
MR_TAG_COMMON(1,0,9)
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
MR_TAG_COMMON(3,2,14),
MR_TAG_COMMON(1,0,11)
}
},
{
{
MR_TAG_COMMON(2,3,2),
MR_TAG_COMMON(1,0,12)
}
},
{
{
MR_TAG_COMMON(3,2,13),
MR_TAG_COMMON(1,0,13)
}
},
{
{
MR_TAG_COMMON(2,3,1),
MR_TAG_COMMON(1,0,14)
}
},
{
{
MR_TAG_COMMON(3,2,12),
MR_TAG_COMMON(1,0,15)
}
},
{
{
MR_TAG_COMMON(3,2,15),
MR_TAG_COMMON(1,0,11)
}
},
{
{
MR_TAG_COMMON(2,3,3),
MR_TAG_COMMON(1,0,17)
}
},
{
{
MR_TAG_COMMON(3,2,12),
MR_TAG_COMMON(1,0,18)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_COMMON(5,0)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_TAG_COMMON(0,5,1)
}
},
{
{
MR_TAG_COMMON(3,2,17),
MR_TAG_COMMON(1,0,11)
}
},
{
{
MR_TAG_COMMON(3,2,19),
MR_TAG_COMMON(1,0,11)
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
MR_TAG_COMMON(3,2,22),
MR_TAG_COMMON(1,0,11)
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
MR_COMMON(0,28)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,5,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(5,4)
}
},
{
{
MR_TAG_COMMON(3,2,27),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,28),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_overlap_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_simple_call_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__quantification__type_ctor_info_quant_warning_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_1;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_overlap_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, simple_call_id),
MR_CTOR0_ADDR(hlds__quantification, quant_warning),
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,0),
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,26),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,0),
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,26),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,29),
MR_COMMON(0,29),
MR_COMMON(0,0),
MR_COMMON(0,26)
}
},
};

static const struct mercury_type_2 mercury_common_2[29] =
{
{
4,
MR_string_const("warning: variable", 17)
},
{
4,
MR_string_const("does", 4)
},
{
4,
MR_string_const("warning: variables", 18)
},
{
4,
MR_string_const("do", 2)
},
{
4,
MR_string_const("warning: the ", 13)
},
{
4,
MR_string_const("code for", 8)
},
{
4,
MR_string_const("does not appear to set", 22)
},
{
3,
MR_string_const(",", 1)
},
{
4,
MR_string_const("but it can fail.", 16)
},
{
4,
MR_string_const("may set", 7)
},
{
4,
MR_string_const("but it cannot fail.", 19)
},
{
4,
MR_string_const("warning: the IL code for", 24)
},
{
4,
MR_string_const("may contain a", 13)
},
{
4,
MR_string_const("or", 2)
},
{
4,
MR_string_const("instruction.", 12)
},
{
4,
MR_string_const("statement.", 10)
},
{
4,
MR_string_const("In the", 6)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("not occur in the", 16)
},
{
4,
MR_string_const("code.", 5)
},
{
4,
MR_string_const("In clause for", 13)
},
{
4,
MR_string_const("occurs", 6)
},
{
4,
MR_string_const("in this scope.", 14)
},
{
4,
MR_string_const("occur", 5)
},
{
4,
MR_string_const("In", 2)
},
{
4,
MR_string_const("declaration:", 12)
},
{
4,
MR_string_const("error:", 6)
},
{
4,
MR_string_const("has overlapping scopes.", 23)
},
{
4,
MR_string_const("each have overlapping scopes.", 29)
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
MR_string_const("SUCCESS_INDICATOR", 17)
},
{
MR_string_const("ret", 3)
},
{
MR_string_const("jmp", 3)
},
{
MR_string_const("return", 6)
},
};

static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
39,
1
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
5,
1
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
6,
1
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const struct mercury_type_5 mercury_common_5[5] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
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
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr),
MR_CTOR0_ADDR(term, context)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0;
static const struct mercury_type_6 mercury_common_6[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,20),
MR_COMMON(0,21),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,29),
MR_COMMON(0,0),
MR_COMMON(0,26)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,29),
MR_COMMON(0,0),
MR_COMMON(0,26)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,29),
MR_COMMON(0,0),
MR_COMMON(0,26)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__error_util, error_spec),
MR_CTOR0_ADDR(hlds__make_hlds__make_hlds_warn, warn_info),
MR_CTOR0_ADDR(hlds__make_hlds__make_hlds_warn, warn_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0_1;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,21)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,3),
MR_COMMON(0,31)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_maybe_name_mode_1_0);
static const struct mercury_type_8 mercury_common_8[3] =
{
{
MR_COMMON(7,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_maybe_name_mode_1_0),
0
},
{
MR_COMMON(6,4),
MR_ENTRY_AP(hlds__make_hlds__make_hlds_warn__add_warn_spec_3_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0),
0
},
};

static const MR_EnumFunctorDesc mercury_data_hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0 = {
	"sm_single",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1 = {
	"sm_multi",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__make_hlds__make_hlds_warn__enum_value_ordered_single_or_multi_0[] = {
	&mercury_data_hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0,
	&mercury_data_hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__make_hlds__make_hlds_warn__enum_name_ordered_single_or_multi_0[] = {
	&mercury_data_hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1,
	&mercury_data_hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0
};

const MR_Integer mercury_data_hlds__make_hlds__make_hlds_warn__functor_number_map_single_or_multi_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__make_hlds_warn__type_ctor_info_single_or_multi_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__make_hlds_warn__single_or_multi_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__make_hlds_warn__single_or_multi_0_0)),
	"hlds.make_hlds.make_hlds_warn",
	"single_or_multi",
	{ (void *)mercury_data_hlds__make_hlds__make_hlds_warn__enum_name_ordered_single_or_multi_0 },
	{ (void *)mercury_data_hlds__make_hlds__make_hlds_warn__enum_value_ordered_single_or_multi_0 },
	2,
	4,
	mercury_data_hlds__make_hlds__make_hlds_warn__functor_number_map_single_or_multi_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_simple_call_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_simple_call_id_0;

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_simple_call_id_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

const MR_ConstString mercury_data_hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0[] = {
	"wi_module_info",
	"wi_pred_call_id",
	"wi_varset",
	"wi_specs",
	"wi_singleton_headvars",
	"wi_multi_headvars",
	"wi_head_context"
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0 = {
	"warn_info",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0,
	mercury_data_hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0[] = {
	&mercury_data_hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0[] = {
	&mercury_data_hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0
};

const MR_Integer mercury_data_hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0)),
	"hlds.make_hlds.make_hlds_warn",
	"warn_info",
	{ (void *)mercury_data_hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0 },
	{ (void *)mercury_data_hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0 },
	1,
	4,
	mercury_data_hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.make_hlds_warn",
"hlds.make_hlds.make_hlds_warn",
"flatten_to_conj_list",
2,
0
},
"hlds.make_hlds.make_hlds_warn",
"make_hlds_warn.m",
802,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_2 = {
{
MR_PREDICATE,
"hlds.make_hlds.make_hlds_warn",
"hlds.make_hlds.make_hlds_warn",
"add_warn_spec",
3,
0
},
"hlds.make_hlds.make_hlds_warn",
"make_hlds_warn.m",
296,
"94"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_maybe_name_mode",
2,
0
},
"hlds.make_hlds.make_hlds_warn",
"make_hlds_warn.m",
292,
"89"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_4 = {
{
MR_PREDICATE,
"hlds.make_hlds.make_hlds_warn",
"hlds.make_hlds.make_hlds_warn",
"is_multi_var",
3,
0
},
"hlds.make_hlds.make_hlds_warn",
"make_hlds_warn.m",
417,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_3 = {
{
MR_PREDICATE,
"hlds.make_hlds.make_hlds_warn",
"hlds.make_hlds.make_hlds_warn",
"is_multi_var",
3,
0
},
"hlds.make_hlds.make_hlds_warn",
"make_hlds_warn.m",
417,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_2 = {
{
MR_PREDICATE,
"hlds.make_hlds.make_hlds_warn",
"hlds.make_hlds.make_hlds_warn",
"is_multi_var",
3,
0
},
"hlds.make_hlds.make_hlds_warn",
"make_hlds_warn.m",
417,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.make_hlds_warn",
"hlds.make_hlds.make_hlds_warn",
"is_singleton_var",
4,
0
},
"hlds.make_hlds.make_hlds_warn",
"make_hlds_warn.m",
390,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_2 = {
{
MR_FUNCTION,
"hlds.make_hlds.make_hlds_warn",
"hlds.make_hlds.make_hlds_warn",
"lambda_make_hlds_warn_m_451",
4,
0
},
"hlds.make_hlds.make_hlds_warn",
"make_hlds_warn.m",
451,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_1 = {
{
MR_FUNCTION,
"hlds.make_hlds.make_hlds_warn",
"hlds.make_hlds.make_hlds_warn",
"lambda_make_hlds_warn_m_451",
4,
0
},
"hlds.make_hlds.make_hlds_warn",
"make_hlds_warn.m",
451,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.make_hlds_warn",
"hlds.make_hlds.make_hlds_warn",
"var_is_unmentioned",
3,
0
},
"hlds.make_hlds.make_hlds_warn",
"make_hlds_warn.m",
482,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__make_hlds_warn__warn_overlap_5_0_1 = {
{
MR_FUNCTION,
"hlds.make_hlds.make_hlds_warn",
"hlds.make_hlds.make_hlds_warn",
"warn_overlap_to_spec",
4,
0
},
"hlds.make_hlds.make_hlds_warn",
"make_hlds_warn.m",
90,
"9"
};


extern const MR_TypeCtorInfo_Struct mercury_data_hlds__quantification__type_ctor_info_quant_warning_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module0)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__warn_overlap_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__warn_overlap_5_0);
	MR_init_label1(hlds__make_hlds__make_hlds_warn__warn_overlap_5_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_overlap'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_warn__warn_overlap_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__quantification, quant_warning);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__make_hlds__make_hlds_warn__warn_overlap_5_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_overlap_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__join_list_2_0);
MR_decl_entry(fn__parse_tree__error_util__add_quotes_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module1)
	MR_init_entry1(fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0);
	MR_init_label3(fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0,36,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'variable_warning_start'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0_i36);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0_i36);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,2,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0_i12);
MR_def_label(fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__add_quotes_1_0,
		fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0_i13);
MR_def_label(fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_alnum_or_underscore_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module2)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0);
	MR_init_label4(hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0,28,6,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_first_c_name_in_word'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0,
		hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module3)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0);
	MR_init_label5(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0,25,3,6,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_first_c_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_0,
		hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module4)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0);
	MR_init_label4(hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0,2,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'c_code_to_name_list_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__get_first_c_name_3_0,
		hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0,
		hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0,6)
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

MR_decl_entry(hlds__hlds_module__module_info_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_declared_determinism_2_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(fn__libs__globals__foreign_language_string_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module5)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0);
	MR_init_label10(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,2,3,5,7,9,10,11,14,79,13)
	MR_init_label4(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,16,12,44,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_fp_body_for_success_indicator'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_4_0,
		hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r4,7)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i9);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i10);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i11);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r4 == (MR_Integer) 5) || ((MR_Integer) MR_r4 == (MR_Integer) 1)))) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i12);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("SUCCESS_INDICATOR", 17);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__member_2_0,
		hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i14);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i13);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i16);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,2,4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = ((MR_Integer) 39 | ((MR_Integer) 1 << (MR_Integer) 10));
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("SUCCESS_INDICATOR", 17);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__member_2_0,
		hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i44);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i79);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0_i46);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,10);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,2,5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,2,4);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) 39 | ((MR_Integer) 1 << (MR_Integer) 10));
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module6)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0);
	MR_init_label9(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0,98,9,11,7,5,4,39,41,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_fp_body_for_return'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0_i98);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ret", 3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("jmp", 3);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_0,
		hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0_i5);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,16);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,2,11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = ((MR_Integer) 39 | ((MR_Integer) 1 << (MR_Integer) 10));
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
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
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("return", 6);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(list__member_2_0,
		hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0_i39);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0_i38);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0_i41);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,19);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,2,5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,2,4);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) 39 | ((MR_Integer) 1 << (MR_Integer) 10));
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_is_imported_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module7)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0);
	MR_init_label5(hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0,2,3,4,7,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pragma_foreign_proc_body_checks'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_is_imported_1_0,
		hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_0,
		hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__check_fp_body_for_return_6_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(list__filter_map_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module8)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0);
	MR_init_label8(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0,2,3,4,8,10,22,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_singletons_in_pragma_foreign_proc'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(7) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,22);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,23);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,2,5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,2,16);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,0,11);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__make_hlds_warn__variable_warning_start_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0_i22);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,24);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,18);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0_i28);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0_i29);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) 5 | ((MR_Integer) 1 << (MR_Integer) 10));
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr5 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(8);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr5;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__sort_and_remove_dups_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module9)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0);
	MR_init_label6(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0,3,22,23,24,26,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_variable_warning'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,23);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,2,20);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__451__1_3_0);
	MR_tfield(0, MR_tempr4, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr4, 3) = MR_r4;
	MR_tfield(0, MR_tempr4, 4) = (MR_Integer) 0;
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r5;
	MR_sv(2) = (MR_Word) MR_string_const("more than once", 14);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,0,11);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_i22);
MR_def_label(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,23);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,2,20);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__451__1_3_0);
	MR_tfield(0, MR_tempr4, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr4, 3) = MR_r4;
	MR_tfield(0, MR_tempr4, 4) = (MR_Integer) 0;
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r5;
	MR_sv(2) = (MR_Word) MR_string_const("only once", 9);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,0,11);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_i22);
MR_def_label(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_i23);
MR_def_label(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_i24);
MR_def_label(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_i26);
	}
	MR_tempr2 = MR_tfield(1, MR_sv(4), 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_i26);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,27);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,21);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_i49);
MR_def_label(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,22);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,2,23);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,2,2);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0_i49);
MR_def_label(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = ((MR_Integer) 5 | ((MR_Integer) 1 << (MR_Integer) 10));
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module10)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__add_warn_spec_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__add_warn_spec_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_warn_spec'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__add_warn_spec_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module11)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0);
	MR_init_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,2,5,9,11,8,6,15,17,19,14)
	MR_init_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,22,23,26,27,29,31,33,35,30,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_singletons_goal_vars'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_sv(4);
	MR_tfield(0, MR_r2, 5) = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i9);
	}
	MR_r3 = MR_sv(8);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 12;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i6);
	}
	MR_r3 = MR_sv(8);
	MR_r1 = MR_sv(10);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__make_hlds_warn__is_multi_var_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_sv(7) = MR_sv(5);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i26);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i14);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tfield(0, MR_sv(5), 4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i17);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i19);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__make_hlds_warn__is_multi_var_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i26);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i22);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__add_warn_spec_3_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i23);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__make_hlds_warn__is_multi_var_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i27);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i29);
	}
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i31);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i30);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tfield(0, MR_sv(7), 5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i33);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(8) = MR_tempr1;
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i35);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0_i37);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__add_warn_spec_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__parse_tree__prog_data__get_foreign_language_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(hlds__goal_util__generic_call_vars_2_0);
MR_decl_entry(fn__hlds__quantification__free_goal_vars_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__init_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module12)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0);
	MR_init_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,190,3,6,5,8,11,12,16,17,10)
	MR_init_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,20,22,25,27,28,24,32,34,35,37)
	MR_init_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,38,39,31,40,41,42,30,48,49,51)
	MR_init_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,52,53,46,133,57,58,60,61,62,55)
	MR_init_label7(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,65,44,75,76,71,78,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_singletons_in_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i3);
	}
	MR_r1 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	MR_succip_word = MR_sv(10);
	continue;
	}
	break;
	} /* end while */
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i5);
	}
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_tfield(2, MR_r4, 2);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_tempr4 = MR_r4;
	MR_r1 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr4, 1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(7) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i12);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,22);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i16);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tfield(0, MR_tempr2, 1);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(5);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i17);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__make_hlds_warn, warn_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i20);
	}
	MR_r1 = MR_tfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i22);
	}
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i24);
	}
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__goal_util__generic_call_vars_2_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i25);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i27);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i28);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i32);
	}
	MR_tempr2 = MR_tempr3;
	MR_r6 = MR_tempr2;
	MR_r4 = MR_r2;
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i31);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r5;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__quantification__free_goal_vars_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i34);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__quantification__free_goal_vars_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i35);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i37);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(set__init_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i38);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i39);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(6);
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r4;
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i40);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i41);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i42);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i190);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i44);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i46);
	}
	MR_r6 = MR_tfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i48);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i190);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_r6;
	MR_sv(7) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r4, 2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__quantification__free_goal_vars_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i49);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(set__init_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i51);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i52);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i53);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i190);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i55);
	}
	MR_r6 = MR_tfield(1, MR_r5, 0);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i57);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i190);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r4, 2);
	MR_sv(8) = MR_r6;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__quantification__free_goal_vars_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i58);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(set__init_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i60);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i61);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i62);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i190);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i133);
	}
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_tfield(3, MR_r5, 1);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i65);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,7)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i69);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i71);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr3 = MR_tfield(1, MR_tempr1, 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr5;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i75);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	}
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i76);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i78);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r5, 2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0_i190);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r4, 3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module13)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0);
	MR_init_label3(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_singletons_in_goal_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module14)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_0);
	MR_init_label3(hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_singletons_in_cases'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module15)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0);
	MR_init_label8(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0,4,3,8,9,10,12,7,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_singletons_in_unify'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_tfield(1, MR_r2, 2);
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_tfield(2, MR_r2, 3);
	MR_sv(4) = MR_tfield(2, MR_r2, 6);
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0_i12);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0_i14);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module16)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__warn_singletons_6_0);
	MR_init_label10(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,3,4,5,7,8,9,10,11,13,14)
	MR_init_label3(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,12,18,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_singletons'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_warn__warn_singletons_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_6_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_6_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_6_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = MR_sv(6);
	MR_tfield(0, MR_r2, 5) = MR_sv(5);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_6_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_6_0_i8);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_r1, 4);
	MR_sv(3) = MR_tfield(0, MR_r1, 5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 6);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_6_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_6_0_i10);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_6_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0_i13);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0_i12);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_6_0_i14);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(6);
	MR_r1 = MR_r2;
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_0,
		hlds__make_hlds__make_hlds_warn__warn_singletons_6_0_i18);
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_r1 = MR_r2;
MR_def_label(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module17)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0);
	MR_init_label3(hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0,4,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flatten_to_disj_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0,
		hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0,
		hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_out__promise_to_string_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module18)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__promise_ex_error_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__promise_ex_error_5_0);
	MR_init_label1(hlds__make_hlds__make_hlds_warn__promise_ex_error_5_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'promise_ex_error'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__promise_ex_error_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,2,24);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__promise_to_string_1_0,
		hlds__make_hlds__make_hlds_warn__promise_ex_error_5_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_warn__promise_ex_error_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,11);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,2,26);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,2,25);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module19)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0);
	MR_init_label8(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0,43,3,4,7,14,15,11,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_promise_ex_disj_arm'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r8 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,20)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0_i4);
	}
	MR_r2 = MR_r5;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0_i43);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r8,3,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0_i7);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r8, 2);
	MR_tfield(1, MR_r2, 1) = MR_r5;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0_i43);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r8,3,19)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0_i11);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0_i14);
	}
	MR_r2 = MR_r5;
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0_i43);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = (MR_Word) MR_string_const("disjunct contains more than one call", 36);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__promise_ex_error_5_0,
		hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0_i43);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = (MR_Word) MR_string_const("disjunct is not a call or unification", 37);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__promise_ex_error_5_0,
		hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0_i17);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0_i43);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module20)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_0);
	MR_init_label3(hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_promise_ex_disjunction'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_0,
		hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module21)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0);
	MR_init_label7(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0,40,2,7,11,5,15,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_promise_ex_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r4 = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0_i2);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_succip_word = MR_sv(3);
	continue;
	}
	break;
	} /* end while */
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_0,
		hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,30);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0_i11);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r5, 2);
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("universal quantification should come before the declaration name", 64);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__promise_ex_error_5_0,
		hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0_i15);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0_i40);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("goal in declaration is not a disjunction", 40);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__promise_ex_error_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module22)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_0);
	MR_init_label2(hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_promise_ex_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_string_const("declaration has no universally quantified variables", 51);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__promise_ex_error_5_0,
		hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module23)
	MR_init_entry1(fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0);
	MR_init_label4(fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0,13,9,20,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_overlap_to_spec'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,23);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,2,20);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr5 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr5, 0);
	MR_r5 = MR_tempr4;
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0_i9);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0_i9);
	}
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0_i13);
MR_def_label(fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,32);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0_i27);
MR_def_label(fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,2,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0_i20);
MR_def_label(fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,33);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0_i27);
MR_def_label(fn__hlds__make_hlds__make_hlds_warn__warn_overlap_to_spec_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = ((MR_Integer) 6 | ((MR_Integer) 1 << (MR_Integer) 10));
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__prefix_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module24)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0);
	MR_init_label3(hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0,4,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_is_unmentioned'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	}
	MR_np_call_localret_ent(string__prefix_2_0,
		hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_0,
		hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0_i7);
MR_def_label(hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0_i1);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_0,1)
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

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(varset__search_name_3_0);
MR_decl_entry(set__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module25)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0);
	MR_init_label8(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0,4,6,9,12,19,20,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_singleton_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0_i1);
	}
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(varset__search_name_3_0,
		hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0_i6);
MR_def_label(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__prefix_2_0,
		hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0_i9);
MR_def_label(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("DCG_", 4);
	MR_np_call_localret_ent(string__prefix_2_0,
		hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0_i12);
MR_def_label(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0_i1);
	}
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0_i17);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__member_2_1,
		hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0_i19);
MR_def_label(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__search_name_3_0,
		hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0_i20);
MR_def_label(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(3), (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__make_hlds__make_hlds_warn__is_singleton_var_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module26)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__is_multi_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__is_multi_var_3_0);
	MR_init_label3(hlds__make_hlds__make_hlds_warn__is_multi_var_3_0,3,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_multi_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__is_multi_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__make_hlds__make_hlds_warn__is_multi_var_3_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_warn__is_multi_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__is_multi_var_3_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__search_name_3_0,
		hlds__make_hlds__make_hlds_warn__is_multi_var_3_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_warn__is_multi_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__is_multi_var_3_0_i1);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(string__prefix_2_0);
MR_def_label(hlds__make_hlds__make_hlds_warn__is_multi_var_3_0,1)
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


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module27)
	MR_init_entry1(hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0);
	MR_init_label3(hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0,4,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flatten_to_conj_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0,
		hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0,
		hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0_i5);
MR_def_label(hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module28)
	MR_init_entry1(__Unify___hlds__make_hlds__make_hlds_warn__single_or_multi_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__make_hlds_warn__single_or_multi_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__make_hlds__make_hlds_warn__single_or_multi_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module29)
	MR_init_entry1(__Compare___hlds__make_hlds__make_hlds_warn__single_or_multi_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__make_hlds_warn__single_or_multi_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__make_hlds__make_hlds_warn__single_or_multi_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__simple_call_id_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module30)
	MR_init_entry1(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0);
	MR_init_label8(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0,4,6,8,10,13,15,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i19);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(12) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i4);
MR_def_label(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__simple_call_id_0_0,
		__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i6);
MR_def_label(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i8);
MR_def_label(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i10);
MR_def_label(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i1);
	}
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i13);
MR_def_label(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i15);
MR_def_label(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__make_hlds__make_hlds_warn__warn_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__simple_call_id_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module31)
	MR_init_entry1(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0);
	MR_init_label9(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0,3,2,5,9,13,17,22,27,84)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i2);
MR_def_label(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i5);
MR_def_label(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i84);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__simple_call_id_0_0,
		__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i9);
MR_def_label(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i84);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i13);
MR_def_label(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i84);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i17);
MR_def_label(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i84);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i22);
MR_def_label(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i84);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i27);
MR_def_label(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0_i84);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___hlds__make_hlds__make_hlds_warn__warn_info_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_warn_module32)
	MR_init_entry1(fn__hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__451__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__451__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__generate_variable_warning__451__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__451__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__make_hlds_warn_maybe_bunch_0(void)
{
	hlds__make_hlds__make_hlds_warn_module0();
	hlds__make_hlds__make_hlds_warn_module1();
	hlds__make_hlds__make_hlds_warn_module2();
	hlds__make_hlds__make_hlds_warn_module3();
	hlds__make_hlds__make_hlds_warn_module4();
	hlds__make_hlds__make_hlds_warn_module5();
	hlds__make_hlds__make_hlds_warn_module6();
	hlds__make_hlds__make_hlds_warn_module7();
	hlds__make_hlds__make_hlds_warn_module8();
	hlds__make_hlds__make_hlds_warn_module9();
	hlds__make_hlds__make_hlds_warn_module10();
	hlds__make_hlds__make_hlds_warn_module11();
	hlds__make_hlds__make_hlds_warn_module12();
	hlds__make_hlds__make_hlds_warn_module13();
	hlds__make_hlds__make_hlds_warn_module14();
	hlds__make_hlds__make_hlds_warn_module15();
	hlds__make_hlds__make_hlds_warn_module16();
	hlds__make_hlds__make_hlds_warn_module17();
	hlds__make_hlds__make_hlds_warn_module18();
	hlds__make_hlds__make_hlds_warn_module19();
	hlds__make_hlds__make_hlds_warn_module20();
	hlds__make_hlds__make_hlds_warn_module21();
	hlds__make_hlds__make_hlds_warn_module22();
	hlds__make_hlds__make_hlds_warn_module23();
	hlds__make_hlds__make_hlds_warn_module24();
	hlds__make_hlds__make_hlds_warn_module25();
	hlds__make_hlds__make_hlds_warn_module26();
	hlds__make_hlds__make_hlds_warn_module27();
	hlds__make_hlds__make_hlds_warn_module28();
	hlds__make_hlds__make_hlds_warn_module29();
	hlds__make_hlds__make_hlds_warn_module30();
	hlds__make_hlds__make_hlds_warn_module31();
	hlds__make_hlds__make_hlds_warn_module32();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__make_hlds_warn__init(void);
void mercury__hlds__make_hlds__make_hlds_warn__init_type_tables(void);
void mercury__hlds__make_hlds__make_hlds_warn__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__make_hlds_warn__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__make_hlds_warn__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__make_hlds__make_hlds_warn__init_threadscope_string_table(void);
#endif

void mercury__hlds__make_hlds__make_hlds_warn__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__make_hlds_warn_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__make_hlds_warn__type_ctor_info_single_or_multi_0,
		hlds__make_hlds__make_hlds_warn__single_or_multi_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0,
		hlds__make_hlds__make_hlds_warn__warn_info_0_0);
	mercury__hlds__make_hlds__make_hlds_warn__init_debugger();
}

void mercury__hlds__make_hlds__make_hlds_warn__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__make_hlds_warn__type_ctor_info_single_or_multi_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0);
	}
}


void mercury__hlds__make_hlds__make_hlds_warn__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__make_hlds_warn__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_hlds__make_hlds_warn);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__make_hlds_warn__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__make_hlds__make_hlds_warn__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
