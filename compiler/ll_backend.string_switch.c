/*
** Automatically generated from `string_switch.m'
** by the Mercury compiler,
** version 11.07-beta-2011-11-14, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__string_switch__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.string_switch.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ll_backend.string_switch.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.string_switch.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.string_switch.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.string_switch.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.string_switch.c"
#line 49 "ll_backend.string_switch.c"
#include "ll_backend.string_switch.mh"

#line 52 "ll_backend.string_switch.c"
#line 53 "ll_backend.string_switch.c"
#ifndef LL_BACKEND__STRING_SWITCH_DECL_GUARD
#define LL_BACKEND__STRING_SWITCH_DECL_GUARD

#line 57 "ll_backend.string_switch.c"
#line 58 "ll_backend.string_switch.c"

#endif
#line 61 "ll_backend.string_switch.c"

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
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__string_switch__type_ctor_info_string_binary_switch_info_0,
	mercury_data_ll_backend__string_switch__type_ctor_info_string_hash_switch_info_0;
MR_decl_label6(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0, 40,3,7,15,23,24)
MR_decl_label2(ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_0, 8,2)
MR_decl_label4(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0, 41,2,5,3)
MR_decl_label8(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0, 65,2,6,13,22,31,32,3)
MR_decl_label4(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0, 38,2,6,3)
MR_decl_label2(ll_backend__string_switch__gen_string_binary_jump_slots_7_0, 13,2)
MR_decl_label1(ll_backend__string_switch__generate_string_binary_lookup_switch_10_0, 3)
MR_decl_label10(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0, 2,5,8,10,11,18,20,22,19,24)
MR_decl_label10(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0, 26,27,28,29,35,36,37,41,42,45)
MR_decl_label9(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0, 48,57,58,59,62,63,64,65,66)
MR_decl_label10(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0, 2,5,8,10,11,14,15,17,22,23)
MR_decl_label10(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0, 21,24,33,34,35,36,37,40,41,42)
MR_decl_label2(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0, 43,44)
MR_decl_label10(ll_backend__string_switch__generate_string_binary_switch_11_0, 2,6,7,11,12,14,16,19,25,37)
MR_decl_label7(ll_backend__string_switch__generate_string_binary_switch_11_0, 38,41,44,45,46,47,48)
MR_decl_label3(ll_backend__string_switch__generate_string_binary_switch_search_7_0, 72,75,76)
MR_decl_label1(ll_backend__string_switch__generate_string_hash_lookup_switch_10_0, 3)
MR_decl_label10(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0, 2,5,8,9,10,12,13,21,23,24)
MR_decl_label10(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0, 22,25,27,29,30,31,32,38,39,40)
MR_decl_label10(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0, 45,48,51,57,58,59,60,63,64,65)
MR_decl_label10(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0, 2,5,8,9,10,12,13,17,19,20)
MR_decl_label10(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0, 21,24,29,30,28,34,40,41,42,43)
MR_decl_label7(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0, 47,48,49,50,53,54,55)
MR_decl_label10(ll_backend__string_switch__generate_string_hash_switch_11_0, 2,6,7,8,9,10,14,15,17,19)
MR_decl_label9(ll_backend__string_switch__generate_string_hash_switch_11_0, 22,32,33,34,37,40,41,42,43)
MR_decl_label4(ll_backend__string_switch__generate_string_hash_switch_search_9_0, 35,54,55,56)
MR_decl_label10(ll_backend__string_switch__init_string_binary_switch_info_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label8(ll_backend__string_switch__init_string_binary_switch_info_4_0, 12,13,14,17,16,20,15,21)
MR_decl_label10(ll_backend__string_switch__init_string_hash_switch_info_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label5(ll_backend__string_switch__init_string_hash_switch_info_4_0, 14,13,17,12,18)
MR_decl_label10(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0, 4,6,8,10,12,14,16,18,20,24)
MR_decl_label1(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0, 1)
MR_decl_label9(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0, 4,6,8,10,12,14,16,20,1)
MR_decl_label10(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label2(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0, 37,85)
MR_decl_label10(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0, 3,2,5,9,13,17,21,25,29,69)
MR_decl_static(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0)
MR_decl_static(ll_backend__string_switch__init_string_hash_switch_info_4_0)
MR_decl_static(ll_backend__string_switch__generate_string_hash_switch_search_9_0)
MR_def_extern_entry(ll_backend__string_switch__generate_string_hash_switch_11_0)
MR_decl_static(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0)
MR_decl_static(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0)
MR_decl_static(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0)
MR_decl_static(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0)
MR_def_extern_entry(ll_backend__string_switch__generate_string_hash_lookup_switch_10_0)
MR_decl_static(ll_backend__string_switch__gen_string_binary_jump_slots_7_0)
MR_decl_static(ll_backend__string_switch__init_string_binary_switch_info_4_0)
MR_decl_static(ll_backend__string_switch__generate_string_binary_switch_search_7_0)
MR_def_extern_entry(ll_backend__string_switch__generate_string_binary_switch_11_0)
MR_decl_static(ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_0)
MR_decl_static(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0)
MR_decl_static(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0)
MR_decl_static(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0)
MR_def_extern_entry(ll_backend__string_switch__generate_string_binary_lookup_switch_10_0)
MR_decl_static(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0)
MR_decl_static(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0)
MR_decl_static(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0)
MR_decl_static(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0)
MR_decl_static(ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__366__1_2_0)
MR_decl_static(ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__814__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_string_hash_slot_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_branch_end_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_branch_end_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_soln_consts_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[15] =
{
{
{
MR_CTOR1_ADDR(backend_libs__switch_util, string_hash_slot),
MR_CTOR0_ADDR(ll_backend__llds, label)
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
MR_TAG_COMMON(3,2,0),
MR_TAG_COMMON(1,0,1)
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, rval)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
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
{
{
MR_CTOR1_ADDR(backend_libs__switch_util, string_hash_slot),
MR_TAG_COMMON(0,0,5)
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
MR_CTOR1_ADDR(backend_libs__switch_util, soln_consts),
MR_CTOR0_ADDR(ll_backend__llds, rval)
}
},
{
{
MR_CTOR1_ADDR(backend_libs__switch_util, string_hash_slot),
MR_TAG_COMMON(0,0,11)
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
MR_COMMON(0,13)
}
},
};

static const struct mercury_type_1 mercury_common_1[4] =
{
{
0
},
{
-2
},
{
1
},
{
2
},
};

static const struct mercury_type_2 mercury_common_2[8] =
{
{
0,
MR_TAG_COMMON(1,1,0)
},
{
0,
MR_TAG_COMMON(1,1,1)
},
{
0,
MR_TAG_COMMON(1,1,2)
},
{
7,
MR_tbmkword(0, 0)
},
{
10,
MR_TAG_COMMON(1,2,3)
},
{
1,
MR_tbmkword(0, 0)
},
{
0,
MR_TAG_COMMON(1,2,5)
},
{
0,
MR_TAG_COMMON(1,1,3)
},
};

static const struct mercury_type_3 mercury_common_3[7] =
{
{
MR_string_const("unreachable", 11)
},
{
MR_string_const("string hash jump switch", 23)
},
{
MR_string_const("string hash simple lookup switch", 32)
},
{
MR_string_const("string hash several soln lookup switch", 38)
},
{
MR_string_const("string binary jump switch", 25)
},
{
MR_string_const("string binary simple lookup switch", 34)
},
{
MR_string_const("string binary several soln lookup switch", 40)
},
};

static const struct mercury_type_4 mercury_common_4[7] =
{
{
MR_TAG_COMMON(1,3,0),
MR_string_const("fail code in cannot_fail switch", 31)
},
{
MR_TAG_COMMON(1,3,1),
MR_string_const("", 0)
},
{
MR_TAG_COMMON(1,3,2),
MR_string_const("", 0)
},
{
MR_TAG_COMMON(1,3,3),
MR_string_const("", 0)
},
{
MR_TAG_COMMON(1,3,4),
MR_string_const("", 0)
},
{
MR_TAG_COMMON(1,3,5),
MR_string_const("", 0)
},
{
MR_TAG_COMMON(1,3,6),
MR_string_const("", 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_case_label_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_case_label_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__lookup_switch__type_ctor_info_case_kind_0;
static const struct mercury_type_5 mercury_common_5[5] =
{
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
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,0,5)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,0,11)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__lookup_switch, case_kind)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_switch_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_represent_params_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_tagged_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_code_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_switch_11_0_1;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_switch_11_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(ll_backend__switch_case, represent_params),
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_COMMON(5,0),
MR_COMMON(5,0),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_CTOR0_ADDR(ll_backend__code_info, code_info),
MR_CTOR0_ADDR(ll_backend__code_info, code_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_switch_11_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(ll_backend__switch_case, represent_params),
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_COMMON(5,0),
MR_COMMON(5,0),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_CTOR0_ADDR(ll_backend__code_info, code_info),
MR_CTOR0_ADDR(ll_backend__code_info, code_info)
}
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
MR_TAG_COMMON(1,2,6)
},
{
MR_TAG_COMMON(1,7,0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_switch_11_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_case_label_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_switch_11_0_2;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_switch_11_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info),
MR_COMMON(0,8),
MR_COMMON(0,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_switch_11_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info),
MR_COMMON(0,8),
MR_COMMON(0,8)
}
},
};

MR_decl_entry(ll_backend__switch_case__add_remaining_case_4_0);
MR_decl_entry(fn__ll_backend__lookup_switch__default_value_for_type_1_0);
static const struct mercury_type_9 mercury_common_9[6] =
{
{
MR_COMMON(8,0),
MR_ENTRY_AP(ll_backend__switch_case__add_remaining_case_4_0),
0
},
{
MR_COMMON(10,0),
MR_ENTRY_AP(fn__ll_backend__lookup_switch__default_value_for_type_1_0),
0
},
{
MR_COMMON(10,2),
MR_ENTRY_AP(fn__ll_backend__lookup_switch__default_value_for_type_1_0),
0
},
{
MR_COMMON(8,1),
MR_ENTRY_AP(ll_backend__switch_case__add_remaining_case_4_0),
0
},
{
MR_COMMON(10,4),
MR_ENTRY_AP(fn__ll_backend__lookup_switch__default_value_for_type_1_0),
0
},
{
MR_COMMON(10,5),
MR_ENTRY_AP(fn__ll_backend__lookup_switch__default_value_for_type_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_llds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_4;
static const struct mercury_type_10 mercury_common_10[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, llds_type),
MR_CTOR0_ADDR(ll_backend__llds, rval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,14),
MR_COMMON(0,14)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, llds_type),
MR_CTOR0_ADDR(ll_backend__llds, rval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,14),
MR_COMMON(0,14)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, llds_type),
MR_CTOR0_ADDR(ll_backend__llds, rval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, llds_type),
MR_CTOR0_ADDR(ll_backend__llds, rval)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_2;
static const struct mercury_type_12 mercury_common_12[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(11,0)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(11,0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_position_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_cord__type_ctor_info_cord_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_position_info_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__string_switch__field_types_string_binary_switch_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__code_info__type_ctor_info_position_info_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

const MR_ConstString mercury_data_ll_backend__string_switch__field_names_string_binary_switch_info_0_0[] = {
	"sbsi_lo_reg",
	"sbsi_hi_reg",
	"sbsi_mid_reg",
	"sbsi_result_reg",
	"sbsi_loop_start_label",
	"sbsi_gt_eq_label",
	"sbsi_eq_label",
	"sbsi_fail_label",
	"sbsi_branch_start",
	"sbsi_fail_code"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0 = {
	"string_binary_switch_info",
	10,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__string_switch__field_types_string_binary_switch_info_0_0,
	mercury_data_ll_backend__string_switch__field_names_string_binary_switch_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0[] = {
	&mercury_data_ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__string_switch__du_ptag_ordered_string_binary_switch_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__string_switch__du_stag_ordered_string_binary_switch_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__string_switch__du_name_ordered_string_binary_switch_info_0[] = {
	&mercury_data_ll_backend__string_switch__du_functor_desc_string_binary_switch_info_0_0
};

const MR_Integer mercury_data_ll_backend__string_switch__functor_number_map_string_binary_switch_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__string_switch__type_ctor_info_string_binary_switch_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0)),
	"ll_backend.string_switch",
	"string_binary_switch_info",
	{ (void *)mercury_data_ll_backend__string_switch__du_name_ordered_string_binary_switch_info_0 },
	{ (void *)mercury_data_ll_backend__string_switch__du_ptag_ordered_string_binary_switch_info_0 },
	1,
	4,
	mercury_data_ll_backend__string_switch__functor_number_map_string_binary_switch_info_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__string_switch__field_types_string_hash_switch_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__code_info__type_ctor_info_position_info_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

const MR_ConstString mercury_data_ll_backend__string_switch__field_names_string_hash_switch_info_0_0[] = {
	"shsi_slot_reg",
	"shsi_row_start_reg",
	"shsi_string_reg",
	"shsi_loop_start_label",
	"shsi_no_match_label",
	"shsi_fail_label",
	"shsi_branch_start",
	"shsi_fail_code"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0 = {
	"string_hash_switch_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__string_switch__field_types_string_hash_switch_info_0_0,
	mercury_data_ll_backend__string_switch__field_names_string_hash_switch_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0[] = {
	&mercury_data_ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__string_switch__du_ptag_ordered_string_hash_switch_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__string_switch__du_stag_ordered_string_hash_switch_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__string_switch__du_name_ordered_string_hash_switch_info_0[] = {
	&mercury_data_ll_backend__string_switch__du_functor_desc_string_hash_switch_info_0_0
};

const MR_Integer mercury_data_ll_backend__string_switch__functor_number_map_string_hash_switch_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__string_switch__type_ctor_info_string_hash_switch_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0)),
	"ll_backend.string_switch",
	"string_hash_switch_info",
	{ (void *)mercury_data_ll_backend__string_switch__du_name_ordered_string_hash_switch_info_0 },
	{ (void *)mercury_data_ll_backend__string_switch__du_ptag_ordered_string_hash_switch_info_0 },
	1,
	4,
	mercury_data_ll_backend__string_switch__functor_number_map_string_hash_switch_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_4 = {
{
MR_FUNCTION,
"ll_backend.lookup_switch",
"ll_backend.lookup_switch",
"default_value_for_type",
2,
0
},
"ll_backend.string_switch",
"string_switch.m",
831,
"51"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_3 = {
{
MR_FUNCTION,
"ll_backend.lookup_switch",
"ll_backend.lookup_switch",
"default_value_for_type",
2,
0
},
"ll_backend.string_switch",
"string_switch.m",
831,
"51"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_2 = {
{
MR_PREDICATE,
"std_util",
"std_util",
"negate",
1,
0
},
"ll_backend.string_switch",
"string_switch.m",
814,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_1 = {
{
MR_PREDICATE,
"ll_backend.string_switch",
"ll_backend.string_switch",
"lambda_string_switch_m_814",
2,
0
},
"ll_backend.string_switch",
"string_switch.m",
814,
"35"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_switch_11_0_2 = {
{
MR_PREDICATE,
"ll_backend.switch_case",
"ll_backend.switch_case",
"add_remaining_case",
4,
0
},
"ll_backend.string_switch",
"string_switch.m",
635,
"65"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_binary_switch_11_0_1 = {
{
MR_PREDICATE,
"ll_backend.switch_case",
"ll_backend.switch_case",
"represent_tagged_case_for_llds",
9,
0
},
"ll_backend.string_switch",
"string_switch.m",
600,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_3 = {
{
MR_FUNCTION,
"ll_backend.lookup_switch",
"ll_backend.lookup_switch",
"default_value_for_type",
2,
0
},
"ll_backend.string_switch",
"string_switch.m",
382,
"63"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_2 = {
{
MR_PREDICATE,
"std_util",
"std_util",
"negate",
1,
0
},
"ll_backend.string_switch",
"string_switch.m",
366,
"45"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_1 = {
{
MR_PREDICATE,
"ll_backend.string_switch",
"ll_backend.string_switch",
"lambda_string_switch_m_366",
2,
0
},
"ll_backend.string_switch",
"string_switch.m",
366,
"46"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_1 = {
{
MR_FUNCTION,
"ll_backend.lookup_switch",
"ll_backend.lookup_switch",
"default_value_for_type",
2,
0
},
"ll_backend.string_switch",
"string_switch.m",
242,
"41"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_switch_11_0_2 = {
{
MR_PREDICATE,
"ll_backend.switch_case",
"ll_backend.switch_case",
"add_remaining_case",
4,
0
},
"ll_backend.string_switch",
"string_switch.m",
147,
"65"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__string_switch__generate_string_hash_switch_11_0_1 = {
{
MR_PREDICATE,
"ll_backend.switch_case",
"ll_backend.switch_case",
"represent_tagged_case_for_llds",
9,
0
},
"ll_backend.string_switch",
"string_switch.m",
117,
"31"
};


MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__string_switch_module0)
	MR_init_entry1(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__construct_string_hash_jump_vectors_8_0);
	MR_init_label4(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0,41,2,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_string_hash_jump_vectors'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0_i2);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__string_switch__construct_string_hash_jump_vectors_8_0_i5);
MR_def_label(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 2);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0_i41);
	}
MR_def_label(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tempr4 = MR_sv(4);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr4;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0_i41);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__acquire_reg_4_0);
MR_decl_entry(ll_backend__code_info__release_reg_3_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(ll_backend__code_info__generate_failure_3_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);

MR_BEGIN_MODULE(ll_backend__string_switch_module1)
	MR_init_entry1(ll_backend__string_switch__init_string_hash_switch_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__init_string_hash_switch_info_4_0);
	MR_init_label10(ll_backend__string_switch__init_string_hash_switch_info_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label5(ll_backend__string_switch__init_string_hash_switch_info_4_0,14,13,17,12,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_string_hash_switch_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__init_string_hash_switch_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__string_switch__init_string_hash_switch_info_4_0_i2);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__string_switch__init_string_hash_switch_info_4_0_i3);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__string_switch__init_string_hash_switch_info_4_0_i4);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__string_switch__init_string_hash_switch_info_4_0_i5);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__string_switch__init_string_hash_switch_info_4_0_i6);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__string_switch__init_string_hash_switch_info_4_0_i7);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__string_switch__init_string_hash_switch_info_4_0_i8);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__string_switch__init_string_hash_switch_info_4_0_i9);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__string_switch__init_string_hash_switch_info_4_0_i10);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__string_switch__init_string_hash_switch_info_4_0_i11);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__string_switch__init_string_hash_switch_info_4_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__string_switch__init_string_hash_switch_info_4_0_i14);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ll_backend__string_switch__init_string_hash_switch_info_4_0_i12);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__init_string_hash_switch_info_4_0_i17);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__string_switch__init_string_hash_switch_info_4_0_i18);
MR_def_label(ll_backend__string_switch__init_string_hash_switch_info_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(8);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__from_list_1_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__string_switch_module2)
	MR_init_entry1(ll_backend__string_switch__generate_string_hash_switch_search_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__generate_string_hash_switch_search_9_0);
	MR_init_label4(ll_backend__string_switch__generate_string_hash_switch_search_9_0,35,54,55,56)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_string_hash_switch_search'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__generate_string_hash_switch_search_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r6;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r7;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tfield(0, MR_r1, 0);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("compute the hash value of the input string", 42);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr4, 1) = MR_tfield(0, MR_r1, 3);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_string_const("begin hash chain loop, nofulljump", 33);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 1);
	MR_sv(8) = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(3, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr7, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr8, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr8, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr7, 2) = MR_tempr6;
	MR_tfield(3, MR_tempr7, 3) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr8, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr8, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr8, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(3, MR_tempr8, 2) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr9, 1) = (MR_Word) MR_string_const("find the start of the row", 25);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 1);
	MR_sv(9) = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr11, 0, (MR_Integer) 1);
	MR_sv(10) = MR_tempr11;
	MR_tfield(0, MR_tempr11, 0) = MR_tfield(3, MR_tempr8, 1);
	MR_tag_alloc_heap(MR_tempr12, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr12, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr12, 1) = MR_tempr10;
	MR_tempr16 = MR_r3;
	MR_tfield(3, MR_tempr12, 2) = MR_tempr16;
	MR_tfield(3, MR_tempr12, 3) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr8, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr8, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr8, 1) = MR_tfield(0, MR_r1, 2);
	MR_tfield(3, MR_tempr8, 2) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr13, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr13, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr13, 1) = (MR_Word) MR_string_const("lookup the string for this hash slot", 36);
	MR_tag_alloc_heap(MR_tempr14, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr14, 0) = MR_tfield(3, MR_tempr8, 1);
	MR_tag_alloc_heap(MR_tempr8, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr8, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_tempr8, 2) = MR_tempr14;
	MR_tfield(3, MR_tempr8, 3) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tag_alloc_heap(MR_tempr15, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr15, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr15, 1) = (MR_Word) MR_tbmkword(0, 16);
	MR_tfield(3, MR_tempr15, 2) = MR_tempr14;
	MR_tfield(3, MR_tempr15, 3) = MR_r2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 11);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr8;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr15;
	MR_tag_alloc_heap(MR_tempr14, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr14, 0) = MR_tfield(0, MR_r1, 4);
	MR_tag_alloc_heap(MR_tempr15, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr15, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr15, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr15, 2) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr15;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("did we find a match\? nofulljump", 31);
	MR_tag_alloc_heap(MR_tempr15, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr15, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr15, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr13;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr15;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr13, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr13, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(1) = MR_tempr16;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_tfield(0, MR_tempr6, 0);
	MR_sv(4) = MR_tfield(3, MR_tempr4, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr14, 0);
	MR_sv(6) = MR_tfield(0, MR_r1, 5);
	MR_sv(7) = MR_tfield(0, MR_r1, 7);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__string_switch__generate_string_hash_switch_search_9_0_i35);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_search_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("no match yet, nofulljump", 24);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(3,2,2);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr3, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr3, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("get next slot in hash chain", 27);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 25);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr5, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("if we have not yet reached the end of the chain, keep searching", 63);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_string_const("handle the failure of the table search", 38);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__string_switch__generate_string_hash_switch_search_9_0_i54);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_search_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_hash_switch_search_9_0_i55);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_search_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_hash_switch_search_9_0_i56);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_search_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_tagged_case_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(int__log2_2_0);
MR_decl_entry(int__pow_3_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(ll_backend__switch_case__represent_tagged_case_for_llds_9_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_code_info_0;
MR_decl_entry(backend_libs__switch_util__construct_string_hash_jump_cases_12_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(ll_backend__code_info__add_vector_static_cell_5_0);
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(ll_backend__string_switch_module3)
	MR_init_entry1(ll_backend__string_switch__generate_string_hash_switch_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__generate_string_hash_switch_11_0);
	MR_init_label10(ll_backend__string_switch__generate_string_hash_switch_11_0,2,6,7,8,9,10,14,15,17,19)
	MR_init_label9(ll_backend__string_switch__generate_string_hash_switch_11_0,22,32,33,34,37,40,41,42,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_string_hash_switch'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__string_switch__generate_string_hash_switch_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r5;
	MR_r2 = MR_r8;
	MR_np_call_localret_ent(ll_backend__string_switch__init_string_hash_switch_info_4_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i2);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i6);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i7);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(int__log2_2_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i8);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__pow_3_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i9);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = ((MR_Integer) 2 * (MR_Integer) MR_r1);
	MR_sv(8) = ((MR_Integer) MR_sv(7) - (MR_Integer) 1);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i10);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r8 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__switch_case__represent_tagged_case_for_llds_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_sv(11) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(ll_backend__code_info, code_info);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r9 = MR_tempr2;
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_r11 = MR_sv(9);
	}
	MR_np_call_localret_ent(backend_libs__switch_util__construct_string_hash_jump_cases_12_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i14);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r5;
	MR_sv(10) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(0, MR_sv(3), 5);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__string_switch__construct_string_hash_jump_vectors_8_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i15);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i17);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i19);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_vector_static_cell_5_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i22);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_sv(3), 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 2) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("jump to the corresponding code", 30);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i32);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(9);
	MR_r5 = (MR_Integer) 2;
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__string_switch__generate_string_hash_switch_search_9_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i33);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i34);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i37);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("end of hashed string switch", 27);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i40);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i41);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i42);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_hash_switch_11_0_i43);
MR_def_label(ll_backend__string_switch__generate_string_hash_switch_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__string_switch_module4)
	MR_init_entry1(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0);
	MR_init_label4(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0,38,2,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_string_hash_simple_lookup_vector'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0_i2);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0_i6);
MR_def_label(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0_i38);
	}
MR_def_label(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_tempr4 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr4;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0_i38);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0;
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(backend_libs__switch_util__construct_string_hash_lookup_cases_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_llds_type_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(ll_backend__lookup_util__set_liveness_and_end_branch_7_0);
MR_decl_entry(ll_backend__code_info__acquire_reg_not_in_storemap_4_0);
MR_decl_entry(ll_backend__lookup_util__generate_offset_assigns_5_0);

MR_BEGIN_MODULE(ll_backend__string_switch_module5)
	MR_init_entry1(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0);
	MR_init_label10(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,2,5,8,9,10,12,13,17,19,20)
	MR_init_label10(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,21,24,29,30,28,34,40,41,42,43)
	MR_init_label7(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,47,48,49,50,53,54,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_string_hash_simple_lookup_switch'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_r1 = MR_r6;
	MR_r2 = MR_r10;
	MR_np_call_localret_ent(ll_backend__string_switch__init_string_hash_switch_info_4_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i2);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i5);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i8);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(int__log2_2_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i9);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__pow_3_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i10);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = ((MR_Integer) 2 * (MR_Integer) MR_r1);
	MR_sv(11) = ((MR_Integer) MR_sv(10) - (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i12);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = ((MR_Integer) 2 + (MR_Integer) MR_r1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__builtin_ops, scalar_array_elem_type);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i13);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(backend_libs__switch_util__construct_string_hash_lookup_cases_5_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i17);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i19);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__string_switch__construct_string_hash_simple_lookup_vector_6_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i20);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i21);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 10;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(16);
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_vector_static_cell_5_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i24);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(4) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i28);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i29);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i30);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("go to end of simple hash string lookup switch", 45);
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_r2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i47);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_not_in_storemap_4_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i34);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_sv(8), 1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_r1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("set up base reg", 15);
	MR_sv(10) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i40);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(13);
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_offset_assigns_5_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i41);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i42);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i43);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("go to end of simple hash string lookup switch", 45);
	MR_sv(10) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i47);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i48);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i49);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__string_switch__generate_string_hash_switch_search_9_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i50);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("end of simple hash string lookup switch", 39);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i53);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i54);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0_i55);
MR_def_label(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__string_switch_module6)
	MR_init_entry1(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0);
	MR_init_label8(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0,65,2,6,13,22,31,32,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_string_hash_several_soln_lookup_vector'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
MR_def_label(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0_i2);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_decr_sp_and_return(16);
MR_def_label(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_sv(11) = MR_r7;
	MR_sv(12) = MR_r8;
	MR_sv(13) = MR_r9;
	MR_sv(6) = MR_r10;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0_i6);
MR_def_label(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r11 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r12 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_r11 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_sv(7) = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tempr5 = MR_tfield(0, MR_r2, 2);
	MR_r11 = MR_tempr5;
	if (MR_PTAG_TESTR(MR_tempr5,0)) {
		MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0_i13);
	}
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_tempr6, 1) = MR_tfield(0, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r10 = MR_sv(6);
	MR_r8 = MR_sv(12);
	MR_r9 = ((MR_Integer) MR_sv(13) + (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r7 = MR_sv(11);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0_i65);
	}
MR_def_label(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r12;
	MR_tempr2 = MR_r11;
	MR_sv(8) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(9) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(14) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0_i22);
MR_def_label(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(11);
	MR_tempr6 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_tempr5 * (MR_Integer) MR_tempr6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((((MR_Integer) MR_tempr5 + (MR_Integer) MR_r1) - (MR_Integer) 1) * (MR_Integer) MR_tempr6);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_sv(6) = ((MR_Integer) MR_tempr5 + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0_i31);
MR_def_label(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0_i32);
MR_def_label(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r10 = MR_sv(14);
	MR_r8 = MR_r1;
	MR_r9 = MR_sv(13);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0_i65);
	}
MR_def_label(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tempr6 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr6;
	MR_r5 = MR_sv(5);
	MR_r10 = MR_sv(6);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r7 = MR_sv(11);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0_i65);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(std_util__negate_1_0);
MR_decl_entry(require__expect_4_0);
MR_decl_entry(ll_backend__code_info__get_emit_trail_ops_2_0);
MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(list__sort_2_0);
MR_decl_entry(assoc_list__values_2_0);
MR_decl_entry(ll_backend__lookup_switch__generate_code_for_all_kinds_15_0);

MR_BEGIN_MODULE(ll_backend__string_switch_module7)
	MR_init_entry1(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0);
	MR_init_label10(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,2,5,8,9,10,12,13,21,23,24)
	MR_init_label10(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,22,25,27,29,30,31,32,38,39,40)
	MR_init_label10(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,45,48,51,57,58,59,60,63,64,65)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_string_hash_several_soln_lookup_switch'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(22);
	MR_sv(22) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(19) = MR_r11;
	MR_r1 = MR_r8;
	MR_r2 = MR_r12;
	MR_np_call_localret_ent(ll_backend__string_switch__init_string_hash_switch_info_4_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i2);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(20) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i5);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(18) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i8);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(int__log2_2_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i9);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__pow_3_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i10);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = ((MR_Integer) 2 * (MR_Integer) MR_r1);
	MR_sv(13) = ((MR_Integer) MR_sv(12) - (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i12);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = ((MR_Integer) 4 + (MR_Integer) MR_r1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__builtin_ops, scalar_array_elem_type);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(list__duplicate_3_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i13);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_sv(16), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(16), 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__366__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(std_util__negate_1_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.string_switch", 24);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.string_switch.generate_string_hash_several_soln_lookup_switch\'/15", 87);
	MR_r4 = (MR_Word) MR_string_const("no OutVars", 10);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i21);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i23);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_sv(2) = (MR_Integer) 1;
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i22);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(ll_backend__code_info__get_emit_trail_ops_2_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i24);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(17);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_np_call_localret_ent(backend_libs__switch_util__construct_string_hash_lookup_cases_5_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i25);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_r2 = MR_sv(18);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i27);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(18);
	MR_sv(18) = MR_r1;
	MR_sv(21) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i29);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(18);
	MR_r5 = MR_sv(14);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Integer) 1;
	MR_r8 = MR_tempr1;
	MR_r9 = (MR_Integer) 0;
	MR_r10 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__string_switch__construct_string_hash_several_soln_lookup_vector_14_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i30);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(14) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i31);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i32);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(14);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_sv(12) = MR_r1;
	MR_sv(14) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(18) = (MR_Word) MR_CTOR0_ADDR(ll_backend__lookup_switch, case_kind);
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r1 = MR_sv(21);
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i38);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i39);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__values_2_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i40);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Integer) 7;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 10;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(20);
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_vector_static_cell_5_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i45);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_vector_static_cell_5_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i48);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(12) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_not_in_storemap_4_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i51);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_sv(10), 1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(2, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_r1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("set up base reg", 15);
	MR_sv(14) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i57);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(14);
	MR_r10 = MR_sv(12);
	MR_r11 = MR_sv(19);
	MR_r12 = MR_sv(18);
	}
	MR_np_call_localret_ent(ll_backend__lookup_switch__generate_code_for_all_kinds_15_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i58);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i59);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(17);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__string_switch__generate_string_hash_switch_search_9_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i60);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("end of simple hash string lookup switch", 39);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i63);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i64);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0_i65);
MR_def_label(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(22);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__string_switch_module8)
	MR_init_entry1(ll_backend__string_switch__generate_string_hash_lookup_switch_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__generate_string_hash_lookup_switch_10_0);
	MR_init_label1(ll_backend__string_switch__generate_string_hash_lookup_switch_10_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_string_hash_lookup_switch'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__string_switch__generate_string_hash_lookup_switch_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r11 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__string_switch__generate_string_hash_lookup_switch_10_0_i3);
	}
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tfield(0, MR_tempr2, 2);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tfield(0, MR_tempr2, 3);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr6;
	MR_np_tailcall_ent(ll_backend__string_switch__generate_string_hash_simple_lookup_switch_13_0);
	}
MR_def_label(ll_backend__string_switch__generate_string_hash_lookup_switch_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r2;
	MR_tempr7 = MR_r11;
	MR_r2 = MR_tfield(1, MR_tempr7, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr7, 1);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr7, 2);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr6 = MR_r7;
	MR_r7 = MR_tfield(0, MR_tempr1, 3);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_np_tailcall_ent(ll_backend__string_switch__generate_string_hash_several_soln_lookup_switch_15_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__string_switch_module9)
	MR_init_entry1(ll_backend__string_switch__gen_string_binary_jump_slots_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__gen_string_binary_jump_slots_7_0);
	MR_init_label2(ll_backend__string_switch__gen_string_binary_jump_slots_7_0,13,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_string_binary_jump_slots'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__gen_string_binary_jump_slots_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__string_switch__gen_string_binary_jump_slots_7_0_i2);
	}
MR_def_label(ll_backend__string_switch__gen_string_binary_jump_slots_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr2;
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break; } /* end while */
MR_def_label(ll_backend__string_switch__gen_string_binary_jump_slots_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__string_switch_module10)
	MR_init_entry1(ll_backend__string_switch__init_string_binary_switch_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__init_string_binary_switch_info_4_0);
	MR_init_label10(ll_backend__string_switch__init_string_binary_switch_info_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label8(ll_backend__string_switch__init_string_binary_switch_info_4_0,12,13,14,17,16,20,15,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_string_binary_switch_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__init_string_binary_switch_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i2);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i3);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i4);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i5);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i6);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i7);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i8);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i9);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i10);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i11);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i12);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i13);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i14);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__string_switch__init_string_binary_switch_info_4_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i17);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ll_backend__string_switch__init_string_binary_switch_info_4_0_i15);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i20);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__string_switch__init_string_binary_switch_info_4_0_i21);
