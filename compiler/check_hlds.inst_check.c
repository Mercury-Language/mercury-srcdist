/*
** Automatically generated from `inst_check.m'
** by the Mercury compiler,
** version rotd-2013-03-18, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__check_hlds__inst_check__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "check_hlds.inst_check.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "check_hlds.inst_check.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "check_hlds.inst_check.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "check_hlds.inst_check.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "check_hlds.inst_check.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "check_hlds.inst_check.c"
#line 49 "check_hlds.inst_check.c"
#include "check_hlds.inst_check.mh"

#line 52 "check_hlds.inst_check.c"
#line 53 "check_hlds.inst_check.c"
#ifndef CHECK_HLDS__INST_CHECK_DECL_GUARD
#define CHECK_HLDS__INST_CHECK_DECL_GUARD

#line 57 "check_hlds.inst_check.c"
#line 58 "check_hlds.inst_check.c"

#endif
#line 61 "check_hlds.inst_check.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
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
	MR_Word * f3[4];
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
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Integer f1;
	MR_String f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_9 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_10 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__inst_check__type_ctor_info_bound_inst_functor_0,
	mercury_data_check_hlds__inst_check__type_ctor_info_functors_to_types_0,
	mercury_data_check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;
MR_decl_label8(check_hlds__inst_check__bound_inst_to_functor_2_0, 3,5,8,10,12,14,2,1)
MR_decl_label10(check_hlds__inst_check__check_inst_4_0, 3,5,6,7,8,68,9,13,16,11)
MR_decl_label10(check_hlds__inst_check__check_insts_have_matching_types_3_0, 2,3,4,5,6,7,9,10,12,13)
MR_decl_label10(check_hlds__inst_check__find_types_for_functor_3_0, 3,6,9,12,18,22,25,16,26,30)
MR_decl_label5(check_hlds__inst_check__find_types_for_functor_3_0, 28,34,37,35,15)
MR_decl_label1(check_hlds__inst_check__inst_is_defined_in_current_module_1_0, 2)
MR_decl_label9(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0, 2,10,15,17,13,25,20,9,4)
MR_decl_label3(check_hlds__inst_check__type_is_user_visible_2_0, 2,9,1)
MR_decl_label1(fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__341__1_1_0, 2)
MR_decl_label1(fn__check_hlds__inst_check__constructor_to_sym_name_and_arity_1_0, 2)
MR_decl_label7(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0, 32,5,6,10,8,7,13)
MR_decl_label8(__Unify___check_hlds__inst_check__bound_inst_functor_0_0, 5,6,7,8,11,27,9,1)
MR_decl_label4(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0, 5,19,7,1)
MR_decl_label10(__Compare___check_hlds__inst_check__bound_inst_functor_0_0, 7,8,9,10,5,14,15,16,17,12)
MR_decl_label10(__Compare___check_hlds__inst_check__bound_inst_functor_0_0, 21,22,23,24,19,28,29,30,114,31)
MR_decl_label10(__Compare___check_hlds__inst_check__bound_inst_functor_0_0, 26,35,36,37,38,41,33,47,48,49)
MR_decl_label5(__Compare___check_hlds__inst_check__bound_inst_functor_0_0, 89,50,90,51,53)
MR_decl_label9(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0, 3,2,31,7,5,34,12,10,16)
MR_decl_static(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0)
MR_def_extern_entry(check_hlds__inst_check__check_insts_have_matching_types_3_0)
MR_decl_static(check_hlds__inst_check__inst_is_defined_in_current_module_1_0)
MR_decl_static(check_hlds__inst_check__type_is_user_visible_2_0)
MR_decl_static(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0)
MR_decl_static(check_hlds__inst_check__check_inst_4_0)
MR_decl_static(check_hlds__inst_check__find_types_for_functor_3_0)
MR_decl_static(check_hlds__inst_check__bound_inst_to_functor_2_0)
MR_decl_static(fn__check_hlds__inst_check__constructor_to_sym_name_and_arity_1_0)
MR_decl_static(__Unify___check_hlds__inst_check__bound_inst_functor_0_0)
MR_decl_static(__Compare___check_hlds__inst_check__bound_inst_functor_0_0)
MR_decl_static(__Unify___check_hlds__inst_check__functors_to_types_0_0)
MR_decl_static(__Compare___check_hlds__inst_check__functors_to_types_0_0)
MR_decl_static(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0)
MR_decl_static(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0)
MR_decl_static(fn__check_hlds__inst_check__IntroducedFrom__func__find_types_for_functor__241__1_1_0)
MR_decl_static(fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__341__1_1_0)
MR_decl_static(fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__343__1_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_inst_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_inst_defn_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_id),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_inst_defn)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity),
MR_TAG_COMMON(0,1,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity),
MR_COMMON(1,3)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_id),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_inst_defn)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;
static const struct mercury_type_1 mercury_common_1[11] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__inst_check, type_defn_or_builtin)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn)
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
MR_TAG_COMMON(3,7,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__inst_check, type_defn_or_builtin)
}
},
{
{
MR_TAG_COMMON(1,9,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,9,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,9,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,9,3),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__inst_check__check_insts_have_matching_types_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_section_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__inst_check__check_inst_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__inst_check__type_ctor_info_bound_inst_functor_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__inst_check__find_types_for_functor_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;
static const struct mercury_type_2 mercury_common_2[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor),
MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity),
MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity),
MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__inst_check__check_insts_have_matching_types_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, section),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__inst_check__check_inst_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst),
MR_CTOR0_ADDR(check_hlds__inst_check, bound_inst_functor)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__inst_check__find_types_for_functor_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn),
MR_CTOR0_ADDR(check_hlds__inst_check, type_defn_or_builtin)
},
};

static const struct mercury_type_3 mercury_common_3[6] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(fn__check_hlds__inst_check__constructor_to_sym_name_and_arity_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__341__1_1_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__341__1_1_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(check_hlds__inst_check__inst_is_defined_in_current_module_1_0),
0
},
{
MR_COMMON(2,4),
MR_ENTRY_AP(check_hlds__inst_check__bound_inst_to_functor_2_0),
0
},
{
MR_COMMON(2,5),
MR_ENTRY_AP(fn__check_hlds__inst_check__IntroducedFrom__func__find_types_for_functor__241__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__inst_check__check_insts_have_matching_types_3_0_3;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn),
MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__inst_check__check_insts_have_matching_types_3_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_COMMON(2,3),
MR_ENTRY_AP(check_hlds__inst_check__type_is_user_visible_2_0),
1,
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__inst_check__check_insts_have_matching_types_3_0_2;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__inst_check__check_insts_have_matching_types_3_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(0,3)
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
4,
MR_string_const("Warning: inst ", 14)
},
{
4,
MR_string_const("does not match any of the types in scope.", 41)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__inst_check__check_inst_4_0_2;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__inst_check__check_inst_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_CTOR0_ADDR(check_hlds__inst_check, bound_inst_functor),
MR_COMMON(1,6)
}
},
};

static const struct mercury_type_9 mercury_common_9[4] =
{
{
3
},
{
1
},
{
0
},
{
2
},
};

static const struct mercury_type_10 mercury_common_10[4] =
{
{
MR_tbmkword(0, 2)
},
{
MR_tbmkword(0, 1)
},
{
MR_tbmkword(0, 0)
},
{
MR_tbmkword(0, 3)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__inst_check__field_types_bound_inst_functor_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_0 = {
	"bif_name_and_arity",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__inst_check__field_types_bound_inst_functor_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__inst_check__field_types_bound_inst_functor_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_1 = {
	"bif_tuple",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__inst_check__field_types_bound_inst_functor_0_1,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_2 = {
	"bif_int_constant",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_3 = {
	"bif_float_constant",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_4 = {
	"bif_char_constant",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_5 = {
	"bif_string_constant",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_0[] = {
	&mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_2,
	&mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_3,
	&mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_4,
	&mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_5

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_1[] = {
	&mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_2[] = {
	&mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__inst_check__du_ptag_ordered_bound_inst_functor_0[] = {
	{ 4, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__inst_check__du_name_ordered_bound_inst_functor_0[] = {
	&mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_4,
	&mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_3,
	&mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_2,
	&mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_0,
	&mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_5,
	&mercury_data_check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_1
};

const MR_Integer mercury_data_check_hlds__inst_check__functor_number_map_bound_inst_functor_0[] = {
	3,
	5,
	2,
	1,
	0,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__inst_check__type_ctor_info_bound_inst_functor_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__inst_check__bound_inst_functor_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__inst_check__bound_inst_functor_0_0)),
	"check_hlds.inst_check",
	"bound_inst_functor",
	{ (void *)mercury_data_check_hlds__inst_check__du_name_ordered_bound_inst_functor_0 },
	{ (void *)mercury_data_check_hlds__inst_check__du_ptag_ordered_bound_inst_functor_0 },
	6,
	4,
	mercury_data_check_hlds__inst_check__functor_number_map_bound_inst_functor_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__inst_check__type_ctor_info_functors_to_types_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__inst_check__functors_to_types_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__inst_check__functors_to_types_0_0)),
	"check_hlds.inst_check",
	"functors_to_types",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0 = {
	"type_def",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__inst_check__field_types_type_defn_or_builtin_0_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_builtin_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_builtin_type_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_builtin_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1 = {
	"type_builtin",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__inst_check__field_types_type_defn_or_builtin_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2 = {
	"type_tuple",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__inst_check__field_types_type_defn_or_builtin_0_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0[] = {
	&mercury_data_check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1[] = {
	&mercury_data_check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2[] = {
	&mercury_data_check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2

};

const MR_DuPtagLayout mercury_data_check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0[] = {
	&mercury_data_check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1,
	&mercury_data_check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0,
	&mercury_data_check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2
};

const MR_Integer mercury_data_check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0[] = {
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0)),
	"check_hlds.inst_check",
	"type_defn_or_builtin",
	{ (void *)mercury_data_check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0 },
	{ (void *)mercury_data_check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0 },
	3,
	4,
	mercury_data_check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__inst_check__find_types_for_functor_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.inst_check",
"check_hlds.inst_check",
"lambda_inst_check_m_241",
2,
0
},
"check_hlds.inst_check",
"inst_check.m",
241,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__inst_check__check_inst_4_0_2 = {
{
MR_PREDICATE,
"check_hlds.inst_check",
"check_hlds.inst_check",
"find_types_for_functor",
3,
0
},
"check_hlds.inst_check",
"inst_check.m",
155,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__inst_check__check_inst_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.inst_check",
"check_hlds.inst_check",
"bound_inst_to_functor",
2,
0
},
"check_hlds.inst_check",
"inst_check.m",
153,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__inst_check__check_insts_have_matching_types_3_0_3 = {
{
MR_PREDICATE,
"check_hlds.inst_check",
"check_hlds.inst_check",
"check_inst",
4,
0
},
"check_hlds.inst_check",
"inst_check.m",
77,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__inst_check__check_insts_have_matching_types_3_0_2 = {
{
MR_PREDICATE,
"check_hlds.inst_check",
"check_hlds.inst_check",
"inst_is_defined_in_current_module",
1,
0
},
"check_hlds.inst_check",
"inst_check.m",
73,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__inst_check__check_insts_have_matching_types_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.inst_check",
"check_hlds.inst_check",
"type_is_user_visible",
2,
0
},
"check_hlds.inst_check",
"inst_check.m",
70,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_4 = {
{
MR_FUNCTION,
"check_hlds.inst_check",
"check_hlds.inst_check",
"lambda_inst_check_m_343",
4,
0
},
"check_hlds.inst_check",
"inst_check.m",
343,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_3 = {
{
MR_FUNCTION,
"check_hlds.inst_check",
"check_hlds.inst_check",
"lambda_inst_check_m_341",
2,
0
},
"check_hlds.inst_check",
"inst_check.m",
341,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_2 = {
{
MR_FUNCTION,
"check_hlds.inst_check",
"check_hlds.inst_check",
"lambda_inst_check_m_341",
2,
0
},
"check_hlds.inst_check",
"inst_check.m",
341,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_1 = {
{
MR_FUNCTION,
"check_hlds.inst_check",
"check_hlds.inst_check",
"constructor_to_sym_name_and_arity",
2,
0
},
"check_hlds.inst_check",
"inst_check.m",
358,
"9"
};


MR_decl_entry(fn__multi_map__init_0_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(check_hlds__inst_check_module0)
	MR_init_entry1(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0);
	MR_init_label7(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0,32,5,6,10,8,7,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'index_types_by_unqualified_functors'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_i32);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_np_tailcall_ent(fn__multi_map__init_0_0);
MR_def_label(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0,
		fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_i5);
MR_def_label(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_i6);
MR_def_label(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_i10);
MR_def_label(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity);
	MR_GOTO_LAB(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_i7);
MR_def_label(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity);
MR_def_label(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0_i13);
MR_def_label(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__343__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_inst_table_2_0);
MR_decl_entry(hlds__hlds_data__inst_table_get_user_insts_2_0);
MR_decl_entry(hlds__hlds_data__user_inst_table_get_inst_defns_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__hlds_data__get_all_type_ctor_defns_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
MR_decl_entry(fn__assoc_list__values_1_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(fn__map__to_assoc_list_1_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(check_hlds__inst_check_module1)
	MR_init_entry1(check_hlds__inst_check__check_insts_have_matching_types_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_check__check_insts_have_matching_types_3_0);
	MR_init_label10(check_hlds__inst_check__check_insts_have_matching_types_3_0,2,3,4,5,6,7,9,10,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_insts_have_matching_types'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__inst_check__check_insts_have_matching_types_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__inst_check__check_insts_have_matching_types_3_0_i2);
MR_def_label(check_hlds__inst_check__check_insts_have_matching_types_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_user_insts_2_0,
		check_hlds__inst_check__check_insts_have_matching_types_3_0_i3);
MR_def_label(check_hlds__inst_check__check_insts_have_matching_types_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__user_inst_table_get_inst_defns_2_0,
		check_hlds__inst_check__check_insts_have_matching_types_3_0_i4);
MR_def_label(check_hlds__inst_check__check_insts_have_matching_types_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__inst_check__check_insts_have_matching_types_3_0_i5);
MR_def_label(check_hlds__inst_check__check_insts_have_matching_types_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_all_type_ctor_defns_2_0,
		check_hlds__inst_check__check_insts_have_matching_types_3_0_i6);
MR_def_label(check_hlds__inst_check__check_insts_have_matching_types_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__assoc_list__values_1_0,
		check_hlds__inst_check__check_insts_have_matching_types_3_0_i7);
MR_def_label(check_hlds__inst_check__check_insts_have_matching_types_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		check_hlds__inst_check__check_insts_have_matching_types_3_0_i9);
MR_def_label(check_hlds__inst_check__check_insts_have_matching_types_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_inst_defn);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__to_assoc_list_1_0,
		check_hlds__inst_check__check_insts_have_matching_types_3_0_i10);
MR_def_label(check_hlds__inst_check__check_insts_have_matching_types_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		check_hlds__inst_check__check_insts_have_matching_types_3_0_i12);
MR_def_label(check_hlds__inst_check__check_insts_have_matching_types_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__inst_check__index_types_by_unqualified_functors_1_0,
		check_hlds__inst_check__check_insts_have_matching_types_3_0_i13);
MR_def_label(check_hlds__inst_check__check_insts_have_matching_types_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__inst_check__check_inst_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);

MR_BEGIN_MODULE(check_hlds__inst_check_module2)
	MR_init_entry1(check_hlds__inst_check__inst_is_defined_in_current_module_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_check__inst_is_defined_in_current_module_1_0);
	MR_init_label1(check_hlds__inst_check__inst_is_defined_in_current_module_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_is_defined_in_current_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_check__inst_is_defined_in_current_module_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 1), 4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		check_hlds__inst_check__inst_is_defined_in_current_module_1_0_i2);
MR_def_label(check_hlds__inst_check__inst_is_defined_in_current_module_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__get_type_defn_status_2_0);

MR_BEGIN_MODULE(check_hlds__inst_check_module3)
	MR_init_entry1(check_hlds__inst_check__type_is_user_visible_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_check__type_is_user_visible_2_0);
	MR_init_label3(check_hlds__inst_check__type_is_user_visible_2_0,2,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_is_user_visible'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_check__type_is_user_visible_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_status_2_0,
		check_hlds__inst_check__type_is_user_visible_2_0_i2);
MR_def_label(check_hlds__inst_check__type_is_user_visible_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 3)) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 2)))) {
		MR_GOTO_LAB(check_hlds__inst_check__type_is_user_visible_2_0_i9);
	}
	if (!(((((((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 5)) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 7))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 8))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 4))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 6))))) {
		MR_GOTO_LAB(check_hlds__inst_check__type_is_user_visible_2_0_i1);
	}
	MR_r1 = ((MR_Integer) MR_sv(1) == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
MR_def_label(check_hlds__inst_check__type_is_user_visible_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_check__type_is_user_visible_2_0,1)
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

MR_decl_entry(fn__hlds__hlds_pred__status_is_exported_to_non_submodules_1_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(list__member_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(check_hlds__inst_check_module4)
	MR_init_entry1(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_check__maybe_issue_inst_check_warning_5_0);
	MR_init_label9(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0,2,10,15,17,13,25,20,9,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_issue_inst_check_warning'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_is_exported_to_non_submodules_1_0,
		check_hlds__inst_check__maybe_issue_inst_check_warning_5_0_i2);
MR_def_label(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0_i4);
	}
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0_i9);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__inst_check, type_defn_or_builtin);
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__inst_check__maybe_issue_inst_check_warning_5_0_i10);
MR_def_label(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0_i13);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__inst_check__maybe_issue_inst_check_warning_5_0_i15);
MR_def_label(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__inst_check, type_defn_or_builtin);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		check_hlds__inst_check__maybe_issue_inst_check_warning_5_0_i17);
MR_def_label(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	if (MR_INT_EQ(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0_i20);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0_i20);
	}
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_sv(6), 0);
	MR_np_call_localret_ent(check_hlds__inst_check__type_is_user_visible_2_0,
		check_hlds__inst_check__maybe_issue_inst_check_warning_5_0_i25);
MR_def_label(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0_i4);
MR_def_label(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_sv(2), 3);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
MR_decl_entry(list__map_3_2);
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(check_hlds__inst_check_module5)
	MR_init_entry1(check_hlds__inst_check__check_inst_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_check__check_inst_4_0);
	MR_init_label10(check_hlds__inst_check__check_inst_4_0,3,5,6,7,8,68,9,13,16,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_inst'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_check__check_inst_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_tfield(0, MR_r2, 1), 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_check__check_inst_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(check_hlds__inst_check__check_inst_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r4, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_check__check_inst_4_0_i5);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(check_hlds__inst_check__check_inst_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_check__check_inst_4_0_i6);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(check_hlds__inst_check__check_inst_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(check_hlds__inst_check__check_inst_4_0_i7);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(check_hlds__inst_check__check_inst_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__inst_check__check_inst_4_0_i8);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(check_hlds__inst_check__check_inst_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(check_hlds__inst_check__check_inst_4_0_i9);
	}
MR_def_label(check_hlds__inst_check__check_inst_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(check_hlds__inst_check__check_inst_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(check_hlds__inst_check__check_inst_4_0_i68);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__inst_check, bound_inst_functor);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r4 = MR_tfield(3, MR_r5, 3);
	MR_np_call_localret_ent(list__map_3_2,
		check_hlds__inst_check__check_inst_4_0_i13);
MR_def_label(check_hlds__inst_check__check_inst_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_check__check_inst_4_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__inst_check__find_types_for_functor_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__inst_check, bound_inst_functor);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__inst_check__check_inst_4_0_i16);
MR_def_label(check_hlds__inst_check__check_inst_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__inst_check__maybe_issue_inst_check_warning_5_0);
	}
MR_def_label(check_hlds__inst_check__check_inst_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(multi_map__search_3_0);
MR_decl_entry(fn__string__count_codepoints_1_0);
MR_decl_entry(parse_tree__prog_type__type_ctor_is_tuple_1_0);

MR_BEGIN_MODULE(check_hlds__inst_check_module6)
	MR_init_entry1(check_hlds__inst_check__find_types_for_functor_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_check__find_types_for_functor_3_0);
	MR_init_label10(check_hlds__inst_check__find_types_for_functor_3_0,3,6,9,12,18,22,25,16,26,30)
	MR_init_label5(check_hlds__inst_check__find_types_for_functor_3_0,28,34,37,35,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_types_for_functor'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_check__find_types_for_functor_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(check_hlds__inst_check__find_types_for_functor_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,7);
	MR_proceed();
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(check_hlds__inst_check__find_types_for_functor_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,8);
	MR_proceed();
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_check__find_types_for_functor_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,9);
	MR_proceed();
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(check_hlds__inst_check__find_types_for_functor_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,10);
	MR_proceed();
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__inst_check__find_types_for_functor_3_0_i15);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__inst_check__find_types_for_functor_3_0_i18);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	}
	MR_np_call_localret_ent(multi_map__search_3_0,
		check_hlds__inst_check__find_types_for_functor_3_0_i22);
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	}
	MR_np_call_localret_ent(multi_map__search_3_0,
		check_hlds__inst_check__find_types_for_functor_3_0_i22);
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_check__find_types_for_functor_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__inst_check, type_defn_or_builtin);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__inst_check__find_types_for_functor_3_0_i25);
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(check_hlds__inst_check__find_types_for_functor_3_0_i26);
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__inst_check__find_types_for_functor_3_0_i28);
	}
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		check_hlds__inst_check__find_types_for_functor_3_0_i30);
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__inst_check__find_types_for_functor_3_0_i28);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(check_hlds__inst_check__find_types_for_functor_3_0_i34);
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		check_hlds__inst_check__find_types_for_functor_3_0_i37);
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__inst_check__find_types_for_functor_3_0_i35);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__inst_check__find_types_for_functor_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(2, MR_r2, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_check_module7)
	MR_init_entry1(check_hlds__inst_check__bound_inst_to_functor_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__inst_check__bound_inst_to_functor_2_0);
	MR_init_label8(check_hlds__inst_check__bound_inst_to_functor_2_0,3,5,8,10,12,14,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bound_inst_to_functor'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__inst_check__bound_inst_to_functor_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,7)) {
		MR_GOTO_LAB(check_hlds__inst_check__bound_inst_to_functor_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,10,0);
	MR_GOTO_LAB(check_hlds__inst_check__bound_inst_to_functor_2_0_i2);
	}
MR_def_label(check_hlds__inst_check__bound_inst_to_functor_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(check_hlds__inst_check__bound_inst_to_functor_2_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(check_hlds__inst_check__bound_inst_to_functor_2_0_i2);
	}
MR_def_label(check_hlds__inst_check__bound_inst_to_functor_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(check_hlds__inst_check__bound_inst_to_functor_2_0_i8);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,10,1);
	MR_GOTO_LAB(check_hlds__inst_check__bound_inst_to_functor_2_0_i2);
MR_def_label(check_hlds__inst_check__bound_inst_to_functor_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(check_hlds__inst_check__bound_inst_to_functor_2_0_i10);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,10,2);
	MR_GOTO_LAB(check_hlds__inst_check__bound_inst_to_functor_2_0_i2);
MR_def_label(check_hlds__inst_check__bound_inst_to_functor_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,8)) {
		MR_GOTO_LAB(check_hlds__inst_check__bound_inst_to_functor_2_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,10,3);
	MR_GOTO_LAB(check_hlds__inst_check__bound_inst_to_functor_2_0_i2);
MR_def_label(check_hlds__inst_check__bound_inst_to_functor_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(check_hlds__inst_check__bound_inst_to_functor_2_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_r3, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(check_hlds__inst_check__bound_inst_to_functor_2_0_i2);
	}
MR_def_label(check_hlds__inst_check__bound_inst_to_functor_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__inst_check__bound_inst_to_functor_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__inst_check__bound_inst_to_functor_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__inst_check__bound_inst_to_functor_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(check_hlds__inst_check_module8)
	MR_init_entry1(fn__check_hlds__inst_check__constructor_to_sym_name_and_arity_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__inst_check__constructor_to_sym_name_and_arity_1_0);
	MR_init_label1(fn__check_hlds__inst_check__constructor_to_sym_name_and_arity_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'constructor_to_sym_name_and_arity'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__inst_check__constructor_to_sym_name_and_arity_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__check_hlds__inst_check__constructor_to_sym_name_and_arity_1_0_i2);
MR_def_label(fn__check_hlds__inst_check__constructor_to_sym_name_and_arity_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(check_hlds__inst_check_module9)
	MR_init_entry1(__Unify___check_hlds__inst_check__bound_inst_functor_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__inst_check__bound_inst_functor_0_0);
	MR_init_label8(__Unify___check_hlds__inst_check__bound_inst_functor_0_0,5,6,7,8,11,27,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__inst_check__bound_inst_functor_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__bound_inst_functor_0_0_i27);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__bound_inst_functor_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__inst_check__bound_inst_functor_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__bound_inst_functor_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___check_hlds__inst_check__bound_inst_functor_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__bound_inst_functor_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___check_hlds__inst_check__bound_inst_functor_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__bound_inst_functor_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___check_hlds__inst_check__bound_inst_functor_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__bound_inst_functor_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__bound_inst_functor_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___check_hlds__inst_check__bound_inst_functor_0_0_i11);
MR_def_label(__Unify___check_hlds__inst_check__bound_inst_functor_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__bound_inst_functor_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___check_hlds__inst_check__bound_inst_functor_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__inst_check__bound_inst_functor_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__bound_inst_functor_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___check_hlds__inst_check__bound_inst_functor_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__inst_check_module10)
	MR_init_entry1(__Compare___check_hlds__inst_check__bound_inst_functor_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__inst_check__bound_inst_functor_0_0);
	MR_init_label10(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,7,8,9,10,5,14,15,16,17,12)
	MR_init_label10(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,21,22,23,24,19,28,29,30,114,31)
	MR_init_label10(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,26,35,36,37,38,41,33,47,48,49)
	MR_init_label5(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,89,50,90,51,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__inst_check__bound_inst_functor_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i114);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i90);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i12);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i90);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i19);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i90);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i26);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i30);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i31);
	}
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i90);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i33);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i89);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i41);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i47);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i49);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i50);
	}
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__bound_inst_functor_0_0_i51);
	}
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__inst_check__bound_inst_functor_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(check_hlds__inst_check_module11)
	MR_init_entry1(__Unify___check_hlds__inst_check__functors_to_types_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__inst_check__functors_to_types_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__inst_check__functors_to_types_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
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

MR_BEGIN_MODULE(check_hlds__inst_check_module12)
	MR_init_entry1(__Compare___check_hlds__inst_check__functors_to_types_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__inst_check__functors_to_types_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__inst_check__functors_to_types_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
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

MR_decl_entry(__Unify___hlds__hlds_data__hlds_type_defn_0_0);

MR_BEGIN_MODULE(check_hlds__inst_check_module13)
	MR_init_entry1(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__inst_check__type_defn_or_builtin_0_0);
	MR_init_label4(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0,5,19,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0_i19);
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
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_data__hlds_type_defn_0_0);
MR_def_label(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___check_hlds__inst_check__type_defn_or_builtin_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_data__hlds_type_defn_0_0);

MR_BEGIN_MODULE(check_hlds__inst_check_module14)
	MR_init_entry1(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__inst_check__type_defn_or_builtin_0_0);
	MR_init_label9(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0,3,2,31,7,5,34,12,10,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0_i2);
MR_def_label(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0_i7);
	}
MR_def_label(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0_i12);
	}
MR_def_label(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0_i34);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_data__hlds_type_defn_0_0);
MR_def_label(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__inst_check__type_defn_or_builtin_0_0_i31);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_check_module15)
	MR_init_entry1(fn__check_hlds__inst_check__IntroducedFrom__func__find_types_for_functor__241__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__inst_check__IntroducedFrom__func__find_types_for_functor__241__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__find_types_for_functor__241__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__inst_check__IntroducedFrom__func__find_types_for_functor__241__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__inst_check_module16)
	MR_init_entry1(fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__341__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__341__1_1_0);
	MR_init_label1(fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__341__1_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__index_types_by_unqualified_functors__341__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__341__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__341__1_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r2, 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	}
MR_def_label(fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__341__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__multi_map__set_3_0);

MR_BEGIN_MODULE(check_hlds__inst_check_module17)
	MR_init_entry1(fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__343__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__343__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__index_types_by_unqualified_functors__343__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__343__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, sym_name_and_arity);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__multi_map__set_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__inst_check_maybe_bunch_0(void)
{
	check_hlds__inst_check_module0();
	check_hlds__inst_check_module1();
	check_hlds__inst_check_module2();
	check_hlds__inst_check_module3();
	check_hlds__inst_check_module4();
	check_hlds__inst_check_module5();
	check_hlds__inst_check_module6();
	check_hlds__inst_check_module7();
	check_hlds__inst_check_module8();
	check_hlds__inst_check_module9();
	check_hlds__inst_check_module10();
	check_hlds__inst_check_module11();
	check_hlds__inst_check_module12();
	check_hlds__inst_check_module13();
	check_hlds__inst_check_module14();
	check_hlds__inst_check_module15();
	check_hlds__inst_check_module16();
	check_hlds__inst_check_module17();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__inst_check__init(void);
void mercury__check_hlds__inst_check__init_type_tables(void);
void mercury__check_hlds__inst_check__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__inst_check__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__inst_check__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__inst_check__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__inst_check__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__inst_check_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__inst_check__type_ctor_info_bound_inst_functor_0,
		check_hlds__inst_check__bound_inst_functor_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__inst_check__type_ctor_info_functors_to_types_0,
		check_hlds__inst_check__functors_to_types_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0,
		check_hlds__inst_check__type_defn_or_builtin_0_0);
	mercury__check_hlds__inst_check__init_debugger();
}

void mercury__check_hlds__inst_check__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__inst_check__type_ctor_info_bound_inst_functor_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__inst_check__type_ctor_info_functors_to_types_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0);
	}
}


void mercury__check_hlds__inst_check__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__inst_check__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__check_hlds__inst_check);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__inst_check__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__inst_check__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
