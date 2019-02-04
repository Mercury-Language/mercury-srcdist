/*
** Automatically generated from `tag_switch.m'
** by the Mercury compiler,
** version rotd-2011-09-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__tag_switch__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.tag_switch.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.tag_switch.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ll_backend.tag_switch.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ll_backend.tag_switch.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "ll_backend.tag_switch.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.tag_switch.c"
#line 49 "ll_backend.tag_switch.c"
#include "ll_backend.tag_switch.mh"

#line 52 "ll_backend.tag_switch.c"
#line 53 "ll_backend.tag_switch.c"
#ifndef LL_BACKEND__TAG_SWITCH_DECL_GUARD
#define LL_BACKEND__TAG_SWITCH_DECL_GUARD

#line 57 "ll_backend.tag_switch.c"
#line 58 "ll_backend.tag_switch.c"

#endif
#line 61 "ll_backend.tag_switch.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__tag_switch__type_ctor_info_switch_method_0;
MR_decl_label10(ll_backend__tag_switch__generate_primary_binary_search_13_0, 6,8,9,13,4,17,19,21,15,85)
MR_decl_label10(ll_backend__tag_switch__generate_primary_binary_search_13_0, 24,27,28,29,30,31,32,33,34,35)
MR_decl_label10(ll_backend__tag_switch__generate_primary_binary_search_13_0, 36,37,38,45,48,49,50,51,52,53)
MR_decl_label10(ll_backend__tag_switch__generate_primary_jump_table_13_0, 4,5,2,9,11,12,13,14,17,18)
MR_decl_label5(ll_backend__tag_switch__generate_primary_jump_table_13_0, 19,22,23,6,24)
MR_decl_label10(ll_backend__tag_switch__generate_primary_tag_code_13_0, 2,6,7,8,9,10,12,11,20,23)
MR_decl_label10(ll_backend__tag_switch__generate_primary_tag_code_13_0, 19,26,27,30,25,33,37,34,44,32)
MR_decl_label10(ll_backend__tag_switch__generate_primary_tag_code_13_0, 46,47,48,51,52,53,50,54,55,4)
MR_decl_label4(ll_backend__tag_switch__generate_primary_tag_code_13_0, 65,63,62,60)
MR_decl_label10(ll_backend__tag_switch__generate_primary_try_chain_13_0, 49,5,7,12,15,16,17,18,11,20)
MR_decl_label6(ll_backend__tag_switch__generate_primary_try_chain_13_0, 24,25,26,9,27,3)
MR_decl_label10(ll_backend__tag_switch__generate_primary_try_chain_case_16_0, 2,7,11,14,15,13,18,20,21,22)
MR_decl_label8(ll_backend__tag_switch__generate_primary_try_chain_case_16_0, 23,24,25,28,29,30,31,32)
MR_decl_label2(ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_0, 9,2)
MR_decl_label10(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0, 5,7,11,13,17,9,19,20,21,3)
MR_decl_label7(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0, 2,7,11,12,15,16,17)
MR_decl_label2(ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_0, 9,2)
MR_decl_label10(ll_backend__tag_switch__generate_secondary_binary_search_10_0, 6,8,9,13,4,17,18,15,81,20)
MR_decl_label10(ll_backend__tag_switch__generate_secondary_binary_search_10_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label9(ll_backend__tag_switch__generate_secondary_binary_search_10_0, 33,34,41,44,45,46,47,48,49)
MR_decl_label5(ll_backend__tag_switch__generate_secondary_jump_table_5_0, 4,2,7,5,10)
MR_decl_label10(ll_backend__tag_switch__generate_secondary_try_chain_7_0, 56,8,9,7,10,16,18,19,23,24)
MR_decl_label6(ll_backend__tag_switch__generate_secondary_try_chain_7_0, 5,25,31,33,34,3)
MR_decl_label10(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0, 8,7,9,10,17,20,21,22,26,5)
MR_decl_label4(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0, 28,29,30,3)
MR_decl_label6(ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0, 2,3,10,13,14,15)
MR_decl_label10(ll_backend__tag_switch__generate_tag_switch_13_0, 2,3,4,5,6,7,8,11,14,16)
MR_decl_label10(ll_backend__tag_switch__generate_tag_switch_13_0, 17,18,19,20,23,26,30,31,32,25)
MR_decl_label10(ll_backend__tag_switch__generate_tag_switch_13_0, 34,24,36,38,39,42,43,35,46,50)
MR_decl_label10(ll_backend__tag_switch__generate_tag_switch_13_0, 47,58,44,45,60,62,64,63,67,68)
MR_decl_label10(ll_backend__tag_switch__generate_tag_switch_13_0, 75,76,66,78,79,83,86,87,88,89)
MR_decl_label1(ll_backend__tag_switch__generate_tag_switch_13_0, 90)
MR_decl_label7(ll_backend__tag_switch__make_ptag_comment_4_0, 3,6,8,9,10,11,12)
MR_decl_static(ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_0)
MR_decl_static(ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0)
MR_decl_static(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0)
MR_decl_static(ll_backend__tag_switch__generate_secondary_try_chain_7_0)
MR_decl_static(ll_backend__tag_switch__generate_secondary_jump_table_5_0)
MR_decl_static(ll_backend__tag_switch__generate_secondary_binary_search_10_0)
MR_decl_static(ll_backend__tag_switch__generate_primary_tag_code_13_0)
MR_decl_static(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0)
MR_decl_static(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0)
MR_decl_static(ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_0)
MR_decl_static(ll_backend__tag_switch__make_ptag_comment_4_0)
MR_decl_static(ll_backend__tag_switch__generate_primary_try_chain_case_16_0)
MR_decl_static(ll_backend__tag_switch__generate_primary_try_chain_13_0)
MR_decl_static(ll_backend__tag_switch__generate_primary_jump_table_13_0)
MR_decl_static(ll_backend__tag_switch__generate_primary_binary_search_13_0)
MR_def_extern_entry(ll_backend__tag_switch__generate_tag_switch_13_0)
MR_decl_static(__Unify___ll_backend__tag_switch__switch_method_0_0)
MR_decl_static(__Compare___ll_backend__tag_switch__switch_method_0_0)
MR_decl_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__345__1_2_0)
MR_decl_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__436__1_2_0)
MR_decl_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__534__1_2_0)
MR_decl_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__547__1_2_0)
MR_decl_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__604__1_2_0)
MR_decl_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__609__1_2_0)
MR_decl_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__622__1_2_0)
MR_decl_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__693__1_2_0)
MR_decl_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__908__1_2_0)
MR_decl_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__955__1_2_0)
MR_decl_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__966__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_sectag_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_case_label_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_case_label_info_0;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_entry_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_entry_1;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_branch_end_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_branch_end_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_1;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const struct mercury_type_1 mercury_common_1[11] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,0)
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
MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case_entry),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,2)
}
},
{
{
MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case_entry),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case_entry),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__code_info, branch_end_info)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__code_info, branch_end_info)
}
},
{
{
MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_secondary_jump_table_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_secondary_binary_search_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_secondary_binary_search_10_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_tag_code_13_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_sectag_locn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__make_ptag_comment_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_try_chain_case_16_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_try_chain_13_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_jump_table_13_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_jump_table_13_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_binary_search_13_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_binary_search_13_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_binary_search_13_0_3;
static const struct mercury_type_2 mercury_common_2[13] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_secondary_jump_table_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,0),
MR_COMMON(1,0)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_secondary_binary_search_10_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_secondary_binary_search_10_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_COMMON(0,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_tag_code_13_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,1),
MR_COMMON(1,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn),
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__make_ptag_comment_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_try_chain_case_16_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_try_chain_13_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn),
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_jump_table_13_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,3),
MR_COMMON(1,3)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_jump_table_13_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn),
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_binary_search_13_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_binary_search_13_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn),
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_binary_search_13_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_COMMON(1,4)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
0
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
0,
MR_TAG_COMMON(1,3,0)
},
};

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(ll_backend__switch_case__add_remaining_case_4_0);
static const struct mercury_type_5 mercury_common_5[3] =
{
{
MR_COMMON(2,5),
MR_ENTRY_AP(fn__string__int_to_string_1_0),
0
},
{
MR_COMMON(2,6),
MR_ENTRY_AP(fn__string__int_to_string_1_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(ll_backend__switch_case__add_remaining_case_4_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_tag_switch_13_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_represent_params_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_tagged_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_code_info_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_tag_switch_13_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(ll_backend__switch_case, represent_params),
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_CTOR0_ADDR(ll_backend__code_info, code_info),
MR_CTOR0_ADDR(ll_backend__code_info, code_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_tag_switch_13_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_case_label_info_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__tag_switch__generate_tag_switch_13_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info),
MR_COMMON(1,10),
MR_COMMON(1,10)
}
},
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__tag_switch__enum_functor_desc_switch_method_0_0 = {
	"try_me_else_chain",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__tag_switch__enum_functor_desc_switch_method_0_1 = {
	"try_chain",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__tag_switch__enum_functor_desc_switch_method_0_2 = {
	"jump_table",
	2
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__tag_switch__enum_functor_desc_switch_method_0_3 = {
	"binary_search",
	3
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__tag_switch__enum_value_ordered_switch_method_0[] = {
	&mercury_data_ll_backend__tag_switch__enum_functor_desc_switch_method_0_0,
	&mercury_data_ll_backend__tag_switch__enum_functor_desc_switch_method_0_1,
	&mercury_data_ll_backend__tag_switch__enum_functor_desc_switch_method_0_2,
	&mercury_data_ll_backend__tag_switch__enum_functor_desc_switch_method_0_3
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__tag_switch__enum_name_ordered_switch_method_0[] = {
	&mercury_data_ll_backend__tag_switch__enum_functor_desc_switch_method_0_3,
	&mercury_data_ll_backend__tag_switch__enum_functor_desc_switch_method_0_2,
	&mercury_data_ll_backend__tag_switch__enum_functor_desc_switch_method_0_1,
	&mercury_data_ll_backend__tag_switch__enum_functor_desc_switch_method_0_0
};

const MR_Integer mercury_data_ll_backend__tag_switch__functor_number_map_switch_method_0[] = {
	3,
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__tag_switch__type_ctor_info_switch_method_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__tag_switch__switch_method_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__tag_switch__switch_method_0_0)),
	"ll_backend.tag_switch",
	"switch_method",
	{ (void *)mercury_data_ll_backend__tag_switch__enum_name_ordered_switch_method_0 },
	{ (void *)mercury_data_ll_backend__tag_switch__enum_value_ordered_switch_method_0 },
	4,
	4,
	mercury_data_ll_backend__tag_switch__functor_number_map_switch_method_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_tag_switch_13_0_2 = {
{
MR_PREDICATE,
"ll_backend.switch_case",
"ll_backend.switch_case",
"add_remaining_case",
4,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
323,
"136"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_tag_switch_13_0_1 = {
{
MR_PREDICATE,
"ll_backend.switch_case",
"ll_backend.switch_case",
"represent_tagged_case_for_llds",
9,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
220,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_binary_search_13_0_3 = {
{
MR_PREDICATE,
"ll_backend.tag_switch",
"ll_backend.tag_switch",
"lambda_tag_switch_m_622",
2,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
622,
"71"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_binary_search_13_0_2 = {
{
MR_PREDICATE,
"ll_backend.tag_switch",
"ll_backend.tag_switch",
"lambda_tag_switch_m_609",
2,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
609,
"49"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_binary_search_13_0_1 = {
{
MR_PREDICATE,
"ll_backend.tag_switch",
"ll_backend.tag_switch",
"lambda_tag_switch_m_604",
2,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
604,
"41"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_jump_table_13_0_2 = {
{
MR_PREDICATE,
"ll_backend.tag_switch",
"ll_backend.tag_switch",
"lambda_tag_switch_m_547",
2,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
547,
"39"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_jump_table_13_0_1 = {
{
MR_PREDICATE,
"ll_backend.tag_switch",
"ll_backend.tag_switch",
"lambda_tag_switch_m_534",
2,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
534,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_try_chain_13_0_1 = {
{
MR_PREDICATE,
"ll_backend.tag_switch",
"ll_backend.tag_switch",
"lambda_tag_switch_m_436",
2,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
436,
"39"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_try_chain_case_16_0_1 = {
{
MR_FUNCTION,
"string",
"string",
"int_to_string",
2,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
1010,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__make_ptag_comment_4_0_1 = {
{
MR_FUNCTION,
"string",
"string",
"int_to_string",
2,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
1010,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_1 = {
{
MR_PREDICATE,
"ll_backend.tag_switch",
"ll_backend.tag_switch",
"lambda_tag_switch_m_345",
2,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
345,
"35"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_primary_tag_code_13_0_1 = {
{
MR_PREDICATE,
"ll_backend.tag_switch",
"ll_backend.tag_switch",
"lambda_tag_switch_m_693",
2,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
693,
"56"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_secondary_binary_search_10_0_2 = {
{
MR_PREDICATE,
"ll_backend.tag_switch",
"ll_backend.tag_switch",
"lambda_tag_switch_m_966",
2,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
966,
"58"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_secondary_binary_search_10_0_1 = {
{
MR_PREDICATE,
"ll_backend.tag_switch",
"ll_backend.tag_switch",
"lambda_tag_switch_m_955",
2,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
955,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__tag_switch__generate_secondary_jump_table_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.tag_switch",
"ll_backend.tag_switch",
"lambda_tag_switch_m_908",
2,
0
},
"ll_backend.tag_switch",
"tag_switch.m",
908,
"10"
};



MR_BEGIN_MODULE(ll_backend__tag_switch_module0)
	MR_init_entry1(ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_0);
	MR_init_label2(ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_0,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_primary_try_me_else_chain_other_ptags'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_0_i2);
	}
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 13);
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 10);
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break;
	} /* end while */
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__switch_case__generate_case_code_or_jump_4_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__tag_switch_module1)
	MR_init_entry1(ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0);
	MR_init_label6(ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0,2,3,10,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_secondary_try_me_else_chain_case'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ll_backend__switch_case__generate_case_code_or_jump_4_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0_i2);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0_i3);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 13);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("test sec tag only", 17);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0_i10);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("handle next secondary tag", 25);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0_i13);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0_i14);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0_i15);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__tag_switch_module2)
	MR_init_entry1(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0);
	MR_init_label10(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,8,7,9,10,17,20,21,22,26,5)
	MR_init_label4(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,28,29,30,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_secondary_try_me_else_chain'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r6 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i7);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ll_backend__switch_case__generate_case_code_or_jump_4_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i8);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(ll_backend__switch_case__generate_case_code_or_jump_4_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i9);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i10);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 13);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("test sec tag only", 17);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i17);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("handle next secondary tag", 25);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i20);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i21);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i22);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("secondary tag does not match", 28);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i26);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i30);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i28);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_localcall_lab(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i29);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0_i30);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_secondary_try_me_else_chain\'/8", 72);
	MR_r3 = (MR_Word) MR_string_const("empty switch", 12);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__tag_switch_module3)
	MR_init_entry1(ll_backend__tag_switch__generate_secondary_try_chain_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_secondary_try_chain_7_0);
	MR_init_label10(ll_backend__tag_switch__generate_secondary_try_chain_7_0,56,8,9,7,10,16,18,19,23,24)
	MR_init_label6(ll_backend__tag_switch__generate_secondary_try_chain_7_0,5,25,31,33,34,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_secondary_try_chain'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_secondary_try_chain_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_try_chain_7_0_i3);
	}
	MR_r6 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_try_chain_7_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_try_chain_7_0_i7);
	}
	MR_sv(1) = MR_r4;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(ll_backend__switch_case__generate_case_code_or_jump_4_0,
		ll_backend__tag_switch__generate_secondary_try_chain_7_0_i8);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_try_chain_7_0_i9);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__tag_switch__generate_secondary_try_chain_7_0_i10);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_sv(7) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("test sec tag only for ", 22);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_try_chain_7_0_i16);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_secondary_try_chain_7_0_i18);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_try_chain_7_0_i19);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("secondary tag with no code to handle it", 39);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_secondary_try_chain_7_0_i23);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_try_chain_7_0_i24);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r6;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__tag_switch__generate_secondary_try_chain_7_0_i25);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_sv(4) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("test sec tag only for ", 22);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_try_chain_7_0_i31);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_secondary_try_chain_7_0_i33);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_try_chain_7_0_i34);
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_try_chain_7_0_i56);
	}