MR_def_label(ll_backend__string_switch__init_string_binary_switch_info_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(10);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__string_switch_module11)
	MR_init_entry1(ll_backend__string_switch__generate_string_binary_switch_search_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__generate_string_binary_switch_search_7_0);
	MR_init_label3(ll_backend__string_switch__generate_string_binary_switch_search_7_0,72,75,76)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_string_binary_switch_search'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__generate_string_binary_switch_search_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r7, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r7, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r7, 1) = MR_tfield(0, MR_r1, 0);
	MR_tfield(3, MR_r7, 2) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tag_alloc_heap(MR_r8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r8, 0) = MR_r7;
	MR_tfield(0, MR_r8, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_r9, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r9, 0) = ((MR_Integer) MR_r5 - (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r5, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r5, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r5, 1) = MR_r9;
	MR_tag_alloc_heap(MR_r9, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r9, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r9, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(3, MR_r9, 2) = MR_r5;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = MR_r9;
	MR_tfield(0, MR_r5, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_r10, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r10, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r10, 1) = MR_tfield(0, MR_r1, 4);
	MR_tag_alloc_heap(MR_r11, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r11, 0) = MR_r10;
	MR_tfield(0, MR_r11, 1) = (MR_Word) MR_string_const("begin table search loop, nofulljump", 35);
	MR_tag_alloc_heap(MR_r12, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r12, 0) = MR_tfield(3, MR_r7, 1);
	MR_tag_alloc_heap(MR_r13, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r13, 0) = MR_tfield(3, MR_r9, 1);
	MR_tag_alloc_heap(MR_r14, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r14, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r14, 1) = (MR_Word) MR_tbmkword(0, 23);
	MR_tfield(3, MR_r14, 2) = MR_r12;
	MR_tfield(3, MR_r14, 3) = MR_r13;
	MR_tag_alloc_heap(MR_r15, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r15, 0) = MR_tfield(0, MR_r1, 7);
	MR_tag_alloc_heap(MR_r16, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r16, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_r16, 1) = MR_r14;
	MR_tfield(3, MR_r16, 2) = MR_r15;
	MR_tag_alloc_heap(MR_r17, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r17, 0) = MR_r16;
	MR_tfield(0, MR_r17, 1) = (MR_Word) MR_string_const("have we searched all of the table\?", 34);
	MR_tag_alloc_heap(MR_r16, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r16, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r16, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r16, 2) = MR_r12;
	MR_tfield(3, MR_r16, 3) = MR_r13;
	MR_tag_alloc_heap(MR_r14, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r14, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r14, 1) = (MR_Word) MR_tbmkword(0, 3);
	MR_tfield(3, MR_r14, 2) = MR_r16;
	MR_tfield(3, MR_r14, 3) = (MR_Word) MR_TAG_COMMON(3,2,7);
	MR_tag_alloc_heap(MR_r16, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r16, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r16, 1) = MR_tfield(0, MR_r1, 2);
	MR_tfield(3, MR_r16, 2) = MR_r14;
	MR_tag_alloc_heap(MR_r14, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r14, 0) = MR_r16;
	MR_tfield(0, MR_r14, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_r18, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r18, 0) = MR_r4;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r4, 0) = MR_tfield(3, MR_r16, 1);
	MR_tag_alloc_heap(MR_r16, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r16, 0) = MR_r6;
	MR_tag_alloc_heap(MR_r6, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r6, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r6, 1) = MR_r16;
	MR_tag_alloc_heap(MR_r16, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r16, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r16, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_r16, 2) = MR_r4;
	MR_tfield(3, MR_r16, 3) = MR_r6;
	MR_tag_alloc_heap(MR_r6, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r6, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r6, 1) = MR_r18;
	MR_tfield(3, MR_r6, 2) = MR_r3;
	MR_tfield(3, MR_r6, 3) = MR_r16;
	MR_tag_alloc_heap(MR_r3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r3, 1) = (MR_Word) MR_tbmkword(0, 21);
	MR_tfield(3, MR_r3, 2) = MR_r2;
	MR_tfield(3, MR_r3, 3) = MR_r6;
	MR_tag_alloc_heap(MR_r6, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r6, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r6, 1) = MR_tfield(0, MR_r1, 3);
	MR_tfield(3, MR_r6, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r3, 0) = MR_r6;
	MR_tfield(0, MR_r3, 1) = (MR_Word) MR_string_const("compare with the middle element", 31);
	MR_tag_alloc_heap(MR_r18, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r18, 0) = MR_tfield(3, MR_r6, 1);
	MR_tag_alloc_heap(MR_r6, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r6, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r6, 1) = (MR_Word) MR_tbmkword(0, 25);
	MR_tfield(3, MR_r6, 2) = MR_r18;
	MR_tfield(3, MR_r6, 3) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tag_alloc_heap(MR_r19, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r19, 0) = MR_tfield(0, MR_r1, 5);
	MR_tag_alloc_heap(MR_r20, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r20, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_r20, 1) = MR_r6;
	MR_tfield(3, MR_r20, 2) = MR_r19;
	MR_tag_alloc_heap(MR_r21, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r21, 0) = MR_r20;
	MR_tfield(0, MR_r21, 1) = (MR_Word) MR_string_const("branch away unless key is in lo half", 36);
	MR_tag_alloc_heap(MR_r20, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r20, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r20, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_r20, 2) = MR_r4;
	MR_tfield(3, MR_r20, 3) = (MR_Word) MR_TAG_COMMON(3,2,2);
	MR_tag_alloc_heap(MR_r22, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r22, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r22, 1) = MR_tfield(0, MR_r13, 0);
	MR_tfield(3, MR_r22, 2) = MR_r20;
	MR_tag_alloc_heap(MR_r9, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r9, 0) = MR_r22;
	MR_tfield(0, MR_r9, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_r13, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r13, 0) = MR_tfield(3, MR_r10, 1);
	MR_tag_alloc_heap(MR_r10, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r10, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r10, 1) = MR_r13;
	MR_tag_alloc_heap(MR_r13, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r13, 0) = MR_r10;
	MR_tfield(0, MR_r13, 1) = (MR_Word) MR_string_const("go back to search the remaining lo half", 39);
	MR_tag_alloc_heap(MR_r22, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r22, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r22, 1) = MR_tfield(1, MR_r19, 0);
	MR_tag_alloc_heap(MR_r19, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r19, 0) = MR_r22;
	MR_tfield(0, MR_r19, 1) = (MR_Word) MR_string_const("nofulljump", 10);
	MR_tag_alloc_heap(MR_r22, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r22, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r22, 1) = (MR_Word) MR_tbmkword(0, 24);
	MR_tfield(3, MR_r22, 2) = MR_r18;
	MR_tfield(3, MR_r22, 3) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_tfield(0, MR_r1, 6);
	MR_tag_alloc_heap(MR_r18, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r18, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_r18, 1) = MR_r22;
	MR_tfield(3, MR_r18, 2) = MR_r6;
	MR_tag_alloc_heap(MR_r22, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r22, 0) = MR_r18;
	MR_tfield(0, MR_r22, 1) = (MR_Word) MR_string_const("branch away unless key is in hi half", 36);
	MR_tag_alloc_heap(MR_r18, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r18, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r18, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r18, 2) = MR_r4;
	MR_tfield(3, MR_r18, 3) = (MR_Word) MR_TAG_COMMON(3,2,2);
	MR_tag_alloc_heap(MR_r4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r4, 1) = MR_tfield(0, MR_r12, 0);
	MR_tfield(3, MR_r4, 2) = MR_r18;
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r7, 0) = MR_r4;
	MR_tfield(0, MR_r7, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = MR_r10;
	MR_tfield(0, MR_r4, 1) = (MR_Word) MR_string_const("go back to search the remaining hi half", 39);
	MR_tag_alloc_heap(MR_r10, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r10, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r10, 1) = MR_tfield(1, MR_r15, 0);
	MR_tag_alloc_heap(MR_r12, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r12, 0) = MR_r10;
	MR_tfield(0, MR_r12, 1) = (MR_Word) MR_string_const("handle the failure of the table search", 38);
	MR_tag_alloc_heap(MR_r10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r10, 0) = MR_r12;
	MR_tfield(1, MR_r10, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r12, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r12, 0) = MR_r4;
	MR_tfield(1, MR_r12, 1) = MR_r10;
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r4, 0) = MR_r7;
	MR_tfield(1, MR_r4, 1) = MR_r12;
	MR_tag_alloc_heap(MR_r7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r7, 0) = MR_r22;
	MR_tfield(1, MR_r7, 1) = MR_r4;
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r4, 0) = MR_r19;
	MR_tfield(1, MR_r4, 1) = MR_r7;
	MR_tag_alloc_heap(MR_r7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r7, 0) = MR_r13;
	MR_tfield(1, MR_r7, 1) = MR_r4;
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r4, 0) = MR_r9;
	MR_tfield(1, MR_r4, 1) = MR_r7;
	MR_tag_alloc_heap(MR_r7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r7, 0) = MR_r21;
	MR_tfield(1, MR_r7, 1) = MR_r4;
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r4, 0) = MR_r3;
	MR_tfield(1, MR_r4, 1) = MR_r7;
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r3, 0) = MR_r14;
	MR_tfield(1, MR_r3, 1) = MR_r4;
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r4, 0) = MR_r17;
	MR_tfield(1, MR_r4, 1) = MR_r3;
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r3, 0) = MR_r11;
	MR_tfield(1, MR_r3, 1) = MR_r4;
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r4, 0) = MR_r5;
	MR_tfield(1, MR_r4, 1) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r8;
	MR_tfield(1, MR_r2, 1) = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_r6, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__string_switch__generate_string_binary_switch_search_7_0_i72);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_search_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("we found the key", 16);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_binary_switch_search_7_0_i75);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_search_7_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_binary_switch_search_7_0_i76);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_search_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__switch_util__string_binary_cases_9_0);

