/*
** Automatically generated from `prog_rep.m'
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
INIT mercury__ll_backend__prog_rep__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 226 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 27 "ll_backend.prog_rep.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 31 "ll_backend.prog_rep.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 35 "ll_backend.prog_rep.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ll_backend.prog_rep.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ll_backend.prog_rep.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "ll_backend.prog_rep.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 51 "ll_backend.prog_rep.c"
#line 52 "ll_backend.prog_rep.c"
#include "ll_backend.prog_rep.mh"

#line 55 "ll_backend.prog_rep.c"
#line 56 "ll_backend.prog_rep.c"
#ifndef LL_BACKEND__PROG_REP_DECL_GUARD
#define LL_BACKEND__PROG_REP_DECL_GUARD

#line 60 "ll_backend.prog_rep.c"
#line 61 "ll_backend.prog_rep.c"

#endif
#line 64 "ll_backend.prog_rep.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_vector_common_9_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__prog_rep__type_ctor_info_include_variable_table_0,
	mercury_data_ll_backend__prog_rep__type_ctor_info_prog_rep_info_0,
	mercury_data_ll_backend__prog_rep__type_ctor_info_var_num_map_0;
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0, 7,8,9,10,11,12,5,17,18,19)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0, 16,20,14,22,3,24,26,27,28,29)
MR_decl_label1(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0, 30)
MR_decl_label10(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0, 2,3,4,6,7,8,9,11,12,13)
MR_decl_label4(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0, 14,15,16,17)
MR_decl_label10(ll_backend__prog_rep__cases_to_byte_list_6_0, 24,4,7,8,9,10,11,12,13,14)
MR_decl_label2(ll_backend__prog_rep__cases_to_byte_list_6_0, 15,16)
MR_decl_label6(ll_backend__prog_rep__conj_to_byte_list_6_0, 16,4,5,6,7,8)
MR_decl_label10(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0, 25,7,9,22,29,3,4,6,10,11)
MR_decl_label10(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0, 13,15,17,18,19,20,21,23,24,30)
MR_decl_label5(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0, 31,32,34,35,36)
MR_decl_label10(ll_backend__prog_rep__cons_id_to_byte_list_4_0, 25,7,9,22,29,3,4,6,10,11)
MR_decl_label10(ll_backend__prog_rep__cons_id_to_byte_list_4_0, 13,15,17,18,19,20,21,23,24,30)
MR_decl_label1(ll_backend__prog_rep__cons_id_to_byte_list_4_0, 31)
MR_decl_label4(ll_backend__prog_rep__disj_to_byte_list_6_0, 14,4,5,6)
MR_decl_label5(ll_backend__prog_rep__filter_input_args_4_0, 3,11,9,15,8)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 147,148,161,162,165,167,169,170,171,172)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 173,163,175,176,178,179,180,181,182,185)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 186,189,191,192,194,195,196,197,198,187)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 200,202,203,204,205,206,150,151,153,154)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 155,156,220,210,212,213,214,215,216,158)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 159,94,95,96,97,98,99,100,101,104)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 106,107,108,109,103,112,114,115,116,117)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 111,119,30,31,66,67,69,70,71,72)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 48,49,51,52,53,54,55,56,58,59)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 60,62,63,64,33,38,40,41,42,43)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 44,34,45,225,3,6,7,8,10,11)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 13,15,16,17,18,20,21,23,24,25)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 27,28,78,79,80,81,82,83,84,86)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 87,89,90,91,121,122,123,124,126,127)
MR_decl_label10(ll_backend__prog_rep__goal_to_byte_list_6_0, 130,131,132,133,135,136,137,138,141,142)
MR_decl_label8(ll_backend__prog_rep__goal_to_byte_list_6_0, 143,144,145,146,2,226,227,229)
MR_decl_label10(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0, 2,3,4,6,7,8,9,10,12,13)
MR_decl_label10(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0, 16,17,18,20,21,22,23,24,25,26)
MR_decl_label9(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0, 5,6,7,8,10,13,14,16,17)
MR_decl_label2(ll_backend__prog_rep__string_to_byte_list_4_0, 2,3)
MR_decl_label1(fn__ll_backend__prog_rep__can_fail_to_byte_1_0, 3)
MR_decl_label10(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0, 2,3,6,4,8,10,9,15,13,19)
MR_decl_label5(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0, 21,20,26,24,30)
MR_decl_label1(fn__ll_backend__prog_rep__length_to_byte_list_1_0, 2)
MR_decl_label2(fn__ll_backend__prog_rep__maybe_var_to_byte_list_2_0, 14,5)
MR_decl_label4(fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0, 4,5,8,9)
MR_decl_label2(fn__ll_backend__prog_rep__var_to_byte_list_2_0, 4,6)
MR_decl_label4(fn__ll_backend__prog_rep__vars_to_byte_list_2_0, 3,4,7,8)
MR_decl_label4(__Unify___ll_backend__prog_rep__prog_rep_info_0_0, 5,8,12,1)
MR_decl_label7(__Compare___ll_backend__prog_rep__prog_rep_info_0_0, 3,2,5,10,16,20,48)
MR_decl_static(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0)
MR_decl_static(fn__ll_backend__prog_rep__this_file_0_0)
MR_decl_static(ll_backend__prog_rep__filter_input_args_4_0)
MR_decl_static(ll_backend__prog_rep__string_to_byte_list_4_0)
MR_decl_static(fn__ll_backend__prog_rep__length_to_byte_list_1_0)
MR_decl_static(fn__ll_backend__prog_rep__vars_to_byte_list_2_0)
MR_decl_static(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0)
MR_decl_static(ll_backend__prog_rep__cons_id_to_byte_list_4_0)
MR_decl_static(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0)
MR_decl_static(fn__ll_backend__prog_rep__var_to_byte_list_2_0)
MR_decl_static(fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0)
MR_decl_static(fn__ll_backend__prog_rep__method_num_to_byte_list_1_0)
MR_decl_static(fn__ll_backend__prog_rep__can_fail_to_byte_1_0)
MR_decl_static(ll_backend__prog_rep__goal_to_byte_list_6_0)
MR_decl_static(ll_backend__prog_rep__conj_to_byte_list_6_0)
MR_decl_static(ll_backend__prog_rep__disj_to_byte_list_6_0)
MR_decl_static(ll_backend__prog_rep__cases_to_byte_list_6_0)
MR_def_extern_entry(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0)
MR_decl_static(fn__ll_backend__prog_rep__max_var_num_3_0)
MR_decl_static(ll_backend__prog_rep__var_table_entry_bytelist_9_0)
MR_decl_static(ll_backend__prog_rep__lhs_final_is_ground_2_0)
MR_decl_static(fn__ll_backend__prog_rep__maybe_var_to_byte_list_2_0)
MR_decl_static(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0)
MR_def_extern_entry(__Unify___ll_backend__prog_rep__include_variable_table_0_0)
MR_def_extern_entry(__Compare___ll_backend__prog_rep__include_variable_table_0_0)
MR_decl_static(__Unify___ll_backend__prog_rep__prog_rep_info_0_0)
MR_decl_static(__Compare___ll_backend__prog_rep__prog_rep_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__prog_rep__var_num_map_0_0)
MR_def_extern_entry(__Compare___ll_backend__prog_rep__var_num_map_0_0)
MR_decl_static(ll_backend__prog_rep__IntroducedFrom__pred__goal_to_byte_list__211__1_2_0)
MR_decl_static(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
static const struct mercury_type_0 mercury_common_0[7] =
{
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
MR_INT_CTOR_ADDR
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
MR_CTOR1_ADDR(maybe, maybe),
MR_TAG_COMMON(0,0,0)
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
MR_CTOR1_ADDR(maybe, maybe),
MR_COMMON(0,5)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__cases_to_byte_list_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_layout__type_ctor_info_stack_layout_info_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,1),
MR_COMMON(1,1),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__prog_rep__cases_to_byte_list_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_COMMON(0,2),
MR_CTOR0_ADDR(ll_backend__stack_layout, stack_layout_info),
MR_CTOR0_ADDR(ll_backend__stack_layout, stack_layout_info)
}
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_3 mercury_common_3[3] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(fn__ll_backend__prog_rep__max_var_num_3_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_var_num_rep_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_2,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(mdbcomp__program_representation, var_num_rep),
MR_COMMON(0,1),
MR_COMMON(1,1),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(0,2),
MR_COMMON(0,2),
MR_CTOR0_ADDR(ll_backend__stack_layout, stack_layout_info),
MR_CTOR0_ADDR(ll_backend__stack_layout, stack_layout_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__prog_rep__vars_to_byte_list_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__prog_rep__type_ctor_info_prog_rep_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0_1;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__prog_rep__vars_to_byte_list_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ll_backend__prog_rep, prog_rep_info),
MR_COMMON(0,1),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ll_backend__prog_rep, prog_rep_info),
MR_COMMON(0,6),
MR_COMMON(0,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__goal_to_byte_list_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__goal_to_byte_list_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_conj_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__goal_to_byte_list_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
static const struct mercury_type_6 mercury_common_6[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__prog_rep__goal_to_byte_list_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__prog_rep__goal_to_byte_list_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, conj_type),
MR_CTOR0_ADDR(hlds__hlds_goal, conj_type)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__prog_rep__goal_to_byte_list_6_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__prog_rep, prog_rep_info),
MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ll_backend__prog_rep, prog_rep_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,1),
MR_COMMON(0,2)
}
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_9 mercury_vector_common_9_0[6] =
{
{
MR_string_const("V_", 2)
},
{
MR_string_const("HeadVar__", 9)
},
{
MR_string_const("TypeClassInfo_for_", 18)
},
{
MR_string_const("TypeInfo_", 9)
},
{
MR_string_const("TypeCtorInfo_", 13)
},
{
MR_string_const("STATE_VARIABLE_", 15)
},
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__prog_rep__enum_functor_desc_include_variable_table_0_0 = {
	"include_variable_table",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__prog_rep__enum_functor_desc_include_variable_table_0_1 = {
	"do_not_include_variable_table",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__prog_rep__enum_value_ordered_include_variable_table_0[] = {
	&mercury_data_ll_backend__prog_rep__enum_functor_desc_include_variable_table_0_0,
	&mercury_data_ll_backend__prog_rep__enum_functor_desc_include_variable_table_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__prog_rep__enum_name_ordered_include_variable_table_0[] = {
	&mercury_data_ll_backend__prog_rep__enum_functor_desc_include_variable_table_0_1,
	&mercury_data_ll_backend__prog_rep__enum_functor_desc_include_variable_table_0_0
};

const MR_Integer mercury_data_ll_backend__prog_rep__functor_number_map_include_variable_table_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__prog_rep__type_ctor_info_include_variable_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__prog_rep__include_variable_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__prog_rep__include_variable_table_0_0)),
	"ll_backend.prog_rep",
	"include_variable_table",
	{ (void *)mercury_data_ll_backend__prog_rep__enum_name_ordered_include_variable_table_0 },
	{ (void *)mercury_data_ll_backend__prog_rep__enum_value_ordered_include_variable_table_0 },
	2,
	4,
	mercury_data_ll_backend__prog_rep__functor_number_map_include_variable_table_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_var_num_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_var_num_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__prog_rep__field_types_prog_rep_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_var_num_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0
};

const MR_ConstString mercury_data_ll_backend__prog_rep__field_names_prog_rep_info_0_0[] = {
	"pri_filename",
	"pri_vartypes",
	"pri_var_num_map",
	"pri_var_num_rep",
	"pri_module_info"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0 = {
	"prog_rep_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__prog_rep__field_types_prog_rep_info_0_0,
	mercury_data_ll_backend__prog_rep__field_names_prog_rep_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0[] = {
	&mercury_data_ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__prog_rep__du_name_ordered_prog_rep_info_0[] = {
	&mercury_data_ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0
};

const MR_Integer mercury_data_ll_backend__prog_rep__functor_number_map_prog_rep_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__prog_rep__type_ctor_info_prog_rep_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__prog_rep__prog_rep_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__prog_rep__prog_rep_info_0_0)),
	"ll_backend.prog_rep",
	"prog_rep_info",
	{ (void *)mercury_data_ll_backend__prog_rep__du_name_ordered_prog_rep_info_0 },
	{ (void *)mercury_data_ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0 },
	1,
	4,
	mercury_data_ll_backend__prog_rep__functor_number_map_prog_rep_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__prog_rep__type_ctor_info_var_num_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__prog_rep__var_num_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__prog_rep__var_num_map_0_0)),
	"ll_backend.prog_rep",
	"var_num_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_1 = {
{
MR_FUNCTION,
"ll_backend.prog_rep",
"ll_backend.prog_rep",
"head_var_to_byte_list",
5,
0
},
"ll_backend.prog_rep",
"prog_rep.m",
598,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__cases_to_byte_list_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.prog_rep",
"ll_backend.prog_rep",
"cons_id_and_arity_to_byte_list",
4,
0
},
"ll_backend.prog_rep",
"prog_rep.m",
526,
"d2;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__goal_to_byte_list_6_0_3 = {
{
MR_PREDICATE,
"ll_backend.prog_rep",
"ll_backend.prog_rep",
"lhs_final_is_ground",
2,
0
},
"ll_backend.prog_rep",
"prog_rep.m",
248,
"d1;c7;d5;c3;d2;c3;?;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__goal_to_byte_list_6_0_2 = {
{
MR_PREDICATE,
"ll_backend.prog_rep",
"ll_backend.prog_rep",
"lambda_prog_rep_m_211",
2,
0
},
"ll_backend.prog_rep",
"prog_rep.m",
211,
"d1;c7;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__goal_to_byte_list_6_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"ll_backend.prog_rep",
"prog_rep.m",
375,
"d1;c7;d10;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0_1 = {
{
MR_FUNCTION,
"ll_backend.prog_rep",
"ll_backend.prog_rep",
"maybe_var_to_byte_list",
3,
0
},
"ll_backend.prog_rep",
"prog_rep.m",
578,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__prog_rep__vars_to_byte_list_2_0_1 = {
{
MR_FUNCTION,
"ll_backend.prog_rep",
"ll_backend.prog_rep",
"var_to_byte_list",
3,
0
},
"ll_backend.prog_rep",
"prog_rep.m",
559,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_2 = {
{
MR_PREDICATE,
"ll_backend.prog_rep",
"ll_backend.prog_rep",
"var_table_entry_bytelist",
9,
0
},
"ll_backend.prog_rep",
"prog_rep.m",
141,
"d1;c12;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_1 = {
{
MR_FUNCTION,
"ll_backend.prog_rep",
"ll_backend.prog_rep",
"max_var_num",
4,
0
},
"ll_backend.prog_rep",
"prog_rep.m",
132,
"d1;c8;"
};


MR_decl_entry(fn__map__foldl_3_0);
MR_decl_entry(mdbcomp__program_representation__var_num_rep_byte_2_0);
MR_decl_entry(backend_libs__bytecode_data__short_to_byte_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_layout__type_ctor_info_stack_layout_info_0;
MR_decl_entry(map__foldl3_8_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module0)
	MR_init_entry1(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__represent_var_table_as_bytecode_6_0);
	MR_init_label9(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0,5,6,7,8,10,13,14,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'represent_var_table_as_bytecode'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(6) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__map__foldl_3_0,
		ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_i5);
MR_def_label(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,255)) {
		MR_GOTO_LAB(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_i7);
MR_def_label(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
MR_def_label(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(mdbcomp__program_representation__var_num_rep_byte_2_0,
		ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_i8);
MR_def_label(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(backend_libs__bytecode_data__short_to_byte_list_2_0,
		ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_i14);
MR_def_label(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__prog_rep__var_table_entry_bytelist_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr3;
	MR_r5 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_layout, stack_layout_info);
	MR_r7 = MR_sv(2);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__foldl3_8_0,
		ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_i13);
MR_def_label(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(backend_libs__bytecode_data__short_to_byte_list_2_0,
		ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_i14);
MR_def_label(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_i16);
MR_def_label(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__represent_var_table_as_bytecode_6_0_i17);
MR_def_label(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module1)
	MR_init_entry1(fn__ll_backend__prog_rep__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__prog_rep__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__prog_rep__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_rep.m", 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_input_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module2)
	MR_init_entry1(ll_backend__prog_rep__filter_input_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__filter_input_args_4_0);
	MR_init_label5(ll_backend__prog_rep__filter_input_args_4_0,3,11,9,15,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_input_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__prog_rep__filter_input_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__prog_rep__filter_input_args_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__prog_rep__filter_input_args_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__prog_rep__filter_input_args_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__prog_rep__filter_input_args_4_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr4, 1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tfield(0, MR_tempr2, 0), 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tfield(0, MR_tempr2, 1), 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr4, 0);
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		ll_backend__prog_rep__filter_input_args_4_0_i11);
MR_def_label(ll_backend__prog_rep__filter_input_args_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__prog_rep__filter_input_args_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__prog_rep__filter_input_args_4_0,
		ll_backend__prog_rep__filter_input_args_4_0_i15);
MR_def_label(ll_backend__prog_rep__filter_input_args_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_np_localcall_lab(ll_backend__prog_rep__filter_input_args_4_0,
		ll_backend__prog_rep__filter_input_args_4_0_i15);
MR_def_label(ll_backend__prog_rep__filter_input_args_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__prog_rep__filter_input_args_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_rep.m", 10);
	MR_r2 = (MR_Word) MR_string_const("filter_input_args: mismatched lists", 35);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__stack_layout__lookup_string_in_table_4_0);
MR_decl_entry(backend_libs__bytecode_data__int32_to_byte_list_2_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module3)
	MR_init_entry1(ll_backend__prog_rep__string_to_byte_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__string_to_byte_list_4_0);
	MR_init_label2(ll_backend__prog_rep__string_to_byte_list_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_byte_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__prog_rep__string_to_byte_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__string_to_byte_list_4_0_i2);
MR_def_label(ll_backend__prog_rep__string_to_byte_list_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(backend_libs__bytecode_data__int32_to_byte_list_2_0,
		ll_backend__prog_rep__string_to_byte_list_4_0_i3);
MR_def_label(ll_backend__prog_rep__string_to_byte_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module4)
	MR_init_entry1(fn__ll_backend__prog_rep__length_to_byte_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__prog_rep__length_to_byte_list_1_0);
	MR_init_label1(fn__ll_backend__prog_rep__length_to_byte_list_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'length_to_byte_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__prog_rep__length_to_byte_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__ll_backend__prog_rep__length_to_byte_list_1_0_i2);
MR_def_label(fn__ll_backend__prog_rep__length_to_byte_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(backend_libs__bytecode_data__short_to_byte_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__list__condense_1_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module5)
	MR_init_entry1(fn__ll_backend__prog_rep__vars_to_byte_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__prog_rep__vars_to_byte_list_2_0);
	MR_init_label4(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,3,4,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'vars_to_byte_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__prog_rep__vars_to_byte_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__ll_backend__prog_rep__vars_to_byte_list_2_0_i3);
MR_def_label(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__bytecode_data__short_to_byte_list_2_0,
		fn__ll_backend__prog_rep__vars_to_byte_list_2_0_i4);
MR_def_label(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__prog_rep__var_to_byte_list_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__prog_rep__vars_to_byte_list_2_0_i7);
MR_def_label(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		fn__ll_backend__prog_rep__vars_to_byte_list_2_0_i8);
MR_def_label(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);
MR_decl_entry(hlds__instmap__instmap_changed_vars_5_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module6)
	MR_init_entry1(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0);
	MR_init_label10(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,2,3,4,6,7,8,9,11,12,13)
	MR_init_label4(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atomic_goal_info_to_byte_list'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i2);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i3);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) != 0)) {
		MR_GOTO_LAB(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i6);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i6);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i7);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i8);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_changed_vars_5_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i9);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i11);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i12);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(backend_libs__bytecode_data__int32_to_byte_list_2_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i13);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(backend_libs__bytecode_data__short_to_byte_list_2_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i14);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i15);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i16);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0_i17);
MR_def_label(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__char_to_string_1_0);
MR_decl_entry(fn__string__float_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module7)
	MR_init_entry1(ll_backend__prog_rep__cons_id_to_byte_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__cons_id_to_byte_list_4_0);
	MR_init_label10(ll_backend__prog_rep__cons_id_to_byte_list_4_0,25,7,9,22,29,3,4,6,10,11)
	MR_init_label10(ll_backend__prog_rep__cons_id_to_byte_list_4_0,13,15,17,18,19,20,21,23,24,30)
	MR_init_label1(ll_backend__prog_rep__cons_id_to_byte_list_4_0,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons_id_to_byte_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__prog_rep__cons_id_to_byte_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i25) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i22) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i29));
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\044typeclass_info_cell_constructor", 32);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{}", 2);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i20) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_to_byte_list_4_0_i10));
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\044base_typeclass_info_const", 26);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i19);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\044closure_cons", 13);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\044deep_profiling_proc_layout", 27);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__float_to_string_1_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i19);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044", 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i19);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i19);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i18);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i19);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\044table_io_decl", 14);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\044tabling_info_const", 19);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\044type_ctor_info_const", 21);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\044type_info_cell_constructor", 27);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(backend_libs__bytecode_data__int32_to_byte_list_2_0,
		ll_backend__prog_rep__cons_id_to_byte_list_4_0_i31);
MR_def_label(ll_backend__prog_rep__cons_id_to_byte_list_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module8)
	MR_init_entry1(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0);
	MR_init_label10(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,25,7,9,22,29,3,4,6,10,11)
	MR_init_label10(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,13,15,17,18,19,20,21,23,24,30)
	MR_init_label5(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,31,32,34,35,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons_id_and_arity_to_byte_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i25) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i22) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i29));
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044typeclass_info_cell_constructor", 32);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i9);
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("{}", 2);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i20) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i10));
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044base_typeclass_info_const", 26);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i19);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044closure_cons", 13);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044deep_profiling_proc_layout", 27);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__float_to_string_1_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i19);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\044", 1);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i19);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i19);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i18);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i19);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044table_io_decl", 14);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044tabling_info_const", 19);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044type_ctor_info_const", 21);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044type_info_cell_constructor", 27);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i30);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(backend_libs__bytecode_data__int32_to_byte_list_2_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i31);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__cons_id_maybe_arity_1_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i32);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i34);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(backend_libs__bytecode_data__short_to_byte_list_2_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i35);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(backend_libs__bytecode_data__short_to_byte_list_2_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i35);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0_i36);
MR_def_label(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module9)
	MR_init_entry1(fn__ll_backend__prog_rep__var_to_byte_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__prog_rep__var_to_byte_list_2_0);
	MR_init_label2(fn__ll_backend__prog_rep__var_to_byte_list_2_0,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_to_byte_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__prog_rep__var_to_byte_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tfield(0, MR_sv(1), 2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__ll_backend__prog_rep__var_to_byte_list_2_0_i4);
MR_def_label(fn__ll_backend__prog_rep__var_to_byte_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__prog_rep__var_to_byte_list_2_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__ll_backend__prog_rep__var_to_byte_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__bytecode_data__short_to_byte_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module10)
	MR_init_entry1(fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0);
	MR_init_label4(fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0,4,5,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_vars_to_byte_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0_i4);
MR_def_label(fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__bytecode_data__short_to_byte_list_2_0,
		fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0_i5);
MR_def_label(fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__prog_rep__maybe_var_to_byte_list_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0_i8);
MR_def_label(fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0_i9);
MR_def_label(fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module11)
	MR_init_entry1(fn__ll_backend__prog_rep__method_num_to_byte_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__prog_rep__method_num_to_byte_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'method_num_to_byte_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__prog_rep__method_num_to_byte_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(backend_libs__bytecode_data__short_to_byte_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module12)
	MR_init_entry1(fn__ll_backend__prog_rep__can_fail_to_byte_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__prog_rep__can_fail_to_byte_1_0);
	MR_init_label1(fn__ll_backend__prog_rep__can_fail_to_byte_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_fail_to_byte'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__prog_rep__can_fail_to_byte_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__prog_rep__can_fail_to_byte_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__prog_rep__can_fail_to_byte_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
MR_decl_entry(list__all_true_2_0);
MR_decl_entry(fn__mdbcomp__program_representation__goal_type_to_byte_1_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(libs__compiler_util__expect_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(fn__hlds__code_model__represent_determinism_1_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module13)
	MR_init_entry1(ll_backend__prog_rep__goal_to_byte_list_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__goal_to_byte_list_6_0);
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,147,148,161,162,165,167,169,170,171,172)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,173,163,175,176,178,179,180,181,182,185)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,186,189,191,192,194,195,196,197,198,187)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,200,202,203,204,205,206,150,151,153,154)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,155,156,220,210,212,213,214,215,216,158)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,159,94,95,96,97,98,99,100,101,104)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,106,107,108,109,103,112,114,115,116,117)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,111,119,30,31,66,67,69,70,71,72)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,48,49,51,52,53,54,55,56,58,59)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,60,62,63,64,33,38,40,41,42,43)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,44,34,45,225,3,6,7,8,10,11)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,13,15,16,17,18,20,21,23,24,25)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,27,28,78,79,80,81,82,83,84,86)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,87,89,90,91,121,122,123,124,126,127)
	MR_init_label10(ll_backend__prog_rep__goal_to_byte_list_6_0,130,131,132,133,135,136,137,138,141,142)
	MR_init_label8(ll_backend__prog_rep__goal_to_byte_list_6_0,143,144,145,146,2,226,227,229)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_to_byte_list'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__prog_rep__goal_to_byte_list_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i147) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i94) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i225));
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_r5, 3);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i148);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i161) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i185) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i150) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i220));
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__prog_rep__cons_id_to_byte_list_4_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i162);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__prog_rep__lhs_final_is_ground_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__all_true_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i165);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__prog_rep__goal_to_byte_list_6_0_i163);
	}
	MR_r1 = (MR_Integer) 6;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i167);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i169);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i170);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i171);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i172);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i173);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i131);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__prog_rep__filter_input_args_4_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i175);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i176);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i178);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i179);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i180);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i181);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i182);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i131);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__prog_rep__cons_id_to_byte_list_4_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i186);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i189);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__prog_rep__goal_to_byte_list_6_0_i187);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__prog_rep__filter_input_args_4_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i191);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i192);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i194);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__maybe_vars_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i195);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i196);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i197);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i198);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i131);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i200);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i202);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i203);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i204);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i205);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i206);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i131);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i151);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i153);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i154);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i155);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i156);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i216);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(ll_backend__prog_rep__goal_to_byte_list_6_0_i158);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Integer) 12;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i210);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i212);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i213);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i214);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i215);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i216);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(8) = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i226);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__this_file_0_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i159);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_to_byte_list: complicated_unify", 41);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i2);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i95);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tfield(0, MR_sv(3), 4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i96);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i97);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i98);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i99);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__prog_rep__string_to_byte_list_4_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i100);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__prog_rep__string_to_byte_list_4_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i101);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__prog_rep__goal_to_byte_list_6_0_i103);
	}
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Integer) 17;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i104);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i106);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i107);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i108);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i109);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i131);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(ll_backend__prog_rep__goal_to_byte_list_6_0_i111);
	}
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i112);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i114);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i115);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i116);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i117);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i131);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__this_file_0_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i119);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_to_byte_list: out_of_line_builtin", 43);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i2);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i31);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i66) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i48) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i58) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i33));
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_sv(2), 0);
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Integer) 14;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i67);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i69);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i70);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i71);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i72);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i44);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Integer) 15;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i49);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i51);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__method_num_to_byte_list_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i52);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i53);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i54);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i55);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i56);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i44);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(2, MR_sv(2), 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__prog_rep__string_to_byte_list_4_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i59);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Integer) 18;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i60);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i62);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i63);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i64);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i131);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__prog_rep__goal_to_byte_list_6_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(6);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__prog_rep__goal_to_byte_list_6_0_i34);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__prog_rep__goal_to_byte_list_6_0_i34);
	}
	MR_sv(2) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Integer) 11;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i38);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i40);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i41);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i42);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i43);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i44);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(8) = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i226);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__this_file_0_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i45);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_to_byte_list: cast arity != 2", 39);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i2);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r5, 0),
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i135) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i89) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i121) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__prog_rep__goal_to_byte_list_6_0_i132));
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_tfield(3, MR_r5, 4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i6);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__prog_rep__atomic_goal_info_to_byte_list_7_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i7);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 13;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i8);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__vars_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i10);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i11);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i131);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__prog_rep__IntroducedFrom__pred__goal_to_byte_list__211__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(3, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(7) = MR_r4;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__this_file_0_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i15);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("non-plain conjunction and declarative debugging", 47);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i16);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__prog_rep__conj_to_byte_list_6_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i17);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i18);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__length_to_byte_list_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i20);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i21);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i131);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(3, MR_r5, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__prog_rep__disj_to_byte_list_6_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i24);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i25);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__length_to_byte_list_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i27);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i28);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i131);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_r4;
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i79);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i80);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	}
	MR_np_localcall_lab(ll_backend__prog_rep__goal_to_byte_list_6_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i81);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__prog_rep__goal_to_byte_list_6_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i82);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__prog_rep__goal_to_byte_list_6_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i83);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i84);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i86);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i87);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i131);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_np_localcall_lab(ll_backend__prog_rep__goal_to_byte_list_6_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i90);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Integer) 4;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i91);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i131);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(0, MR_tfield(3, MR_tempr1, 2), 1);
	MR_sv(7) = MR_r4;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i122);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i123);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(4))) {
		MR_GOTO_LAB(ll_backend__prog_rep__goal_to_byte_list_6_0_i124);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(2) = (MR_Integer) 0;
	MR_r4 = MR_sv(7);
	MR_r1 = MR_sv(5);
	MR_np_localcall_lab(ll_backend__prog_rep__goal_to_byte_list_6_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i126);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(2) = (MR_Integer) 1;
	MR_r4 = MR_sv(7);
	MR_r1 = MR_sv(5);
	MR_np_localcall_lab(ll_backend__prog_rep__goal_to_byte_list_6_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i126);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Integer) 5;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i127);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i130);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i131);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i226);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__this_file_0_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i133);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_to_byte_list: unexpected shorthand", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i2);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__prog_rep__cases_to_byte_list_6_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i136);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__can_fail_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i137);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_type_to_byte_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i138);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_tempr4 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i141);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__length_to_byte_list_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i142);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i143);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i144);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i145);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i146);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i226);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__code_model__represent_determinism_1_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i227);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__goal_to_byte_list_6_0_i229);
MR_def_label(ll_backend__prog_rep__goal_to_byte_list_6_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module14)
	MR_init_entry1(ll_backend__prog_rep__conj_to_byte_list_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__conj_to_byte_list_6_0);
	MR_init_label6(ll_backend__prog_rep__conj_to_byte_list_6_0,16,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_to_byte_list'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__prog_rep__conj_to_byte_list_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__prog_rep__conj_to_byte_list_6_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__prog_rep__conj_to_byte_list_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__prog_rep__goal_to_byte_list_6_0,
		ll_backend__prog_rep__conj_to_byte_list_6_0_i4);
MR_def_label(ll_backend__prog_rep__conj_to_byte_list_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__prog_rep__conj_to_byte_list_6_0_i5);
MR_def_label(ll_backend__prog_rep__conj_to_byte_list_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		ll_backend__prog_rep__conj_to_byte_list_6_0_i6);
MR_def_label(ll_backend__prog_rep__conj_to_byte_list_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	}
	MR_np_localcall_lab(ll_backend__prog_rep__conj_to_byte_list_6_0,
		ll_backend__prog_rep__conj_to_byte_list_6_0_i7);
MR_def_label(ll_backend__prog_rep__conj_to_byte_list_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__conj_to_byte_list_6_0_i8);
MR_def_label(ll_backend__prog_rep__conj_to_byte_list_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module15)
	MR_init_entry1(ll_backend__prog_rep__disj_to_byte_list_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__disj_to_byte_list_6_0);
	MR_init_label4(ll_backend__prog_rep__disj_to_byte_list_6_0,14,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_to_byte_list'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__prog_rep__disj_to_byte_list_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__prog_rep__disj_to_byte_list_6_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__prog_rep__disj_to_byte_list_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__prog_rep__goal_to_byte_list_6_0,
		ll_backend__prog_rep__disj_to_byte_list_6_0_i4);
MR_def_label(ll_backend__prog_rep__disj_to_byte_list_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__prog_rep__disj_to_byte_list_6_0,
		ll_backend__prog_rep__disj_to_byte_list_6_0_i5);
MR_def_label(ll_backend__prog_rep__disj_to_byte_list_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__disj_to_byte_list_6_0_i6);
MR_def_label(ll_backend__prog_rep__disj_to_byte_list_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module16)
	MR_init_entry1(ll_backend__prog_rep__cases_to_byte_list_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__cases_to_byte_list_6_0);
	MR_init_label10(ll_backend__prog_rep__cases_to_byte_list_6_0,24,4,7,8,9,10,11,12,13,14)
	MR_init_label2(ll_backend__prog_rep__cases_to_byte_list_6_0,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_to_byte_list'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__prog_rep__cases_to_byte_list_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__prog_rep__cases_to_byte_list_6_0_i24);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__prog_rep__cases_to_byte_list_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(ll_backend__prog_rep__cons_id_and_arity_to_byte_list_4_0,
		ll_backend__prog_rep__cases_to_byte_list_6_0_i4);
MR_def_label(ll_backend__prog_rep__cases_to_byte_list_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_layout, stack_layout_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__prog_rep__cases_to_byte_list_6_0_i7);
MR_def_label(ll_backend__prog_rep__cases_to_byte_list_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		ll_backend__prog_rep__cases_to_byte_list_6_0_i8);
MR_def_label(ll_backend__prog_rep__cases_to_byte_list_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__prog_rep__cases_to_byte_list_6_0_i9);
MR_def_label(ll_backend__prog_rep__cases_to_byte_list_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__bytecode_data__short_to_byte_list_2_0,
		ll_backend__prog_rep__cases_to_byte_list_6_0_i10);
MR_def_label(ll_backend__prog_rep__cases_to_byte_list_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__prog_rep__goal_to_byte_list_6_0,
		ll_backend__prog_rep__cases_to_byte_list_6_0_i11);
MR_def_label(ll_backend__prog_rep__cases_to_byte_list_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__prog_rep__cases_to_byte_list_6_0,
		ll_backend__prog_rep__cases_to_byte_list_6_0_i12);
MR_def_label(ll_backend__prog_rep__cases_to_byte_list_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__cases_to_byte_list_6_0_i13);
MR_def_label(ll_backend__prog_rep__cases_to_byte_list_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__cases_to_byte_list_6_0_i14);
MR_def_label(ll_backend__prog_rep__cases_to_byte_list_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__cases_to_byte_list_6_0_i15);
MR_def_label(ll_backend__prog_rep__cases_to_byte_list_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__cases_to_byte_list_6_0_i16);
MR_def_label(ll_backend__prog_rep__cases_to_byte_list_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module17)
	MR_init_entry1(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__represent_proc_as_bytecodes_11_0);
	MR_init_label10(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,2,3,4,6,7,8,9,10,12,13)
	MR_init_label10(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,16,17,18,20,21,22,23,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'represent_proc_as_bytecodes'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__prog_rep__represent_proc_as_bytecodes_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_r9;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i2);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_file_2_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i3);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(ll_backend__prog_rep__represent_var_table_as_bytecode_6_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i4);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i6);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i7);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(backend_libs__bytecode_data__int32_to_byte_list_2_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i8);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__prog_rep__goal_to_byte_list_6_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i9);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__code_model__represent_determinism_1_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i10);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i12);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__bytecode_data__short_to_byte_list_2_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i13);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i16);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i17);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i18);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i20);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i21);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i22);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i23);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i24);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 4);
	MR_np_call_localret_ent(backend_libs__bytecode_data__int32_to_byte_list_2_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i25);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__prog_rep__represent_proc_as_bytecodes_11_0_i26);
MR_def_label(ll_backend__prog_rep__represent_proc_as_bytecodes_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module18)
	MR_init_entry1(fn__ll_backend__prog_rep__max_var_num_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__prog_rep__max_var_num_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_var_num'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__prog_rep__max_var_num_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module19)
	MR_init_entry1(ll_backend__prog_rep__var_table_entry_bytelist_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__var_table_entry_bytelist_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_table_entry_bytelist'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__prog_rep__var_table_entry_bytelist_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module20)
	MR_init_entry1(ll_backend__prog_rep__lhs_final_is_ground_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__lhs_final_is_ground_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lhs_final_is_ground'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__prog_rep__lhs_final_is_ground_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r2, 1), 0);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_ground_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module21)
	MR_init_entry1(fn__ll_backend__prog_rep__maybe_var_to_byte_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__prog_rep__maybe_var_to_byte_list_2_0);
	MR_init_label2(fn__ll_backend__prog_rep__maybe_var_to_byte_list_2_0,14,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_var_to_byte_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__prog_rep__maybe_var_to_byte_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__prog_rep__maybe_var_to_byte_list_2_0_i14);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_proceed();
MR_def_label(fn__ll_backend__prog_rep__maybe_var_to_byte_list_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		fn__ll_backend__prog_rep__maybe_var_to_byte_list_2_0_i5);
MR_def_label(fn__ll_backend__prog_rep__maybe_var_to_byte_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_search_var_3_0);
MR_decl_entry(mdbcomp__program_representation__inst_representation_2_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module22)
	MR_init_entry1(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__prog_rep__head_var_to_byte_list_4_0);
	MR_init_label10(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,2,3,6,4,8,10,9,15,13,19)
	MR_init_label5(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,21,20,26,24,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'head_var_to_byte_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__prog_rep__var_to_byte_list_2_0,
		fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i2);
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i3);
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i6);
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i4);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i8);
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i9);
	}
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(mdbcomp__program_representation__inst_representation_2_0,
		fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i19);
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i15);
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(mdbcomp__program_representation__inst_representation_2_0,
		fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i19);
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(mdbcomp__program_representation__inst_representation_2_0,
		fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i19);
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i21);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i20);
	}
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(mdbcomp__program_representation__inst_representation_2_0,
		fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i30);
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i26);
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(mdbcomp__program_representation__inst_representation_2_0,
		fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i30);
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(mdbcomp__program_representation__inst_representation_2_0,
		fn__ll_backend__prog_rep__head_var_to_byte_list_4_0_i30);
MR_def_label(fn__ll_backend__prog_rep__head_var_to_byte_list_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module23)
	MR_init_entry1(__Unify___ll_backend__prog_rep__include_variable_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__prog_rep__include_variable_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__prog_rep__include_variable_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module24)
	MR_init_entry1(__Compare___ll_backend__prog_rep__include_variable_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__prog_rep__include_variable_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__prog_rep__include_variable_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module25)
	MR_init_entry1(__Unify___ll_backend__prog_rep__prog_rep_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__prog_rep__prog_rep_info_0_0);
	MR_init_label4(__Unify___ll_backend__prog_rep__prog_rep_info_0_0,5,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__prog_rep__prog_rep_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__prog_rep__prog_rep_info_0_0_i12);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__prog_rep__prog_rep_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tfield(0, MR_tempr3, 1);
	MR_r4 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__prog_rep__prog_rep_info_0_0_i5);
MR_def_label(__Unify___ll_backend__prog_rep__prog_rep_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__prog_rep__prog_rep_info_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__prog_rep__prog_rep_info_0_0_i8);
MR_def_label(__Unify___ll_backend__prog_rep__prog_rep_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__prog_rep__prog_rep_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___ll_backend__prog_rep__prog_rep_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___hlds__hlds_module__module_info_0_0);
MR_def_label(__Unify___ll_backend__prog_rep__prog_rep_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__prog_rep__prog_rep_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module26)
	MR_init_entry1(__Compare___ll_backend__prog_rep__prog_rep_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__prog_rep__prog_rep_info_0_0);
	MR_init_label7(__Compare___ll_backend__prog_rep__prog_rep_info_0_0,3,2,5,10,16,20,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__prog_rep__prog_rep_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__prog_rep__prog_rep_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__prog_rep__prog_rep_info_0_0_i2);
MR_def_label(__Compare___ll_backend__prog_rep__prog_rep_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__prog_rep__prog_rep_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__prog_rep__prog_rep_info_0_0_i5);
MR_def_label(__Compare___ll_backend__prog_rep__prog_rep_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__prog_rep__prog_rep_info_0_0_i48);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__prog_rep__prog_rep_info_0_0_i10);
MR_def_label(__Compare___ll_backend__prog_rep__prog_rep_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__prog_rep__prog_rep_info_0_0_i48);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__prog_rep__prog_rep_info_0_0_i16);
MR_def_label(__Compare___ll_backend__prog_rep__prog_rep_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__prog_rep__prog_rep_info_0_0_i48);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__prog_rep__prog_rep_info_0_0_i20);
MR_def_label(__Compare___ll_backend__prog_rep__prog_rep_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__prog_rep__prog_rep_info_0_0_i48);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___hlds__hlds_module__module_info_0_0);
MR_def_label(__Compare___ll_backend__prog_rep__prog_rep_info_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module27)
	MR_init_entry1(__Unify___ll_backend__prog_rep__var_num_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__prog_rep__var_num_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__prog_rep__var_num_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module28)
	MR_init_entry1(__Compare___ll_backend__prog_rep__var_num_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__prog_rep__var_num_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__prog_rep__var_num_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__prog_rep_module29)
	MR_init_entry1(ll_backend__prog_rep__IntroducedFrom__pred__goal_to_byte_list__211__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__prog_rep__IntroducedFrom__pred__goal_to_byte_list__211__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__goal_to_byte_list__211__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__prog_rep__IntroducedFrom__pred__goal_to_byte_list__211__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__max_2_0);

MR_BEGIN_MODULE(ll_backend__prog_rep_module30)
	MR_init_entry1(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__max_var_num__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__int__max_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__prefix_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(ll_backend__prog_rep_module31)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0);
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,7,8,9,10,11,12,5,17,18,19)
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,16,20,14,22,3,24,26,27,28,29)
	MR_init_label1(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__var_table_entry_bytelist__[2]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp(13);
	MR_proceed();
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("TopCSD", 6)) != 0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("SiteNum", 7)) != 0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("MethodNum", 9)) != 0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("MiddleCSD", 9)) != 0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("ActivationPtr", 13)) != 0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("ProcStaticLayout", 16)) != 0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i14);
	MR_r6 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_9_0, 0);
	MR_sv(10) = (MR_Integer) 1;
	MR_sv(11) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(12) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i17);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_r6, 0);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i16);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(10);
	if (MR_INT_GE(MR_r3,5)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i18);
	}
	MR_sv(10) = ((MR_Integer) MR_sv(10) + (MR_Integer) 1);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i19);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(11);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(12);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_9_0, (MR_Integer) MR_r3);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(string__prefix_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i20);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i22);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i3);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(3);
	MR_sv(2) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i27);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__bytecode_data__short_to_byte_list_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i26);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__stack_layout__lookup_string_in_table_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i27);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(backend_libs__bytecode_data__int32_to_byte_list_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i28);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i29);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0_i30);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_114_111_103_95_114_101_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_116_97_98_108_101_95_101_110_116_114_121_95_98_121_116_101_108_105_115_116_95_95_91_50_93_95_48_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__prog_rep_maybe_bunch_0(void)
{
	ll_backend__prog_rep_module0();
	ll_backend__prog_rep_module1();
	ll_backend__prog_rep_module2();
	ll_backend__prog_rep_module3();
	ll_backend__prog_rep_module4();
	ll_backend__prog_rep_module5();
	ll_backend__prog_rep_module6();
	ll_backend__prog_rep_module7();
	ll_backend__prog_rep_module8();
	ll_backend__prog_rep_module9();
	ll_backend__prog_rep_module10();
	ll_backend__prog_rep_module11();
	ll_backend__prog_rep_module12();
	ll_backend__prog_rep_module13();
	ll_backend__prog_rep_module14();
	ll_backend__prog_rep_module15();
	ll_backend__prog_rep_module16();
	ll_backend__prog_rep_module17();
	ll_backend__prog_rep_module18();
	ll_backend__prog_rep_module19();
	ll_backend__prog_rep_module20();
	ll_backend__prog_rep_module21();
	ll_backend__prog_rep_module22();
	ll_backend__prog_rep_module23();
	ll_backend__prog_rep_module24();
	ll_backend__prog_rep_module25();
	ll_backend__prog_rep_module26();
	ll_backend__prog_rep_module27();
	ll_backend__prog_rep_module28();
	ll_backend__prog_rep_module29();
	ll_backend__prog_rep_module30();
	ll_backend__prog_rep_module31();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__prog_rep__init(void);
void mercury__ll_backend__prog_rep__init_type_tables(void);
void mercury__ll_backend__prog_rep__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__prog_rep__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__prog_rep__init_complexity_procs(void);
#endif

void mercury__ll_backend__prog_rep__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__prog_rep_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__prog_rep__type_ctor_info_include_variable_table_0,
		ll_backend__prog_rep__include_variable_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__prog_rep__type_ctor_info_prog_rep_info_0,
		ll_backend__prog_rep__prog_rep_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__prog_rep__type_ctor_info_var_num_map_0,
		ll_backend__prog_rep__var_num_map_0_0);
	mercury__ll_backend__prog_rep__init_debugger();
}

void mercury__ll_backend__prog_rep__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__prog_rep__type_ctor_info_include_variable_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__prog_rep__type_ctor_info_prog_rep_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__prog_rep__type_ctor_info_var_num_map_0);
	}
}


void mercury__ll_backend__prog_rep__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__prog_rep__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__prog_rep);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__prog_rep__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