MR_def_label(ll_backend__tag_switch__generate_secondary_try_chain_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_secondary_try_chain\'/7", 64);
	MR_r3 = (MR_Word) MR_string_const("empty switch", 12);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__expect_4_0);

MR_BEGIN_MODULE(ll_backend__tag_switch_module4)
	MR_init_entry1(ll_backend__tag_switch__generate_secondary_jump_table_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_secondary_jump_table_5_0);
	MR_init_label5(ll_backend__tag_switch__generate_secondary_jump_table_5_0,4,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_secondary_jump_table'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_secondary_jump_table_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_jump_table_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__908__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_secondary_jump_table\'/5", 65);
	MR_r4 = (MR_Word) MR_string_const("caselist not empty when reaching limiting secondary tag", 55);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__tag_switch__generate_secondary_jump_table_5_0_i4);
MR_def_label(ll_backend__tag_switch__generate_secondary_jump_table_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__tag_switch__generate_secondary_jump_table_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_jump_table_5_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((MR_r2 != MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_jump_table_5_0_i5);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_r5;
	}
	MR_np_localcall_lab(ll_backend__tag_switch__generate_secondary_jump_table_5_0,
		ll_backend__tag_switch__generate_secondary_jump_table_5_0_i7);
MR_def_label(ll_backend__tag_switch__generate_secondary_jump_table_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__tag_switch__generate_secondary_jump_table_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r2 = MR_r5;
	MR_np_localcall_lab(ll_backend__tag_switch__generate_secondary_jump_table_5_0,
		ll_backend__tag_switch__generate_secondary_jump_table_5_0_i10);
MR_def_label(ll_backend__tag_switch__generate_secondary_jump_table_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);
MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(ll_backend__tag_switch_module5)
	MR_init_entry1(ll_backend__tag_switch__generate_secondary_binary_search_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_secondary_binary_search_10_0);
	MR_init_label10(ll_backend__tag_switch__generate_secondary_binary_search_10_0,6,8,9,13,4,17,18,15,81,20)
	MR_init_label10(ll_backend__tag_switch__generate_secondary_binary_search_10_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label9(ll_backend__tag_switch__generate_secondary_binary_search_10_0,33,34,41,44,45,46,47,48,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_secondary_binary_search'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_secondary_binary_search_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_binary_search_10_0_i81);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_binary_search_10_0_i4);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_binary_search_10_0_i6);
	}
	MR_sv(10) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i13);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_tfield(1, MR_r5, 0);
	MR_sv(10) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i8);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("no code for ptag ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i9);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i13);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(12);
	MR_decr_sp_and_return(15);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_secondary_binary_search_10_0_i15);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__955__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", 69);
	MR_r4 = (MR_Word) MR_string_const("cur_secondary mismatch", 22);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i17);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__switch_case__generate_case_code_or_jump_4_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i18);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_decr_sp_and_return(15);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", 69);
	MR_r3 = (MR_Word) MR_string_const("goallist not singleton or empty when binary search ends", 55);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(11) = MR_r1;
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(13) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_r1 = ((MR_Integer) MR_r2 + (MR_Integer) MR_tempr1);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i20);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__966__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_sv(3) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i23);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i24);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i25);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i26);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i27);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i28);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" to ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i29);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i30);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fallthrough for stags ", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i31);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" to ", 4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i32);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i33);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("code for stags ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i34);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 23);
	MR_tfield(3, MR_tempr3, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr4;
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i41);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i44);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(14);
	}
	MR_np_localcall_lab(ll_backend__tag_switch__generate_secondary_binary_search_10_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i45);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__tag_switch__generate_secondary_binary_search_10_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i46);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i47);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i48);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_secondary_binary_search_10_0_i49);