MR_BEGIN_MODULE(ll_backend__string_switch_module12)
	MR_init_entry1(ll_backend__string_switch__generate_string_binary_switch_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__generate_string_binary_switch_11_0);
	MR_init_label10(ll_backend__string_switch__generate_string_binary_switch_11_0,2,6,7,11,12,14,16,19,25,37)
	MR_init_label7(ll_backend__string_switch__generate_string_binary_switch_11_0,38,41,44,45,46,47,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_string_binary_switch'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__string_switch__generate_string_binary_switch_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r5;
	MR_r2 = MR_r8;
	MR_np_call_localret_ent(ll_backend__string_switch__init_string_binary_switch_info_4_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i2);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,4);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i6);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i7);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__switch_case__represent_tagged_case_for_llds_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_sv(12) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(ll_backend__code_info, code_info);
	MR_r5 = MR_sv(1);
	MR_r7 = MR_tempr2;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(7);
	}
	MR_np_call_localret_ent(backend_libs__switch_util__string_binary_cases_9_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i11);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__string_switch__gen_string_binary_jump_slots_7_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i12);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i14);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i16);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_vector_static_cell_5_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i19);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tempr3 = MR_sv(8);
	MR_sv(8) = MR_tempr2;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr3;
	MR_r6 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(ll_backend__string_switch__generate_string_binary_switch_search_7_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i25);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_sv(3), 2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Word) MR_TAG_COMMON(3,2,7);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(3,2,2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("jump to the matching case", 25);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i37);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i38);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,9,3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i41);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("end of binary string switch", 27);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i44);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i45);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i46);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i47);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_binary_switch_11_0_i48);
