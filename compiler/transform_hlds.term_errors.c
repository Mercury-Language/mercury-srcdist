/*
** Automatically generated from `term_errors.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__term_errors__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.term_errors.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.term_errors.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.term_errors.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.term_errors.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "transform_hlds.term_errors.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "transform_hlds.term_errors.c"
#line 48 "transform_hlds.term_errors.c"
#include "transform_hlds.term_errors.mh"

#line 51 "transform_hlds.term_errors.c"
#line 52 "transform_hlds.term_errors.c"
#ifndef TRANSFORM_HLDS__TERM_ERRORS_DECL_GUARD
#define TRANSFORM_HLDS__TERM_ERRORS_DECL_GUARD

#line 56 "transform_hlds.term_errors.c"
#line 57 "transform_hlds.term_errors.c"

#endif
#line 60 "transform_hlds.term_errors.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_contexts_0,
	mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0,
	mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0;
MR_decl_label8(transform_hlds__term_errors__description_5_0, 228,296,6,5,9,10,14,18)
MR_decl_label8(transform_hlds__term_errors__description_5_0, 19,297,92,91,95,96,100,104)
MR_decl_label8(transform_hlds__term_errors__description_5_0, 105,231,302,25,22,37,47,303)
MR_decl_label8(transform_hlds__term_errors__description_5_0, 57,60,56,62,63,299,70,69)
MR_decl_label8(transform_hlds__term_errors__description_5_0, 78,79,107,110,117,301,123,122)
MR_decl_label8(transform_hlds__term_errors__description_5_0, 126,127,131,137,138,298,144,143)
MR_decl_label8(transform_hlds__term_errors__description_5_0, 147,148,152,156,157,158,159,162)
MR_decl_label8(transform_hlds__term_errors__description_5_0, 165,300,173,172,178,176,184,190)
MR_decl_label8(transform_hlds__term_errors__description_5_0, 191,192,194,197,199,204,205,218)
MR_decl_label1(transform_hlds__term_errors__description_5_0, 223)
MR_decl_label8(transform_hlds__term_errors__output_term_error_7_0, 2,4,5,9,12,15,16,13)
MR_decl_label3(transform_hlds__term_errors__output_term_errors_7_0, 11,5,13)
MR_decl_label8(transform_hlds__term_errors__report_arg_size_errors_5_0, 2,8,9,3,16,17,19,27)
MR_decl_label6(transform_hlds__term_errors__report_arg_size_errors_5_0, 28,23,33,34,36,21)
MR_decl_label8(transform_hlds__term_errors__report_term_errors_5_0, 2,8,9,3,15,16,17,22)
MR_decl_label7(transform_hlds__term_errors__report_term_errors_5_0, 19,28,29,25,33,34,36)
MR_decl_label1(transform_hlds__term_errors__term_errors_var_bag_description_3_0, 3)
MR_decl_label8(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0, 37,5,7,8,10,11,16,15)
MR_decl_label1(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0, 18)
MR_decl_label3(fn__transform_hlds__term_errors__is_fatal_error_1_0, 21,15,20)
MR_decl_label4(fn__transform_hlds__term_errors__is_indirect_error_1_0, 21,24,18,20)
MR_decl_label8(__Unify___transform_hlds__term_errors__termination_error_0_0, 5,7,30,32,70,11,13,18)
MR_decl_label8(__Unify___transform_hlds__term_errors__termination_error_0_0, 22,24,26,39,41,45,47,51)
MR_decl_label6(__Unify___transform_hlds__term_errors__termination_error_0_0, 55,57,60,66,71,1)
MR_decl_label3(__Unify___transform_hlds__term_errors__termination_error_context_0_0, 4,8,1)
MR_decl_label8(__Index___transform_hlds__term_errors__termination_error_0_0, 21,3,8,24,4,5,6,7)
MR_decl_label8(__Index___transform_hlds__term_errors__termination_error_0_0, 9,10,11,12,13,14,15,16)
MR_decl_label4(__Index___transform_hlds__term_errors__termination_error_0_0, 17,18,19,20)
MR_decl_label8(__Compare___transform_hlds__term_errors__termination_error_0_0, 4,5,6,7,10,13,41,44)
MR_decl_label8(__Compare___transform_hlds__term_errors__termination_error_0_0, 94,18,21,27,30,33,36,52)
MR_decl_label8(__Compare___transform_hlds__term_errors__termination_error_0_0, 55,60,63,68,73,76,81,90)
MR_decl_label2(__Compare___transform_hlds__term_errors__termination_error_0_0, 8,99)
MR_decl_label4(__Compare___transform_hlds__term_errors__termination_error_context_0_0, 3,2,5,21)
MR_decl_static(fn__transform_hlds__term_errors__this_file_0_0)
MR_decl_static(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0)
MR_decl_static(transform_hlds__term_errors__term_errors_var_bag_description_3_0)
MR_decl_static(transform_hlds__term_errors__description_5_0)
MR_decl_static(transform_hlds__term_errors__report_arg_size_errors_5_0)
MR_decl_static(transform_hlds__term_errors__output_term_errors_7_0)
MR_decl_static(transform_hlds__term_errors__output_term_error_7_0)
MR_def_extern_entry(transform_hlds__term_errors__report_term_errors_5_0)
MR_def_extern_entry(fn__transform_hlds__term_errors__is_indirect_error_1_0)
MR_def_extern_entry(fn__transform_hlds__term_errors__is_fatal_error_1_0)
MR_def_extern_entry(__Unify___transform_hlds__term_errors__termination_error_0_0)
MR_def_extern_entry(__Index___transform_hlds__term_errors__termination_error_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_errors__termination_error_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_errors__termination_error_context_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_errors__termination_error_context_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_errors__termination_error_contexts_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_errors__termination_error_contexts_0_0)
MR_decl_static(transform_hlds__term_errors__IntroducedFrom__pred__description__377__1_2_0)
MR_decl_static(transform_hlds__term_errors__IntroducedFrom__pred__description__539__1_2_0)
MR_decl_static(transform_hlds__term_errors__IntroducedFrom__pred__description__441__1_2_0)
MR_decl_static(transform_hlds__term_errors__IntroducedFrom__pred__description__402__1_2_0)
MR_decl_static(transform_hlds__term_errors__IntroducedFrom__pred__description__358__1_2_0)
MR_decl_static(transform_hlds__term_errors__IntroducedFrom__pred__description__420__1_2_0)
MR_decl_static(transform_hlds__term_errors__IntroducedFrom__pred__description__481__1_2_0)
MR_decl_static(transform_hlds__term_errors__IntroducedFrom__pred__description__485__1_2_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
MR_string_const("{}", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const(":", 1),
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_1 mercury_common_1[53] =
{
{
{
MR_CTOR1_ADDR(term, var),
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
MR_TAG_COMMON(3,2,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,4),
MR_TAG_COMMON(1,1,3)
}
},
{
{
MR_TAG_COMMON(3,2,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,6),
MR_TAG_COMMON(1,1,5)
}
},
{
{
MR_TAG_COMMON(1,1,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,8),
MR_TAG_COMMON(1,1,8)
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
MR_TAG_COMMON(3,2,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,12),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,14),
MR_TAG_COMMON(1,1,13)
}
},
{
{
MR_TAG_COMMON(3,2,13),
MR_TAG_COMMON(1,1,14)
}
},
{
{
MR_TAG_COMMON(3,2,16),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,17),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,20),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,19),
MR_TAG_COMMON(1,1,18)
}
},
{
{
MR_TAG_COMMON(3,2,18),
MR_TAG_COMMON(1,1,19)
}
},
{
{
MR_TAG_COMMON(3,2,21),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,23),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,22),
MR_TAG_COMMON(1,1,22)
}
},
{
{
MR_TAG_COMMON(3,2,24),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,25),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,26),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,28),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,27),
MR_TAG_COMMON(1,1,27)
}
},
{
{
MR_TAG_COMMON(3,2,31),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,30),
MR_TAG_COMMON(1,1,29)
}
},
{
{
MR_TAG_COMMON(3,2,33),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,34),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,5,0),
MR_TAG_COMMON(1,1,32)
}
},
{
{
MR_TAG_COMMON(3,2,35),
MR_TAG_COMMON(1,1,33)
}
},
{
{
MR_TAG_COMMON(1,5,1),
MR_TAG_COMMON(1,1,34)
}
},
{
{
MR_TAG_COMMON(3,2,36),
MR_TAG_COMMON(1,1,35)
}
},
{
{
MR_TAG_COMMON(3,2,37),
MR_TAG_COMMON(1,1,36)
}
},
{
{
MR_TAG_COMMON(3,2,39),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,38),
MR_TAG_COMMON(1,1,38)
}
},
{
{
MR_TAG_COMMON(3,2,41),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,40),
MR_TAG_COMMON(1,1,40)
}
},
{
{
MR_TAG_COMMON(3,2,42),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,45),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,44),
MR_TAG_COMMON(1,1,43)
}
},
{
{
MR_TAG_COMMON(3,2,46),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,47),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,48),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,50),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,49),
MR_TAG_COMMON(1,1,48)
}
},
{
{
MR_TAG_COMMON(3,2,51),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,52),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,53),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_2 mercury_common_2[54] =
{
{
4,
MR_string_const("calls", 5)
},
{
4,
MR_string_const("It", 2)
},
{
4,
MR_string_const("which could not be proven to terminate.", 39)
},
{
4,
MR_string_const("At the recursive call to", 24)
},
{
4,
MR_string_const("the arguments are", 17)
},
{
4,
MR_string_const("not guaranteed to decrease in size.", 35)
},
{
4,
MR_string_const("In the recursive cycle", 22)
},
{
4,
MR_string_const("through the calls to", 20)
},
{
4,
MR_string_const("It contains foreign code that", 29)
},
{
4,
MR_string_const("may make one or more calls back to Mercury.", 43)
},
{
4,
MR_string_const("There is a \140:- pragma does_not_terminate\' declaration for", 57)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("it.", 3)
},
{
4,
MR_string_const("makes one or more higher-order calls.", 37)
},
{
4,
MR_string_const("Each of these higher-order calls has a", 38)
},
{
4,
MR_string_const("termination constant of infinity.", 33)
},
{
4,
MR_string_const("with one or more higher order arguments.", 40)
},
{
4,
MR_string_const("It contains a higher order call.", 32)
},
{
4,
MR_string_const("It contains one or more", 23)
},
{
4,
MR_string_const("predicates and/or functions", 27)
},
{
4,
MR_string_const("imported from another module.", 29)
},
{
4,
MR_string_const("The termination pragmas are inconsistent.", 41)
},
{
4,
MR_string_const("with an unbounded increase", 26)
},
{
4,
MR_string_const("in the size of the input arguments.", 35)
},
{
4,
MR_string_const("which has a termination constant of infinity.", 45)
},
{
4,
MR_string_const("It is a builtin predicate.", 26)
},
{
4,
MR_string_const("It contains a typeclass method call.", 36)
},
{
4,
MR_string_const("The analysis was unable to form any constraints", 47)
},
{
4,
MR_string_const("between the arguments of this group of procedures.", 50)
},
{
4,
MR_string_const("The set of output supplier variables of", 39)
},
{
4,
MR_string_const("The set of", 10)
},
{
4,
MR_string_const("its output supplier variables", 29)
},
{
4,
MR_string_const("output supplier variables of", 28)
},
{
4,
MR_string_const("is not a subset of the head variables", 37)
},
{
4,
MR_string_const("declaration.", 12)
},
{
4,
MR_string_const("or", 2)
},
{
4,
MR_string_const("foreign language code included via a", 36)
},
{
4,
MR_string_const("It depends on the properties of", 31)
},
{
4,
MR_string_const("The solver found the constraints produced", 41)
},
{
4,
MR_string_const("by the analysis to be infeasible.", 33)
},
{
4,
MR_string_const("There are too many execution paths", 34)
},
{
4,
MR_string_const("for the analysis to process.", 28)
},
{
4,
MR_string_const("Termination constant of", 23)
},
{
4,
MR_string_const("set to infinity for the following", 33)
},
{
4,
MR_string_const("Termination constants", 21)
},
{
4,
MR_string_const("of the mutually recursive procedures", 36)
},
{
4,
MR_string_const("reason:", 7)
},
{
4,
MR_string_const("reasons:", 8)
},
{
4,
MR_string_const("Termination of", 14)
},
{
4,
MR_string_const("Termination of the ", 19)
},
{
4,
MR_string_const("mutually recursive procedures", 29)
},
{
4,
MR_string_const("not proven, for unknown reason(s).", 34)
},
{
4,
MR_string_const("not proven for the following reason:", 36)
},
{
4,
MR_string_const("not proven for the following reasons:", 37)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_7;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_8;
static const struct mercury_type_3 mercury_common_3[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_7,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_8,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_COMMON(3,6),
MR_ENTRY_AP(transform_hlds__term_errors__IntroducedFrom__pred__description__481__1_2_0),
0
},
{
MR_COMMON(3,7),
MR_ENTRY_AP(transform_hlds__term_errors__IntroducedFrom__pred__description__485__1_2_0),
0
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
MR_string_const("\140:- pragma foreign\'", 19)
},
{
MR_string_const("\140:- pragma c_code\'", 18)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(term, context)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_contexts_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_errors__termination_error_contexts_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_errors__termination_error_contexts_0_0)),
	"transform_hlds.term_errors",
	"termination_error_contexts",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_errors__field_types_termination_error_context_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_context_0_0 = {
	"termination_error_context",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_errors__field_types_termination_error_context_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_errors__du_stag_ordered_termination_error_context_0_0[] = {
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_context_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_errors__du_ptag_ordered_termination_error_context_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_errors__du_stag_ordered_termination_error_context_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_errors__du_name_ordered_termination_error_context_0[] = {
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_context_0_0
};

const MR_Integer mercury_data_transform_hlds__term_errors__functor_number_map_termination_error_context_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_errors__termination_error_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_errors__termination_error_context_0_0)),
	"transform_hlds.term_errors",
	"termination_error_context",
	{ (void *)mercury_data_transform_hlds__term_errors__du_name_ordered_termination_error_context_0 },
	{ (void *)mercury_data_transform_hlds__term_errors__du_ptag_ordered_termination_error_context_0 },
	1,
	4,
	mercury_data_transform_hlds__term_errors__functor_number_map_termination_error_context_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_0 = {
	"pragma_foreign_code",
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

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_1 = {
	"imported_pred",
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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_errors__field_types_termination_error_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_2 = {
	"can_loop_proc_called",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_errors__field_types_termination_error_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_errors__field_types_termination_error_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_3 = {
	"horder_args",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_errors__field_types_termination_error_0_3,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_4 = {
	"horder_call",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_5 = {
	"method_call",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_errors__field_types_termination_error_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_6 = {
	"inf_termination_const",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	6,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_errors__field_types_termination_error_0_6,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_errors__field_types_termination_error_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_7 = {
	"ho_inf_termination_const",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	7,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_errors__field_types_termination_error_0_7,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bag__type_ctor_info_bag_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_bag__type_ctor_info_bag_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_errors__field_types_termination_error_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_8 = {
	"not_subset",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	8,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_errors__field_types_termination_error_0_8,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_errors__field_types_termination_error_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_9 = {
	"inf_call",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	9,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_errors__field_types_termination_error_0_9,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_errors__field_types_termination_error_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_10 = {
	"cycle",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	10,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_errors__field_types_termination_error_0_10,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_11 = {
	"no_eqns",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	11,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_12 = {
	"too_many_paths",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	12,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_13 = {
	"solver_failed",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	13,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_errors__field_types_termination_error_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_14 = {
	"is_builtin",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	14,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_errors__field_types_termination_error_0_14,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_errors__field_types_termination_error_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_15 = {
	"does_not_term_pragma",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	15,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_errors__field_types_termination_error_0_15,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_16 = {
	"inconsistent_annotations",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	16,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_errors__field_types_termination_error_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_17 = {
	"does_not_term_foreign",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	17,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_errors__field_types_termination_error_0_17,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_errors__du_stag_ordered_termination_error_0_0[] = {
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_0,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_1,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_4,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_5,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_11,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_12,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_13,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_16

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_errors__du_stag_ordered_termination_error_0_1[] = {
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_2

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_errors__du_stag_ordered_termination_error_0_2[] = {
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_3

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_errors__du_stag_ordered_termination_error_0_3[] = {
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_6,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_7,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_8,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_9,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_10,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_14,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_15,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_17

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_errors__du_ptag_ordered_termination_error_0[] = {
	{ 8, MR_SECTAG_LOCAL,
	mercury_data_transform_hlds__term_errors__du_stag_ordered_termination_error_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_errors__du_stag_ordered_termination_error_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_errors__du_stag_ordered_termination_error_0_2 },
	{ 8, MR_SECTAG_REMOTE,
	mercury_data_transform_hlds__term_errors__du_stag_ordered_termination_error_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_errors__du_name_ordered_termination_error_0[] = {
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_2,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_10,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_17,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_15,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_7,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_3,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_4,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_1,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_16,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_9,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_6,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_14,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_5,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_11,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_8,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_0,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_13,
	&mercury_data_transform_hlds__term_errors__du_functor_desc_termination_error_0_12
};

const MR_Integer mercury_data_transform_hlds__term_errors__functor_number_map_termination_error_0[] = {
	15,
	7,
	0,
	5,
	6,
	12,
	10,
	4,
	14,
	9,
	1,
	13,
	17,
	16,
	11,
	3,
	8,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_errors__termination_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_errors__termination_error_0_0)),
	"transform_hlds.term_errors",
	"termination_error",
	{ (void *)mercury_data_transform_hlds__term_errors__du_name_ordered_termination_error_0 },
	{ (void *)mercury_data_transform_hlds__term_errors__du_ptag_ordered_termination_error_0 },
	18,
	4,
	mercury_data_transform_hlds__term_errors__functor_number_map_termination_error_0
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_errors",
"transform_hlds.term_errors",
"lambda_term_errors_m_377",
2,
0
},
"transform_hlds.term_errors",
"term_errors.m",
377,
"d5;c7;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_errors",
"transform_hlds.term_errors",
"lambda_term_errors_m_539",
2,
0
},
"transform_hlds.term_errors",
"term_errors.m",
539,
"d16;c10;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_3 = {
{
MR_PREDICATE,
"transform_hlds.term_errors",
"transform_hlds.term_errors",
"lambda_term_errors_m_441",
2,
0
},
"transform_hlds.term_errors",
"term_errors.m",
441,
"d9;c7;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_4 = {
{
MR_PREDICATE,
"transform_hlds.term_errors",
"transform_hlds.term_errors",
"lambda_term_errors_m_402",
2,
0
},
"transform_hlds.term_errors",
"term_errors.m",
402,
"d7;c7;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_5 = {
{
MR_PREDICATE,
"transform_hlds.term_errors",
"transform_hlds.term_errors",
"lambda_term_errors_m_358",
2,
0
},
"transform_hlds.term_errors",
"term_errors.m",
358,
"d4;c7;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_6 = {
{
MR_PREDICATE,
"transform_hlds.term_errors",
"transform_hlds.term_errors",
"lambda_term_errors_m_420",
2,
0
},
"transform_hlds.term_errors",
"term_errors.m",
420,
"d8;c7;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_7 = {
{
MR_PREDICATE,
"transform_hlds.term_errors",
"transform_hlds.term_errors",
"lambda_term_errors_m_481",
2,
0
},
"transform_hlds.term_errors",
"term_errors.m",
481,
"d10;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_errors__description_5_0_8 = {
{
MR_PREDICATE,
"transform_hlds.term_errors",
"transform_hlds.term_errors",
"lambda_term_errors_m_485",
2,
0
},
"transform_hlds.term_errors",
"term_errors.m",
485,
"d10;c18;"
};


MR_BEGIN_MODULE(transform_hlds__term_errors_module0)
	MR_init_entry1(fn__transform_hlds__term_errors__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_errors__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_errors.m", 13);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(string__int_to_string_2_0);

MR_BEGIN_MODULE(transform_hlds__term_errors_module1)
	MR_init_entry1(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0);
	MR_init_label8(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0,37,5,7,8,10,11,16,15)
	MR_init_label1(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0_i37);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_proceed();
MR_def_label(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		transform_hlds__term_errors__term_errors_var_bag_description_2_4_0_i5);
MR_def_label(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0_i10);
	}
	MR_r2 = (MR_Word) MR_string_const("*", 1);
	MR_np_call_localret_ent(string__append_3_2,
		transform_hlds__term_errors__term_errors_var_bag_description_2_4_0_i7);
MR_def_label(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		transform_hlds__term_errors__term_errors_var_bag_description_2_4_0_i8);
MR_def_label(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		transform_hlds__term_errors__term_errors_var_bag_description_2_4_0_i10);
MR_def_label(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("{", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		transform_hlds__term_errors__term_errors_var_bag_description_2_4_0_i11);
MR_def_label(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0_i15);
	}
	MR_r2 = (MR_Word) MR_string_const("}.", 2);
	MR_np_call_localret_ent(string__append_3_2,
		transform_hlds__term_errors__term_errors_var_bag_description_2_4_0_i16);
MR_def_label(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0,
		transform_hlds__term_errors__term_errors_var_bag_description_2_4_0_i18);
MR_def_label(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0,18)
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

MR_decl_entry(bag__to_assoc_list_2_0);

MR_BEGIN_MODULE(transform_hlds__term_errors_module2)
	MR_init_entry1(transform_hlds__term_errors__term_errors_var_bag_description_3_0);
	MR_init_label1(transform_hlds__term_errors__term_errors_var_bag_description_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__term_errors_var_bag_description_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bag__to_assoc_list_2_0,
		transform_hlds__term_errors__term_errors_var_bag_description_3_0_i3);
MR_def_label(transform_hlds__term_errors__term_errors_var_bag_description_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(transform_hlds__term_errors__term_errors_var_bag_description_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_error_util__describe_one_proc_name_3_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_call_site_3_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_several_call_sites_3_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(transform_hlds__term_errors_module3)
	MR_init_entry1(transform_hlds__term_errors__description_5_0);
	MR_init_label8(transform_hlds__term_errors__description_5_0,228,296,6,5,9,10,14,18)
	MR_init_label8(transform_hlds__term_errors__description_5_0,19,297,92,91,95,96,100,104)
	MR_init_label8(transform_hlds__term_errors__description_5_0,105,231,302,25,22,37,47,303)
	MR_init_label8(transform_hlds__term_errors__description_5_0,57,60,56,62,63,299,70,69)
	MR_init_label8(transform_hlds__term_errors__description_5_0,78,79,107,110,117,301,123,122)
	MR_init_label8(transform_hlds__term_errors__description_5_0,126,127,131,137,138,298,144,143)
	MR_init_label8(transform_hlds__term_errors__description_5_0,147,148,152,156,157,158,159,162)
	MR_init_label8(transform_hlds__term_errors__description_5_0,165,300,173,172,178,176,184,190)
	MR_init_label8(transform_hlds__term_errors__description_5_0,191,192,194,197,199,204,205,218)
	MR_init_label1(transform_hlds__term_errors__description_5_0,223)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__description_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i228) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i296) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i297) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i231));
MR_def_label(transform_hlds__term_errors__description_5_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i205) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i110) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i107) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i162) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i165) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i223) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i218) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i117));
MR_def_label(transform_hlds__term_errors__description_5_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__description_5_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i6);
MR_def_label(transform_hlds__term_errors__description_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i14);
MR_def_label(transform_hlds__term_errors__description_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_errors__IntroducedFrom__pred__description__377__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_errors__this_file_0_0,
		transform_hlds__term_errors__description_5_0_i9);
MR_def_label(transform_hlds__term_errors__description_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("description (can_loop_proc_called): caller outside this SCC", 59);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__term_errors__description_5_0_i10);
MR_def_label(transform_hlds__term_errors__description_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i14);
MR_def_label(transform_hlds__term_errors__description_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i18);
MR_def_label(transform_hlds__term_errors__description_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i19);
MR_def_label(transform_hlds__term_errors__description_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i204);
MR_def_label(transform_hlds__term_errors__description_5_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__description_5_0_i91);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i92);
MR_def_label(transform_hlds__term_errors__description_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i100);
MR_def_label(transform_hlds__term_errors__description_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_errors__IntroducedFrom__pred__description__402__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(2, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_errors__this_file_0_0,
		transform_hlds__term_errors__description_5_0_i95);
MR_def_label(transform_hlds__term_errors__description_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("description (horder_args): caller outside this SCC", 50);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__term_errors__description_5_0_i96);
MR_def_label(transform_hlds__term_errors__description_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i100);
MR_def_label(transform_hlds__term_errors__description_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,16);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i104);
MR_def_label(transform_hlds__term_errors__description_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i105);
MR_def_label(transform_hlds__term_errors__description_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i204);
MR_def_label(transform_hlds__term_errors__description_5_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i298) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i299) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i300) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i301) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i302) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i159) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i303) MR_AND
		MR_LABEL_AP(transform_hlds__term_errors__description_5_0_i47));
MR_def_label(transform_hlds__term_errors__description_5_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__description_5_0_i22);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__description_5_0_i22);
	}
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_call_site_3_0,
		transform_hlds__term_errors__description_5_0_i25);
MR_def_label(transform_hlds__term_errors__description_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,2,3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i204);
MR_def_label(transform_hlds__term_errors__description_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_several_call_sites_3_0,
		transform_hlds__term_errors__description_5_0_i37);
MR_def_label(transform_hlds__term_errors__description_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__term_errors__description_5_0_i204);
MR_def_label(transform_hlds__term_errors__description_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,9);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_errors__description_5_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__description_5_0_i56);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		transform_hlds__term_errors__description_5_0_i57);
MR_def_label(transform_hlds__term_errors__description_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,11);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i60);
MR_def_label(transform_hlds__term_errors__description_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_errors__description_5_0_i204);
MR_def_label(transform_hlds__term_errors__description_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_errors__IntroducedFrom__pred__description__539__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_ctfield(1, MR_r2, 0), 0);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,10);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_errors__this_file_0_0,
		transform_hlds__term_errors__description_5_0_i62);
MR_def_label(transform_hlds__term_errors__description_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("does not terminate pragma outside this SCC", 42);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__term_errors__description_5_0_i63);
MR_def_label(transform_hlds__term_errors__description_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,12);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_errors__description_5_0_i204);
MR_def_label(transform_hlds__term_errors__description_5_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__description_5_0_i69);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i70);
MR_def_label(transform_hlds__term_errors__description_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i204);
MR_def_label(transform_hlds__term_errors__description_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_errors__IntroducedFrom__pred__description__441__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_errors__this_file_0_0,
		transform_hlds__term_errors__description_5_0_i78);
MR_def_label(transform_hlds__term_errors__description_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("description (ho_info_termination_const): caller outside this SCC", 64);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__term_errors__description_5_0_i79);
MR_def_label(transform_hlds__term_errors__description_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i204);
MR_def_label(transform_hlds__term_errors__description_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,17);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_errors__description_5_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,20);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_errors__description_5_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,21);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_errors__description_5_0,301)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__description_5_0_i122);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i123);
MR_def_label(transform_hlds__term_errors__description_5_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i131);
MR_def_label(transform_hlds__term_errors__description_5_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_errors__IntroducedFrom__pred__description__358__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_errors__this_file_0_0,
		transform_hlds__term_errors__description_5_0_i126);
MR_def_label(transform_hlds__term_errors__description_5_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("description (inf_call): caller outside this SCC", 47);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__term_errors__description_5_0_i127);
MR_def_label(transform_hlds__term_errors__description_5_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i131);
MR_def_label(transform_hlds__term_errors__description_5_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,23);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i137);
MR_def_label(transform_hlds__term_errors__description_5_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i138);
MR_def_label(transform_hlds__term_errors__description_5_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i204);
MR_def_label(transform_hlds__term_errors__description_5_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_sv(2) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__description_5_0_i143);
	}
	MR_tempr4 = MR_r3;
	MR_sv(1) = MR_tempr4;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr4;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i144);
MR_def_label(transform_hlds__term_errors__description_5_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i152);
MR_def_label(transform_hlds__term_errors__description_5_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_errors__IntroducedFrom__pred__description__420__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_errors__this_file_0_0,
		transform_hlds__term_errors__description_5_0_i147);
MR_def_label(transform_hlds__term_errors__description_5_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("description (inf_termination_const): caller outside this SCC", 60);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__term_errors__description_5_0_i148);
MR_def_label(transform_hlds__term_errors__description_5_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i152);
MR_def_label(transform_hlds__term_errors__description_5_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,24);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i156);
MR_def_label(transform_hlds__term_errors__description_5_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i157);
MR_def_label(transform_hlds__term_errors__description_5_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__description_5_0_i158);
MR_def_label(transform_hlds__term_errors__description_5_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__term_errors__description_5_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,25);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_errors__description_5_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,26);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_errors__description_5_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_errors__description_5_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__description_5_0_i172);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i173);
MR_def_label(transform_hlds__term_errors__description_5_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,2,29);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__term_errors__description_5_0_i190);
MR_def_label(transform_hlds__term_errors__description_5_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		transform_hlds__term_errors__description_5_0_i178);
MR_def_label(transform_hlds__term_errors__description_5_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_errors__description_5_0_i176);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,30);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__term_errors__description_5_0_i190);
MR_def_label(transform_hlds__term_errors__description_5_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__description_5_0_i184);
MR_def_label(transform_hlds__term_errors__description_5_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,2,32);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,30);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__term_errors__description_5_0_i190);
MR_def_label(transform_hlds__term_errors__description_5_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__term_errors__description_5_0_i191);
MR_def_label(transform_hlds__term_errors__description_5_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__term_errors__term_errors_var_bag_description_3_0,
		transform_hlds__term_errors__description_5_0_i192);
MR_def_label(transform_hlds__term_errors__description_5_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_errors__description_5_0_i194);
MR_def_label(transform_hlds__term_errors__description_5_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,31);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_errors__term_errors_var_bag_description_3_0,
		transform_hlds__term_errors__description_5_0_i197);
MR_def_label(transform_hlds__term_errors__description_5_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_errors__description_5_0_i199);
MR_def_label(transform_hlds__term_errors__description_5_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__term_errors__description_5_0_i204);
MR_def_label(transform_hlds__term_errors__description_5_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__term_errors__description_5_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,37);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_errors__description_5_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,39);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_errors__description_5_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,41);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_util__get_context_from_scc_3_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_several_proc_names_3_0);
MR_decl_entry(parse_tree__error_util__write_error_pieces_5_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__term_errors_module4)
	MR_init_entry1(transform_hlds__term_errors__report_arg_size_errors_5_0);
	MR_init_label8(transform_hlds__term_errors__report_arg_size_errors_5_0,2,8,9,3,16,17,19,27)
	MR_init_label6(transform_hlds__term_errors__report_arg_size_errors_5_0,28,23,33,34,36,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__report_arg_size_errors_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_util__get_context_from_scc_3_0,
		transform_hlds__term_errors__report_arg_size_errors_5_0_i2);
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__report_arg_size_errors_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__report_arg_size_errors_5_0_i3);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,42);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__report_arg_size_errors_5_0_i8);
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__report_arg_size_errors_5_0_i9);
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,43);
	MR_GOTO_LAB(transform_hlds__term_errors__report_arg_size_errors_5_0_i19);
	}
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,1,44);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_several_proc_names_3_0,
		transform_hlds__term_errors__report_arg_size_errors_5_0_i16);
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__report_arg_size_errors_5_0_i17);
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,43);
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__report_arg_size_errors_5_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__report_arg_size_errors_5_0_i23);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,45);
	MR_sv(2) = MR_ctfield(1, MR_sv(2), 0);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_errors__report_arg_size_errors_5_0_i27);
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_5_0,
		transform_hlds__term_errors__report_arg_size_errors_5_0_i28);
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__term_errors__output_term_error_7_0);
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,46);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_errors__report_arg_size_errors_5_0_i33);
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_5_0,
		transform_hlds__term_errors__report_arg_size_errors_5_0_i34);
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__term_errors__output_term_error_7_0,
		transform_hlds__term_errors__report_arg_size_errors_5_0_i36);
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__term_errors__output_term_errors_7_0);
MR_def_label(transform_hlds__term_errors__report_arg_size_errors_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_errors.m", 13);
	MR_r2 = (MR_Word) MR_string_const("empty list of errors", 20);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_errors_module5)
	MR_init_entry1(transform_hlds__term_errors__output_term_errors_7_0);
	MR_init_label3(transform_hlds__term_errors__output_term_errors_7_0,11,5,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__output_term_errors_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_errors__output_term_errors_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__output_term_errors_7_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_errors__output_term_error_7_0,
		transform_hlds__term_errors__output_term_errors_7_0_i5);
MR_def_label(transform_hlds__term_errors__output_term_errors_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__term_errors__output_term_errors_7_0_i11);
MR_def_label(transform_hlds__term_errors__output_term_errors_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);
MR_decl_entry(transform_hlds__term_util__lookup_proc_arg_size_info_3_0);

MR_BEGIN_MODULE(transform_hlds__term_errors_module6)
	MR_init_entry1(transform_hlds__term_errors__output_term_error_7_0);
	MR_init_label8(transform_hlds__term_errors__output_term_error_7_0,2,4,5,9,12,15,16,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__output_term_error_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_errors__description_5_0,
		transform_hlds__term_errors__output_term_error_7_0_i2);
MR_def_label(transform_hlds__term_errors__output_term_error_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__output_term_error_7_0_i4);
	}
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_5_0,
		transform_hlds__term_errors__output_term_error_7_0_i12);
MR_def_label(transform_hlds__term_errors__output_term_error_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		transform_hlds__term_errors__output_term_error_7_0_i5);
MR_def_label(transform_hlds__term_errors__output_term_error_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Reason ", 7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		transform_hlds__term_errors__output_term_error_7_0_i9);
MR_def_label(transform_hlds__term_errors__output_term_error_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_5_0,
		transform_hlds__term_errors__output_term_error_7_0_i12);
MR_def_label(transform_hlds__term_errors__output_term_error_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__output_term_error_7_0_i13);
	}
	MR_sv(1) = MR_ctfield(1, MR_sv(5), 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__term_util__lookup_proc_arg_size_info_3_0,
		transform_hlds__term_errors__output_term_error_7_0_i15);
MR_def_label(transform_hlds__term_errors__output_term_error_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__output_term_error_7_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__term_errors__output_term_error_7_0_i16);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__term_errors__report_arg_size_errors_5_0);
	}
MR_def_label(transform_hlds__term_errors__output_term_error_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_errors.m", 13);
	MR_r2 = (MR_Word) MR_string_const("inf arg size procedure does not have inf arg size", 49);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__term_errors__output_term_error_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_errors_module7)
	MR_init_entry1(transform_hlds__term_errors__report_term_errors_5_0);
	MR_init_label8(transform_hlds__term_errors__report_term_errors_5_0,2,8,9,3,15,16,17,22)
	MR_init_label7(transform_hlds__term_errors__report_term_errors_5_0,19,28,29,25,33,34,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_errors__report_term_errors_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_util__get_context_from_scc_3_0,
		transform_hlds__term_errors__report_term_errors_5_0_i2);
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__report_term_errors_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__report_term_errors_5_0_i3);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,47);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__term_errors__report_term_errors_5_0_i8);
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__report_term_errors_5_0_i9);
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_r2 = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__term_errors__report_term_errors_5_0_i17);
	}
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,1,49);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_several_proc_names_3_0,
		transform_hlds__term_errors__report_term_errors_5_0_i15);
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_errors__report_term_errors_5_0_i16);
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__report_term_errors_5_0_i19);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,50);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_errors__report_term_errors_5_0_i22);
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__error_util__write_error_pieces_5_0);
	}
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_errors__report_term_errors_5_0_i25);
	}
	MR_sv(2) = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,51);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_errors__report_term_errors_5_0_i28);
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_5_0,
		transform_hlds__term_errors__report_term_errors_5_0_i29);
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__term_errors__output_term_error_7_0);
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,52);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__term_errors__report_term_errors_5_0_i33);
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_5_0,
		transform_hlds__term_errors__report_term_errors_5_0_i34);
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__term_errors__output_term_error_7_0,
		transform_hlds__term_errors__report_term_errors_5_0_i36);
MR_def_label(transform_hlds__term_errors__report_term_errors_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__term_errors__output_term_errors_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_errors_module8)
	MR_init_entry1(fn__transform_hlds__term_errors__is_indirect_error_1_0);
	MR_init_label4(fn__transform_hlds__term_errors__is_indirect_error_1_0,21,24,18,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_errors__is_indirect_error_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_indirect_error_1_0_i21) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_indirect_error_1_0_i18) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_indirect_error_1_0_i18) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_indirect_error_1_0_i24));
MR_def_label(fn__transform_hlds__term_errors__is_indirect_error_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_indirect_error_1_0_i18) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_indirect_error_1_0_i18) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_indirect_error_1_0_i18) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_indirect_error_1_0_i18) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_indirect_error_1_0_i20) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_indirect_error_1_0_i20) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_indirect_error_1_0_i20) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_indirect_error_1_0_i20));
MR_def_label(fn__transform_hlds__term_errors__is_indirect_error_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),6)) {
		MR_GOTO_LAB(fn__transform_hlds__term_errors__is_indirect_error_1_0_i20);
	}
MR_def_label(fn__transform_hlds__term_errors__is_indirect_error_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__transform_hlds__term_errors__is_indirect_error_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_errors_module9)
	MR_init_entry1(fn__transform_hlds__term_errors__is_fatal_error_1_0);
	MR_init_label3(fn__transform_hlds__term_errors__is_fatal_error_1_0,21,15,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_errors__is_fatal_error_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_fatal_error_1_0_i21) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_fatal_error_1_0_i20) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_fatal_error_1_0_i15) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_fatal_error_1_0_i20));
MR_def_label(fn__transform_hlds__term_errors__is_fatal_error_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_fatal_error_1_0_i20) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_fatal_error_1_0_i15) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_fatal_error_1_0_i15) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_fatal_error_1_0_i15) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_fatal_error_1_0_i20) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_fatal_error_1_0_i20) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_fatal_error_1_0_i20) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_errors__is_fatal_error_1_0_i20));
MR_def_label(fn__transform_hlds__term_errors__is_fatal_error_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__transform_hlds__term_errors__is_fatal_error_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___bag__bag_1_0);

MR_BEGIN_MODULE(transform_hlds__term_errors_module10)
	MR_init_entry1(__Unify___transform_hlds__term_errors__termination_error_0_0);
	MR_init_label8(__Unify___transform_hlds__term_errors__termination_error_0_0,5,7,30,32,70,11,13,18)
	MR_init_label8(__Unify___transform_hlds__term_errors__termination_error_0_0,22,24,26,39,41,45,47,51)
	MR_init_label6(__Unify___transform_hlds__term_errors__termination_error_0_0,55,57,60,66,71,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_errors__termination_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i71);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___transform_hlds__term_errors__termination_error_0_0_i66) MR_AND
		MR_LABEL_AP(__Unify___transform_hlds__term_errors__termination_error_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___transform_hlds__term_errors__termination_error_0_0_i30) MR_AND
		MR_LABEL_AP(__Unify___transform_hlds__term_errors__termination_error_0_0_i70));
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_errors__termination_error_0_0_i7);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 1);
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_errors__termination_error_0_0_i32);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___transform_hlds__term_errors__termination_error_0_0_i45) MR_AND
		MR_LABEL_AP(__Unify___transform_hlds__term_errors__termination_error_0_0_i24) MR_AND
		MR_LABEL_AP(__Unify___transform_hlds__term_errors__termination_error_0_0_i55) MR_AND
		MR_LABEL_AP(__Unify___transform_hlds__term_errors__termination_error_0_0_i39) MR_AND
		MR_LABEL_AP(__Unify___transform_hlds__term_errors__termination_error_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___transform_hlds__term_errors__termination_error_0_0_i51) MR_AND
		MR_LABEL_AP(__Unify___transform_hlds__term_errors__termination_error_0_0_i22) MR_AND
		MR_LABEL_AP(__Unify___transform_hlds__term_errors__termination_error_0_0_i18));
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_errors__termination_error_0_0_i13);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_errors__termination_error_0_0_i26);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_errors__termination_error_0_0_i41);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_errors__termination_error_0_0_i47);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__term_errors__termination_error_0_0_i57);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Unify___bag__bag_1_0,
		__Unify___transform_hlds__term_errors__termination_error_0_0_i60);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___bag__bag_1_0);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_errors_module11)
	MR_init_entry1(__Index___transform_hlds__term_errors__termination_error_0_0);
	MR_init_label8(__Index___transform_hlds__term_errors__termination_error_0_0,21,3,8,24,4,5,6,7)
	MR_init_label8(__Index___transform_hlds__term_errors__termination_error_0_0,9,10,11,12,13,14,15,16)
	MR_init_label4(__Index___transform_hlds__term_errors__termination_error_0_0,17,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___transform_hlds__term_errors__termination_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i3) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i24));
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i11));
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___transform_hlds__term_errors__termination_error_0_0_i5));
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___transform_hlds__term_errors__termination_error_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___bag__bag_1_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(transform_hlds__term_errors_module12)
	MR_init_entry1(__Compare___transform_hlds__term_errors__termination_error_0_0);
	MR_init_label8(__Compare___transform_hlds__term_errors__termination_error_0_0,4,5,6,7,10,13,41,44)
	MR_init_label8(__Compare___transform_hlds__term_errors__termination_error_0_0,94,18,21,27,30,33,36,52)
	MR_init_label8(__Compare___transform_hlds__term_errors__termination_error_0_0,55,60,63,68,73,76,81,90)
	MR_init_label2(__Compare___transform_hlds__term_errors__termination_error_0_0,8,99)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_errors__termination_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i90);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___transform_hlds__term_errors__termination_error_0_0,
		__Compare___transform_hlds__term_errors__termination_error_0_0_i4);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___transform_hlds__term_errors__termination_error_0_0,
		__Compare___transform_hlds__term_errors__termination_error_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___transform_hlds__term_errors__termination_error_0_0_i90) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__term_errors__termination_error_0_0_i10) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__term_errors__termination_error_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__term_errors__termination_error_0_0_i94));
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_errors__termination_error_0_0_i13);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i99);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_errors__termination_error_0_0_i44);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i99);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___transform_hlds__term_errors__termination_error_0_0_i60) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__term_errors__termination_error_0_0_i33) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__term_errors__termination_error_0_0_i73) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__term_errors__termination_error_0_0_i52) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__term_errors__termination_error_0_0_i18) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__term_errors__termination_error_0_0_i68) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__term_errors__termination_error_0_0_i30) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__term_errors__termination_error_0_0_i27));
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_errors__termination_error_0_0_i21);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i99);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_errors__termination_error_0_0_i36);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i99);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_errors__termination_error_0_0_i55);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i99);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_errors__termination_error_0_0_i63);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i99);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__term_errors__termination_error_0_0_i76);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i99);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___bag__bag_1_0,
		__Compare___transform_hlds__term_errors__termination_error_0_0_i81);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_0_0_i99);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___bag__bag_1_0);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(transform_hlds__term_errors_module13)
	MR_init_entry1(__Unify___transform_hlds__term_errors__termination_error_context_0_0);
	MR_init_label3(__Unify___transform_hlds__term_errors__termination_error_context_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_errors__termination_error_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_context_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___transform_hlds__term_errors__termination_error_0_0,
		__Unify___transform_hlds__term_errors__termination_error_context_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_context_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_errors__termination_error_context_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_context_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_errors__termination_error_context_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(transform_hlds__term_errors_module14)
	MR_init_entry1(__Compare___transform_hlds__term_errors__termination_error_context_0_0);
	MR_init_label4(__Compare___transform_hlds__term_errors__termination_error_context_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_errors__termination_error_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_context_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_context_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_context_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_context_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___transform_hlds__term_errors__termination_error_0_0,
		__Compare___transform_hlds__term_errors__termination_error_context_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_context_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_errors__termination_error_context_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___transform_hlds__term_errors__termination_error_context_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_errors_module15)
	MR_init_entry1(__Unify___transform_hlds__term_errors__termination_error_contexts_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_errors__termination_error_contexts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error_context);
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


MR_BEGIN_MODULE(transform_hlds__term_errors_module16)
	MR_init_entry1(__Compare___transform_hlds__term_errors__termination_error_contexts_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_errors__termination_error_contexts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error_context);
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


MR_BEGIN_MODULE(transform_hlds__term_errors_module17)
	MR_init_entry1(transform_hlds__term_errors__IntroducedFrom__pred__description__377__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__IntroducedFrom__pred__description__377__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_errors_module18)
	MR_init_entry1(transform_hlds__term_errors__IntroducedFrom__pred__description__539__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__IntroducedFrom__pred__description__539__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_errors_module19)
	MR_init_entry1(transform_hlds__term_errors__IntroducedFrom__pred__description__441__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__IntroducedFrom__pred__description__441__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_errors_module20)
	MR_init_entry1(transform_hlds__term_errors__IntroducedFrom__pred__description__402__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__IntroducedFrom__pred__description__402__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_errors_module21)
	MR_init_entry1(transform_hlds__term_errors__IntroducedFrom__pred__description__358__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__IntroducedFrom__pred__description__358__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_errors_module22)
	MR_init_entry1(transform_hlds__term_errors__IntroducedFrom__pred__description__420__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__IntroducedFrom__pred__description__420__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_errors_module23)
	MR_init_entry1(transform_hlds__term_errors__IntroducedFrom__pred__description__481__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__IntroducedFrom__pred__description__481__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_errors_module24)
	MR_init_entry1(transform_hlds__term_errors__IntroducedFrom__pred__description__485__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_errors__IntroducedFrom__pred__description__485__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__term_errors_maybe_bunch_0(void)
{
	transform_hlds__term_errors_module0();
	transform_hlds__term_errors_module1();
	transform_hlds__term_errors_module2();
	transform_hlds__term_errors_module3();
	transform_hlds__term_errors_module4();
	transform_hlds__term_errors_module5();
	transform_hlds__term_errors_module6();
	transform_hlds__term_errors_module7();
	transform_hlds__term_errors_module8();
	transform_hlds__term_errors_module9();
	transform_hlds__term_errors_module10();
	transform_hlds__term_errors_module11();
	transform_hlds__term_errors_module12();
	transform_hlds__term_errors_module13();
	transform_hlds__term_errors_module14();
	transform_hlds__term_errors_module15();
	transform_hlds__term_errors_module16();
	transform_hlds__term_errors_module17();
	transform_hlds__term_errors_module18();
	transform_hlds__term_errors_module19();
	transform_hlds__term_errors_module20();
	transform_hlds__term_errors_module21();
	transform_hlds__term_errors_module22();
	transform_hlds__term_errors_module23();
	transform_hlds__term_errors_module24();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_errors__init(void);
void mercury__transform_hlds__term_errors__init_type_tables(void);
void mercury__transform_hlds__term_errors__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_errors__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_errors__init_complexity_procs(void);
#endif

void mercury__transform_hlds__term_errors__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__term_errors_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_contexts_0,
		transform_hlds__term_errors__termination_error_contexts_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0,
		transform_hlds__term_errors__termination_error_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0,
		transform_hlds__term_errors__termination_error_0_0);
	mercury__transform_hlds__term_errors__init_debugger();
}

void mercury__transform_hlds__term_errors__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_contexts_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0);
	}
}


void mercury__transform_hlds__term_errors__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__term_errors__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__term_errors);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_errors__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