MR_def_label(ll_backend__tag_switch__generate_secondary_binary_search_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(13);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(ll_backend__code_info__get_globals_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(ll_backend__tag_switch_module6)
	MR_init_entry1(ll_backend__tag_switch__generate_primary_tag_code_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_primary_tag_code_13_0);
	MR_init_label10(ll_backend__tag_switch__generate_primary_tag_code_13_0,2,6,7,8,9,10,12,11,20,23)
	MR_init_label10(ll_backend__tag_switch__generate_primary_tag_code_13_0,19,26,27,30,25,33,37,34,44,32)
	MR_init_label10(ll_backend__tag_switch__generate_primary_tag_code_13_0,46,47,48,51,52,53,50,54,55,4)
	MR_init_label4(ll_backend__tag_switch__generate_primary_tag_code_13_0,65,63,62,60)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_primary_tag_code'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_primary_tag_code_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(11) = MR_r10;
	MR_sv(13) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i2);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_sv(6) == (MR_Integer) 2) || ((MR_Integer) MR_sv(6) == (MR_Integer) 3)))) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__693__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", 62);
	MR_r4 = (MR_Word) MR_string_const(">1 ptag with secondary tag", 26);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i6);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i7);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 420;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i8);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 426;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i9);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 425;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i10);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),2)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_sv(10) = MR_r1;
	MR_sv(7) = (MR_Word) MR_string_const("compute local sec tag to switch on", 34);
	MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i11);
	}
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tag_alloc_heap(MR_sv(6), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(6), 0) = MR_tempr1;
	MR_sv(10) = MR_r1;
	MR_sv(7) = (MR_Word) MR_string_const("compute remote sec tag to switch on", 35);
	}
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i20);
	}
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i19);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = MR_sv(13);
	MR_tfield(0, MR_r1, 2) = MR_sv(14);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i23);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	if ((MR_r2 != MR_r1)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i19);
	}
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) < (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i25);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i26);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_secondary_jump_table_5_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i27);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("switch on secondary tag", 23);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i30);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(15);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i32);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 294;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i33);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i34);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i37);
	}
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i32);
	}
	MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i34);
	}
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", 62);
	MR_r3 = (MR_Word) MR_string_const("improper reg in tag switch", 26);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i34);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i44);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r4, 0) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_sv(1) = MR_r8;
	MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i47);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i46);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 < (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i48);
	}
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(ll_backend__tag_switch__generate_secondary_binary_search_10_0);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 < (MR_Integer) MR_sv(10))) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i50);
	}
	MR_sv(12) = MR_r1;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(11) = MR_r7;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i51);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_secondary_try_chain_7_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i52);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i53);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(15);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i54);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_sv(12) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i55);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(12);
	MR_decr_sp_and_return(15);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i60);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i62);
	}
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,-1)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_tag_code_13_0_i63);
	}
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__switch_case__generate_case_code_or_jump_4_0,
		ll_backend__tag_switch__generate_primary_tag_code_13_0_i65);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(15);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", 62);
	MR_r3 = (MR_Word) MR_string_const("badly formed goal for non-shared tag", 36);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", 62);
	MR_r3 = (MR_Word) MR_string_const("more than one goal for non-shared tag", 37);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__tag_switch__generate_primary_tag_code_13_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", 62);
	MR_r3 = (MR_Word) MR_string_const("no goal for non-shared tag", 26);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module7)
	MR_init_entry1(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0);
	MR_init_label7(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0,2,7,11,12,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_primary_try_me_else_chain_case'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_r1 = MR_r10;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0_i2);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 13);
	MR_tfield(3, MR_tempr4, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_sv(6) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0_i7);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("test primary tag only", 21);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0_i11);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tfield(0, MR_tempr2, 0);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(10);
	}
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_tag_code_13_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0_i12);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("handle next primary tag", 23);
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0_i15);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0_i16);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0_i17);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__tag_switch_module8)
	MR_init_entry1(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0);
	MR_init_label10(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0,5,7,11,13,17,9,19,20,21,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_primary_try_me_else_chain'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(14) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r6;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(10) = MR_tempr2;
	MR_sv(11) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_i5);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__345__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 0);
	MR_sv(13) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", 71);
	MR_r4 = (MR_Word) MR_string_const("secondary tag locations differ", 30);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_i7);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_i11);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(5);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(ll_backend__tag_switch__generate_primary_tag_code_13_0);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(14);
	MR_tempr2 = MR_sv(2);
	MR_sv(14) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_i13);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("primary tag with no code to handle it", 37);
	MR_sv(14) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_i17);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_i21);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_i19);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	}
	MR_np_localcall_lab(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_i20);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0_i21);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(15);