MR_def_label(ll_backend__string_switch__generate_string_binary_switch_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__string_switch_module13)
	MR_init_entry1(ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_0);
	MR_init_label2(ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_0,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_string_binary_simple_lookup_vector'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_0_i2);
	}
MR_def_label(ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tempr2;
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break; } /* end while */
MR_def_label(ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__string_switch_module14)
	MR_init_entry1(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0);
	MR_init_label10(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,2,5,8,10,11,14,15,17,22,23)
	MR_init_label10(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,21,24,33,34,35,36,37,40,41,42)
	MR_init_label2(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,43,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_string_binary_simple_lookup_switch'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(13) = MR_r9;
	MR_r1 = MR_r6;
	MR_r2 = MR_r10;
	MR_np_call_localret_ent(ll_backend__string_switch__init_string_binary_switch_info_4_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i2);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,5);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i5);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i8);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i10);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__builtin_ops, scalar_array_elem_type);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i11);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__string_switch__construct_string_binary_simple_lookup_vector_3_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i14);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i15);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_vector_static_cell_5_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i17);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(4) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i21);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i22);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i23);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__string_switch__generate_string_binary_switch_search_7_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i37);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_not_in_storemap_4_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i24);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_sv(8), 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = MR_r1;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("set up base reg", 15);
	MR_sv(12) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i33);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(14);
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_offset_assigns_5_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i34);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i35);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i36);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__string_switch__generate_string_binary_switch_search_7_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i37);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("end of binary string switch", 27);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i40);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i41);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i42);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i43);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0_i44);
MR_def_label(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__string_switch_module15)
	MR_init_entry1(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0);
	MR_init_label6(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0,40,3,7,15,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_string_binary_several_soln_lookup_vector'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r8 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_sv(7) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	MR_r8 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r6 = ((MR_Integer) MR_r6 + (MR_Integer) 1);
	MR_r3 = MR_tempr5;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0_i40);
	}
