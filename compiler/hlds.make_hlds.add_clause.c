/*
** Automatically generated from `add_clause.m'
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
INIT mercury__hlds__make_hlds__add_clause__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "hlds.make_hlds.add_clause.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "hlds.make_hlds.add_clause.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "hlds.make_hlds.add_clause.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "hlds.make_hlds.add_clause.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.make_hlds.add_clause.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "hlds.make_hlds.add_clause.c"
#line 49 "hlds.make_hlds.add_clause.c"
#include "hlds.make_hlds.add_clause.mh"

#line 52 "hlds.make_hlds.add_clause.c"
#line 53 "hlds.make_hlds.add_clause.c"
#ifndef HLDS__MAKE_HLDS__ADD_CLAUSE_DECL_GUARD
#define HLDS__MAKE_HLDS__ADD_CLAUSE_DECL_GUARD

#line 57 "hlds.make_hlds.add_clause.c"
#line 58 "hlds.make_hlds.add_clause.c"

#endif
#line 61 "hlds.make_hlds.add_clause.c"

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
	MR_Integer f1;
	MR_String f2;
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
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Integer f1[2];
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
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
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
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_hlds__add_clause__type_ctor_info_mode_annotations_0;
MR_decl_label10(hlds__make_hlds__add_clause__add_clause_transform_20_0, 2,3,4,7,5,9,10,12,14,17)
MR_decl_label4(hlds__make_hlds__add_clause__add_clause_transform_20_0, 18,19,20,21)
MR_decl_label10(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0, 2,4,5,3,6,7,8,9,10,11)
MR_decl_label10(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0, 15,14,18,19,13,21,24,26,27,29)
MR_decl_label6(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0, 30,32,35,20,36,37)
MR_decl_label10(hlds__make_hlds__add_clause__get_mode_annotations_4_0, 117,12,13,4,5,16,20,18,23,24)
MR_decl_label4(hlds__make_hlds__add_clause__get_mode_annotations_4_0, 47,28,30,32)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 4,2,7,8,11,12,13,14,16,19)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 23,24,25,26,27,28,29,30,21,15)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 35,36,33,39,41,42,43,44,45,46)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 145,48,49,50,51,52,53,54,55,56)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 57,58,60,47,64,65,66,67,62,68)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 74,75,71,72,96,98,99,101,94,106)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 107,108,109,110,111,112,115,117,118,119)
MR_decl_label10(hlds__make_hlds__add_clause__module_add_clause_15_0, 120,123,124,125,122,126,127,128,129,132)
MR_decl_label3(hlds__make_hlds__add_clause__module_add_clause_15_0, 133,70,137)
MR_decl_label10(hlds__make_hlds__add_clause__select_applicable_modes_15_0, 2,3,6,5,21,19,18,25,27,28)
MR_decl_label7(hlds__make_hlds__add_clause__select_applicable_modes_15_0, 29,30,31,32,35,34,39)
MR_decl_label10(hlds__make_hlds__add_clause__undeclared_mode_error_8_0, 2,3,4,5,6,8,18,19,20,22)
MR_decl_label8(hlds__make_hlds__add_clause__undeclared_mode_error_8_0, 41,44,45,36,59,60,63,64)
MR_decl_label3(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__519__1_1_0, 17,3,1)
MR_decl_label1(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0, 3)
MR_decl_label5(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0, 5,6,18,7,1)
MR_decl_label10(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0, 7,8,5,12,13,10,17,18,54,15)
MR_decl_label5(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0, 21,40,22,41,23)
MR_decl_static(hlds__make_hlds__add_clause__add_clause_transform_20_0)
MR_def_extern_entry(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0)
MR_decl_static(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0)
MR_decl_static(hlds__make_hlds__add_clause__undeclared_mode_error_8_0)
MR_decl_static(hlds__make_hlds__add_clause__get_mode_annotations_4_0)
MR_decl_static(hlds__make_hlds__add_clause__select_applicable_modes_15_0)
MR_def_extern_entry(hlds__make_hlds__add_clause__module_add_clause_15_0)
MR_decl_static(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0)
MR_decl_static(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0)
MR_decl_static(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__519__1_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
static const struct mercury_type_0 mercury_common_0[29] =
{
{
{
MR_CTOR1_ADDR(term, term),
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
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id)
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
MR_TAG_COMMON(3,1,0),
MR_TAG_COMMON(1,0,6)
}
},
{
{
MR_TAG_COMMON(3,1,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,2),
MR_TAG_COMMON(1,0,8)
}
},
{
{
MR_TAG_COMMON(3,1,3),
MR_TAG_COMMON(1,0,9)
}
},
{
{
MR_TAG_COMMON(3,1,4),
MR_TAG_COMMON(1,0,10)
}
},
{
{
MR_TAG_COMMON(3,1,5),
MR_TAG_COMMON(1,0,11)
}
},
{
{
MR_TAG_COMMON(3,1,6),
MR_TAG_COMMON(1,0,12)
}
},
{
{
MR_TAG_COMMON(3,1,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,2,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,8),
MR_TAG_COMMON(1,0,6)
}
},
{
{
MR_TAG_COMMON(3,1,9),
MR_TAG_COMMON(1,0,16)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,0,17)
}
},
{
{
MR_TAG_COMMON(3,1,10),
MR_TAG_COMMON(1,0,18)
}
},
{
{
MR_TAG_COMMON(3,1,11),
MR_TAG_COMMON(1,0,6)
}
},
{
{
MR_TAG_COMMON(3,3,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,12),
MR_TAG_COMMON(1,0,21)
}
},
{
{
MR_TAG_COMMON(3,1,13),
MR_TAG_COMMON(1,0,21)
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
MR_TAG_COMMON(3,1,0),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,3,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
}
},
};

static const struct mercury_type_1 mercury_common_1[22] =
{
{
3,
MR_string_const(".", 1)
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
{
4,
MR_string_const("have mode annotations.", 22)
},
{
4,
MR_string_const("syntax error: some but not all arguments", 40)
},
{
3,
MR_string_const(":", 1)
},
{
3,
MR_string_const(".)", 2)
},
{
4,
MR_string_const("is:", 3)
},
{
4,
MR_string_const("are the following:", 18)
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
4,
MR_string_const("error: mode annotation specifies undeclared mode", 48)
},
{
4,
MR_string_const("(There are no declared modes for this", 37)
},
{
4,
MR_string_const("The declared mode for this", 26)
},
{
4,
MR_string_const("The declared modes for this", 27)
},
{
4,
MR_string_const("Error: clause for automatically generated", 41)
},
{
4,
MR_string_const("field access", 12)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_TAG_COMMON(1,0,14)
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
11,
1
}
},
{
{
11,
-1
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
1,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_COMMON(0,24)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__519__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__undeclared_mode_error_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_7 mercury_common_7[1] =
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
MR_COMMON(0,28)
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
	NULL,
	NULL
};
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
	15,
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
397,
"106"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_1 = {
{
MR_FUNCTION,
"hlds.make_hlds.add_clause",
"hlds.make_hlds.add_clause",
"lambda_add_clause_m_519",
2,
0
},
"hlds.make_hlds.add_clause",
"add_clause.m",
519,
"58"
};


MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);
MR_decl_entry(parse_tree__prog_data__rename_vars_in_term_list_4_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);
MR_decl_entry(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0);
MR_decl_entry(hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_0);
MR_decl_entry(hlds__goal_util__attach_features_to_all_goals_4_1);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_clause_body_9_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_get_var_types_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_init_1_0);
MR_decl_entry(hlds__quantification__implicitly_quantify_clause_body_general_11_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_set_var_types_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module0)
	MR_init_entry1(hlds__make_hlds__add_clause__add_clause_transform_20_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__add_clause_transform_20_0);
	MR_init_label10(hlds__make_hlds__add_clause__add_clause_transform_20_0,2,3,4,7,5,9,10,12,14,17)
	MR_init_label4(hlds__make_hlds__add_clause__add_clause_transform_20_0,18,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_clause_transform'/20 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_clause__add_clause_transform_20_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(10) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(1) = MR_r11;
	MR_sv(12) = MR_r12;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i2);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_term_list_4_0,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i3);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i4);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__add_clause_transform_20_0_i5);
	}
	MR_sv(10) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i7);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_sv(6) = MR_r1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(11);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i14);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r5;
	MR_sv(11) = MR_r6;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i9);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_0,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i10);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_sv(13) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__attach_features_to_all_goals_4_1,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i12);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_sv(6) = MR_r1;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i14);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r5;
	MR_tempr3 = MR_sv(5);
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r4;
	MR_sv(9) = MR_r6;
	MR_r1 = MR_sv(3);
	MR_tempr4 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr5 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_clause_body_9_0,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i17);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_var_types_2_0,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i18);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_init_1_0,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i19);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_clause_body_general_11_0,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i20);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_var_types_3_0,
		hlds__make_hlds__add_clause__add_clause_transform_20_0_i21);
MR_def_label(hlds__make_hlds__add_clause__add_clause_transform_20_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(5);
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
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_clauses__add_clause_3_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_any_order_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
MR_decl_entry(fn__list__filter_map_2_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(fn__list__delete_elems_2_0);
MR_decl_entry(hlds__hlds_clauses__add_clause_item_number_5_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module1)
	MR_init_entry1(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__clauses_info_add_clause_24_0);
	MR_init_label10(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,2,4,5,3,6,7,8,9,10,11)
	MR_init_label10(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,15,14,18,19,13,21,24,26,27,29)
	MR_init_label6(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,30,32,35,20,36,37)
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
	MR_sv(18) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(17) = MR_r9;
	MR_sv(19) = MR_r10;
	MR_sv(20) = MR_r11;
	MR_sv(21) = MR_r12;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r13;
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(22) = MR_tempr1;
	MR_sv(23) = MR_r14;
	MR_sv(24) = MR_r15;
	MR_sv(25) = MR_r16;
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_list_is_empty_1_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i2);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i4);
	}
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(17);
	MR_r3 = MR_sv(9);
	MR_r1 = MR_sv(10);
	MR_r5 = MR_sv(24);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i3);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(varset__create_name_var_map_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i5);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(17);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(24);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__update_qual_info_6_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i6);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
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
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(19);
	MR_r7 = MR_sv(20);
	MR_r8 = MR_sv(21);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(23);
	MR_r11 = MR_sv(18);
	MR_r12 = MR_sv(25);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__add_clause_transform_20_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i8);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r4;
	MR_sv(20) = MR_r5;
	MR_sv(8) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(21) = MR_tempr1;
	MR_sv(9) = MR_r8;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_tvarset_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i9);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i10);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(21);
	MR_sv(21) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i11);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(21),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i15);
	}
	MR_r2 = MR_sv(20);
	MR_sv(20) = MR_r1;
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i14);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(20),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i13);
	}
	MR_r2 = MR_sv(20);
	MR_sv(20) = MR_r1;
	MR_r3 = MR_sv(9);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i18);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i19);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r4 = MR_sv(22);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(20);
	MR_r8 = MR_sv(1);
	MR_decr_sp_and_return(26);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(16),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(19);
	MR_sv(20) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__add_clause_3_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i35);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_any_order_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i24);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i26);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i27);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i29);
	}
	MR_r3 = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_np_call_localret_ent(fn__list__delete_elems_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i30);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_np_call_localret_ent(fn__list__delete_elems_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i30);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i32);
	}
	MR_sv(1) = MR_sv(13);
	MR_r1 = MR_sv(20);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i20);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(18);
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 3) = MR_sv(3);
	MR_tfield(0, MR_r1, 4) = MR_sv(19);
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__add_clause_3_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i35);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(20);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_var_types_2_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i36);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_clauses__add_clause_item_number_5_0,
		hlds__make_hlds__add_clause__clauses_info_add_clause_24_0_i37);
MR_def_label(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(16);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(20);
	MR_r8 = MR_sv(9);
	MR_decr_sp_and_return(26);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__mode_errors__mode_decl_to_string_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module2)
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
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,25);
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

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module3)
	MR_init_entry1(hlds__make_hlds__add_clause__undeclared_mode_error_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__undeclared_mode_error_8_0);
	MR_init_label10(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,2,3,4,5,6,8,18,19,20,22)
	MR_init_label8(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,41,44,45,36,59,60,63,64)
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
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_r1 = MR_r5;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i2);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i3);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i4);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i5);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__varset__coerce_1_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i6);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(2);
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
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,7);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,16);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,10);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,0,26);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i18);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i19);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i20);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i22);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,20);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,1,17);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i36);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,22);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,18);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i41);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,27);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i44);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i45);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,23);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,19);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_0);
	MR_tfield(0, MR_tempr4, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr4, 3) = MR_sv(1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i59);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i60);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,27);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i63);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__undeclared_mode_error_8_0_i64);
MR_def_label(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
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
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
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

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module4)
	MR_init_entry1(hlds__make_hlds__add_clause__get_mode_annotations_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__get_mode_annotations_4_0);
	MR_init_label10(hlds__make_hlds__add_clause__get_mode_annotations_4_0,117,12,13,4,5,16,20,18,23,24)
	MR_init_label4(hlds__make_hlds__add_clause__get_mode_annotations_4_0,47,28,30,32)
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
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i117);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
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
	MR_sv(3) = MR_r2;
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
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i16);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i18);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i20);
	}
	MR_sv(3) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i32);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r2 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i32);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i23);
	}
	MR_sv(3) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i32);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i24);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i47);
	}
	MR_sv(3) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i32);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__get_mode_annotations_4_0_i28);
	}
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i32);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i30);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__get_mode_annotations_4_0_i32);
MR_def_label(hlds__make_hlds__add_clause__get_mode_annotations_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_pragma_goal_type_1_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0);
MR_decl_entry(parse_tree__module_qual__qualify_clause_mode_list_7_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_set_mq_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(hlds__make_hlds__add_pragma__get_procedure_matching_declmodes_with_renaming_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module5)
	MR_init_entry1(hlds__make_hlds__add_clause__select_applicable_modes_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__select_applicable_modes_15_0);
	MR_init_label10(hlds__make_hlds__add_clause__select_applicable_modes_15_0,2,3,6,5,21,19,18,25,27,28)
	MR_init_label7(hlds__make_hlds__add_clause__select_applicable_modes_15_0,29,30,31,32,35,34,39)
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
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(8) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i2);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__get_mode_annotations_4_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i3);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_15_0_i5);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i6);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,19);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,1,15);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr4, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tempr6 = MR_sv(6);
	MR_tfield(1, MR_r2, 0) = MR_tempr6;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr6;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0)) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 1))))) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_15_0_i18);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_pragma_goal_type_1_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i21);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_15_0_i19);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_15_0_i25);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(7) = MR_r3;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_15_0_i30);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i27);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(parse_tree__module_qual__qualify_clause_mode_list_7_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i28);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_mq_info_3_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i29);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i31);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i32);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(hlds__make_hlds__add_pragma__get_procedure_matching_declmodes_with_renaming_4_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i35);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__select_applicable_modes_15_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__undeclared_mode_error_8_0,
		hlds__make_hlds__add_clause__select_applicable_modes_15_0_i39);
MR_def_label(hlds__make_hlds__add_clause__select_applicable_modes_15_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
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
MR_decl_entry(hlds__make_hlds__state_var__expand_bang_states_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0);
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(require__unexpected_3_0);
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

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module6)
	MR_init_entry1(hlds__make_hlds__add_clause__module_add_clause_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_clause__module_add_clause_15_0);
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,4,2,7,8,11,12,13,14,16,19)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,23,24,25,26,27,28,29,30,21,15)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,35,36,33,39,41,42,43,44,45,46)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,145,48,49,50,51,52,53,54,55,56)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,57,58,60,47,64,65,66,67,62,68)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,74,75,71,72,96,98,99,101,94,106)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,107,108,109,110,111,112,115,117,118,119)
	MR_init_label10(hlds__make_hlds__add_clause__module_add_clause_15_0,120,123,124,125,122,126,127,128,129,132)
	MR_init_label3(hlds__make_hlds__add_clause__module_add_clause_15_0,133,70,137)
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
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(14) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(16) = MR_r10;
	MR_sv(15) = MR_r11;
	MR_sv(17) = MR_r12;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
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
	MR_r1 = MR_sv(14);
	MR_sv(14) = MR_tempr1;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i7);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(14);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(5);
	MR_tempr5 = MR_sv(6);
	MR_tempr6 = MR_sv(7);
	MR_tempr7 = MR_sv(8);
	MR_tempr8 = MR_sv(16);
	MR_tempr9 = MR_sv(15);
	MR_tempr10 = MR_sv(17);
	MR_r1 = MR_tempr2;
	MR_sv(14) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(14),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i8);
	}
	MR_sv(9) = (MR_Integer) -1;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__expand_bang_states_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i11);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__expand_bang_states_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i11);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i12);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(20) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i13);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(9));
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i14);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(11);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i16);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i15);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i15);
	}
	MR_sv(13) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i19);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i21);
	}
	MR_sv(12) = MR_sv(13);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i23);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(").\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i24);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i25);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("name to an existing predicate", 29);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i26);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i27);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("for a promise with an identical", 31);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i28);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i29);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Attempted to introduce a predicate", 34);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i30);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.add_clause", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.add_clause.module_add_clause\'/15", 58);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i41);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_sv(13);
	MR_r1 = MR_sv(16);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i41);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i33);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__term__term_list_to_var_list_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i35);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(18);
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i36);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i41);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,33)
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
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(5);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(6);
	MR_r9 = (MR_Word) MR_string_const("clause", 6);
	MR_r10 = MR_sv(16);
	MR_r11 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i39);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(17) = MR_r3;
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i42);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i43);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(21) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(22) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i44);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i45);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 45;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i46);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i48);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i47);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i49);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__num_clauses_in_clauses_rep_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i50);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i51);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" for ", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i52);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Processing clause ", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i53);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i54);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__write_pred_or_func_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i55);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" \140", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i56);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i57);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(9));
	}
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i58);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_and_arity_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i60);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'...\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i145);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i62);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_import_status_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i64);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i65);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 20;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i66);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i67);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_sv(9) = MR_r1;
	MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i68);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_r2 = MR_sv(11);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(14),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i70);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i72);
	}
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i74);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__is_field_access_function_name_5_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i75);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i71);
	}
	if ((MR_sv(14) != MR_r2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i71);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i71);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,21);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,20);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,13);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(17);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(15);
	MR_decr_sp_and_return(23);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_builtin_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i96);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i94);
	}
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i98);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 269;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i99);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i101);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,15);
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
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(15);
	MR_decr_sp_and_return(23);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(17);
	MR_decr_sp_and_return(23);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i106);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i107);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i108);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__select_applicable_modes_15_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i109);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(9);
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(11);
	MR_r12 = MR_sv(8);
	MR_r13 = MR_sv(14);
	MR_r14 = MR_tempr2;
	MR_r15 = MR_tempr3;
	MR_r16 = MR_tempr4;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i110);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_sv(9) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r8;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i111);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i112);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_goal_type_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i115);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_update_goal_type_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i115);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_typevarset_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i117);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i118);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_arg_types_5_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i119);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i120);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i122);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i123);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i124);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i125);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i126);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i126);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_set_preds_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i127);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i128);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_clause__module_add_clause_15_0_i129);
	}
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(23);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r3 = MR_sv(14);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i132);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_overlap_5_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i133);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(23);
	}
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_sv(14), 0);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0,
		hlds__make_hlds__add_clause__module_add_clause_15_0_i137);
MR_def_label(hlds__make_hlds__add_clause__module_add_clause_15_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module7)
	MR_init_entry1(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__add_clause__mode_annotations_0_0);
	MR_init_label5(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0,5,6,18,7,1)
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
		MR_GOTO_LAB(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___hlds__make_hlds__add_clause__mode_annotations_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module8)
	MR_init_entry1(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__add_clause__mode_annotations_0_0);
	MR_init_label10(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,7,8,5,12,13,10,17,18,54,15)
	MR_init_label5(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,21,40,22,41,23)
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
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i54);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i40);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i41);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i40);
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i22);
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0_i23);
	}
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__add_clause__mode_annotations_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_clause_module9)
	MR_init_entry1(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__519__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__519__1_1_0);
	MR_init_label3(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__519__1_1_0,17,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__clauses_info_add_clause__519__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__519__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__519__1_1_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__519__1_1_0_i17);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__519__1_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.add_clause", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/24", 64);
	MR_r3 = (MR_Word) MR_string_const("all_modes foreign_proc", 22);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__519__1_1_0_i3);
MR_def_label(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__519__1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(fn__hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__519__1_1_0,1)
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
#ifdef MR_THREADSCOPE
void mercury__hlds__make_hlds__add_clause__init_threadscope_string_table(void);
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

#ifdef MR_THREADSCOPE

void mercury__hlds__make_hlds__add_clause__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