MR_def_label(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", 71);
	MR_r3 = (MR_Word) MR_string_const("empty switch", 12);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module9)
	MR_init_entry1(ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_0);
	MR_init_label2(ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_0,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_primary_try_chain_other_ptags'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_0_i2);
	}
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 11);
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break;
	} /* end while */
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(ll_backend__tag_switch_module10)
	MR_init_entry1(ll_backend__tag_switch__make_ptag_comment_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__make_ptag_comment_4_0);
	MR_init_label7(ll_backend__tag_switch__make_ptag_comment_4_0,3,6,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_ptag_comment'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__make_ptag_comment_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__make_ptag_comment_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__tag_switch__make_ptag_comment_4_0_i12);
MR_def_label(ll_backend__tag_switch__make_ptag_comment_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__tag_switch__make_ptag_comment_4_0_i6);
MR_def_label(ll_backend__tag_switch__make_ptag_comment_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__tag_switch__make_ptag_comment_4_0_i8);
MR_def_label(ll_backend__tag_switch__make_ptag_comment_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		ll_backend__tag_switch__make_ptag_comment_4_0_i9);
MR_def_label(ll_backend__tag_switch__make_ptag_comment_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__make_ptag_comment_4_0_i10);
MR_def_label(ll_backend__tag_switch__make_ptag_comment_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(shared with ", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__make_ptag_comment_4_0_i11);
MR_def_label(ll_backend__tag_switch__make_ptag_comment_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__make_ptag_comment_4_0_i12);
MR_def_label(ll_backend__tag_switch__make_ptag_comment_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module11)
	MR_init_entry1(ll_backend__tag_switch__generate_primary_try_chain_case_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_primary_try_chain_case_16_0);
	MR_init_label10(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,2,7,11,14,15,13,18,20,21,22)
	MR_init_label8(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,23,24,25,28,29,30,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_primary_try_chain_case'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_primary_try_chain_case_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_r1 = MR_r12;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i2);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_tempr4, 2) = MR_sv(9);
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_sv(9) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i7);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("test primary tag only", 21);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i11);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(12),0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i13);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i14);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("primary tag value: ", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i15);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i28);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i18);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i20);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i21);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i22);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(shared with ", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i23);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i24);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("primary tag value: ", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i25);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i28);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tfield(0, MR_tempr2, 0);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(13);
	}
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_tag_code_13_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i29);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i30);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i31);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_case_16_0_i32);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module12)
	MR_init_entry1(ll_backend__tag_switch__generate_primary_try_chain_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_primary_try_chain_13_0);
	MR_init_label10(ll_backend__tag_switch__generate_primary_try_chain_13_0,49,5,7,12,15,16,17,18,11,20)
	MR_init_label6(ll_backend__tag_switch__generate_primary_try_chain_13_0,24,25,26,9,27,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_primary_try_chain'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_primary_try_chain_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_try_chain_13_0_i3);
	}
	MR_sv(15) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(16) = MR_r4;
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r6;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_r10;
	MR_sv(8) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_tempr2;
	MR_sv(12) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__tag_switch__generate_primary_try_chain_13_0_i5);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__436__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 0);
	MR_sv(14) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", 63);
	MR_r4 = (MR_Word) MR_string_const("secondary tag locations differ", 30);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__tag_switch__generate_primary_try_chain_13_0_i7);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_try_chain_13_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_try_chain_13_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("fallthrough to last primary tag value: ", 39);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__tag_switch__make_ptag_comment_4_0,
		ll_backend__tag_switch__generate_primary_try_chain_13_0_i12);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_try_chain_13_0_i15);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(16);
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_tag_code_13_0,
		ll_backend__tag_switch__generate_primary_try_chain_13_0_i16);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r2;
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_13_0_i17);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_13_0_i18);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_13_0_i26);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(15);
	MR_tempr2 = MR_sv(1);
	MR_sv(15) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_r12 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,
		ll_backend__tag_switch__generate_primary_try_chain_13_0_i20);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("primary tag with no code to handle it", 37);
	MR_sv(15) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(16) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_try_chain_13_0_i24);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_13_0_i25);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_try_chain_13_0_i26);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(17);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_r12 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_try_chain_case_16_0,
		ll_backend__tag_switch__generate_primary_try_chain_13_0_i27);
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(15);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_try_chain_13_0_i49);
	}