MR_def_label(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(10) = ((MR_Integer) MR_r7 + (MR_Integer) 1);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0_i15);
MR_def_label(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr4 = MR_sv(3);
	MR_tempr5 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_tempr4 * (MR_Integer) MR_tempr5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((((MR_Integer) MR_tempr4 + (MR_Integer) MR_r1) - (MR_Integer) 1) * (MR_Integer) MR_tempr5);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_sv(3) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_r1);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0_i23);
MR_def_label(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0_i24);
MR_def_label(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r7 = MR_sv(10);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0_i40);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__string_switch_module16)
	MR_init_entry1(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0);
	MR_init_label10(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,2,5,8,10,11,18,20,22,19,24)
	MR_init_label10(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,26,27,28,29,35,36,37,41,42,45)
	MR_init_label9(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,48,57,58,59,62,63,64,65,66)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_string_binary_several_soln_lookup_switch'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(17) = MR_r11;
	MR_r1 = MR_r8;
	MR_r2 = MR_r12;
	MR_np_call_localret_ent(ll_backend__string_switch__init_string_binary_switch_info_4_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i2);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,6);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i5);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i8);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i10);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__builtin_ops, scalar_array_elem_type);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(list__duplicate_3_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i11);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_sv(14), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(14), 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__814__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(12,1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(std_util__negate_1_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.string_switch", 24);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.string_switch.generate_string_binary_several_soln_lookup_switch\'/15", 89);
	MR_r4 = (MR_Word) MR_string_const("no OutVars", 10);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i18);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i20);
	}
	MR_r4 = MR_sv(6);
	MR_sv(4) = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,4);
	MR_r2 = MR_sv(15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_GOTO_LAB(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i19);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__code_info__get_emit_trail_ops_2_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i22);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(6);
	MR_sv(4) = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,5);
	MR_r2 = MR_sv(15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r4;
	MR_sv(15) = MR_r2;
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i24);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(15);
	MR_sv(19) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i26);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__string_switch__construct_string_binary_several_soln_lookup_vector_11_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i27);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(15) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i28);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i29);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(15);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_sv(13) = MR_r1;
	MR_sv(15) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(ll_backend__lookup_switch, case_kind);
	MR_sv(20) = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i35);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i36);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__values_2_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i37);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 10;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_sv(15) = MR_r1;
	MR_tempr2 = MR_sv(16);
	MR_sv(16) = MR_r2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i41);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(18);
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_vector_static_cell_5_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i42);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_vector_static_cell_5_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i45);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(13) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_not_in_storemap_4_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i48);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_sv(10), 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = MR_r1;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("set up base reg", 15);
	MR_sv(16) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i57);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__string_switch__generate_string_binary_switch_search_7_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i58);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(16);
	MR_r10 = MR_sv(13);
	MR_r11 = MR_sv(17);
	MR_r12 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__lookup_switch__generate_code_for_all_kinds_15_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i59);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("end of string binary several solns switch", 41);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i62);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i63);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i64);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i65);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0_i66);
MR_def_label(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__string_switch_module17)
	MR_init_entry1(ll_backend__string_switch__generate_string_binary_lookup_switch_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__generate_string_binary_lookup_switch_10_0);
	MR_init_label1(ll_backend__string_switch__generate_string_binary_lookup_switch_10_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_string_binary_lookup_switch'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__string_switch__generate_string_binary_lookup_switch_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r11 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__string_switch__generate_string_binary_lookup_switch_10_0_i3);
	}
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tfield(0, MR_tempr2, 2);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tfield(0, MR_tempr2, 3);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr6;
	MR_np_tailcall_ent(ll_backend__string_switch__generate_string_binary_simple_lookup_switch_13_0);
	}
MR_def_label(ll_backend__string_switch__generate_string_binary_lookup_switch_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r2;
	MR_tempr7 = MR_r11;
	MR_r2 = MR_tfield(1, MR_tempr7, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr7, 1);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr7, 2);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr6 = MR_r7;
	MR_r7 = MR_tfield(0, MR_tempr1, 3);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_np_tailcall_ent(ll_backend__string_switch__generate_string_binary_several_soln_lookup_switch_15_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);
MR_decl_entry(__Unify___ll_backend__llds__label_0_0);
MR_decl_entry(__Unify___ll_backend__code_info__position_info_0_0);
MR_decl_entry(__Unify___cord__cord_1_0);