MR_def_label(ll_backend__tag_switch__generate_primary_try_chain_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", 63);
	MR_r3 = (MR_Word) MR_string_const("empty list", 10);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module13)
	MR_init_entry1(ll_backend__tag_switch__generate_primary_jump_table_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_primary_jump_table_13_0);
	MR_init_label10(ll_backend__tag_switch__generate_primary_jump_table_13_0,4,5,2,9,11,12,13,14,17,18)
	MR_init_label5(ll_backend__tag_switch__generate_primary_jump_table_13_0,19,22,23,6,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_primary_jump_table'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_primary_jump_table_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_jump_table_13_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__534__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = MR_r8;
	MR_sv(12) = MR_r9;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", 64);
	MR_r4 = (MR_Word) MR_string_const("PtagGroups != [] when Cur > Max", 31);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__tag_switch__generate_primary_jump_table_13_0_i4);
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__tag_switch__generate_primary_jump_table_13_0_i5);
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(12);
	MR_decr_sp_and_return(15);
	}
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_jump_table_13_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((MR_r2 != MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_jump_table_13_0_i6);
	}
	MR_sv(9) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_tempr3 = MR_r7;
	MR_sv(3) = MR_tempr3;
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_r8;
	MR_sv(12) = MR_r9;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__tag_switch__generate_primary_jump_table_13_0_i9);
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__547__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 0);
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", 64);
	MR_r4 = (MR_Word) MR_string_const("secondary tag locations differ", 30);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__tag_switch__generate_primary_jump_table_13_0_i11);
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__tag_switch__generate_primary_jump_table_13_0_i12);
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__tag_switch__generate_primary_jump_table_13_0_i13);
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("start of a case in primary tag switch: ptag ", 44);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_jump_table_13_0_i14);
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_jump_table_13_0_i17);
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(14);
	}
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_tag_code_13_0,
		ll_backend__tag_switch__generate_primary_jump_table_13_0_i18);
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__tag_switch__generate_primary_jump_table_13_0,
		ll_backend__tag_switch__generate_primary_jump_table_13_0_i19);
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_tempr2;
	MR_sv(11) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_jump_table_13_0_i22);
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_jump_table_13_0_i23);
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(13);
	MR_decr_sp_and_return(15);
	}
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r6;
	MR_r2 = MR_sv(4);
	MR_np_localcall_lab(ll_backend__tag_switch__generate_primary_jump_table_13_0,
		ll_backend__tag_switch__generate_primary_jump_table_13_0_i24);