MR_BEGIN_MODULE(ll_backend__string_switch_module18)
	MR_init_entry1(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__string_switch__string_binary_switch_info_0_0);
	MR_init_label10(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0,4,6,8,10,12,14,16,18,20,24)
	MR_init_label1(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i24);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 9);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i4);
MR_def_label(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i6);
MR_def_label(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i8);
MR_def_label(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i10);
MR_def_label(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i12);
MR_def_label(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i14);
MR_def_label(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i16);
MR_def_label(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i18);
MR_def_label(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___ll_backend__code_info__position_info_0_0,
		__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i20);
MR_def_label(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(__Unify___cord__cord_1_0);
MR_def_label(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__string_switch__string_binary_switch_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__lval_0_0);
MR_decl_entry(__Compare___ll_backend__llds__label_0_0);
MR_decl_entry(__Compare___ll_backend__code_info__position_info_0_0);
MR_decl_entry(__Compare___cord__cord_1_0);

MR_BEGIN_MODULE(ll_backend__string_switch_module19)
	MR_init_entry1(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__string_switch__string_binary_switch_info_0_0);
	MR_init_label10(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label2(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,37,85)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i3);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i2);
MR_def_label(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
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
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i5);
MR_def_label(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i85);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i9);
MR_def_label(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i85);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i13);
MR_def_label(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i85);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i17);
MR_def_label(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i85);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i21);
MR_def_label(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i85);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i25);
MR_def_label(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i85);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i29);
MR_def_label(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i85);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i33);
MR_def_label(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i85);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___ll_backend__code_info__position_info_0_0,
		__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i37);