MR_def_label(ll_backend__tag_switch__generate_primary_jump_table_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module14)
	MR_init_entry1(ll_backend__tag_switch__generate_primary_binary_search_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_primary_binary_search_13_0);
	MR_init_label10(ll_backend__tag_switch__generate_primary_binary_search_13_0,6,8,9,13,4,17,19,21,15,85)
	MR_init_label10(ll_backend__tag_switch__generate_primary_binary_search_13_0,24,27,28,29,30,31,32,33,34,35)
	MR_init_label10(ll_backend__tag_switch__generate_primary_binary_search_13_0,36,37,38,45,48,49,50,51,52,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_primary_binary_search'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__generate_primary_binary_search_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_binary_search_13_0_i85);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_binary_search_13_0_i4);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_binary_search_13_0_i6);
	}
	MR_sv(14) = MR_r9;
	MR_sv(16) = MR_r10;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i13);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_tfield(1, MR_r7, 0);
	MR_sv(14) = MR_r9;
	MR_sv(16) = MR_r10;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i8);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("no code for ptag ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i9);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i13);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(16);
	MR_decr_sp_and_return(18);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_primary_binary_search_13_0_i15);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__604__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(13) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(15) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(14) = MR_r9;
	MR_sv(16) = MR_r10;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", 67);
	MR_r4 = (MR_Word) MR_string_const("cur_primary mismatch", 20);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i17);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i19);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__609__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", 67);
	MR_r4 = (MR_Word) MR_string_const("secondary tag locations differ", 30);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i21);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(14);
	MR_r10 = MR_sv(16);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(ll_backend__tag_switch__generate_primary_tag_code_13_0);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", 67);
	MR_r3 = (MR_Word) MR_string_const("caselist not singleton or empty when binary search ends", 55);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(15) = MR_r1;
	MR_sv(13) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(14) = MR_r9;
	MR_sv(16) = MR_r10;
	MR_r1 = ((MR_Integer) MR_r2 + (MR_Integer) MR_tempr1);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i24);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,12);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__622__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_sv(7) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i27);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(16);
	MR_sv(16) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i28);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i29);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i30);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i31);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i32);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" to ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i33);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i34);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fallthrough for ptags ", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i35);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" to ", 4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i36);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i37);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("code for ptags ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i38);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 23);
	MR_tfield(3, MR_tempr3, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr4;
	MR_tfield(0, MR_r2, 1) = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i45);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(11);
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i48);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(14);
	MR_r10 = MR_sv(17);
	}
	MR_np_localcall_lab(ll_backend__tag_switch__generate_primary_binary_search_13_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i49);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__tag_switch__generate_primary_binary_search_13_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i50);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i51);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i52);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_primary_binary_search_13_0_i53);