MR_def_label(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0_i85);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(__Compare___cord__cord_1_0);
MR_def_label(__Compare___ll_backend__string_switch__string_binary_switch_info_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__string_switch_module20)
	MR_init_entry1(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__string_switch__string_hash_switch_info_0_0);
	MR_init_label9(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0,4,6,8,10,12,14,16,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i20);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i4);
MR_def_label(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i6);
MR_def_label(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i8);
MR_def_label(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i10);
MR_def_label(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i12);
MR_def_label(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i14);
MR_def_label(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___ll_backend__code_info__position_info_0_0,
		__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i16);
MR_def_label(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___cord__cord_1_0);
MR_def_label(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__string_switch__string_hash_switch_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__string_switch_module21)
	MR_init_entry1(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__string_switch__string_hash_switch_info_0_0);
	MR_init_label10(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0,3,2,5,9,13,17,21,25,29,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i2);
MR_def_label(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
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
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i5);
MR_def_label(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i69);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i9);
MR_def_label(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i69);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i13);
MR_def_label(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i17);
MR_def_label(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i69);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i21);
MR_def_label(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i69);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i25);
MR_def_label(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i69);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___ll_backend__code_info__position_info_0_0,
		__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i29);
MR_def_label(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___cord__cord_1_0);
MR_def_label(__Compare___ll_backend__string_switch__string_hash_switch_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__string_switch_module22)
	MR_init_entry1(ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__366__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__366__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__366__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__IntroducedFrom__pred__generate_string_hash_several_soln_lookup_switch__366__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
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


MR_BEGIN_MODULE(ll_backend__string_switch_module23)
	MR_init_entry1(ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__814__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__814__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__814__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__string_switch__IntroducedFrom__pred__generate_string_binary_several_soln_lookup_switch__814__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
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

static void mercury__ll_backend__string_switch_maybe_bunch_0(void)
{
	ll_backend__string_switch_module0();
	ll_backend__string_switch_module1();
	ll_backend__string_switch_module2();
	ll_backend__string_switch_module3();
	ll_backend__string_switch_module4();
	ll_backend__string_switch_module5();
	ll_backend__string_switch_module6();
	ll_backend__string_switch_module7();
	ll_backend__string_switch_module8();
	ll_backend__string_switch_module9();
	ll_backend__string_switch_module10();
	ll_backend__string_switch_module11();
	ll_backend__string_switch_module12();
	ll_backend__string_switch_module13();
	ll_backend__string_switch_module14();
	ll_backend__string_switch_module15();
	ll_backend__string_switch_module16();
	ll_backend__string_switch_module17();
	ll_backend__string_switch_module18();
	ll_backend__string_switch_module19();
	ll_backend__string_switch_module20();
	ll_backend__string_switch_module21();
	ll_backend__string_switch_module22();
	ll_backend__string_switch_module23();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__string_switch__init(void);
void mercury__ll_backend__string_switch__init_type_tables(void);
void mercury__ll_backend__string_switch__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__string_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__string_switch__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__string_switch__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__string_switch__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__string_switch_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__string_switch__type_ctor_info_string_binary_switch_info_0,
		ll_backend__string_switch__string_binary_switch_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__string_switch__type_ctor_info_string_hash_switch_info_0,
		ll_backend__string_switch__string_hash_switch_info_0_0);
	mercury__ll_backend__string_switch__init_debugger();
}

void mercury__ll_backend__string_switch__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__string_switch__type_ctor_info_string_binary_switch_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__string_switch__type_ctor_info_string_hash_switch_info_0);
	}
}


void mercury__ll_backend__string_switch__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__string_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__string_switch);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__string_switch__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__string_switch__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