MR_def_label(ll_backend__tag_switch__generate_primary_binary_search_13_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__acquire_reg_4_0);
MR_decl_entry(ll_backend__code_info__release_reg_3_0);
MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(backend_libs__switch_util__get_ptag_counts_4_0);
MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(ll_backend__switch_case__represent_tagged_case_for_llds_9_0);
MR_decl_entry(fn__map__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_code_info_0;
MR_decl_entry(backend_libs__switch_util__group_cases_by_ptag_10_0);
MR_decl_entry(map__count_2_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);
MR_decl_entry(ll_backend__code_info__generate_failure_3_0);
MR_decl_entry(backend_libs__switch_util__order_ptags_by_value_4_0);
MR_decl_entry(backend_libs__switch_util__order_ptags_by_count_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(ll_backend__tag_switch_module15)
	MR_init_entry1(ll_backend__tag_switch__generate_tag_switch_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__generate_tag_switch_13_0);
	MR_init_label10(ll_backend__tag_switch__generate_tag_switch_13_0,2,3,4,5,6,7,8,11,14,16)
	MR_init_label10(ll_backend__tag_switch__generate_tag_switch_13_0,17,18,19,20,23,26,30,31,32,25)
	MR_init_label10(ll_backend__tag_switch__generate_tag_switch_13_0,34,24,36,38,39,42,43,35,46,50)
	MR_init_label10(ll_backend__tag_switch__generate_tag_switch_13_0,47,58,44,45,60,62,64,63,67,68)
	MR_init_label10(ll_backend__tag_switch__generate_tag_switch_13_0,75,76,66,78,79,83,86,87,88,89)
	MR_init_label1(ll_backend__tag_switch__generate_tag_switch_13_0,90)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_tag_switch'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__tag_switch__generate_tag_switch_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_sv(16) = MR_r9;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r10;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i2);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i3);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i4);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i5);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i6);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__switch_util__get_ptag_counts_4_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i7);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i8);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(10) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__switch_case__represent_tagged_case_for_llds_9_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_sv(13) = MR_r1;
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i11);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(ll_backend__code_info, code_info);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(16);
	MR_r9 = MR_sv(7);
	}
	MR_np_call_localret_ent(backend_libs__switch_util__group_cases_by_ptag_10_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i14);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(10) = MR_tempr1;
	MR_sv(17) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__count_2_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i16);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i17);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r2 = (MR_Integer) 420;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i18);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Integer) 425;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i19);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Integer) 426;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i20);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("end of tag switch", 17);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i23);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_tag_switch_13_0_i25);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i26);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(12), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(12), 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("switch has failed", 17);
	MR_sv(18) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i30);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i31);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i32);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i24);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i34);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_sv(12);
	MR_sv(12) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) < (MR_Integer) MR_sv(7))) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_tag_switch_13_0_i35);
	}
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i36);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(15);
	MR_sv(13) = MR_r1;
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(backend_libs__switch_util__order_ptags_by_value_4_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i38);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(14);
	MR_r9 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_jump_table_13_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i39);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("switch on primary tag", 21);
	MR_sv(15) = MR_r3;
	MR_sv(14) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i42);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i43);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i83);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(6),2)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_tag_switch_13_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(16);
	MR_sv(16) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 294;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i46);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_tag_switch_13_0_i47);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_tag_switch_13_0_i50);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_tag_switch_13_0_i50);
	}
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_tag_switch_13_0_i44);
	}
	MR_GOTO_LAB(ll_backend__tag_switch__generate_tag_switch_13_0_i47);
	}
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.tag_switch", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.tag_switch.generate_tag_switch\'/13", 56);
	MR_r3 = (MR_Word) MR_string_const("improper reg in tag switch", 26);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i47);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("compute tag to switch on", 24);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i58);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(10);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__tag_switch__generate_tag_switch_13_0_i62);
	}
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(16);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i60);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(15);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(10);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	}
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) < (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_tag_switch_13_0_i63);
	}
	MR_sv(4) = MR_r3;
	MR_sv(19) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(backend_libs__switch_util__order_ptags_by_value_4_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i64);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(14);
	MR_r10 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_binary_search_13_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i79);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) < (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_tag_switch_13_0_i66);
	}
	MR_sv(19) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(backend_libs__switch_util__order_ptags_by_count_3_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i67);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_tag_switch_13_0_i68);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__tag_switch__generate_tag_switch_13_0_i68);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case_group_entry);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(19);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i68);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i75);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i76);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(14);
	MR_r10 = MR_sv(18);
	}
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_try_chain_13_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i79);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(backend_libs__switch_util__order_ptags_by_count_3_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i78);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_primary_try_me_else_chain_11_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i79);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i83);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i86);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i87);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i88);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i89);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__tag_switch__generate_tag_switch_13_0_i90);
MR_def_label(ll_backend__tag_switch__generate_tag_switch_13_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module16)
	MR_init_entry1(__Unify___ll_backend__tag_switch__switch_method_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__tag_switch__switch_method_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__tag_switch__switch_method_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__tag_switch_module17)
	MR_init_entry1(__Compare___ll_backend__tag_switch__switch_method_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__tag_switch__switch_method_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__tag_switch__switch_method_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module18)
	MR_init_entry1(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__345__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__345__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_primary_try_me_else_chain__345__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__345__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module19)
	MR_init_entry1(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__436__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__436__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_primary_try_chain__436__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__436__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__tag_switch_module20)
	MR_init_entry1(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__534__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__534__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_primary_jump_table__534__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__534__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
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


MR_BEGIN_MODULE(ll_backend__tag_switch_module21)
	MR_init_entry1(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__547__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__547__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_primary_jump_table__547__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__547__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module22)
	MR_init_entry1(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__604__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__604__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_primary_binary_search__604__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__604__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module23)
	MR_init_entry1(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__609__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__609__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_primary_binary_search__609__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__609__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module24)
	MR_init_entry1(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__622__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__622__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_primary_binary_search__622__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__622__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r1 = ((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module25)
	MR_init_entry1(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__693__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__693__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_primary_tag_code__693__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__693__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
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


MR_BEGIN_MODULE(ll_backend__tag_switch_module26)
	MR_init_entry1(ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__908__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__908__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_secondary_jump_table__908__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__908__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
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


MR_BEGIN_MODULE(ll_backend__tag_switch_module27)
	MR_init_entry1(ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__955__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__955__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_secondary_binary_search__955__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__955__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__tag_switch_module28)
	MR_init_entry1(ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__966__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__966__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_secondary_binary_search__966__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__966__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r1 = ((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__tag_switch_maybe_bunch_0(void)
{
	ll_backend__tag_switch_module0();
	ll_backend__tag_switch_module1();
	ll_backend__tag_switch_module2();
	ll_backend__tag_switch_module3();
	ll_backend__tag_switch_module4();
	ll_backend__tag_switch_module5();
	ll_backend__tag_switch_module6();
	ll_backend__tag_switch_module7();
	ll_backend__tag_switch_module8();
	ll_backend__tag_switch_module9();
	ll_backend__tag_switch_module10();
	ll_backend__tag_switch_module11();
	ll_backend__tag_switch_module12();
	ll_backend__tag_switch_module13();
	ll_backend__tag_switch_module14();
	ll_backend__tag_switch_module15();
	ll_backend__tag_switch_module16();
	ll_backend__tag_switch_module17();
	ll_backend__tag_switch_module18();
	ll_backend__tag_switch_module19();
	ll_backend__tag_switch_module20();
	ll_backend__tag_switch_module21();
	ll_backend__tag_switch_module22();
	ll_backend__tag_switch_module23();
	ll_backend__tag_switch_module24();
	ll_backend__tag_switch_module25();
	ll_backend__tag_switch_module26();
	ll_backend__tag_switch_module27();
	ll_backend__tag_switch_module28();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__tag_switch__init(void);
void mercury__ll_backend__tag_switch__init_type_tables(void);
void mercury__ll_backend__tag_switch__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__tag_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__tag_switch__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__tag_switch__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__tag_switch__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__tag_switch_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__tag_switch__type_ctor_info_switch_method_0,
		ll_backend__tag_switch__switch_method_0_0);
	mercury__ll_backend__tag_switch__init_debugger();
}

void mercury__ll_backend__tag_switch__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__tag_switch__type_ctor_info_switch_method_0);
	}
}


void mercury__ll_backend__tag_switch__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__tag_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__tag_switch);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__tag_switch__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__tag_switch__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
